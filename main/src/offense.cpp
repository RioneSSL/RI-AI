#include <cmath>
#include <iostream>
#include "offense.hpp"

message_info::msg::RobotCommand Offense::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::DetectionRobot attacker, message_info::msg::GoalInfo goal, bool &kick_flag){
	
	AT_robot_degree = Calc::degree(attacker.pose, robot.pose) - robot.pose.theta;
	AT_robot_degree = Calc::degree_improve(AT_robot_degree);
	//std::cout<<AT_robot_degree*180/3.14<<std::endl;

	robot_ball_distance = Calc::distance(ball.pose, robot.pose);
	if(robot_ball_distance<=1)kick_flag = false;

	geometry_msgs::msg::Pose2D target_position;
	target_position.x=2;
	target_position.y=2;

	target_robot_degree = Calc::degree(target_position, robot.pose) - robot.pose.theta;
	target_robot_degree = Calc::degree_improve(target_robot_degree);
	target_robot_distance = Calc::distance(target_position, robot.pose);
	if(target_robot_distance>=1)target_robot_distance=1;

	send_message.robot_id = robot.robot_id;
	send_message.vel_surge = std::cos(target_robot_degree) * target_robot_distance;
	send_message.vel_sway = std::sin(target_robot_degree) * target_robot_distance;
	send_message.vel_angular = AT_robot_degree * 4;

	return send_message;
}

message_info::msg::RobotCommand Offense::stop(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal){
	robot_ball_degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	robot_ball_degree = Calc::degree_improve(robot_ball_degree);
	robot_ball_distance = Calc::distance(ball.pose, robot.pose);

	send_message.robot_id = robot.robot_id;
	send_message.vel_surge = 0;
	send_message.vel_sway = 0;
	send_message.vel_angular = robot_ball_degree * 4;

	return send_message;
}

