#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sender::sender__rosidl_generator_c" for configuration "Debug"
set_property(TARGET sender::sender__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sender::sender__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libsender__rosidl_generator_c.dylib"
  IMPORTED_SONAME_DEBUG "@rpath/libsender__rosidl_generator_c.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sender::sender__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_sender::sender__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libsender__rosidl_generator_c.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
