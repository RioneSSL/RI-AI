#include "role.hpp"

void Role::decision(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::GoalInfo goal, message_info::msg::Role & devide){
	geometry_msgs::msg::Pose2D attacker;
	devide.goalie = 0;

	find_ball_min(ball,frame,devide,attacker); //attacker decide
	//our_goal_min(ball,frame,devide,goal);
	offense_decide(frame,devide,attacker,goal);
	defense_decide(frame,devide,goal);
	//std::cout<<devide.attacker<<std::endl;
	//std::cout<<devide.defense[0] << " " <<devide.defense[1] <<std::endl;

}

void Role::find_ball_min(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, geometry_msgs::msg::Pose2D & attacker){
	count = 0;
	distance_ball_min = 0;
	devide.attacker = -1;
	for(auto robot : frame.blue_robots){
		if(robot.robot_id != devide.goalie){
			count = count + 1;
			distance_ball = Calc::distance(ball.pose, robot.pose);
			if(distance_ball_min > distance_ball or count ==1){
				distance_ball_min = distance_ball;
				attacker.x = robot.pose.x;
				attacker.y = robot.pose.y;
				devide.attacker = robot.robot_id;
			}
		}
	}
}

void Role::our_goal_min(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, message_info::msg::GoalInfo goal){
	count = 0;
	distance_our_goal_min = 0;

	for(auto robot : frame.blue_robots){
		count = count + 1;
		distance_our_goal = Calc::distance(robot.pose, goal.our);
		if(distance_our_goal_min > distance_our_goal or count ==1){
			distance_our_goal_min = distance_our_goal;
			devide.goalie = robot.robot_id;
		}
	}
}

void Role::defense_decide(message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, message_info::msg::GoalInfo goal){
	defense_temp = 0;
	for(int i = 0; i<4; i++){
		devide.defense[i] = -1;
	}
	for(int i=0; i<1; i++){
		count = 0;
		distance_goalie_min = 0;
		defense_temp = -1;
		for(auto robot : frame.blue_robots){
			if(robot.robot_id != devide.goalie && robot.robot_id != devide.attacker && Calc::list_search(devide.defense, robot.robot_id) == false && Calc::list_search(devide.offense, robot.robot_id) == false){
				count = count +1;
				distance_goalie = Calc::distance(robot.pose, goal.our);
				if(distance_goalie_min > distance_goalie or count ==1){
					distance_goalie_min = distance_goalie;
					defense_temp = robot.robot_id;
				}
			}
		}
		if(defense_temp != 0 && defense_temp != -1){
			devide.defense[i] = defense_temp;
		}
	//devide.defense = std::sort(devide.defense);
	//std::sort(std::begin(devide.defense), std::end(devide.defense));
	}
}

void Role::offense_decide(message_info::msg::DetectionFrame frame,message_info::msg::Role & devide, geometry_msgs::msg::Pose2D attacker, message_info::msg::GoalInfo goal){
	offense_temp = 0; 
	for(int i = 0; i<4; i++){
		devide.offense[i] = -1;
	}
	for(int i=0; i<1; i++){
		count = 0;
		distance_attacker_min = 0;
		offense_temp = -1;
		for(auto robot : frame.blue_robots){
			if(robot.robot_id != devide.goalie && robot.robot_id != devide.attacker && Calc::list_search(devide.offense, robot.robot_id) == false){
				count = count + 1;
				distance_attacker = Calc::distance(robot.pose, goal.their);
				if(distance_attacker_min > distance_attacker or count ==1){
					distance_attacker_min = distance_attacker;
					offense_temp = robot.robot_id;
				}
			}
		}
		if(offense_temp != 0 && offense_temp != -1){
			devide.offense[i] = offense_temp;
		}
	}
	//std::sort(std::begin(devide.offense), std::end(devide.offense));
}

