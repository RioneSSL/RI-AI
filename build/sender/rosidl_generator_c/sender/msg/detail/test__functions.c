// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sender:msg/Test.idl
// generated code does not contain a copyright notice
#include "sender/msg/detail/test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
sender__msg__Test__init(sender__msg__Test * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
sender__msg__Test__fini(sender__msg__Test * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

sender__msg__Test *
sender__msg__Test__create()
{
  sender__msg__Test * msg = (sender__msg__Test *)malloc(sizeof(sender__msg__Test));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sender__msg__Test));
  bool success = sender__msg__Test__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
sender__msg__Test__destroy(sender__msg__Test * msg)
{
  if (msg) {
    sender__msg__Test__fini(msg);
  }
  free(msg);
}


bool
sender__msg__Test__Sequence__init(sender__msg__Test__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  sender__msg__Test * data = NULL;
  if (size) {
    data = (sender__msg__Test *)calloc(size, sizeof(sender__msg__Test));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sender__msg__Test__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sender__msg__Test__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sender__msg__Test__Sequence__fini(sender__msg__Test__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sender__msg__Test__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sender__msg__Test__Sequence *
sender__msg__Test__Sequence__create(size_t size)
{
  sender__msg__Test__Sequence * array = (sender__msg__Test__Sequence *)malloc(sizeof(sender__msg__Test__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = sender__msg__Test__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
sender__msg__Test__Sequence__destroy(sender__msg__Test__Sequence * array)
{
  if (array) {
    sender__msg__Test__Sequence__fini(array);
  }
  free(array);
}
