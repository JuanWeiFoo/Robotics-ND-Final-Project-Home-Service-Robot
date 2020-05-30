# Robotics-ND-Final-Project-Home-Service-Robot
This final project for the Robotics Software Nanodegree is to have a robot autonomously map and navigate throught the map, while picking up object from one location and dropping off the item at another location.

Packages in the src files and description of what each does: 

add_markers: holds the code to create a virtual object with markers in rviz, which is simulated so that the robot is picking up the marker and dropping off the marker at another location 

home_service: this package holds all the shell scripts that is needed to run localization, mapping, path planning and navigation. 

pick_objects: this package holds the code to create a path planning algorithm to navigate the robot to the desired location. The ROS navigation stack uses a Uniform Cost Search Algorithm called Dijkstra's algorithm, to create a path while avoiding the obstacles, which is the walls. 

slam_gmapping: this ROS package uses a Grid-Based Fast SLAM Algorithm to map the environment. It uses robot laser measurements and odometry values and create a 2D occupancy grid map that we can save. 

turtlebot_interactions: contains a view_navigation. launch files that has a pre-configured rviz workspace, which includes: pose arrays, robot model, the map of the environment, and the adaptive monte carlo particle swarm.

# Project Setup
**NOTE: The files and catkin workspace of this github can only run on ROS Kinetic**

### 1) Update the system:  
`$ sudo apt-get update && apt-get upgrade`

### 2) Create a catkin workspace: 
```
$ mkdir -p ~/catkin_ws/src
$ cd ~/catkin_ws/src
$ catkin_init_workspace
$ cd ~/catkin_ws
$ catkin_make
```
### 3) Clone the repository into the src directory
```
$ cd src
$ git clone https://github.com/JuanWeiFoo/Robotics-ND-Final-Project-Home-Service-Robot.git
```
### 4) Install ros dependencies (This command installs all the packages that the packages in your catkin workspace depend upon but are missing on your computer)
```
$ cd /home/workspace/catkin_ws
$ source devel/setup.bash
$ rosdep install --from-paths src --ignore-src -r -y
$ catkin_make
```
### 5) Run the shell script file 
```
$ source devel/setup.bash
$ cd src/home_service/scripts
$ ./home_service.sh
```
