#include <rclcpp/rclcpp.hpp>
#include <memory>
#include <arduniobot_msgs/srv/add_two_ints.hpp>
#include <chrono>

using namespace std::chrono_literals;

class SimpleServiceClient : public rclcpp::Node
{
public:
    SimpleServiceClient(int a, int b) : Node("simple_service_client")
    {
        client_ = create_client<arduniobot_msgs::srv::AddTwoInts>("add_two_ints");
        auto request = std::make_shared<arduniobot_msgs::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b;

        while (!client_->wait_for_service(1s))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for service");
                return;
            }
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Service not available, waiting more time...");
        }

        auto result = client_->async_send_request(request, std::bind(&SimpleServiceClient::responseCallback, this, std::placeholders::_1));
    }

private:
    rclcpp::Client<arduniobot_msgs::srv::AddTwoInts>::SharedPtr client_;

    void responseCallback(rclcpp::Client<arduniobot_msgs::srv::AddTwoInts>::SharedFuture future)
    {
        if (future.valid())
        {
            auto response = future.get();
            RCLCPP_INFO_STREAM(rclcpp::get_logger("rclcpp"), "Service Response: sum = " << response->sum);
        }
        else
        {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to get response from service");
        }
    }
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);

    if (argc != 3)
    {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Wrong number of arguments! Usage: simple_service_client A B");
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    auto node = std::make_shared<SimpleServiceClient>(a, b);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
