#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_pathFollowingWithObstacle_Point_oke1ah and geometry_msgs::Point

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_pathFollowingWithObstacle_Point_oke1ah const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_Point_oke1ah* busPtr, geometry_msgs::Point const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_pathFollowingWithObstacle_Pose_3sg26g and geometry_msgs::Pose

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_pathFollowingWithObstacle_Pose_3sg26g const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertFromBus(&msgPtr->orientation, &busPtr->Orientation);
  convertFromBus(&msgPtr->position, &busPtr->Position);
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_Pose_3sg26g* busPtr, geometry_msgs::Pose const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertToBus(&busPtr->Orientation, &msgPtr->orientation);
  convertToBus(&busPtr->Position, &msgPtr->position);
}


// Conversions between SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq and geometry_msgs::PoseStamped

void convertFromBus(geometry_msgs::PoseStamped* msgPtr, SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseStamped");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->pose, &busPtr->Pose);
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq* busPtr, geometry_msgs::PoseStamped const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseStamped");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Pose, &msgPtr->pose);
}


// Conversions between SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv and geometry_msgs::Quaternion

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr->w =  busPtr->W;
  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv* busPtr, geometry_msgs::Quaternion const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->W =  msgPtr->w;
  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_pathFollowingWithObstacle_Twist_omqbog and geometry_msgs::Twist

void convertFromBus(geometry_msgs::Twist* msgPtr, SL_Bus_pathFollowingWithObstacle_Twist_omqbog const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertFromBus(&msgPtr->angular, &busPtr->Angular);
  convertFromBus(&msgPtr->linear, &busPtr->Linear);
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_Twist_omqbog* busPtr, geometry_msgs::Twist const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertToBus(&busPtr->Angular, &msgPtr->angular);
  convertToBus(&busPtr->Linear, &msgPtr->linear);
}


// Conversions between SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr and sensor_msgs::LaserScan

void convertFromBus(sensor_msgs::LaserScan* msgPtr, SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  msgPtr->angle_increment =  busPtr->AngleIncrement;
  msgPtr->angle_max =  busPtr->AngleMax;
  msgPtr->angle_min =  busPtr->AngleMin;
  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBusVariablePrimitiveArray(msgPtr->intensities, busPtr->Intensities, busPtr->Intensities_SL_Info);
  msgPtr->range_max =  busPtr->RangeMax;
  msgPtr->range_min =  busPtr->RangeMin;
  convertFromBusVariablePrimitiveArray(msgPtr->ranges, busPtr->Ranges, busPtr->Ranges_SL_Info);
  msgPtr->scan_time =  busPtr->ScanTime;
  msgPtr->time_increment =  busPtr->TimeIncrement;
}

void convertToBus(SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr* busPtr, sensor_msgs::LaserScan const* msgPtr)
{
  const std::string rosMessageType("sensor_msgs/LaserScan");

  busPtr->AngleIncrement =  msgPtr->angle_increment;
  busPtr->AngleMax =  msgPtr->angle_max;
  busPtr->AngleMin =  msgPtr->angle_min;
  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBusVariablePrimitiveArray(busPtr->Intensities, busPtr->Intensities_SL_Info, msgPtr->intensities, slros::EnabledWarning(rosMessageType, "intensities"));
  busPtr->RangeMax =  msgPtr->range_max;
  busPtr->RangeMin =  msgPtr->range_min;
  convertToBusVariablePrimitiveArray(busPtr->Ranges, busPtr->Ranges_SL_Info, msgPtr->ranges, slros::EnabledWarning(rosMessageType, "ranges"));
  busPtr->ScanTime =  msgPtr->scan_time;
  busPtr->TimeIncrement =  msgPtr->time_increment;
}


// Conversions between SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}

