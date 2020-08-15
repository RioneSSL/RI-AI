#include "calculate.hpp"
#include <iostream>
#include <cmath>

#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/detection_ball.hpp"

class Defense : public Calc{

public:
	message_info::msg::RobotCommand main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal);

private:
	message_info::msg::RobotCommand send_message;

	float target_robot_degree;
	float target_robot_distance;
	float robot_ball_degree;
	float robot_ball_distance;
	float robot_goal_degree;

};