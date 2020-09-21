#include "goalie.hpp"
#include <cmath>

message_info::msg::RobotCommand Goalie::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal){
	message_info::msg::RobotCommand send_message;

	float j;
	//がんばってね	

	//ball.pose.x ボールのx座標
	//robot.pose.x robotのx座標
	//Calc::degree(object1.pose, object2.pose); -> degree = Calc::degree(ball.pose, robot.pose)
	//goalの情報はGoalInfo.msg　に詳細あり
	//goalの幅　-> goal.goal_width

	
	send_message.robot_id=robot.robot_id;
	send_message.vel_surge=std::cos(target_robot_degree) * target_robot_distance;
	send_message.vel_sway=std::sin(target_robot_degree) * target_robot_distance;
	send_message.vel_angular=robot.pose.theta * (-4);

	return send_message;
}

message_info::msg::RobotCommand Goalie::stop(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo){
	message_info::msg::RobotCommand send_message;

	float degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	degree = Calc::degree_improve(degree);

	send_message.robot_id = robot.robot_id;
	send_message.vel_surge = 0;
	send_message.vel_sway = 0;
	send_message.vel_angular = degree * 4;

	return send_message;
}