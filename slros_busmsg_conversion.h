#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>
#include <ros/time.h>
#include <sensor_msgs/LaserScan.h>
#include <std_msgs/Header.h>
#include "pathFollowingWithObstacleAvoidance_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_pathFollowingWithObstacle_Point_oke1ah const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_Point_oke1ah* busPtr, geometry_msgs::Point const* msgPtr);

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_pathFollowingWithObstacle_Pose_3sg26g const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_Pose_3sg26g* busPtr, geometry_msgs::Pose const* msgPtr);

void convertFromBus(geometry_msgs::PoseStamped* msgPtr, SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq* busPtr, geometry_msgs::PoseStamped const* msgPtr);

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv* busPtr, geometry_msgs::Quaternion const* msgPtr);

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_pathFollowingWithObstacle_Twist_omqbog const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_Twist_omqbog* busPtr, geometry_msgs::Twist const* msgPtr);

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz* busPtr, geometry_msgs::Vector3 const* msgPtr);

void convertFromBus(ros::Time* msgPtr, SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time* busPtr, ros::Time const* msgPtr);

void convertFromBus(sensor_msgs::LaserScan* msgPtr, SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr* busPtr, sensor_msgs::LaserScan const* msgPtr);

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr);


#endif
