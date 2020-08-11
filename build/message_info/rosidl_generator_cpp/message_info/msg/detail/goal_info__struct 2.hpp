// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/GoalInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'their'
// Member 'our'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__GoalInfo __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__GoalInfo __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalInfo_
{
  using Type = GoalInfo_<ContainerAllocator>;

  explicit GoalInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : their(_init),
    our(_init)
  {
    (void)_init;
  }

  explicit GoalInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : their(_alloc, _init),
    our(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _their_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _their_type their;
  using _our_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _our_type our;

  // setters for named parameter idiom
  Type & set__their(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->their = _arg;
    return *this;
  }
  Type & set__our(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->our = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::GoalInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::GoalInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::GoalInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::GoalInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::GoalInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::GoalInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::GoalInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::GoalInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::GoalInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::GoalInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__GoalInfo
    std::shared_ptr<message_info::msg::GoalInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__GoalInfo
    std::shared_ptr<message_info::msg::GoalInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalInfo_ & other) const
  {
    if (this->their != other.their) {
      return false;
    }
    if (this->our != other.our) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalInfo_

// alias to use template instance with default allocator
using GoalInfo =
  message_info::msg::GoalInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__STRUCT_HPP_
