//
// File: pathFollowingWithObstacleAvoidance.h
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
#ifndef RTW_HEADER_pathFollowingWithObstacleAvoidance_h_
#define RTW_HEADER_pathFollowingWithObstacleAvoidance_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "pathFollowingWithObstacleAvoidance_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  real_T candToSectDiff_data[49680];
  real_T tmp_data[49680];
  boolean_T validWeights_data[64800];
  boolean_T nearIdx_data[49680];
  real_T lowerVec_data[1080];
  real_T higherVec_data[1080];
  real_T lh_data[1080];
  real_T kalphaVec_data[1080];
  real_T lk_data[1080];
  real_T kh_data[1080];
  real_T kalpha[540];
  SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr In1;// '<S18>/In1'
  SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr b_varargout_2;
  real_T Angles[360];                  // '<S1>/MATLAB Function'
  real_T scan_InternalRanges_data[360];
  real_T scan_InternalAngles_data[360];
  real_T weightedRanges_data[360];
  real_T sinOfEnlargement_data[360];
  real_T enlargementAngle_data[360];
  real_T lowerAng_data[360];
  real_T tmp_data_m[360];
  real_T tmp_data_c[360];
  real_T objIn_InternalRanges_data[360];
  real_T objIn_InternalAngles_data[360];
  real_T tmp_data_k[360];
  real_T tmp_data_cx[360];
  real_T y_data[360];
  real_T validScan_InternalRanges_data[360];
  real_T validScan_InternalAngles_data[360];
  real_T DYj_data[360];
  real_T tmp_data_b[360];
  real_T tmp_data_p[360];
  real_T y[360];
  real_T candidateDirs_data[276];
  real_T candidateDirections_data[276];
  real_T cDiff_data[276];
  real_T b_data[276];
  real_T b_data_c[276];
  real_T targetDir_data[276];
  real_T tmp_data_f[276];
  real_T delta_data[276];
  real_T selectDir_data[276];
  real_T y_data_g[276];
  real_T theta_data[276];
  real_T b_z1_data[276];
  real_T tmp_data_g[276];
  real_T sectors_data[182];
  real_T angles_data[182];
  real_T changes[181];
  int32_T m_data[360];
  real32_T b_varargout_2_Ranges[360];
  real32_T b_varargout_2_Intensities[360];
  real_T obstacleDensity[180];
  int32_T td_data[276];
  real_T sectorSizes_data[91];
  real_T narrowDirs_data[91];
  real_T angles_data_m[91];
  real_T angles_data_n[91];
  real_T theta1_data[91];
  real_T b_y1_data[91];
  int32_T foundSectors_data[181];
  int32_T ii_data[181];
  int32_T md_data[91];
  int32_T rd_data[91];
  boolean_T validIndices_data[360];
  boolean_T validRangeLimitIndices_data[360];
  boolean_T validAngleLimitIndices_data[360];
  boolean_T g_data[360];
  boolean_T validIndices_data_p[360];
  boolean_T x_data[360];
  boolean_T blockedR_data[360];
  boolean_T blockedL_data[360];
  boolean_T freeDirs_data[276];
  boolean_T pos_data[276];
  boolean_T b_data_l[276];
  SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq b_varargout_2_j;
  uint8_T sd_data[180];
  uint8_T b_data_d[180];
  uint8_T c_data[180];
  boolean_T obj_data[180];
  SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header b_varargout_2_Header;
  c_robotics_core_internal_code_T parser;
  SL_Bus_pathFollowingWithObstacle_Pose_3sg26g b_varargout_2_g;
  SL_Bus_pathFollowingWithObstacle_Twist_omqbog BusAssignment;// '<S3>/Bus Assignment' 
  real_T x4[4];
  d_cell_wrap_pathFollowingWith_T parsedResults[2];
  char_T cv[28];
  real_T VectorConcatenate[3];         // '<S22>/Vector Concatenate'
  real_T dv[3];
  real_T kalpha_l[3];
  char_T cv1[18];
  real_T Reshape[2];                   // '<S9>/Reshape'
  real_T e_data[2];
  real_T obj[2];
  real_T parsedRangeLimits[2];
  real_T parsedAngleLimits[2];
  real_T obj_d[2];
  real_T waypoints_data[2];
  real_T lookaheadStartPt[2];
  real_T waypoints[2];
  real_T waypoints_d[2];
  real_T waypoints_l[2];
  real_T refPt[2];
  real_T X;
  real_T Y;
  real_T Ranges[360];                  // '<S1>/MATLAB Function'
  real_T c_data_n;
  real_T angMax;
  real_T delta1;
  real_T delta2;
  real_T Product;                      // '<S3>/Product'
  real_T fcn3;                         // '<S21>/fcn3'
  real_T VectorConcatenate_tmp;
  real_T VectorConcatenate_tmp_b;
  real_T VectorConcatenate_tmp_l;
  real_T VectorConcatenate_tmp_h;
  real_T target;
  real_T cVal;
  real_T nonNarrowDirs_data_tmp;
  real_T totalWeight;
  real_T q;
  real_T x;
  real_T phiR_data;
  real_T phiL_data;
  real_T obj_tmp;
  real_T minDistance;
  real_T dist;
  real_T overshootDist;
  real_T lookaheadIdx;
  real_T b;
  real_T lookaheadEndPt_idx_1;
  real_T alpha;
  real_T v12;
  int32_T c_size[2];
  int32_T e_size[2];
  int32_T sectors_size[2];
  int32_T sectorSizes_size[2];
  int32_T candidateDirs_size[2];
  int32_T candidateDirections_size[2];
  int32_T angles_size[2];
  int32_T angles_size_o[2];
  int32_T obj_size[2];
  int32_T b_size[2];
  int32_T targetDir_size[2];
  int32_T tmp_size[2];
  int32_T prevDir_size[2];
  int32_T delta_size[2];
  int32_T selectDir_size[2];
  int32_T y_size[2];
  int32_T theta_size[2];
  int32_T lowerVec_size[2];
  int32_T lh_size[2];
  int32_T kalphaVec_size[2];
  int32_T lk_size[2];
  int32_T kh_size[2];
  int32_T tmp_size_b[2];
  real32_T b_varargout_2_AngleMin;
  real32_T b_varargout_2_AngleMax;
  real32_T b_varargout_2_AngleIncrement;
  real32_T b_varargout_2_TimeIncrement;
  real32_T b_varargout_2_ScanTime;
  real32_T b_varargout_2_RangeMin;
  real32_T b_varargout_2_RangeMax;
  int32_T ia_data;
  int32_T jj;
  int32_T i;
  int32_T ia_size;
  int32_T ib_size;
  int32_T scan_InternalRanges_size;
  int32_T scan_InternalAngles_size;
  int32_T idx;
  int32_T b_ii;
  int32_T end;
  int32_T e_i;
  int32_T n;
  int32_T loop_ub;
  int32_T loop_ub_b;
  int32_T sinOfEnlargement_size;
  int32_T enlargementAngle_size;
  int32_T lowerAng_size;
  int32_T tmp_size_d;
  int32_T i_e;
  int32_T loop_ub_bj;
  int32_T validIndices_size;
  int32_T ii_data_j;
  int32_T k;
  int32_T idx_f;
  int32_T b_ii_a;
  int32_T validScan_InternalRanges_size;
  int32_T DYj_size;
  int32_T tmp_size_j;
  int32_T tmp_size_jz;
  int32_T obj_size_o;
  int32_T obj_size_n;
  int32_T blockedR_size_idx_0;
  uint32_T b_varargout_2_Ranges_SL_Info_Cu;
  uint32_T b_varargout_2_Ranges_SL_Info_Re;
  uint32_T b_varargout_2_Intensities_SL_In;
  uint32_T b_varargout_2_Intensities_SL__m;
  uint32_T i_data;
} B_pathFollowingWithObstacleAvoidance_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  nav_slalgs_internal_VectorFie_T obj; // '<S2>/Vector Field Histogram'
  nav_slalgs_internal_PurePursu_T obj_h;// '<S4>/Pure Pursuit'
  ros_slros_internal_block_Publ_T obj_k;// '<S16>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_e;// '<S7>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_p;// '<S6>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_n;// '<S5>/SourceBlock'
} DW_pathFollowingWithObstacleAvoidance_T;

