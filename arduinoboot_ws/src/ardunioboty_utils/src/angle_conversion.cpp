#include <rclcpp/rclcpp.hpp>
#include <memory>
#include <arduniobot_msgs/srv/euler_to_quaternion.hpp>
#include <arduniobot_msgs/srv/quaternion_to_euler.hpp>

#include <tf2/utils.h>

class AnglesConverter : public rclcpp::Node
{
public:
    AnglesConverter() : Node("angle_conversion_service")
    {
        euler_to_quaternion_ = create_service<arduniobot_msgs::srv::EulerToQuaternion>(
            "euler_to_quaternion",
            std::bind(&AnglesConverter::eulerToQuaternionCallback, this, std::placeholders::_1, std::placeholders::_2));

        quaternion_to_euler_ = create_service<arduniobot_msgs::srv::QuaternionToEuler>(
            "quaternion_to_euler",
            std::bind(&AnglesConverter::quaternionToEulerCallback, this, std::placeholders::_1, std::placeholders::_2));

        RCLCPP_INFO(this->get_logger(), "Angles conversion services are ready");
    }

private:
    rclcpp::Service<arduniobot_msgs::srv::EulerToQuaternion>::SharedPtr euler_to_quaternion_;
    rclcpp::Service<arduniobot_msgs::srv::QuaternionToEuler>::SharedPtr quaternion_to_euler_;

    void eulerToQuaternionCallback(
        const std::shared_ptr<arduniobot_msgs::srv::EulerToQuaternion::Request> req,
        const std::shared_ptr<arduniobot_msgs::srv::EulerToQuaternion::Response> res)
    {
        RCLCPP_INFO_STREAM(this->get_logger(), "Request to convert Euler angle roll: " << req->roll << " pitch: " << req->pitch << " yaw: " << req->yaw << " to a quaternion");

        tf2::Quaternion q;
        q.setRPY(req->roll, req->pitch, req->yaw);

        res->x = q.getX();
        res->y = q.getY();
        res->z = q.getZ();
        res->w = q.getW();

        RCLCPP_INFO_STREAM(this->get_logger(), "Corresponding quaternion x: " << res->x << ", y: " << res->y << ", z: " << res->z << ", w: " << res->w);
    }

    void quaternionToEulerCallback(
        const std::shared_ptr<arduniobot_msgs::srv::QuaternionToEuler::Request> req,
        const std::shared_ptr<arduniobot_msgs::srv::QuaternionToEuler::Response> res)
    {
        RCLCPP_INFO_STREAM(this->get_logger(), "Request to convert quaternion x: " << req->x << ", y: " << req->y << ", z: " << req->z << ", w: " << req->w << " to Euler angles");

        tf2::Quaternion q(req->x, req->y, req->z, req->w);
        tf2::Matrix3x3 m(q);
        m.getRPY(res->roll, res->pitch, res->yaw);

        RCLCPP_INFO_STREAM(this->get_logger(), "Corresponding Euler Angles roll: " << res->roll << ", pitch: " << res->pitch << ", yaw: " << res->yaw);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AnglesConverter>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
