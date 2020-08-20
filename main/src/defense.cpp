#include "defense.hpp"

message_info::msg::RobotCommand Defense::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal){
	
	robot_goal_degree = Calc::degree(goal.their, robot.pose) - robot.pose.theta;

	robot_ball_degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	robot_ball_degree = Calc::degree_improve(robot_ball_degree);

	geometry_msgs::msg::Pose2D target_position;
	target_position.x = -4;
	target_position.y = 0;

	target_robot_degree = Calc::degree(target_position, robot.pose) - robot.pose.theta;
	target_robot_degree = Calc::degree_improve(target_robot_degree);

	target_robot_distance = Calc::distance(target_position, robot.pose);
	if(target_robot_distance>=1)target_robot_distance=1;

	send_message.robot_id = robot.robot_id;
	send_message.vel_surge = std::cos(target_robot_degree) * target_robot_distance;
	send_message.vel_sway = std::sin(target_robot_degree) * target_robot_distance;
	send_message.vel_angular = -robot.pose.theta * 4;

	return send_message;
}

message_info::msg::RobotCommand Defense::stop(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal){
	robot_ball_degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	robot_ball_degree = Calc::degree_improve(robot_ball_degree);

	send_message.vel_surge = 0;
	send_message.vel_sway = 0;
	send_message.vel_angular = robot_ball_degree * 4;

	return send_message;
}