#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "message_info::message_info__rosidl_generator_c" for configuration "Debug"
set_property(TARGET message_info::message_info__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(message_info::message_info__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib"
  IMPORTED_SONAME_DEBUG "@rpath/libmessage_info__rosidl_generator_c.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS message_info::message_info__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_message_info::message_info__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
