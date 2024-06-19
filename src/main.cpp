#include <chrono>
#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include "node1.cpp"

int main(int argc, char *argv[])
{
    std::cout << "Starting..." << std::endl;

    rclcpp::init(argc, argv);
    auto node = std::make_shared<Node1>();
    auto executor = rclcpp::executors::MultiThreadedExecutor();
    executor.add_node(node);
    executor.spin();
    rclcpp::shutdown();

    std::cout << "Done." << std::endl;
    return 0;
}
