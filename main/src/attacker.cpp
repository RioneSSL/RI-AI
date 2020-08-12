#include <cmath>
#include <iostream>
#include "attacker.hpp"

void Attacker::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, message_info::msg::RobotCommand & send_command){
	wrap_degree = Calc::degree_atan2(ball.pose,robot.pose)-robot.pose.theta;
	wrap_degree = Calc::wrap(wrap_degree);
	
	robot_to_goal_degree=std::atan2(goal.their.y-robot.pose.y, goal.their.x-robot.pose.x) - robot.pose.theta;
	
	ball_distance = Calc::distance(robot.pose, ball.pose); 

	bool close = false;
	if(ball_distance <= 0.2){
		close = true;
	}

	bool find = false;
	if(robot_to_goal_degree >= -20/180*M_PI && robot_to_goal_degree <= 20/180*M_PI){
		find = true;
	}

	if(close == true && find == true){
		send_command.kick_power = 1.0;
	}


	send_command.vel_surge = std::cos(wrap_degree);
	send_command.vel_sway = std::sin(wrap_degree);
	send_command.vel_angular = robot_to_goal_degree * 4;
}

