#include <cmath>
#include <iostream>
#include "attacker.hpp"

message_info::msg::RobotCommand Attack::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal){

	wrap_degree = Calc::degree(ball.pose,robot.pose)-robot.pose.theta; //回り込み角度計算
	wrap_degree = Calc::degree_improve(wrap_degree); 
	wrap_degree = Calc::wrap(wrap_degree); //degree整える
	
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

message_info::msg::RobotCommand Attack::straight(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, geometry_msgs::msg::Pose2D target_position){

	target_robot_degree = Calc::degree(target_position, robot.pose) - robot.pose.theta;
	target_robot_degree = Calc::degree_improve(target_robot_degree);

	robot_to_ball_degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	robot_to_ball_degree = Calc::degree_improve(robot_to_ball_degree);

	ball_distance = Calc::distance(ball.pose, robot.pose);

	if(ball_distance <= 0.5){
		send_command.dribble_power = 0.5;
	}else{
		send_command.dribble_power = 0;
	}
	
	bool close = false;
	if(ball_distance <= 0.2){
		close = true;
	}

	bool find = false;
	if(robot_to_ball_degree *180/M_PI >= -20 && robot_to_ball_degree *180/M_PI <= 20){
		find = true;
	}
	//std::cout<<find<<std::endl;
	kick_pow_x = 0;
	direction = robot_to_ball_degree;

	if(close == true && find == true){
		direction = target_robot_degree;
		if(target_robot_degree *180/M_PI >= -5 && target_robot_degree *180/M_PI <= 5){
			kick_pow_x=0.8;
			//kick_flag = true;
		}
	}

	send_command.robot_id=robot.robot_id;
	send_command.vel_surge = std::cos(robot_to_ball_degree);
	send_command.vel_sway = std::sin(robot_to_ball_degree);
	send_command.kick_power = kick_pow_x;
	send_command.vel_angular = direction * 4;

	return send_command;
}

message_info::msg::RobotCommand Attack::pass(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, geometry_msgs::msg::Pose2D target_position, bool &kick_flag){

	target_robot_degree = Calc::degree(target_position, robot.pose) - robot.pose.theta;
	target_robot_degree = Calc::degree_improve(target_robot_degree);

	robot_to_ball_degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	robot_to_ball_degree = Calc::degree_improve(robot_to_ball_degree);

	ball_distance = Calc::distance(ball.pose, robot.pose);

	if(ball_distance <= 0.5){
		send_command.dribble_power = 0.5;
	}else{
		send_command.dribble_power = 0;
	}
	
	bool close = false;
	if(ball_distance <= 0.13){
		close = true;
	}

	bool find = false;
	if(robot_to_ball_degree *180/M_PI >= -5 && robot_to_ball_degree *180/M_PI <= 5){
		find = true;
	}
	//std::cout<<find<<std::endl;
	kick_pow_x = 0;
	direction = robot_to_ball_degree;

	if(close == true && find == true){
		direction = target_robot_degree;
		if(target_robot_degree *180/M_PI >= -5 && target_robot_degree *180/M_PI <= 5){
			kick_pow_x=0.7;
			kick_flag = true;
		}
	}

	send_command.robot_id=robot.robot_id;
	send_command.vel_surge = std::cos(robot_to_ball_degree);
	send_command.vel_sway = std::sin(robot_to_ball_degree);
	send_command.kick_power = kick_pow_x;
	send_command.vel_angular = direction * 4;

	return send_command;
}

message_info::msg::RobotCommand Attack::stop_position(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, float DISTANCE){
	
	geometry_msgs::msg::Pose2D DISTANCE_SPACE;
	DISTANCE_SPACE.x = std::cos(robot.pose.theta) * DISTANCE;
	DISTANCE_SPACE.y = std::sin(robot.pose.theta) * DISTANCE;

	geometry_msgs::msg::Pose2D target_position;
	target_position.x = ball.pose.x - DISTANCE_SPACE.x;
	target_position.y = ball.pose.y - DISTANCE_SPACE.y;

	goal_robot_degree = Calc::degree(goal.their, robot.pose) - robot.pose.theta;
	goal_robot_degree = Calc::degree_improve(goal_robot_degree);

	target_robot_distance = Calc::distance(target_position, robot.pose);
	target_robot_degree = Calc::degree(target_position, robot.pose) - robot.pose.theta;
	target_robot_degree = Calc::degree_improve(target_robot_degree);
	if(target_robot_distance >= 1)target_robot_distance=1;

	robot_to_ball_degree = Calc::degree(ball.pose, robot.pose) - robot.pose.theta;
	robot_to_ball_degree = Calc::degree_improve(robot_to_ball_degree);
	robot_ball_distance = Calc::distance(robot.pose, ball.pose);

	wrap_degree = Calc::wrap(target_robot_degree);
	wrap_degree = Calc::degree_improve(wrap_degree);
	
	robot_ball_distance = Calc::distance(ball.pose, robot.pose);
	if(robot_ball_distance >= 1)robot_ball_distance=1;

	bool find = false;
	if(robot_to_ball_degree <= 10 && robot_to_ball_degree >= -10){
		find = true;
	}

	bool close = false;
	if(ball_distance < 0.4){
		close = true;
	}

	send_command.robot_id = robot.robot_id;
	send_command.vel_surge = std::cos(wrap_degree) * target_robot_distance;
	send_command.vel_sway = std::sin(wrap_degree) * target_robot_distance;
	send_command.vel_angular = goal_robot_degree * 4;

	return send_command;
}

