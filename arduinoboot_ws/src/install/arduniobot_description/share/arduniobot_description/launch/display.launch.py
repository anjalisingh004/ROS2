import os
from ament_index_python.packages import get_package_share_directory, get_package_prefix

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable, IncludeLaunchDescription
from launch.substitutions import Command, LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    arduniobot_description = get_package_share_directory("arduniobot_description")
    arduniobot_description_prefix = get_package_prefix("arduniobot_description")
    model_path = os.path.join(arduniobot_description, "models")
    model_path += os.pathsep + os.path.join(arduniobot_description_prefix , "share")
    
    env_variable = SetEnvironmentVariable("GAZEBO_MODEL_PATH", model_path)
    
    model_arg = DeclareLaunchArgument(
        name='model',
        default_value=os.path.join(arduniobot_description, 'urdf', 'arduniobot.urdf.xacro'),
        description='Absolute path to robot urdf file'
    )

    urdf_path = LaunchConfiguration('model')
    robot_description = ParameterValue(Command(["xacro ", urdf_path]), value_type=str)

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}]
    )

    start_gazebo_server = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(
        get_package_share_directory("gazebo_ros"), "launch", "gzserver.launch.py"
    )))

    start_gazebo_client = IncludeLaunchDescription(PythonLaunchDescriptionSource(os.path.join(
        get_package_share_directory("gazebo_ros"), "launch", "gzclient.launch.py"
    )))

    spawn_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_entity',
        output='screen',
        arguments=['-entity', 'arduniobot', '-topic', 'robot_description']
    )

    return LaunchDescription([
        env_variable,
        model_arg,
        robot_state_publisher_node,
        start_gazebo_client,
        start_gazebo_server,
        spawn_robot
    ])
