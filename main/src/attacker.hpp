#include <rclcpp/rclcpp.hpp>
#include "message_info/msg/robot_commands.hpp"
#include "message_info/msg/vision_detections.hpp"
#include "message_info/msg/vision_geometry.hpp"
#include "message_info/msg/detection_frame.hpp"
#include "message_info/msg/ball_info.hpp"
#include "message_info/msg/goal_info.hpp"
#include "message_info/msg/detection_ball.hpp"
#include "calculate.hpp"

class Attacker : public Calc
{
public:
	void main(message_info::msg::DetectionBall ball, message_info::msg::DetectionRobot robot, message_info::msg::GoalInfo goal, message_info::msg::RobotCommand & send_command);	
private:

};