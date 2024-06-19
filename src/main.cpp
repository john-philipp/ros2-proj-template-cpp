#include <chrono>
#include <iostream>
#include <rclcpp/rclcpp.hpp>
#include "stopwatch.cpp"

int main()
{
    std::cout << "Starting..." << std::endl;
    auto sw = Stopwatch();
    sw.elapsedLap("test");
    std::cout << "Done." << std::endl;
    return 0;
}