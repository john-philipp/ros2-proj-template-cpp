cmake_minimum_required(VERSION 3.5)
project(main)

# Find dependencies.
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# Add the executable target.
add_executable(main src/main.cpp)

# Specify dependencies for the target.
ament_target_dependencies(main rclcpp std_msgs)

# Install the target.
install(TARGETS main
  DESTINATION lib/${PROJECT_NAME})

# Ament package.
ament_package()