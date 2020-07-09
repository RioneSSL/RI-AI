#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include <chrono>

int main(int argc, char * argv[]){
  using namespace std::chrono_literals;

  rclcpp::init(argc, argv);

  auto node = rclcpp::Node::make_shared("minimal_publisher");
  auto publisher = node->create_publisher<message_info::msg::RobotCommands>("robot_commands",10);
  
  auto message_2 = std::make_shared<message_info::msg::RobotCommands>();

  rclcpp::WallRate loop_rate(1s);

  while(rclcpp::ok()){
    message_info::msg::RobotCommand message;
    message_info::msg::RobotCommands robot_commands;
    message.robot_id = 0;
    message.vel_surge=100;
    message.vel_sway=100;
    robot_commands.commands.push_back(message);
    RCLCPP_INFO(node->get_logger(),"Pub:%s",0);
    publisher->publish(robot_commands);
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}

