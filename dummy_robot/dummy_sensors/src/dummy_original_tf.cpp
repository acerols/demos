#include <chrono>
#include <cmath>
#include <iostream>
#include <memory>

#include "rclcpp/clock.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/time_source.hpp"

#include "sensor_msgs/msg/joint_state.hpp"


int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    auto counter = 0.0;
    auto joint_value = 0.0;

    auto node = rclcpp::Node::make_share("dummy_joint_state");

    auto joint_state_pub = node->create_publisher<sensor_msgs::msg::joint_state>("joint_state", 10);

    auto timer1 = node->create_wall_timer(
        100ms,
        [&](){
            counter += 0.1;
            joint_value = std::cos(counter);


        }
    )
}

void tfpublisher(auto &node, auto msges)
{
    
}