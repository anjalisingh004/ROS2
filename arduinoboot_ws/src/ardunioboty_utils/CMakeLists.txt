cmake_minimum_required(VERSION 3.8)
project(ardunioboty_utils)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# find_package(ament_cmake_python REQUIRED)
# find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
find_package(arduniobot_msgs REQUIRED)
FIND_PACKAGE(tf2 REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
add_executable(angle_conversion src/angle_conversion.cpp)
ament_target_dependencies(angle_conversion rclcpp arduniobot_msgs tf2)

# ament_python_install_package(${PROJECT_NAME})

install(TARGETS
angle_conversion
DESTINATION lib/${PROJECT_NAME}
)



ament_package()
