// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/DetectionBall.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_BALL__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_BALL__BUILDER_HPP_

#include "message_info/msg/detail/detection_ball__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_DetectionBall_pose
{
public:
  Init_DetectionBall_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message_info::msg::DetectionBall pose(::message_info::msg::DetectionBall::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::DetectionBall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::DetectionBall>()
{
  return message_info::msg::builder::Init_DetectionBall_pose();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_BALL__BUILDER_HPP_
