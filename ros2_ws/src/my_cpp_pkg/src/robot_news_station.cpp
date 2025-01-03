#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class RobotNewsStationNode : public rclcpp::Node {
public:
    RobotNewsStationNode() : Node("robot_news_station"), robot_name_("R202"), counter_(0) {
        publisher_ = this->create_publisher<example_interfaces::msg::String>("robot_news", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1),
                                         std::bind(&RobotNewsStationNode::timerCallback, this));
        RCLCPP_INFO(this->get_logger(), "Robot news station has been started.");
    }

private:
    void timerCallback() {
        auto msg = example_interfaces::msg::String();
        msg.data = "Hi, this is " + robot_name_ + " from the robot news station";
        publisher_->publish(msg);
        ++counter_;
    }

    std::string robot_name_;
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    int counter_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotNewsStationNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

