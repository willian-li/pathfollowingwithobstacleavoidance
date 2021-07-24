/***************************************************************************************************************************
*
* Author: bingo
* Email: 1554459957@qq.com
* Time: 2019.09.19
* Description: simulink vfh control px4, simulink程序见volans/src/modules/matlab/simulink_vfh/simulinkVFH.slx
*  
***************************************************************************************************************************/

//ROS 头文件
#include <ros/ros.h>
#include <Eigen/Eigen>

//自定义头文件
#include "offboard_control.h"

//topic 头文件
#include <iostream>
#include <std_msgs/Bool.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/PoseStamped.h>
#include <mavros_msgs/PositionTarget.h>

using namespace std;
float desire_vx = 0; 
float desire_yaw = 0; 
Eigen::Vector3d desire_vel;//期望速度，只控制机体坐标系下X方向，即机头方向

Eigen::Vector3d target_pos;
Eigen::Vector3d local_pos;
float desire_yawRate = 0.2;//期望角速度 ，+时飞机从上往下看逆时针旋转。

ros::Publisher setpoint_raw_local_pub;

float desire_z = 1.5; //期望高度  
/*接收来自simulink的期望x方向的速度，以及期望偏航角，其中angular.z为正表示从上往下看飞机应该逆时针旋转，当为0时表示此刻机头对应的区域可以安全通行，msg->linear.x表示此刻期望的飞机前进速度*/                               
void targetMsg_cb(const geometry_msgs::Twist::ConstPtr &msg)
{
  desire_vel[0] =  msg->linear.x;
  desire_yawRate =  msg->angular.z;
  //ROS_INFO("I heard: [%f],[%f]", desire_vx,desire_yaw);
}

void target_sub(const geometry_msgs::Pose::ConstPtr &msg)
{
  target_pos[0] =  msg->position.x;
  target_pos[1] =  msg->position.y;
  
  //ROS_INFO("I heard: [%f],[%f]", desire_vx,desire_yaw);
}
void local_sub(const geometry_msgs::PoseStamped::ConstPtr &msg)
{
  local_pos[0] =  msg->pose.position.x;
  local_pos[1] =  msg->pose.position.y;
  //ROS_INFO("I heard: [%f],[%f]", desire_vx,desire_yaw);
}
void send_pos_setpoint(const Eigen::Vector3d& pos_sp, float yaw_sp)
{
    mavros_msgs::PositionTarget pos_setpoint;
    //Bitmask toindicate which dimensions should be ignored (1 means ignore,0 means not ignore; Bit 10 must set to 0)
    //Bit 1:x, bit 2:y, bit 3:z, bit 4:vx, bit 5:vy, bit 6:vz, bit 7:ax, bit 8:ay, bit 9:az, bit 10:is_force_sp, bit 11:yaw, bit 12:yaw_rate
    //Bit 10 should set to 0, means is not force sp
    pos_setpoint.type_mask = 0b100111111000;  // 100 111 111 000  xyz + yaw

    pos_setpoint.coordinate_frame = 1;

    pos_setpoint.position.x = pos_sp[0];
    pos_setpoint.position.y = pos_sp[1];
    pos_setpoint.position.z = pos_sp[2];

    pos_setpoint.yaw = yaw_sp;

    setpoint_raw_local_pub.publish(pos_setpoint);
}

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>主 函 数<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
int main(int argc, char **argv)
{
    ros::init(argc, argv, "simulinkVFH");
    ros::NodeHandle nh("~");
    ros::Rate rate(20.0);
    OffboardControl OffboardControl_; 
    //【订阅】Lidar数据
    ros::Subscriber lidar_sub = nh.subscribe<geometry_msgs::Twist>("/simulink/cmd_vel", 100, targetMsg_cb);

    ros::Subscriber target_pos_sub = nh.subscribe<geometry_msgs::Pose>("/target_pos", 100,target_sub);
    ros::Subscriber local_pos_sub = nh.subscribe<geometry_msgs::PoseStamped>("/mavros/local_position/pose", 100,local_sub);

    setpoint_raw_local_pub = nh.advertise<mavros_msgs::PositionTarget>("/mavros/setpoint_raw/local", 100);

    nh.param<float>("desire_z", desire_z, 1.5);
    //初始化悬停坐标
    target_pos[0] = 0;
    target_pos[1] = 0;
    target_pos[2] = desire_z;
    float copy_yawRate = 1;
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Main Loop<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    while(ros::ok())
    {
      
		if (fabs(target_pos[0] - local_pos[0]) < 0.5 && fabs(target_pos[1] - local_pos[1]) < 0.5)
    {
      
      send_pos_setpoint(target_pos,copy_yawRate);//悬停
      //cout  << copy_yawRate << endl;

    }
    else
    {
      copy_yawRate = desire_yawRate; //记录当前角度
      OffboardControl_.send_body_velxy_posz_yaw_setpoint(desire_vel,desire_z,desire_yawRate);
      
    }
              
      
		
    ros::spinOnce();
		rate.sleep();
    }
    return 0;

}



