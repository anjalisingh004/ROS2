#!/usr/bin/enc python3
import rclpy
from rclpy.node import Node

from my_robot_interfaces.msg import HardwareStatus

class HardwareStatusPublisherNode(Node):
    def __init__(self):
        super().__init__("hardware_status_publisher")


def mian(args=None):
    rclpy.innit(args=args)
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()