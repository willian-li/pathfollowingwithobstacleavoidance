#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block pathFollowingWithObstacleAvoidance/Subscribe
extern SimulinkSubscriber<sensor_msgs::LaserScan, SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr> Sub_pathFollowingWithObstacleAvoidance_1;

// For Block pathFollowingWithObstacleAvoidance/Subscribe1
extern SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq> Sub_pathFollowingWithObstacleAvoidance_14;

// For Block pathFollowingWithObstacleAvoidance/Output/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_pathFollowingWithObstacle_Twist_omqbog> Pub_pathFollowingWithObstacleAvoidance_85;

void slros_node_init(int argc, char** argv);

#endif
