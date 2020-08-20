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

class Home : public Calc{
public:
	void main(message_info::msg::DetectionBall ball, message_info::msg::DetectionFrame frame, message_info::msg::GoalInfo goal, message_info::msg::Role devide, message_info::msg::RobotCommands & message);

private:
	float goalie_target_degree;
	float goalie_target_distance;
	float offense_target_distance;
	float offense_target_degree;
	float defense_target_distance;
	float defense_target_degree;

	unsigned long count;

	geometry_msgs::msg::Pose2D target_position;

};