// Parameters (default storage)
struct P_pathFollowingWithObstacleAvoidance_T_ {
  SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr Out1_Y0;// Computed Parameter: Out1_Y0
                                                               //  Referenced by: '<S18>/Out1'

  SL_Bus_pathFollowingWithObstacle_LaserScan_ftf6zr Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S5>/Constant'

  SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                                   //  Referenced by: '<S19>/Out1'

  SL_Bus_pathFollowingWithObstacle_PoseStamped_ngh7jq Constant_Value_n;// Computed Parameter: Constant_Value_n
                                                                      //  Referenced by: '<S6>/Constant'

  SL_Bus_pathFollowingWithObstacle_Pose_3sg26g Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                                            //  Referenced by: '<S20>/Out1'

  SL_Bus_pathFollowingWithObstacle_Pose_3sg26g Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                   //  Referenced by: '<S7>/Constant'

  SL_Bus_pathFollowingWithObstacle_Twist_omqbog Constant_Value_hx;// Computed Parameter: Constant_Value_hx
                                                                     //  Referenced by: '<S15>/Constant'

  real_T Ranges_Y0;                    // Computed Parameter: Ranges_Y0
                                          //  Referenced by: '<S1>/Ranges'

  real_T Angles_Y0;                    // Computed Parameter: Angles_Y0
                                          //  Referenced by: '<S1>/Angles'

  real_T VectorFieldHistogram_DistanceLi[2];// Expression: [0.2, 4]
                                               //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_HistogramT[2];// Expression: [3, 10]
                                               //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_RobotRadiu;// Expression: 0.25
                                            //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_SafetyDist;// Expression: 0.20
                                            //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_MinTurning;// Expression: 0.05
                                            //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_TargetDire;// Expression: 5
                                            //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_CurrentDir;// Expression: 2
                                            //  Referenced by: '<S2>/Vector Field Histogram'

