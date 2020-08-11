// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sender:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef SENDER__MSG__DETAIL__TEST__STRUCT_H_
#define SENDER__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Test in the package sender.
typedef struct sender__msg__Test
{
  int64_t a;
  int64_t b;
} sender__msg__Test;

// Struct for a sequence of sender__msg__Test.
typedef struct sender__msg__Test__Sequence
{
  sender__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sender__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENDER__MSG__DETAIL__TEST__STRUCT_H_
