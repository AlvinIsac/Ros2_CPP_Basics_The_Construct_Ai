#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <list>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  
  rosbot.move_forward(2.0);
  float x = rosbot.get_position(1);
  ROS_INFO_STREAM("INITIAL X POSITION " << x );
  
  for (float x_limit = 0.0; x_limit <=5.0; x_limit += 0.5) {
  rosbot.move_forward(1);
  }
  
  rosbot.stop_moving();
  x = rosbot.get_position(1);
  ROS_INFO_STREAM("Final X POSITION : " << x);
 
  return 0;
}