#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sender::sender__rosidl_typesupport_cpp" for configuration "Debug"
set_property(TARGET sender::sender__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sender::sender__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libsender__rosidl_typesupport_cpp.dylib"
  IMPORTED_SONAME_DEBUG "@rpath/libsender__rosidl_typesupport_cpp.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS sender::sender__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_sender::sender__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libsender__rosidl_typesupport_cpp.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
