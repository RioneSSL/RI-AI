// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_

#include "message_info/msg/detail/vision_geometry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_VisionGeometry_field_arcs
{
public:
  explicit Init_VisionGeometry_field_arcs(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  ::message_info::msg::VisionGeometry field_arcs(::message_info::msg::VisionGeometry::_field_arcs_type arg)
  {
    msg_.field_arcs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_lines
{
public:
  explicit Init_VisionGeometry_field_lines(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_field_arcs field_lines(::message_info::msg::VisionGeometry::_field_lines_type arg)
  {
    msg_.field_lines = std::move(arg);
    return Init_VisionGeometry_field_arcs(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_boundary_width
{
public:
  explicit Init_VisionGeometry_boundary_width(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_field_lines boundary_width(::message_info::msg::VisionGeometry::_boundary_width_type arg)
  {
    msg_.boundary_width = std::move(arg);
    return Init_VisionGeometry_field_lines(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_depth
{
public:
  explicit Init_VisionGeometry_goal_depth(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_boundary_width goal_depth(::message_info::msg::VisionGeometry::_goal_depth_type arg)
  {
    msg_.goal_depth = std::move(arg);
    return Init_VisionGeometry_boundary_width(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_width
{
public:
  explicit Init_VisionGeometry_goal_width(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_depth goal_width(::message_info::msg::VisionGeometry::_goal_width_type arg)
  {
    msg_.goal_width = std::move(arg);
    return Init_VisionGeometry_goal_depth(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_width
{
public:
  explicit Init_VisionGeometry_field_width(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_width field_width(::message_info::msg::VisionGeometry::_field_width_type arg)
  {
    msg_.field_width = std::move(arg);
    return Init_VisionGeometry_goal_width(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_length
{
public:
  Init_VisionGeometry_field_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionGeometry_field_width field_length(::message_info::msg::VisionGeometry::_field_length_type arg)
  {
    msg_.field_length = std::move(arg);
    return Init_VisionGeometry_field_width(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::VisionGeometry>()
{
  return message_info::msg::builder::Init_VisionGeometry_field_length();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_
