// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "message_info/msg/rosidl_typesupport_c__visibility_control.h"
#include "message_info/msg/detail/vision_detections__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace message_info
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _VisionDetections_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _VisionDetections_type_support_ids_t;

static const _VisionDetections_type_support_ids_t _VisionDetections_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_c",  // ::rosidl_typesupport_connext_c::typesupport_identifier,
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VisionDetections_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _VisionDetections_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VisionDetections_type_support_symbol_names_t _VisionDetections_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_c, message_info, msg, VisionDetections)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, VisionDetections)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, VisionDetections)),
  }
};

typedef struct _VisionDetections_type_support_data_t
{
  void * data[3];
} _VisionDetections_type_support_data_t;

static _VisionDetections_type_support_data_t _VisionDetections_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VisionDetections_message_typesupport_map = {
  3,
  "message_info",
  &_VisionDetections_message_typesupport_ids.typesupport_identifier[0],
  &_VisionDetections_message_typesupport_symbol_names.symbol_name[0],
  &_VisionDetections_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VisionDetections_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VisionDetections_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace message_info

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, message_info, msg, VisionDetections)() {
  return &::message_info::msg::rosidl_typesupport_c::VisionDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