  real_T VectorFieldHistogram_PreviousDi;// Expression: 2
                                            //  Referenced by: '<S2>/Vector Field Histogram'

  real_T Constant_Value_f;             // Expression: 0
                                          //  Referenced by: '<S13>/Constant'

  real_T Constant1_Value;              // Expression: 0.2
                                          //  Referenced by: '<S13>/Constant1'

  real_T MaxAngularVelocity_Value;     // Expression: 1
                                          //  Referenced by: '<S12>/MaxAngularVelocity'

  real_T PurePursuit_DesiredLinearVeloci;// Expression: 0.2
                                            //  Referenced by: '<S4>/Pure Pursuit'

  real_T PurePursuit_MaxAngularVelocity;// Expression: 0.2
                                           //  Referenced by: '<S4>/Pure Pursuit'

  real_T PurePursuit_LookaheadDistance;// Expression: 2.0
                                          //  Referenced by: '<S4>/Pure Pursuit'

  real_T Constant_Value_c;             // Expression: 1
                                          //  Referenced by: '<S25>/Constant'

  real_T Constant_Value_a;             // Expression: 1
                                          //  Referenced by: '<S26>/Constant'

  real_T CurrentPose_Y0;               // Computed Parameter: CurrentPose_Y0
                                          //  Referenced by: '<S8>/CurrentPose'

  real_T Waypoints_Y0;                 // Computed Parameter: Waypoints_Y0
                                          //  Referenced by: '<S9>/Waypoints'

  real_T GoalRadius_Value;             // Expression: 0.5
                                          //  Referenced by: '<S4>/GoalRadius'

};

// Real-time Model Data Structure
struct tag_RTM_pathFollowingWithObstacleAvoidance_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_pathFollowingWithObstacleAvoidance_T
    pathFollowingWithObstacleAvoidance_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_pathFollowingWithObstacleAvoidance_T
    pathFollowingWithObstacleAvoidance_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_pathFollowingWithObstacleAvoidance_T
  pathFollowingWithObstacleAvoidance_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void pathFollowingWithObstacleAvoidance_initialize(void);
  extern void pathFollowingWithObstacleAvoidance_step(void);
  extern void pathFollowingWithObstacleAvoidance_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_pathFollowingWithObstacleAvoidance_T *const
    pathFollowingWithObstacleAvoidance_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S10>/Data Type Conversion' : Eliminate redundant data type conversion
//  Block '<S10>/Data Type Conversion1' : Eliminate redundant data type conversion


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'pathFollowingWithObstacleAvoidance'
//  '<S1>'   : 'pathFollowingWithObstacleAvoidance/Extract message data'
//  '<S2>'   : 'pathFollowingWithObstacleAvoidance/Obstacle avoidance'
//  '<S3>'   : 'pathFollowingWithObstacleAvoidance/Output'
//  '<S4>'   : 'pathFollowingWithObstacleAvoidance/Path following'
//  '<S5>'   : 'pathFollowingWithObstacleAvoidance/Subscribe'
//  '<S6>'   : 'pathFollowingWithObstacleAvoidance/Subscribe1'
//  '<S7>'   : 'pathFollowingWithObstacleAvoidance/Subscribe2'
//  '<S8>'   : 'pathFollowingWithObstacleAvoidance/Subsystem'
//  '<S9>'   : 'pathFollowingWithObstacleAvoidance/Subsystem1'
//  '<S10>'  : 'pathFollowingWithObstacleAvoidance/XY Graph'
//  '<S11>'  : 'pathFollowingWithObstacleAvoidance/Extract message data/MATLAB Function'
//  '<S12>'  : 'pathFollowingWithObstacleAvoidance/Obstacle avoidance/Path Following'
//  '<S13>'  : 'pathFollowingWithObstacleAvoidance/Obstacle avoidance/Recovery'
//  '<S14>'  : 'pathFollowingWithObstacleAvoidance/Obstacle avoidance/Path Following/Compute Angular Velocity'
//  '<S15>'  : 'pathFollowingWithObstacleAvoidance/Output/Blank Message'
//  '<S16>'  : 'pathFollowingWithObstacleAvoidance/Output/Publish1'
//  '<S17>'  : 'pathFollowingWithObstacleAvoidance/Path following/ Extract Goal'
//  '<S18>'  : 'pathFollowingWithObstacleAvoidance/Subscribe/Enabled Subsystem'
//  '<S19>'  : 'pathFollowingWithObstacleAvoidance/Subscribe1/Enabled Subsystem'
//  '<S20>'  : 'pathFollowingWithObstacleAvoidance/Subscribe2/Enabled Subsystem'
//  '<S21>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles'
//  '<S22>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Angle Calculation'
//  '<S23>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S24>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input'
//  '<S25>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem'
//  '<S26>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem1'
//  '<S27>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Angle Calculation/Protect asincos input/If Action Subsystem2'
//  '<S28>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S29>'  : 'pathFollowingWithObstacleAvoidance/Subsystem/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'

#endif                      // RTW_HEADER_pathFollowingWithObstacleAvoidance_h_

//
// File trailer for generated code.
//
// [EOF]
//
