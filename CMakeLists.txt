cmake_minimum_required(VERSION 3.8)
project(main)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
add_compile_options(-femit-class-debug-always)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(main src/main.cpp src/node1.cpp)
ament_target_dependencies(main rclcpp std_msgs)

install(TARGETS
  main
  DESTINATION lib/${PROJECT_NAME})

ament_package()
