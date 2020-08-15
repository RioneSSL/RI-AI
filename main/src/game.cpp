#include <iostream>
#include <cmath>

#include <rclcpp/rclcpp.hpp>

#include "game.hpp"

using namespace std;
using namespace std::chrono_literals;

Game::Game() : Node("Masuo"){
	publisher = this->create_publisher<message_info::msg::RobotCommands>("robot_commands",10); //grsimへのメッセージ
    auto callback =
      [this](const message_info::msg::VisionDetections::SharedPtr vision_message) -> void //visionからのsubscriber
      {
        for(int i=0; i<4; i++){
          //RCLCPP_INFO(this->get_logger(),"%d",vision_message->frames[i].balls.size());
          if(vision_message->frames[i].balls.size()>0 &&vision_message->frames[i].balls.size()<10)
          {
            ball = vision_message->frames[i].balls[0]; //ボール座標
          }

          if(vision_message->frames[i].robots_blue.size() && vision_message->frames[i].robots_blue.size()<=16){
            for (auto robot : vision_message->frames[i].robots_blue) {
              frame.blue_robots[robot.robot_id]=robot;
            }
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
    timer_ = create_wall_timer(16ms, std::bind(&Game::timer_callback, this));
}


void Game::test(){
	  message_info::msg::RobotCommands send;
    
    send.commands.push_back(Attacker::main(ball,frame.blue_robots[0],goal)); //アタッカーメインプログラム
    send.commands.push_back(Offense::main(ball,frame.blue_robots[2],frame.blue_robots[0] ,goal));
    send.commands.push_back(Goalie::main(ball,frame.blue_robots[1],goal));
    send.commands.push_back(Defense::main(ball,frame.blue_robots[3],goal));

    this->publisher->publish(send); //grsimへパブリッシュ
    //RCLCPP_INFO(this->get_logger(),"%f",distance);
}

void Game::timer_callback(){
	Game::test();
}
