import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    main = Node(package='main', executable='main', output='screen')
    receiver = Node(package='reciever', executable='reciever', output='screen')
    referee_reciever = Node(package='reciever', executable='referee_receiver', output='screen')
    start_sender_cmd = Node(
        package='sender', executable='sim_sender',
        output='screen',
        parameters=[os.path.join(get_package_share_directory(
            'sender'), 'config', 'grsim.yaml')]
    )

    ld = LaunchDescription()

    ld.add_action(start_sender_cmd)
    ld.add_action(receiver)
    ld.add_action(referee_reciever)
    ld.add_action(main)

    return ld