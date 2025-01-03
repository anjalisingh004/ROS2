#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include <cmath>

class TurtleCatch : public rclcpp::Node
{
public:
    TurtleCatch()
    : Node("turtle_catch")
    {
       
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
        pose_subscription_ = this->create_subscription<turtlesim::msg::Pose>(
            "turtle1/pose", 10, std::bind(&TurtleCatch::poseCallback, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100), std::bind(&TurtleCatch::controlLoop, this));
    }

private:
    void poseCallback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        current_pose_ = *msg;
    }

    void controlLoop()
    {
        float target_x = 5.5;
        float target_y = 5.5;

        float diff_x = target_x - current_pose_.x;
        float diff_y = target_y - current_pose_.y;
        float target_angle = atan2(diff_y, diff_x);
        float angle_diff = target_angle - current_pose_.theta;
        
        angle_diff = atan2(sin(angle_diff), cos(angle_diff));
        
        
        auto velocity_msg = geometry_msgs::msg::Twist();
        
        
        velocity_msg.linear.x = 2.0 * sqrt(diff_x * diff_x + diff_y * diff_y);
        velocity_msg.angular.z = 6.0 * angle_diff;
        velocity_publisher_->publish(velocity_msg);
    }

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr pose_subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
    turtlesim::msg::Pose current_pose_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtleCatch>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
