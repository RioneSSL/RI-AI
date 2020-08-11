// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sender:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SENDER__MSG__DETAIL__TEST__BUILDER_HPP_
#define SENDER__MSG__DETAIL__TEST__BUILDER_HPP_

#include "sender/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sender
{

namespace msg
{

namespace builder
{

class Init_Test_b
{
public:
  explicit Init_Test_b(::sender::msg::Test & msg)
  : msg_(msg)
  {}
  ::sender::msg::Test b(::sender::msg::Test::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sender::msg::Test msg_;
};

class Init_Test_a
{
public:
  Init_Test_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_b a(::sender::msg::Test::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Test_b(msg_);
  }

private:
  ::sender::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sender::msg::Test>()
{
  return sender::msg::builder::Init_Test_a();
}

}  // namespace sender

#endif  // SENDER__MSG__DETAIL__TEST__BUILDER_HPP_
