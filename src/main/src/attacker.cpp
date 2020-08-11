#include <cmath>
#include <iostream>
#include "attacker.hpp"

void Attacker::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, message_info::msg::RobotCommand & send_command){
	float degree = (Calc::degree_atan2(ball.pose,robot.pose)-robot.pose.theta)*180/M_PI;
	degree = Calc::wrap_calc(degree);
	float goal_degree=std::atan2(goal.their.y-robot.pose.y, goal.their.x-robot.pose.x) - robot.pose.theta;
	send_command.vel_surge=std::cos(degree/180*M_PI);
	send_command.vel_sway=std::sin(degree/180*M_PI);
	send_command.vel_angular=goal_degree * 4;
}

