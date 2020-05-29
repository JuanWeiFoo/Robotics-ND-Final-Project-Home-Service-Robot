# Robotics-ND-Final-Project-Home-Service-Robot
This final project for the Robotics Software Nanodegree is to have a robot autonomously map and navigate throught the map, while picking up object from one location and dropping off the item at another location.

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
