// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/DetectionRobot.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_ROBOT__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_ROBOT__BUILDER_HPP_

#include "message_info/msg/detail/detection_robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_DetectionRobot_robot_id
{
public:
  explicit Init_DetectionRobot_robot_id(::message_info::msg::DetectionRobot & msg)
  : msg_(msg)
  {}
  ::message_info::msg::DetectionRobot robot_id(::message_info::msg::DetectionRobot::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::DetectionRobot msg_;
};

class Init_DetectionRobot_pose
{
public:
  Init_DetectionRobot_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionRobot_robot_id pose(::message_info::msg::DetectionRobot::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_DetectionRobot_robot_id(msg_);
  }

private:
  ::message_info::msg::DetectionRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::DetectionRobot>()
{
  return message_info::msg::builder::Init_DetectionRobot_pose();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_ROBOT__BUILDER_HPP_
