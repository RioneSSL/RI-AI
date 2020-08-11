// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sender:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SENDER__MSG__DETAIL__TEST__TRAITS_HPP_
#define SENDER__MSG__DETAIL__TEST__TRAITS_HPP_

#include "sender/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sender::msg::Test>()
{
  return "sender::msg::Test";
}

template<>
struct has_fixed_size<sender::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sender::msg::Test>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sender::msg::Test>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENDER__MSG__DETAIL__TEST__TRAITS_HPP_
