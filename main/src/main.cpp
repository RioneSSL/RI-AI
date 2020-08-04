#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include <cmath>
#include <chrono>
#include <exception>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include "calculate.cpp"
#include "attacker.cpp"
#include "goalie.cpp"

using std::placeholders::_1;
using namespace std::chrono_literals;


class Main : public rclcpp::Node
{
public:
  Main()
  :Node("Test")
  {
    publisher = this->create_publisher<message_info::msg::RobotCommands>("robot_commands",10); //grsimへのメッセージ
    auto callback =
      [this](const message_info::msg::VisionDetections::SharedPtr vision_message) -> void //visionからのsubscriber
      {
        for(int i=0; i<4; i++){
          if(vision_message->frames[i].balls.size())
          {
            ball = vision_message->frames[i].balls[0]; //ボール座標
          }
          if(vision_message->frames[i].robots_blue.size())
          {
            robot=vision_message->frames[i].robots_blue[0]; //  ロボット座標
          }
        }
      };
    auto callback_geometry =
      [this](const message_info::msg::VisionGeometry::SharedPtr geometry_message) -> void //visionからのsubscriber
      {
         float field_length = geometry_message->field_length;
         float field_width = geometry_message->field_width;
         goal.their.x=field_length/2;
         goal.their.y=0;
         goal.our.x=field_length/(-2);
         goal.our.y=0;
         
      };
    subscriber = this->create_subscription<message_info::msg::VisionDetections>("vision_detections",10,callback);
    subscriber_geometry = this->create_subscription<message_info::msg::VisionGeometry>("vision_geometry",10,callback_geometry);
    timer_ = create_wall_timer(16ms, std::bind(&Main::timer_callback, this));
  }

private:
  void timer_callback()
  {
    test();
  }

  void test()
  {
    message_info::msg::RobotCommands send_info;
    message_info::msg::RobotCommand command;
    attack_main(ball,robot,goal,command); //アタッカーメインプログラム
    goalie_main(ball,robot,goal,command);
    send_info.commands.push_back(command);
    this->publisher->publish(send_info); //grsimへパブリッシュx
  }

  rclcpp::Publisher<message_info::msg::RobotCommands>::SharedPtr publisher;
  rclcpp::Subscription<message_info::msg::VisionDetections>::SharedPtr subscriber;
  rclcpp::Subscription<message_info::msg::VisionGeometry>::SharedPtr subscriber_geometry;
  rclcpp::TimerBase::SharedPtr timer_;
  message_info::msg::DetectionBall ball;
  message_info::msg::VisionDetections::SharedPtr message;
  message_info::msg::DetectionRobot robot;
  message_info::msg::GoalInfo goal;
  
};


int main(int argc, char * argv[]){
  rclcpp::init(argc, argv); 
  rclcpp::spin(std::make_shared<Main>());
  rclcpp::shutdown();
  return 0;
}

