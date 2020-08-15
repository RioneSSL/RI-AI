#include <iostream>

#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/robot_command.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/detection_ball.hpp"
#include "message_info/msg/detection_robot.hpp"
#include "calculate.hpp"

class Offense : public Calc{

public:

	message_info::msg::RobotCommand main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::DetectionRobot attacker, message_info::msg::GoalInfo goal);

private:

	message_info::msg::RobotCommand send_message;

	float AT_robot_degree;
	float target_robot_degree;
	float target_robot_distance;


};