#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/attacker.hpp"
#include <cmath>
#include <chrono>
#include <exception>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include "attacker.hpp"
#include "goalie.hpp"
#include "offense.hpp"
#include "defense.hpp"
#include "role.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;

class Game : public rclcpp::Node, public Goalie, public Attacker, public Offense, public Defense, public Role
{
	private:
		  rclcpp::Publisher<message_info::msg::RobotCommands>::SharedPtr publisher;
  		rclcpp::Subscription<message_info::msg::VisionDetections>::SharedPtr subscriber;
  		rclcpp::Subscription<message_info::msg::VisionGeometry>::SharedPtr subscriber_geometry;
  		rclcpp::TimerBase::SharedPtr timer_;
  		message_info::msg::DetectionBall ball;
  		message_info::msg::VisionDetections::SharedPtr message;
  		message_info::msg::DetectionRobot robot;
  		message_info::msg::GoalInfo goal;
      message_info::msg::DetectionFrame frame;


  		void test();

  		void timer_callback();

  public:
  		 Game();
 };