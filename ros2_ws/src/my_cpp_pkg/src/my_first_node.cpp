#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);       //initializing the ROS2 communication
    auto node = std::make_shared<rclcpp::Node>("cpp_test");
    RCLCPP_INFO(node->get_logger(), "Hello world");
    // node->get_logger();
    rclcpp::shutdown();

    return 0;
}   