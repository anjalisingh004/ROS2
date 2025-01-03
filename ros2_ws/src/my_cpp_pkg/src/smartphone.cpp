#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class SmartphoneNode : public rclcpp::Node {
public:
    SmartphoneNode() : Node("smartphone"), robot_name_("R202"), counter_(0) {
        subscriber_ = this->create_subscription<example_interfaces::msg::String>(
            "robot_news", 10,
            std::bind(&SmartphoneNode::CallbackRobotNews, this, std::placeholders::_1));
        RCLCPP_INFO(get_logger(), "Smartphone has been started.");
    }

private:
    void CallbackRobotNews(const example_interfaces::msg::String::SharedPtr msg) {
        RCLCPP_INFO(get_logger(), "%s", msg->data.c_str());
    }

    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
    std::string robot_name_;
    int counter_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SmartphoneNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
