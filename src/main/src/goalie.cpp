#include "goalie.hpp"
#include <cmath>

void Goalie::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, message_info::msg::RobotCommand & send_message){
	float degree=Calc::degree_atan2(ball.pose,robot.pose)-robot.pose.theta;
	float TH_goal_degree=Calc::degree_atan2(goal.their,robot.pose);

	send_message.vel_surge=0;
	send_message.vel_sway=std::sin(degree);
	send_message.vel_angular=robot.pose.theta * (-4);
}