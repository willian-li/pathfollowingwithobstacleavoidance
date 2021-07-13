#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "pathFollowingWithObstacleAvoidance";

// For Block pathFollowingWithObstacleAvoidance/Subscribe
SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr> Sub_pathFollowingWithObstacleAvoidance_1;

// For Block pathFollowingWithObstacleAvoidance/Subscribe1
SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq> Sub_pathFollowingWithObstacleAvoidance_14;

// For Block pathFollowingWithObstacleAvoidance/Output/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_pathFollowingWithObstacle_Twist_omqbog> Pub_pathFollowingWithObstacleAvoidance_85;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

