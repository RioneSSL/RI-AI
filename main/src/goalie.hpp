#include <rclcpp/rclcpp.hpp>
#include "calculate.hpp"

//#include "game.hpp"
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"

class Goalie : public Calc{
public:

	message_info::msg::RobotCommand main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal);
	message_info::msg::RobotCommand stop(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal);

private:
	float target_robot_degree;
	float target_robot_distance;
};