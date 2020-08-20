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
#include "message_info/msg/referee.hpp"

class Referee : public Calc{
public:
	void translate(message_info::msg::Referee & referee, message_info::msg::DetectionBall ball);

private:
	geometry_msgs::msg::Pose2D set_position;

	int count;

	float distance;
};