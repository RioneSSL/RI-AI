#ifndef CALCULATE_H
#define CALCULATE_H

#include <rclcpp/rclcpp.hpp>
//#include "game.hpp"
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/detection_ball.hpp"

class Calc{
public:

	float degree_improve(float degree);

	float degree(geometry_msgs::msg::Pose2D object1, geometry_msgs::msg::Pose2D object2);

	float wrap(float degree);

	float distance(geometry_msgs::msg::Pose2D object1, geometry_msgs::msg::Pose2D object2);

private:

};

#endif