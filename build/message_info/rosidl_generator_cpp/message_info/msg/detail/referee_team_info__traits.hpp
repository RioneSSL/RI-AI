// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/RefereeTeamInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__TRAITS_HPP_

#include "message_info/msg/detail/referee_team_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::RefereeTeamInfo>()
{
  return "message_info::msg::RefereeTeamInfo";
}

template<>
struct has_fixed_size<message_info::msg::RefereeTeamInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message_info::msg::RefereeTeamInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message_info::msg::RefereeTeamInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__TRAITS_HPP_
