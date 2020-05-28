#!/bin/sh
catkin_dir=/home/workspace/catkin_ws
catkin_src_dir=$catkin_dir/src

export TURTLEBOT_GAZEBO_WORLD_FILE=/home/workspace/catkin_ws/src/home_service/map/my_home.world
export TURTLEBOT_GAZEBO_MAP_FILE=/home/workspace/catkin_ws/src/home_service/map/map.yaml

#Launch turtlebot in the custom world
xterm  -e  "source devel/setup.bash ; roslaunch turtlebot_gazebo turtlebot_world.launch world_file:=$catkin_src_dir/home_service/map/my_home.world" &
sleep 4

#Launch gmapping demo
xterm -e " roslaunch turtlebot_gazebo amcl_demo.launch" &
sleep 4

#Launch rviz
xterm -e " roslaunch turtlebot_rviz_launchers view_navigation.launch" & 
sleep 4

#launch pick objects node 
xterm -e " rosrun pick_objects pick_objects "
sleep 4