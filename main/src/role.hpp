#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include "calculate.hpp"

#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/detection_ball.hpp"
#include "message_info/msg/role.hpp"
#include "message_info/msg/attacker.hpp"
#include "message_info/msg/goalie.hpp"

class Role : public Calc{
public:
	void decision(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::GoalInfo goal,  message_info::msg::Role & devide);
	void find_ball_min(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, geometry_msgs::msg::Pose2D & attacker);
	void our_goal_min(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, message_info::msg::GoalInfo goal);
	void defense_decide(message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, message_info::msg::GoalInfo goal);
	void offense_decide(message_info::msg::DetectionFrame frame, message_info::msg::Role & devide, geometry_msgs::msg::Pose2D attacker, message_info::msg::GoalInfo goal);
private:

	float count;
	float distance_ball_min;
	float distance_ball;
	float distance_our_goal_min;
	float distance_our_goal;
	float distance_goalie_min;
	float defense_temp;
	float distance_goalie;
	float offense_temp;
	float distance_attacker_min;
	float distance_attacker;
};