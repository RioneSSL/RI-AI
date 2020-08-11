// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/vision_geometry__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/vision_geometry__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::FieldLineSegment &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::FieldLineSegment &);
size_t get_serialized_size(
  const message_info::msg::FieldLineSegment &,
  size_t current_alignment);
size_t
max_serialized_size_FieldLineSegment(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::FieldCircularArc &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::FieldCircularArc &);
size_t get_serialized_size(
  const message_info::msg::FieldCircularArc &,
  size_t current_alignment);
size_t
max_serialized_size_FieldCircularArc(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info


namespace message_info
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_serialize(
  const message_info::msg::VisionGeometry & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: field_length
  cdr << ros_message.field_length;
  // Member: field_width
  cdr << ros_message.field_width;
  // Member: goal_width
  cdr << ros_message.goal_width;
  // Member: goal_depth
  cdr << ros_message.goal_depth;
  // Member: boundary_width
  cdr << ros_message.boundary_width;
  // Member: field_lines
  {
    size_t size = ros_message.field_lines.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.field_lines[i],
        cdr);
    }
  }
  // Member: field_arcs
  {
    size_t size = ros_message.field_arcs.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.field_arcs[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::VisionGeometry & ros_message)
{
  // Member: field_length
  cdr >> ros_message.field_length;

  // Member: field_width
  cdr >> ros_message.field_width;

  // Member: goal_width
  cdr >> ros_message.goal_width;

  // Member: goal_depth
  cdr >> ros_message.goal_depth;

  // Member: boundary_width
  cdr >> ros_message.boundary_width;

  // Member: field_lines
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.field_lines.resize(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.field_lines[i]);
    }
  }

  // Member: field_arcs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.field_arcs.resize(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.field_arcs[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::VisionGeometry & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: field_length
  {
    size_t item_size = sizeof(ros_message.field_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: field_width
  {
    size_t item_size = sizeof(ros_message.field_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_width
  {
    size_t item_size = sizeof(ros_message.goal_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_depth
  {
    size_t item_size = sizeof(ros_message.goal_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boundary_width
  {
    size_t item_size = sizeof(ros_message.boundary_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: field_lines
  {
    size_t array_size = ros_message.field_lines.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.field_lines[index], current_alignment);
    }
  }
  // Member: field_arcs
  {
    size_t array_size = ros_message.field_arcs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.field_arcs[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_VisionGeometry(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: field_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: field_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: goal_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: goal_depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: boundary_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: field_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_FieldLineSegment(
        full_bounded, current_alignment);
    }
  }

  // Member: field_arcs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_FieldCircularArc(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VisionGeometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::VisionGeometry *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VisionGeometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::VisionGeometry *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VisionGeometry__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::VisionGeometry *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VisionGeometry__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VisionGeometry(full_bounded, 0);
}

static message_type_support_callbacks_t _VisionGeometry__callbacks = {
  "message_info::msg",
  "VisionGeometry",
  _VisionGeometry__cdr_serialize,
  _VisionGeometry__cdr_deserialize,
  _VisionGeometry__get_serialized_size,
  _VisionGeometry__max_serialized_size
};

static rosidl_message_type_support_t _VisionGeometry__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VisionGeometry__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace message_info

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message_info
const rosidl_message_type_support_t *
get_message_type_support_handle<message_info::msg::VisionGeometry>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_VisionGeometry__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, VisionGeometry)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_VisionGeometry__handle;
}

#ifdef __cplusplus
}
#endif
