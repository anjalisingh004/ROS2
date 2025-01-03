import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.srv import Spawn, Kill
import random

class TurtleCatcher(Node):
    def __init__(self):
        super().__init__('turtle_catcher')
        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.timer_ = self.create_timer(0.5, self.move_turtle)
        
        self.spawn_client_ = self.create_client(Spawn, 'spawn')
        self.kill_client_ = self.create_client(Kill, 'kill')

        while not self.spawn_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Spawn service not available, waiting...')
        while not self.kill_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Kill service not available, waiting...')
        
        self.spawn_turtle('target', 5.0, 5.0)

    def spawn_turtle(self, name, x, y):
        request = Spawn.Request()
        request.name = name
        request.x = x
        request.y = y
        request.theta = 0.0
        future = self.spawn_client_.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        self.get_logger().info(f'Spawned turtle {name} at ({x}, {y})')

    def kill_turtle(self, name):
        request = Kill.Request()
        request.name = name
        future = self.kill_client_.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        self.get_logger().info(f'Killed turtle {name}')

    def move_turtle(self):
        msg = Twist()
        msg.linear.x = random.uniform(-2.0, 2.0)
        msg.angular.z = random.uniform(-1.0, 1.0)
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleCatcher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Node interrupted, shutting down...')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
