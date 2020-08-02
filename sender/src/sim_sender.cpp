#include <boost/asio.hpp>
#include <iostream>
#include <memory>
#include <string>

#include "message_info/msg/robot_commands.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "proto_info/grSim_Commands.pb.h"
#include "proto_info/grSim_Packet.pb.h"
#include "proto_info/grSim_Replacement.pb.h"


using std::placeholders::_1;

namespace asio = boost::asio;

class UDPSender
{
public:
  UDPSender(const std::string & ip, const int port)
  : socket_(io_service_, asio::ip::udp::endpoint(asio::ip::udp::v4(), 0))
  {
    asio::ip::udp::resolver resolver(io_service_);
    asio::ip::udp::resolver::query query(ip, std::to_string(port));
    endpoint_ = *resolver.resolve(query);
  }

  void send(const std::string & str)
  {
    socket_.send_to(asio::buffer(str), endpoint_);
  }

private:
  asio::io_service io_service_;
  asio::ip::udp::endpoint endpoint_;
  asio::ip::udp::socket socket_;
};

class SimSender : public rclcpp::Node
{
public:
  SimSender()
  : Node("Masuo")
  {
    this->declare_parameter("grsim_addr", "127.0.0.1");
    //this->declare_parameter("grsim_addr", "224.5.23.2");
    this->declare_parameter("grsim_port", 20011);
    auto host = this->get_parameter("grsim_addr").as_string();
    auto port = this->get_parameter("grsim_port").as_int();

    sub_commands_ = this->create_subscription<message_info::msg::RobotCommands>(
      "robot_commands", 10, std::bind(&SimSender::send_commands, this, std::placeholders::_1));

    udp_sender_ = std::make_shared<UDPSender>(host, port);
  }

private:
  void send_commands(const message_info::msg::RobotCommands::SharedPtr msg) const
  {
    const double MAX_KICK_SPEED = 8.0;  // m/s
    grSim_Commands * packet_commands = new grSim_Commands();

    packet_commands->set_timestamp(msg->header.stamp.sec);
    packet_commands->set_isteamyellow(msg->is_yellow);
    for (auto command : msg->commands) {
      grSim_Robot_Command * robot_command = packet_commands->add_robot_commands();
      robot_command->set_id(0);
      // 走行速度
      robot_command->set_veltangent(command.vel_surge);
      robot_command->set_velnormal(command.vel_sway);
      robot_command->set_velangular(command.vel_angular);
      // キック速度
      double kick_speed = command.kick_power * MAX_KICK_SPEED;
      robot_command->set_kickspeedx(kick_speed);

      // チップキック
      if (command.chip_enable) {
        robot_command->set_kickspeedz(kick_speed);
      } else {
        robot_command->set_kickspeedz(0);
      }

      // ドリブル
      robot_command->set_spinner(command.dribble_power > 0);

      // タイヤ個別に速度設定しない
      robot_command->set_wheelsspeed(false);
    }

    grSim_Packet packet;
    packet.set_allocated_commands(packet_commands);

    std::string output;
    packet.SerializeToString(&output);
    udp_sender_->send(output);
  }

  rclcpp::Subscription<message_info::msg::RobotCommands>::SharedPtr sub_commands_;
  std::shared_ptr<UDPSender> udp_sender_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SimSender>());
  rclcpp::shutdown();
  return 0;
}
