cmake_minimum_required(VERSION 3.8)
project(my_cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(my_robot_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)


#
add_executable(my_first_node src/my_first_node.cpp)
ament_target_dependencies(my_first_node rclcpp)



add_executable(hw_status_publisher src/hw_status_publisher.cpp)
ament_target_dependencies(hw_status_publisher rclcpp my_robot_interfaces)

add_executable(robot_news_station src/robot_news_station.cpp)
ament_target_dependencies(robot_news_station rclcpp example_interfaces) 

add_executable(number_publisher src/number_publisher.cpp)
ament_target_dependencies(number_publisher rclcpp example_interfaces)


add_executable(smartphone src/smartphone.cpp)
ament_target_dependencies(smartphone rclcpp example_interfaces)

add_executable(add_two_ints_server src/add_two_ints_server.cpp)
ament_target_dependencies(add_two_ints_server rclcpp example_interfaces)

add_executable(add_two_ints_no_opp src/add_two_ints_no_opp.cpp)
ament_target_dependencies(add_two_ints_no_opp rclcpp example_interfaces)

add_executable(add_two_ints_client.cpp src/add_two_ints_client.cpp)
ament_target_dependencies(add_two_ints_client.cpp rclcpp example_interfaces)


add_executable(turtle_catch src/turtle_catch.cpp)
ament_target_dependencies(turtle_catch rclcpp geometry_msgs turtlesim)


install(TARGETS
my_first_node
robot_news_station
hw_status_publisher
number_publisher
smartphone
add_two_ints_server
add_two_ints_no_opp
add_two_ints_client.cpp
turtle_catch
DESTINATION lib/${PROJECT_NAME}
)





ament_package()
