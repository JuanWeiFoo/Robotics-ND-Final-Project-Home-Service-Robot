#include <visualization_msgs/Marker.h>
#include "nav_msgs/Odometry.h"
#include <ros/ros.h>
#include <complex>


float x_odom = 0.0;
float y_odom = 0.0;

float pickUp_item[2] = {-3.86,3.67};
float dropOff_item[2] = {-6.03,8.73};

// create function to call check whether robot has reached pickup and dropoff zone with tolerances
void Check_Location_CallBack(const nav_msgs::Odometry::ConstPtr& odom) {
   x_odom = odom -> pose.pose.position.x;
   y_odom = odom -> pose.pose.position.y;
}
int main( int argc, char** argv ) {
  bool PickUp = false;
  bool DropOff = false;

  // initiate node and create node handler  
  ros::init(argc, argv, "add_markers");
  ros::NodeHandle n;

  // Publish to create item and subscribe to the odometry of the turtlebot
  ros::Publisher item_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
  ros::Subscriber odom_sub = n.subscribe("odom", 500, Check_Location_CallBack);

 uint32_t shape = visualization_msgs::Marker::SPHERE;

  while (ros::ok())
  {
    visualization_msgs::Marker item;
    // Set the frame ID and timestamp.  See the TF tutorials for information on these.
    item.header.frame_id = "map";
    item.header.stamp = ros::Time::now();

    // Set the namespace and id for this marker.  This serves to create a unique ID
    // Any marker sent with the same namespace and id will overwrite the old one
    item.ns = "basic_shapes";
    item.id = 0;

    // Set the marker type.  Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
    item.type = shape;

    // Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
    item.action = visualization_msgs::Marker::ADD;

    // Set the pose of the marker.  This is a full 6DOF pose relative to the frame/time specified in the header
    item.pose.position.x = pickUp_item[0];
    item.pose.position.y = pickUp_item[1];
    item.pose.position.z = 0;
    
    item.pose.orientation.x = 0.0;
    item.pose.orientation.y = 0.0;
    item.pose.orientation.z = 0.0;
    item.pose.orientation.w = 0;

    // Set the scale of the marker -- 1x1x1 here means 1m on a side
    item.scale.x = 0.5;
    item.scale.y = 0.5;
    item.scale.z = 0.5;
    
    // Set the color -- be sure to set alpha to something non-zero!
    item.color.r = 0.0f;
    item.color.g = 0.0f;
    item.color.b = 1.0f;
    item.color.a = 1.0;

    item.lifetime = ros::Duration();

    // Publish the marker
    while (item_pub.getNumSubscribers() < 1)
    {
      if (!ros::ok())
      {
        return 0;
      }
      ROS_WARN_ONCE("Please create a subscriber to the marker");
      sleep(1);
    }
     // set some threshold
     if (std::abs(pickUp_item[0] - x_odom) < 0.3 && std::abs(pickUp_item[1] -y_odom) < 0.3)
   { 
     	PickUp = true;
       
     }
    
    if (std::abs(dropOff_item[0] - x_odom) < 0.7 && std::abs(dropOff_item[1] - y_odom) < 0.7) 
     {
  
    	DropOff = true;
   	}
    
 
   if(PickUp == true && DropOff == false){
    
    	item.action = visualization_msgs::Marker::DELETE; 
    	item_pub.publish(item);
    	ROS_INFO("Item picked Up. Drop off at drop off location");
     
   } 
    if (DropOff == true && PickUp == true) {
  		item.action = visualization_msgs::Marker::ADD; 
  		item.pose.position.x = dropOff_item[0];
  		item.pose.position.y = dropOff_item[1];
  		item.pose.position.z = 0;
    
    	item.pose.orientation.x = 0.0;
    	item.pose.orientation.y = 0.0;
    	item.pose.orientation.z = 0.0;
    	item.pose.orientation.w = 0;

    	item_pub.publish(item);
    	ROS_INFO("Dropped Off");
    
  } else {
       item_pub.publish(item);
       ROS_INFO("Item Shown. Pick the Item up");
       
       ros::spinOnce();
      }
  }    
  return 0;
}