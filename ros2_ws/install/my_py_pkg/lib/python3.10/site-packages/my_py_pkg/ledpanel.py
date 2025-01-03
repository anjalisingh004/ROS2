#!/usr/bin/env python3
import rclpy 
from rclpy.node import Node 

from my_robot_interfaces.msg import LedstateArray

class LedpanelNode(Node):
    def __init__(self):
        super().__init__("led_panel")
        self.led_states_=[0,0,0]
        self.led_states_publisher_=self.create_publisher(
            LedstateArray,"led_states",10)
        self.led_states_timer_=self.create_timer(4,self.publish_led_states)
        self.get_logger().info("LED panel node has been started.")

    def publish_led_states(self):
        msg = LedstateArray()
        msg.led_stated = self.led_states_self.led_states_publisher_.publisher(msg)


def main(args=None):
    rclpy.init(args=args)
    node = LedpanelNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__== "__main__":
    main()


