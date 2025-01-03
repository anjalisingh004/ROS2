#include <rclcpp/rclcpp.hpp>
#include <memory>
#include <arduniobot_msgs/srv/add_two_ints.hpp>

class SimpleServiceServer : public rclcpp::Node
{
public:
    SimpleServiceServer() : Node("simple_service_server")
    {
        service_ = create_service<arduniobot_msgs::srv::AddTwoInts>(
            "add_two_ints", 
            std::bind(&SimpleServiceServer::serviceCallback, this, std::placeholders::_1, std::placeholders::_2)
        );
        RCLCPP_INFO(this->get_logger(), "Service add_two_ints is ready");
    }

private:
    rclcpp::Service<arduniobot_msgs::srv::AddTwoInts>::SharedPtr service_;

    void serviceCallback(
        const std::shared_ptr<arduniobot_msgs::srv::AddTwoInts::Request> request,
        const std::shared_ptr<arduniobot_msgs::srv::AddTwoInts::Response> response
    )
    {
        RCLCPP_INFO_STREAM(this->get_logger(), "New Request Received: a: " << request->a << " b: " << request->b);
        response->sum = request->a + request->b;
        RCLCPP_INFO_STREAM(this->get_logger(), "Returning sum: " << response->sum);
    }
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SimpleServiceServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
