#ifndef ATTACKER_H
#define ATTACKER_H

#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/detection_ball.hpp"
#include "calculate.hpp"

class Attack : public Calc
{

public:	

	message_info::msg::RobotCommand main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal);
	message_info::msg::RobotCommand straight(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, geometry_msgs::msg::Pose2D target_position);
	message_info::msg::RobotCommand pass(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, geometry_msgs::msg::Pose2D target_position);
	message_info::msg::RobotCommand stop_position(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, float DISTANCE);

private:

	message_info::msg::RobotCommand send_command;
	float wrap_degree;
	float robot_to_goal_degree;
	float robot_to_ball_degree;
	float ball_distance;
	float kick_pow_x;
	bool kick_flag;
	float target_robot_degree;
	float target_robot_distance;
	float direction;
	float goal_robot_degree;
	float robot_ball_distance;

};

#endif 