#include <iostream>
#include <cmath>

#include <rclcpp/rclcpp.hpp>

#include "game.hpp"

using namespace std;
using namespace std::chrono_literals;

Game::Game() : Node("Masuo"){ //setting
  publisher = this->create_publisher<message_info::msg::RobotCommands>("robot_commands",10); //grsimへのpublisher
    auto callback =
      [this](const message_info::msg::VisionDetections::SharedPtr vision_message) -> void //visionからのsubscriber
      {
        for(int i=0; i<4; i++){
          if(vision_message->frames[i].balls.size()>0 &&vision_message->frames[i].balls.size()<10)
          {
            ball = vision_message->frames[i].balls[0]; //ボール座標
          }
          /*message_info::msg::DetectionRobot temp;
          for(int i = 0; i<8; i++){
            frame.blue_robots[i] = temp;
          }*/
          if(vision_message->frames[i].robots_blue.size() && vision_message->frames[i].robots_blue.size()<=16){ //robot information
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
        goal.their.x=field_length/2; // right goal position
        goal.their.y=0;
        goal.our.x=field_length/(-2); //left goal position
        goal.our.y=0;
        goal.field_width = field_width;
        goal.field_length = field_length;
        goal.goal_width = geometry_message->goal_width;
        goal.goal_depth = geometry_message->goal_depth;
      };

    auto callback_referee =
      [this](const message_info::msg::Referee::SharedPtr referee_message) -> void //visionからのsubscriber
      {
        referee.command = referee_message->command;
      };

    subscriber = this->create_subscription<message_info::msg::VisionDetections>("vision_detections",10,callback);  // ball, robot information
    subscriber_geometry = this->create_subscription<message_info::msg::VisionGeometry>("vision_geometry",10,callback_geometry); //field information
    subscriber_referee = this->create_subscription<message_info::msg::Referee>("referee_info",10,callback_referee);
    timer_ = create_wall_timer(16ms, std::bind(&Game::timer_callback, this)); //16ms周期でtimer_callbackが実行される
}


void Game::test(){
    message_info::msg::RobotCommands send;
    message_info::msg::Role devide;

    geometry_msgs::msg::Pose2D target_position;
    target_position.x = 2;
    target_position.y = 2;

    Referee::translate(referee, ball);
    Role::decision(ball,frame,goal,devide); //role decide

    //cout<<"AT="<<devide.attacker<<"  GL="<<devide.goalie<<"  OF="<<devide.offense[0]<<"  DF="<<devide.defense[0]<<endl;
    referee.info="FREE";
    if(referee.info == "HALT"){

    }else if(referee.play == true or referee.info == "NORMAL_START"){

      send.commands.push_back(Attack::pass(ball,frame.blue_robots[devide.attacker],goal,target_position,kick_flag)); //アタッカーメインプログラム
      send.commands.push_back(Offense::main(ball,frame.blue_robots[devide.offense[0]],frame.blue_robots[devide.attacker] ,goal,kick_flag)); 
      send.commands.push_back(Goalie::main(ball,frame.blue_robots[devide.goalie],goal));
      send.commands.push_back(Defense::main(ball,frame.blue_robots[devide.defense[0]],goal));
    
    }else if(referee.info == "STOP"){

      send.commands.push_back(Attack::stop_position(ball,frame.blue_robots[devide.attacker],goal,0.5));
      for(int offense_id = 0; offense_id < 10; offense_id++){
        send.commands.push_back(Offense::stop(ball,frame.blue_robots[devide.offense[offense_id]],goal));
      }
      for(int defense_id = 0; defense_id < 10; defense_id++){
        send.commands.push_back(Defense::stop(ball,frame.blue_robots[devide.defense[defense_id]],goal));
      }
      send.commands.push_back(Goalie::stop(ball,frame.blue_robots[devide.goalie],goal));

    }else if(referee.info == "FORCE_START"){

    }else if(referee.info == "OUR_KICKOFF_START"){

      send.commands.push_back(Attack::stop_position(ball,frame.blue_robots[devide.attacker],goal,0.5)); 
      Home::main(ball,frame,goal,devide,send);

    }else if(referee.info == "OUR_PANALTY_PRE"){

    }else if(referee.info == "THEIR_PENALTY_PRE"){

    }else if(referee.info == "OUR_DIRECT"){

    }else if(referee.info == "THEIR_DIRECT"){

    }else if(referee.info == "OUR_INDRIRECT"){

    }else if(referee.info == "THEIR_INDIRECT"){

    }else if(referee.info == "FREE"){
      
    }
    
    send.commands.push_back(Goalie::main(ball,frame.blue_robots[0],goal));
    send.commands.push_back(Attacker::main(ball,frame.blue_robots[1],goal));
    this->publisher->publish(send); //grsimへパブリッシュ
}

void Game::timer_callback(){
  Game::test(); 
}