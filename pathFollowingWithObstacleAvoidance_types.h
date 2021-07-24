//
// File: pathFollowingWithObstacleAvoidance_types.h
//
// Code generated for Simulink model 'pathFollowingWithObstacleAvoidance'.
//
// Model version                  : 1.38
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Jul 24 14:20:26 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_pathFollowingWithObstacleAvoidance_types_h_
#define RTW_HEADER_pathFollowingWithObstacleAvoidance_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Twist_omqbog_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Twist_omqbog_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_pathFollowingWithObstacle_Vector3_ws7cdz Angular;
} SL_Bus_pathFollowingWithObstacle_Twist_omqbog;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_pathFollowingWithObstacleAvoidance_ros_time_Time Stamp;
} SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr_

// MsgType=sensor_msgs/LaserScan
typedef struct {
  real32_T AngleMin;
  real32_T AngleMax;
  real32_T AngleIncrement;
  real32_T TimeIncrement;
  real32_T ScanTime;
  real32_T RangeMin;
  real32_T RangeMax;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Ranges_SL_Info:TruncateAction=warn 
  real32_T Ranges[360];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Ranges
  SL_Bus_ROSVariableLengthArrayInfo Ranges_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Intensities_SL_Info:TruncateAction=warn 
  real32_T Intensities[360];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Intensities
  SL_Bus_ROSVariableLengthArrayInfo Intensities_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header Header;
} SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Point_oke1ah_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Point_oke1ah_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_pathFollowingWithObstacle_Point_oke1ah;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Pose_3sg26g_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_Pose_3sg26g_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_pathFollowingWithObstacle_Point_oke1ah Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_pathFollowingWithObstacle_Quaternion_3sbfzv Orientation;
} SL_Bus_pathFollowingWithObstacle_Pose_3sg26g;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq_
#define DEFINED_TYPEDEF_FOR_SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq_

// MsgType=geometry_msgs/PoseStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header Header;

  // MsgType=geometry_msgs/Pose
  SL_Bus_pathFollowingWithObstacle_Pose_3sg26g Pose;
} SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq;

#endif

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_rkSooZHJZnr3Dpfu1LNqfH

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_9SewJ4y3IXNs5GrZti8qkG

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef struct_tag_PMfBDzoakfdM9QAdfx2o6D
#define struct_tag_PMfBDzoakfdM9QAdfx2o6D

struct tag_PMfBDzoakfdM9QAdfx2o6D
{
  uint32_T f1[8];
};

#endif                                 //struct_tag_PMfBDzoakfdM9QAdfx2o6D

#ifndef typedef_cell_wrap_pathFollowingWithOb_T
#define typedef_cell_wrap_pathFollowingWithOb_T

typedef struct tag_PMfBDzoakfdM9QAdfx2o6D cell_wrap_pathFollowingWithOb_T;

#endif                                 //typedef_cell_wrap_pathFollowingWithOb_T

#ifndef struct_tag_xmgNtniH3stsQ6gIgN1s3G
#define struct_tag_xmgNtniH3stsQ6gIgN1s3G

struct tag_xmgNtniH3stsQ6gIgN1s3G
{
  real_T f1[2];
};

#endif                                 //struct_tag_xmgNtniH3stsQ6gIgN1s3G

#ifndef typedef_d_cell_wrap_pathFollowingWith_T
#define typedef_d_cell_wrap_pathFollowingWith_T

typedef struct tag_xmgNtniH3stsQ6gIgN1s3G d_cell_wrap_pathFollowingWith_T;

#endif                                 //typedef_d_cell_wrap_pathFollowingWith_T

#ifndef struct_tag_WCy1uYlL9XZwzea5ll6RTB
#define struct_tag_WCy1uYlL9XZwzea5ll6RTB

struct tag_WCy1uYlL9XZwzea5ll6RTB
{
  int32_T isInitialized;
  cell_wrap_pathFollowingWithOb_T inputVarSize[3];
  real_T NarrowOpeningThreshold;
  real_T DistanceLimits[2];
  real_T RobotRadius;
  real_T SafetyDistance;
  real_T MinTurningRadius;
  real_T TargetDirectionWeight;
  real_T CurrentDirectionWeight;
  real_T PreviousDirectionWeight;
  real_T HistogramThresholds[2];
  real_T PolarObstacleDensity[180];
  boolean_T BinaryHistogram[180];
  boolean_T MaskedHistogram[180];
  real_T PreviousDirection;
  real_T AngularSectorMidPoints[180];
  real_T AngularDifference;
  real_T AngularSectorStartPoints[180];
  real_T AngularLimits[2];
};

#endif                                 //struct_tag_WCy1uYlL9XZwzea5ll6RTB

#ifndef typedef_nav_slalgs_internal_VectorFie_T
#define typedef_nav_slalgs_internal_VectorFie_T

typedef struct tag_WCy1uYlL9XZwzea5ll6RTB nav_slalgs_internal_VectorFie_T;

#endif                                 //typedef_nav_slalgs_internal_VectorFie_T

#ifndef struct_tag_G8MUZSMSwhWaYtEAUFLeEF
#define struct_tag_G8MUZSMSwhWaYtEAUFLeEF

struct tag_G8MUZSMSwhWaYtEAUFLeEF
{
  d_cell_wrap_pathFollowingWith_T Defaults[2];
  d_cell_wrap_pathFollowingWith_T ParsedResults[2];
};

#endif                                 //struct_tag_G8MUZSMSwhWaYtEAUFLeEF

#ifndef typedef_c_robotics_core_internal_code_T
#define typedef_c_robotics_core_internal_code_T

typedef struct tag_G8MUZSMSwhWaYtEAUFLeEF c_robotics_core_internal_code_T;

#endif                                 //typedef_c_robotics_core_internal_code_T

#ifndef struct_tag_NtB9PqastpHu6EinuNXRl
#define struct_tag_NtB9PqastpHu6EinuNXRl

struct tag_NtB9PqastpHu6EinuNXRl
{
  int32_T isInitialized;
  cell_wrap_pathFollowingWithOb_T inputVarSize[2];
  real_T MaxAngularVelocity;
  real_T LookaheadDistance;
  real_T DesiredLinearVelocity;
  real_T ProjectionPoint[2];
  real_T ProjectionLineIndex;
  real_T LookaheadPoint[2];
  real_T LastPose[3];
  real_T WaypointsInternal[2];
};

#endif                                 //struct_tag_NtB9PqastpHu6EinuNXRl

#ifndef typedef_nav_slalgs_internal_PurePursu_T
#define typedef_nav_slalgs_internal_PurePursu_T

typedef struct tag_NtB9PqastpHu6EinuNXRl nav_slalgs_internal_PurePursu_T;

#endif                                 //typedef_nav_slalgs_internal_PurePursu_T

// Parameters (default storage)
typedef struct P_pathFollowingWithObstacleAvoidance_T_
  P_pathFollowingWithObstacleAvoidance_T;

// Forward declaration for rtModel
typedef struct tag_RTM_pathFollowingWithObstacleAvoidance_T
  RT_MODEL_pathFollowingWithObstacleAvoidance_T;

#endif                // RTW_HEADER_pathFollowingWithObstacleAvoidance_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
