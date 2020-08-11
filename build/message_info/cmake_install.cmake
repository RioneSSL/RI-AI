# Install script for directory: /Users/mukuyo/Desktop/RI-AI/src/message_info

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/mukuyo/Desktop/RI-AI/install/message_info")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/message_info")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/message_info" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_c/message_info/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/ros2_ws/ros2-osx/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_generator_c.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_generator_c.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/message_info" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_typesupport_fastrtps_c/message_info/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_typesupport_fastrtps_c.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_c.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_c.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_c.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/message_info" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_typesupport_fastrtps_cpp/message_info/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_typesupport_fastrtps_cpp.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_cpp.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_cpp.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_cpp.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_cpp.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_fastrtps_cpp.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/message_info" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_typesupport_introspection_c/message_info/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_typesupport_introspection_c.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_c.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_c.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_c.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_typesupport_c.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_c.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_c.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_c.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_c.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/message_info" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_cpp/message_info/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/message_info" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_typesupport_introspection_cpp/message_info/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_typesupport_introspection_cpp.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_cpp.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_cpp.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_cpp.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_cpp.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_introspection_cpp.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/libmessage_info__rosidl_typesupport_cpp.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_cpp.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_cpp.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_cpp.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_cpp.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__rosidl_typesupport_cpp.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/local/bin/python3" "-m" "compileall"
        "/Users/mukuyo/Desktop/RI-AI/install/message_info/lib/python3.8/site-packages/message_info/__init__.py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/msg" TYPE DIRECTORY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info/msg/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/builtin_interfaces/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/std_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/geometry_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/sensor_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_fastrtps_c.cpython-38-darwin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/builtin_interfaces/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/std_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/geometry_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/sensor_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_introspection_c.cpython-38-darwin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/builtin_interfaces/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/std_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/geometry_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/sensor_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/message_info/message_info_s__rosidl_typesupport_c.cpython-38-darwin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_generator_py/message_info/libmessage_info__python.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/usr/local/Cellar/tinyxml2/7.0.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/Desktop/RI-AI/build/message_info"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/builtin_interfaces/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/std_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/geometry_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/share/sensor_msgs/cmake/../../../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/mukuyo/ros2_ws/ros2-osx/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmessage_info__python.dylib")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/RefereeGameEvent.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/RefereeTeamInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/Referee.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/FieldCircularArc.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/FieldLineSegment.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/VisionGeometry.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/DetectionBall.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/DetectionRobot.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/DetectionFrame.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/VisionDetections.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/RobotCommand.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/RobotCommands.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/Test.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/BallInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_adapter/message_info/msg/GoalInfo.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/RefereeGameEvent.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/RefereeTeamInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/Referee.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/FieldCircularArc.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/FieldLineSegment.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/VisionGeometry.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/DetectionBall.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/DetectionRobot.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/DetectionFrame.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/VisionDetections.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/RobotCommand.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/RobotCommands.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/Test.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/BallInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/msg" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/msg/GoalInfo.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/message_info")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/message_info")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/ros2_ws/ros2-osx/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/environment" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_index/share/ament_index/resource_index/packages/message_info")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cExport.cmake"
         "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_generator_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport.cmake"
         "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cExport.cmake"
         "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cppExport.cmake"
         "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport.cmake"
         "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_introspection_cppExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cppExport.cmake"
         "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/message_info/cmake/message_info__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/CMakeFiles/Export/share/message_info/cmake/message_info__rosidl_typesupport_cppExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/build/message_info/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info/cmake" TYPE FILE FILES
    "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_core/message_infoConfig.cmake"
    "/Users/mukuyo/Desktop/RI-AI/build/message_info/ament_cmake_core/message_infoConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/message_info" TYPE FILE FILES "/Users/mukuyo/Desktop/RI-AI/src/message_info/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/mukuyo/Desktop/RI-AI/build/message_info/message_info__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/mukuyo/Desktop/RI-AI/build/message_info/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
