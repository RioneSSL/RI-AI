#include "homeposition.hpp"

void Home::main(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::GoalInfo goal, message_info::msg::Role devide, message_info::msg::RobotCommands & message){

	target_position.x = -goal.field_length/2;

	goalie_target_degree = Calc::degree(target_position, frame.blue_robots[devide.goalie].pose) - frame.blue_robots[devide.goalie].pose.theta;
	goalie_target_degree = Calc::degree_improve(goalie_target_degree);
	goalie_target_distance = Calc::distance(target_position, frame.blue_robots[devide.goalie].pose);

	if(goalie_target_distance >= 1)goalie_target_distance=1;

	message_info::msg::RobotCommand send_command;
	send_command.robot_id = frame.blue_robots[devide.goalie].robot_id;
	send_command.vel_surge = std::cos(goalie_target_degree) * goalie_target_distance;
	send_command.vel_sway = std::sin(goalie_target_degree) * goalie_target_distance;
	send_command.vel_angular = -frame.blue_robots[devide.goalie].pose.theta * 4;

	message.commands.push_back(send_command);


	count = -1;
	for(int offense_id = 0; offense_id < 4; offense_id++){
		//std::cout<<devide.offense[offense_id]<<std::endl;
		count = count + 1;
		std::vector<float> num;
		Calc::offense_position(devide.offense, goal.field_width, num);
		//std::cout<<num.size()<<std::endl;
		if(num.size() > count){
			target_position.x = -2;
			target_position.y = num[count];
		}
		offense_target_distance = Calc::distance(frame.blue_robots[devide.offense[offense_id]].pose, target_position);
		offense_target_degree = Calc::degree(target_position, frame.blue_robots[devide.offense[offense_id]].pose) - frame.blue_robots[offense_id].pose.theta;
		offense_target_degree = Calc::degree_improve(offense_target_degree);
		if(offense_target_distance >= 1)offense_target_distance = 1;

		message_info::msg::RobotCommand send_command;
		send_command.robot_id = devide.offense[offense_id];
		send_command.vel_surge = std::cos(offense_target_degree) * offense_target_distance;
		send_command.vel_sway = std::sin(offense_target_degree) * offense_target_distance;
		send_command.vel_angular = -frame.blue_robots[devide.offense[offense_id]].pose.theta * 4;

		message.commands.push_back(send_command);
	}

	count = -1;
	for(int defense_id = 0; defense_id < 4; defense_id++){
		count = count + 1;
		std::vector<float> num;
		Calc::defense_position(devide.defense, goal.field_width, num);
		if(num.size() > count){
			target_position.x = -4.5;
			target_position.y = num[count];
		}
		defense_target_distance = Calc::distance(target_position, frame.blue_robots[devide.defense[defense_id]].pose);
		defense_target_degree = Calc::degree(target_position, frame.blue_robots[devide.defense[defense_id]].pose) - frame.blue_robots[devide.defense[defense_id]].pose.theta;
		defense_target_degree = Calc::degree_improve(defense_target_degree);
		if(defense_target_distance >= 1)defense_target_distance = 1;

		message_info::msg::RobotCommand send_command;
		send_command.robot_id = devide.defense[defense_id];
		send_command.vel_surge = std::cos(defense_target_degree) * defense_target_distance;
		send_command.vel_sway = std::sin(defense_target_degree) * defense_target_distance;
		send_command.vel_angular = -frame.blue_robots[devide.defense[defense_id]].pose.theta * 4;
	
		message.commands.push_back(send_command);
	}
}