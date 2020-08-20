cmake_minimum_required(VERSION 3.5)
project(reciever)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(message_info REQUIRED)
find_package(proto_info REQUIRED)
find_package(Protobuf REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)

include_directories(
  ${PROTOBUF_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
  ${proto_info_INCLUDE_DIRS}
)

include_directories(include ${CMAKE_CURRENT_BINARY_DIR})

add_executable(referee_receiver
  src/referee_receiver.cpp
)

add_executable(reciever
  src/grsim_receiver.cpp
)

ament_target_dependencies(
  reciever
  "rclcpp"
  "std_msgs"
  "message_info"
  "proto_info"
)

ament_target_dependencies(
  referee_receiver
  "rclcpp"
  "std_msgs"
  "message_info"
  "proto_info"
)

target_link_libraries(referee_receiver ${PROTOBUF_LIBRARIES} ${proto_info_LIBRARIES} ${Boost_LIBRARIES})
target_link_libraries(reciever ${PROTOBUF_LIBRARIES} ${proto_info_LIBRARIES} ${Boost_LIBRARIES})

install(
  DIRECTORY include/
  DESTINATION include)

install(TARGETS referee_receiver
  EXPORT export_${PROJECT_NAME}
 DESTINATION lib/${PROJECT_NAME})
install(TARGETS reciever
  EXPORT export_${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
