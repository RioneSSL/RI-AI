// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/GoalInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__BUILDER_HPP_

#include "message_info/msg/detail/goal_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_GoalInfo_our
{
public:
  explicit Init_GoalInfo_our(::message_info::msg::GoalInfo & msg)
  : msg_(msg)
  {}
  ::message_info::msg::GoalInfo our(::message_info::msg::GoalInfo::_our_type arg)
  {
    msg_.our = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

class Init_GoalInfo_their
{
public:
  Init_GoalInfo_their()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalInfo_our their(::message_info::msg::GoalInfo::_their_type arg)
  {
    msg_.their = std::move(arg);
    return Init_GoalInfo_our(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::GoalInfo>()
{
  return message_info::msg::builder::Init_GoalInfo_their();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__BUILDER_HPP_
