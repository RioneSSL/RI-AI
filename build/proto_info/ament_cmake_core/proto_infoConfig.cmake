# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_proto_info_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED proto_info_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(proto_info_FOUND FALSE)
  elseif(NOT proto_info_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(proto_info_FOUND FALSE)
  endif()
  return()
endif()
set(_proto_info_CONFIG_INCLUDED TRUE)

# output package information
if(NOT proto_info_FIND_QUIETLY)
  message(STATUS "Found proto_info: 0.0.0 (${proto_info_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'proto_info' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${proto_info_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(proto_info_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${proto_info_DIR}/${_extra}")
endforeach()
