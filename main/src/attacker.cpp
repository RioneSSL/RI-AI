#include <cmath>
#include <iostream>
#include "attacker.hpp"

message_info::msg::RobotCommand Attacker::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal){

	wrap_degree = Calc::degree(ball.pose,robot.pose)-robot.pose.theta;
	wrap_degree = Calc::wrap(wrap_degree);
	
	robot_to_goal_degree=std::atan2(goal.their.y-robot.pose.y, goal.their.x-robot.pose.x) - robot.pose.theta;
	
	robot_to_ball_degree = Calc::degree(ball.pose,robot.pose) - robot.pose.theta;
	robot_to_ball_degree = robot_to_ball_degree * 180 / M_PI;

	ball_distance = Calc::distance(robot.pose, ball.pose); 

	bool close = false;
	if(ball_distance <= 0.2){
		close = true;
	}

	bool find = false;
	if(robot_to_ball_degree >= -20 && robot_to_goal_degree <= 20){
		find = true;
	}

	if(close == true && find == true){
		send_command.kick_power = 0.8;
	}

	send_command.robot_id=robot.robot_id;
	send_command.vel_surge = std::cos(wrap_degree);
	send_command.vel_sway = std::sin(wrap_degree);
	send_command.vel_angular = robot_to_goal_degree * 4;

	return send_command;
}

