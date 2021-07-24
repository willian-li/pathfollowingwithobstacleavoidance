//
// File: pathFollowingWithObstacleAvoidance.cpp
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
#include "pathFollowingWithObstacleAvoidance.h"
#include "pathFollowingWithObstacleAvoidance_private.h"

// Block signals (default storage)
B_pathFollowingWithObstacleAvoidance_T pathFollowingWithObstacleAvoidance_B;

// Block states (default storage)
DW_pathFollowingWithObstacleAvoidance_T pathFollowingWithObstacleAvoidance_DW;

// Real-time model
RT_MODEL_pathFollowingWithObstacleAvoidance_T
  pathFollowingWithObstacleAvoidance_M_ =
  RT_MODEL_pathFollowingWithObstacleAvoidance_T();
RT_MODEL_pathFollowingWithObstacleAvoidance_T *const
  pathFollowingWithObstacleAvoidance_M = &pathFollowingWithObstacleAvoidance_M_;

// Forward declaration for local functions
static void pathFollowing_SystemCore_step_i(boolean_T *varargout_1, real32_T
  *varargout_2_AngleMin, real32_T *varargout_2_AngleMax, real32_T
  *varargout_2_AngleIncrement, real32_T *varargout_2_TimeIncrement, real32_T
  *varargout_2_ScanTime, real32_T *varargout_2_RangeMin, real32_T
  *varargout_2_RangeMax, real32_T varargout_2_Ranges[360], uint32_T
  *varargout_2_Ranges_SL_Info_Curr, uint32_T *varargout_2_Ranges_SL_Info_Rece,
  real32_T varargout_2_Intensities[360], uint32_T
  *varargout_2_Intensities_SL_Info, uint32_T *varargout_2_Intensities_SL_In_0,
  SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header *varargout_2_Header);
static void pathFollowingWithObsta_wrapToPi(real_T theta[360]);
static void pathFollowingWithObstacl_sort_a(real_T x_data[], const int32_T
  x_size[2]);
static void pathFollowingWithObs_do_vectors(const real_T b_data[], const int32_T
  b_size[2], real_T c_data[], int32_T c_size[2], int32_T ia_data[], int32_T
  *ia_size, int32_T *ib_size);
static real_T pathFollowingWithObstacleA_norm(const real_T x[2]);
static void pathFollowin_closestPointOnLine(const real_T pt1[2], const real_T
  pt2[2], const real_T refPt[2], real_T closestPoint[2], real_T *distance);
static void pathFollow_PurePursuit_stepImpl(nav_slalgs_internal_PurePursu_T *obj,
  const real_T curPose[3], const real_T waypts[2], real_T *varargout_1, real_T
  *varargout_2, real_T *varargout_3);
static boolean_T pathFollowingWithObstac_isequal(const real_T varargin_1[2],
  const real_T varargin_2[2]);
static void VectorFieldHistogramBase_set_Di(nav_slalgs_internal_VectorFie_T *obj,
  const real_T val[2]);
static void VectorFieldHistogramBase_set_Hi(nav_slalgs_internal_VectorFie_T *obj,
  const real_T val[2]);
static real_T pathFollowingWithObsta_floatmod(real_T x);
static void pathFollowingWithObstacleAv_mod(const real_T x_data[], const int32_T
  *x_size, real_T r_data[], int32_T *r_size);
static void pathFollowingWit_wrapToPi_iygmu(real_T theta_data[], int32_T
  *theta_size);
static void VectorFieldHistogram_parseAndVa(const real_T ranges[360], const
  real_T angles[360], real_T target, real_T scan_InternalRanges_data[], int32_T *
  scan_InternalRanges_size, real_T scan_InternalAngles_data[], int32_T
  *scan_InternalAngles_size, boolean_T *scan_ContainsOnlyFiniteData, real_T
  *b_target);
static real_T pathFollowingWithOb_wrapToPi_iy(real_T theta);
static void pathFollowingWithObsta_isfinite(const real_T x_data[], boolean_T
  b_data[], int32_T *b_size);
static c_robotics_core_internal_code_T *NameValueParser_NameValueParser
  (c_robotics_core_internal_code_T *obj);
static void pathFollowingWithO_wrapToPi_iyg(const real_T theta[2], real_T
  b_theta[2]);
static void pathFollowingWithObstacleA_sort(const real_T x[2], real_T b_x[2]);
static boolean_T pathFollowingWithObstacleAv_all(const boolean_T x_data[], const
  int32_T *x_size);
static void pathFollowingW_nullAssignment_i(real_T x_data[], int32_T *x_size,
  const boolean_T idx_data[], const int32_T *idx_size);
static void pathFollowi_lidarScan_lidarScan(const real_T varargin_1_data[],
  const int32_T *varargin_1_size, const real_T varargin_2_data[], const int32_T *
  varargin_2_size, real_T obj_InternalRanges_data[], int32_T
  *obj_InternalRanges_size, real_T obj_InternalAngles_data[], int32_T
  *obj_InternalAngles_size, boolean_T *obj_ContainsOnlyFiniteData);
static void path_lidarScan_extractValidData(const real_T
  objIn_InternalRanges_data[], const int32_T *objIn_InternalRanges_size, const
  real_T objIn_InternalAngles_data[], const int32_T *objIn_InternalAngles_size,
  const boolean_T validIndices_data[], real_T objOut_InternalRanges_data[],
  int32_T *objOut_InternalRanges_size, real_T objOut_InternalAngles_data[],
  int32_T *objOut_InternalAngles_size, boolean_T *objOut_ContainsOnlyFiniteData);
static boolean_T p_lidarScan_removeInvalidData_i(real_T
  objIn_InternalRanges_data[], int32_T *objIn_InternalRanges_size, real_T
  objIn_InternalAngles_data[], int32_T *objIn_InternalAngles_size, boolean_T
  objIn_ContainsOnlyFiniteData, const real_T varargin_2[2]);
static boolean_T pathFollowingWithObst_isequal_i(const real_T
  varargin_1_InternalRanges_data[], const int32_T
  *varargin_1_InternalRanges_size, const real_T varargin_1_InternalAngles_data[],
  const int32_T *varargin_1_InternalAngles_size, boolean_T
  varargin_1_ContainsOnlyFiniteDa, const real_T varargin_2_InternalRanges_data[],
  const int32_T *varargin_2_InternalRanges_size, const real_T
  varargin_2_InternalAngles_data[], const int32_T
  *varargin_2_InternalAngles_size, boolean_T varargin_2_ContainsOnlyFiniteDa);
static void pathFollowingWithObstacleA_asin(const real_T x_data[], const int32_T
  *x_size, real_T b_x_data[], int32_T *b_x_size);
static void pathFollowingWithObstacleAv_cos(const real_T x_data[], const int32_T
  *x_size, real_T b_x_data[], int32_T *b_x_size);
static void pathFollowingWithObstacleAv_sin(const real_T x_data[], const int32_T
  *x_size, real_T b_x_data[], int32_T *b_x_size);
static void pathFollowingWithObstacle_cross(const real_T a_data[], const int32_T
  a_size[2], const real_T b_data[], real_T c_data[], int32_T c_size[2]);
static void pathFollowingWithObstacl_repmat(const real_T a[3], real_T varargin_1,
  real_T b_data[], int32_T b_size[2]);
static void pathFollowingWithObstacl_sign_i(real_T x_data[], const int32_T
  *x_size);
static void pathFollowingWithObstacleAv_abs(const real_T x_data[], const int32_T
  *x_size, real_T y_data[], int32_T *y_size);
static void pathFollowingWithObstacle_histc(const real_T X_data[], const int32_T
  *X_size, const real_T edges[180], real_T N[180], real_T BIN_data[], int32_T
  *BIN_size);
static void VectorFieldHistogramBase_buildP(nav_slalgs_internal_VectorFie_T *obj,
  const real_T scan_InternalRanges_data[], const int32_T
  *scan_InternalRanges_size, const real_T scan_InternalAngles_data[], const
  int32_T *scan_InternalAngles_size, boolean_T scan_ContainsOnlyFiniteData);
static void VectorFieldHistogramBase_buildB(nav_slalgs_internal_VectorFie_T *obj);
static void pathFollowingWithObstacle_power(const real_T a_data[], const int32_T
  *a_size, real_T y_data[], int32_T *y_size);
static void pathFollowingWithObstacl_sqrt_i(real_T x_data[], const int32_T
  *x_size);
static void VectorFieldHistogramBase_buildM(nav_slalgs_internal_VectorFie_T *obj,
  const real_T scan_InternalRanges_data[], const int32_T
  *scan_InternalRanges_size, const real_T scan_InternalAngles_data[], const
  int32_T *scan_InternalAngles_size, boolean_T scan_ContainsOnlyFiniteData);
static void pathFollowingWithObstacleA_diff(const real_T x[182], real_T y[181]);
static boolean_T pathFollowingWithObstacleAv_any(const real_T x[181]);
static void pathFollowingWithObstacl_diff_i(const real_T x_data[], const int32_T
  x_size[2], real_T y_data[], int32_T y_size[2]);
static void pathFollowingWithObstacle_mod_i(const real_T x_data[], const int32_T
  x_size[2], real_T r_data[], int32_T r_size[2]);
static void pathFollowingWith_wrapToPi_iygm(const real_T theta_data[], const
  int32_T theta_size[2], real_T b_theta_data[], int32_T b_theta_size[2]);
static void pathFollowingWithO_bisectAngles(real_T theta1_data[], int32_T
  theta1_size[2], real_T theta2_data[], const int32_T theta2_size[2], real_T
  bisect_data[], int32_T bisect_size[2]);
static void pathFollowingWithObstacl_bsxfun(const real_T a[180], const real_T
  b_data[], const int32_T *b_size, real_T c_data[], int32_T c_size[2]);
static void pathFollowingWithObstacle_abs_i(const real_T x_data[], const int32_T
  x_size[2], real_T y_data[], int32_T y_size[2]);
static void pathFollowingWithObsta_bsxfun_i(const real_T a_data[], const int32_T
  a_size[2], const real_T b_data[], const int32_T *b_size, real_T c_data[],
  int32_T c_size[2]);
static boolean_T pathFollowingWithObstacle_any_i(const boolean_T x_data[], const
  int32_T x_size[2]);
static void VectorFieldHistogramBase_localC(const real_T candidateDir_data[],
  const real_T selectDir_data[], const int32_T selectDir_size[2], real_T
  cost_data[], int32_T cost_size[2]);
static void VectorFieldHistogramBase_comput(const
  nav_slalgs_internal_VectorFie_T *obj, const real_T c_data[], const int32_T
  c_size[2], real_T targetDir, real_T prevDir, real_T cost_data[], int32_T
  cost_size[2]);
static real_T VectorFieldHistogramBase_select(nav_slalgs_internal_VectorFie_T
  *obj, real_T targetDir);
static real_T VectorFieldHistogramBase_stepIm(nav_slalgs_internal_VectorFie_T
  *obj, const real_T varargin_1[360], const real_T varargin_2[360], real_T
  varargin_3);
static real_T pathFollowingWi_SystemCore_step(nav_slalgs_internal_VectorFie_T
  *obj, const real_T varargin_1[360], const real_T varargin_2[360], real_T
  varargin_3);
static void matlabCodegenHandle_matlabCod_i(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void pathFollowingWithObsta_linspace(real_T d1, real_T d2, real_T y[180]);
static void VectorFieldHistogramBase_setupI(nav_slalgs_internal_VectorFie_T *obj);
static void pathFollowingW_SystemCore_setup(nav_slalgs_internal_VectorFie_T *obj);
static void pathFollowing_SystemCore_step_i(boolean_T *varargout_1, real32_T
  *varargout_2_AngleMin, real32_T *varargout_2_AngleMax, real32_T
  *varargout_2_AngleIncrement, real32_T *varargout_2_TimeIncrement, real32_T
  *varargout_2_ScanTime, real32_T *varargout_2_RangeMin, real32_T
  *varargout_2_RangeMax, real32_T varargout_2_Ranges[360], uint32_T
  *varargout_2_Ranges_SL_Info_Curr, uint32_T *varargout_2_Ranges_SL_Info_Rece,
  real32_T varargout_2_Intensities[360], uint32_T
  *varargout_2_Intensities_SL_Info, uint32_T *varargout_2_Intensities_SL_In_0,
  SL_Bus_pathFollowingWithObstacleAvoidance_std_msgs_Header *varargout_2_Header)
{
  *varargout_1 = Sub_pathFollowingWithObstacleAvoidance_1.getLatestMessage
    (&pathFollowingWithObstacleAvoidance_B.b_varargout_2);
  *varargout_2_AngleMin =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.AngleMin;
  *varargout_2_AngleMax =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.AngleMax;
  *varargout_2_AngleIncrement =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.AngleIncrement;
  *varargout_2_TimeIncrement =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.TimeIncrement;
  *varargout_2_ScanTime =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.ScanTime;
  *varargout_2_RangeMin =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.RangeMin;
  *varargout_2_RangeMax =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.RangeMax;
  *varargout_2_Ranges_SL_Info_Curr =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.Ranges_SL_Info.CurrentLength;
  *varargout_2_Ranges_SL_Info_Rece =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.Ranges_SL_Info.ReceivedLength;
  memcpy(&varargout_2_Ranges[0],
         &pathFollowingWithObstacleAvoidance_B.b_varargout_2.Ranges[0], 360U *
         sizeof(real32_T));
  memcpy(&varargout_2_Intensities[0],
         &pathFollowingWithObstacleAvoidance_B.b_varargout_2.Intensities[0],
         360U * sizeof(real32_T));
  *varargout_2_Intensities_SL_Info =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.Intensities_SL_Info.CurrentLength;
  *varargout_2_Intensities_SL_In_0 =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.Intensities_SL_Info.ReceivedLength;
  *varargout_2_Header =
    pathFollowingWithObstacleAvoidance_B.b_varargout_2.Header;
}

// Function for MATLAB Function: '<S1>/MATLAB Function'
static void pathFollowingWithObsta_wrapToPi(real_T theta[360])
{
  int32_T k;
  real_T r;
  boolean_T rEQ0;
  real_T q;
  boolean_T exitg1;
  for (k = 0; k < 360; k++) {
    pathFollowingWithObstacleAvoidance_B.y[k] = fabs(theta[k]);
  }

  rEQ0 = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 360)) {
    if (!(pathFollowingWithObstacleAvoidance_B.y[k] > 3.1415926535897931)) {
      k++;
    } else {
      rEQ0 = true;
      exitg1 = true;
    }
  }

  if (rEQ0) {
    for (k = 0; k < 360; k++) {
      theta[k] += 3.1415926535897931;
      if (rtIsNaN(theta[k])) {
        r = (rtNaN);
      } else if (rtIsInf(theta[k])) {
        r = (rtNaN);
      } else if (theta[k] == 0.0) {
        r = 0.0;
      } else {
        r = fmod(theta[k], 6.2831853071795862);
        rEQ0 = (r == 0.0);
        if (!rEQ0) {
          q = fabs(theta[k] / 6.2831853071795862);
          rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
        }

        if (rEQ0) {
          r = 0.0;
        } else {
          if (theta[k] < 0.0) {
            r += 6.2831853071795862;
          }
        }
      }

      if ((r == 0.0) && (theta[k] > 0.0)) {
        r = 6.2831853071795862;
      }

      theta[k] = r - 3.1415926535897931;
    }
  }
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Function for MATLAB Function: '<S4>/ Extract Goal'
static void pathFollowingWithObstacl_sort_a(real_T x_data[], const int32_T
  x_size[2])
{
  int32_T n;
  int32_T ib;
  int8_T perm[4];
  int32_T k;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  real_T tmp;
  real_T tmp_0;
  if (x_size[1] != 0) {
    n = x_size[1] - 1;
    pathFollowingWithObstacleAvoidance_B.x4[0] = 0.0;
    pathFollowingWithObstacleAvoidance_B.x4[1] = 0.0;
    pathFollowingWithObstacleAvoidance_B.x4[2] = 0.0;
    pathFollowingWithObstacleAvoidance_B.x4[3] = 0.0;
    ib = 0;
    for (k = 0; k <= n; k++) {
      ib++;
      pathFollowingWithObstacleAvoidance_B.x4[ib - 1] = x_data[k];
      if (ib == 4) {
        if (pathFollowingWithObstacleAvoidance_B.x4[0] <=
            pathFollowingWithObstacleAvoidance_B.x4[1]) {
          ib = 1;
          i2 = 2;
        } else {
          ib = 2;
          i2 = 1;
        }

        if (pathFollowingWithObstacleAvoidance_B.x4[2] <=
            pathFollowingWithObstacleAvoidance_B.x4[3]) {
          i3 = 3;
          i4 = 4;
        } else {
          i3 = 4;
          i4 = 3;
        }

        tmp = pathFollowingWithObstacleAvoidance_B.x4[ib - 1];
        tmp_0 = pathFollowingWithObstacleAvoidance_B.x4[i3 - 1];
        if (tmp <= tmp_0) {
          tmp = pathFollowingWithObstacleAvoidance_B.x4[i2 - 1];
          if (tmp <= tmp_0) {
            perm[0] = static_cast<int8_T>(ib);
            perm[1] = static_cast<int8_T>(i2);
            perm[2] = static_cast<int8_T>(i3);
            perm[3] = static_cast<int8_T>(i4);
          } else if (tmp <= pathFollowingWithObstacleAvoidance_B.x4[i4 - 1]) {
            perm[0] = static_cast<int8_T>(ib);
            perm[1] = static_cast<int8_T>(i3);
            perm[2] = static_cast<int8_T>(i2);
            perm[3] = static_cast<int8_T>(i4);
          } else {
            perm[0] = static_cast<int8_T>(ib);
            perm[1] = static_cast<int8_T>(i3);
            perm[2] = static_cast<int8_T>(i4);
            perm[3] = static_cast<int8_T>(i2);
          }
        } else {
          tmp_0 = pathFollowingWithObstacleAvoidance_B.x4[i4 - 1];
          if (tmp <= tmp_0) {
            if (pathFollowingWithObstacleAvoidance_B.x4[i2 - 1] <= tmp_0) {
              perm[0] = static_cast<int8_T>(i3);
              perm[1] = static_cast<int8_T>(ib);
              perm[2] = static_cast<int8_T>(i2);
              perm[3] = static_cast<int8_T>(i4);
            } else {
              perm[0] = static_cast<int8_T>(i3);
              perm[1] = static_cast<int8_T>(ib);
              perm[2] = static_cast<int8_T>(i4);
              perm[3] = static_cast<int8_T>(i2);
            }
          } else {
            perm[0] = static_cast<int8_T>(i3);
            perm[1] = static_cast<int8_T>(i4);
            perm[2] = static_cast<int8_T>(ib);
            perm[3] = static_cast<int8_T>(i2);
          }
        }

        x_data[k - 3] = pathFollowingWithObstacleAvoidance_B.x4[perm[0] - 1];
        x_data[k - 2] = pathFollowingWithObstacleAvoidance_B.x4[perm[1] - 1];
        x_data[0] = pathFollowingWithObstacleAvoidance_B.x4[perm[2] - 1];
        x_data[k] = pathFollowingWithObstacleAvoidance_B.x4[perm[3] - 1];
        ib = 0;
      }
    }

    if (ib > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      switch (ib) {
       case 1:
        perm[0] = 1;
        break;

       case 2:
        if (pathFollowingWithObstacleAvoidance_B.x4[0] <=
            pathFollowingWithObstacleAvoidance_B.x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
        break;

       default:
        if (pathFollowingWithObstacleAvoidance_B.x4[0] <=
            pathFollowingWithObstacleAvoidance_B.x4[1]) {
          if (pathFollowingWithObstacleAvoidance_B.x4[1] <=
              pathFollowingWithObstacleAvoidance_B.x4[2]) {
            perm[0] = 1;
            perm[1] = 2;
            perm[2] = 3;
          } else if (pathFollowingWithObstacleAvoidance_B.x4[0] <=
                     pathFollowingWithObstacleAvoidance_B.x4[2]) {
            perm[0] = 1;
            perm[1] = 3;
            perm[2] = 2;
          } else {
            perm[0] = 3;
            perm[1] = 1;
            perm[2] = 2;
          }
        } else if (pathFollowingWithObstacleAvoidance_B.x4[0] <=
                   pathFollowingWithObstacleAvoidance_B.x4[2]) {
          perm[0] = 2;
          perm[1] = 1;
          perm[2] = 3;
        } else if (pathFollowingWithObstacleAvoidance_B.x4[1] <=
                   pathFollowingWithObstacleAvoidance_B.x4[2]) {
          perm[0] = 2;
          perm[1] = 3;
          perm[2] = 1;
        } else {
          perm[0] = 3;
          perm[1] = 2;
          perm[2] = 1;
        }
        break;
      }

      for (k = 0; k < ib; k++) {
        x_data[((n - ib) + k) + 1] =
          pathFollowingWithObstacleAvoidance_B.x4[perm[k] - 1];
      }
    }
  }
}

// Function for MATLAB Function: '<S4>/ Extract Goal'
static void pathFollowingWithObs_do_vectors(const real_T b_data[], const int32_T
  b_size[2], real_T c_data[], int32_T c_size[2], int32_T ia_data[], int32_T
  *ia_size, int32_T *ib_size)
{
  int32_T nc;
  int32_T nia;
  int32_T ialast;
  int32_T iblast;
  int32_T b_iblast;
  real_T absx;
  int32_T exponent;
  real_T b_absx;
  int32_T b_exponent;
  boolean_T exitg1;
  boolean_T exitg2;
  c_size[0] = 1;
  *ib_size = 0;
  nc = 0;
  nia = 0;
  ialast = 1;
  iblast = 0;
  exitg1 = false;
  while ((!exitg1) && (iblast + 1 <= b_size[1])) {
    b_iblast = iblast + 1;
    absx = b_data[iblast];
    exitg2 = false;
    while ((!exitg2) && (b_iblast < b_size[1])) {
      b_absx = fabs(absx / 2.0);
      if (b_absx <= 2.2250738585072014E-308) {
        b_absx = 4.94065645841247E-324;
      } else {
        frexp(b_absx, &b_exponent);
        b_absx = ldexp(1.0, b_exponent - 53);
      }

      if (fabs(absx - b_data[1]) < b_absx) {
        b_iblast = 2;
      } else {
        exitg2 = true;
      }
    }

    absx = fabs(b_data[iblast] / 2.0);
    if (absx <= 2.2250738585072014E-308) {
      absx = 4.94065645841247E-324;
    } else {
      frexp(absx, &exponent);
      absx = ldexp(1.0, exponent - 53);
    }

    if (fabs(b_data[iblast] - 1.0) < absx) {
      ialast = 2;
      exitg1 = true;
    } else {
      iblast = b_iblast;
    }
  }

  while (ialast <= 1) {
    nc++;
    nia++;
    c_data[0] = 1.0;
    ialast = 2;
  }

  if (1 > nia) {
    nia = -1;
  } else {
    nia = 0;
  }

  nia++;
  *ia_size = nia;
  if (0 <= nia - 1) {
    ia_data[0] = 1;
  }

  c_size[1] = (1 <= nc);
}

static real_T pathFollowingWithObstacleA_norm(const real_T x[2])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

static void pathFollowin_closestPointOnLine(const real_T pt1[2], const real_T
  pt2[2], const real_T refPt[2], real_T closestPoint[2], real_T *distance)
{
  boolean_T p;
  boolean_T p_0;
  int32_T b_k;
  real_T v12;
  boolean_T exitg1;
  p = false;
  p_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if ((pt1[b_k] == pt2[b_k]) || (rtIsNaN(pt1[b_k]) && rtIsNaN(pt2[b_k]))) {
      b_k++;
    } else {
      p_0 = false;
      exitg1 = true;
    }
  }

  if (p_0) {
    p = true;
  }

  if (p) {
    closestPoint[0] = pt1[0];
    pathFollowingWithObstacleAvoidance_B.refPt[0] = refPt[0] - pt1[0];
    closestPoint[1] = pt1[1];
    pathFollowingWithObstacleAvoidance_B.refPt[1] = refPt[1] - pt1[1];
    *distance = pathFollowingWithObstacleA_norm
      (pathFollowingWithObstacleAvoidance_B.refPt);
  } else {
    pathFollowingWithObstacleAvoidance_B.alpha = pt2[0] - pt1[0];
    pathFollowingWithObstacleAvoidance_B.v12 = (pt2[0] - refPt[0]) *
      pathFollowingWithObstacleAvoidance_B.alpha;
    v12 = pathFollowingWithObstacleAvoidance_B.alpha *
      pathFollowingWithObstacleAvoidance_B.alpha;
    pathFollowingWithObstacleAvoidance_B.alpha = pt2[1] - pt1[1];
    pathFollowingWithObstacleAvoidance_B.v12 += (pt2[1] - refPt[1]) *
      pathFollowingWithObstacleAvoidance_B.alpha;
    v12 += pathFollowingWithObstacleAvoidance_B.alpha *
      pathFollowingWithObstacleAvoidance_B.alpha;
    pathFollowingWithObstacleAvoidance_B.alpha =
      pathFollowingWithObstacleAvoidance_B.v12 / v12;
    p = (pathFollowingWithObstacleAvoidance_B.alpha > 1.0);
    p_0 = (pathFollowingWithObstacleAvoidance_B.alpha < 0.0);
    if (p) {
      pathFollowingWithObstacleAvoidance_B.v12 = pt1[0];
    } else if (p_0) {
      pathFollowingWithObstacleAvoidance_B.v12 = pt2[0];
    } else {
      pathFollowingWithObstacleAvoidance_B.v12 = (1.0 -
        pathFollowingWithObstacleAvoidance_B.alpha) * pt2[0] +
        pathFollowingWithObstacleAvoidance_B.alpha * pt1[0];
    }

    pathFollowingWithObstacleAvoidance_B.refPt[0] = refPt[0] -
      pathFollowingWithObstacleAvoidance_B.v12;
    closestPoint[0] = pathFollowingWithObstacleAvoidance_B.v12;
    if (p) {
      pathFollowingWithObstacleAvoidance_B.v12 = pt1[1];
    } else if (p_0) {
      pathFollowingWithObstacleAvoidance_B.v12 = pt2[1];
    } else {
      pathFollowingWithObstacleAvoidance_B.v12 = (1.0 -
        pathFollowingWithObstacleAvoidance_B.alpha) * pt2[1] +
        pathFollowingWithObstacleAvoidance_B.alpha * pt1[1];
    }

    pathFollowingWithObstacleAvoidance_B.refPt[1] = refPt[1] -
      pathFollowingWithObstacleAvoidance_B.v12;
    closestPoint[1] = pathFollowingWithObstacleAvoidance_B.v12;
    *distance = pathFollowingWithObstacleA_norm
      (pathFollowingWithObstacleAvoidance_B.refPt);
  }
}

static void pathFollow_PurePursuit_stepImpl(nav_slalgs_internal_PurePursu_T *obj,
  const real_T curPose[3], const real_T waypts[2], real_T *varargout_1, real_T
  *varargout_2, real_T *varargout_3)
{
  int32_T i;
  boolean_T searchFlag;
  boolean_T p;
  int32_T b_k;
  int32_T i_tmp;
  int32_T i_tmp_0;
  boolean_T exitg1;
  searchFlag = false;
  p = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if ((obj->WaypointsInternal[b_k] == waypts[b_k]) || (rtIsNaN
         (obj->WaypointsInternal[b_k]) && rtIsNaN(waypts[b_k]))) {
      b_k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
    searchFlag = true;
  }

  if (!searchFlag) {
    obj->WaypointsInternal[0] = waypts[0];
    obj->WaypointsInternal[1] = waypts[1];
    obj->ProjectionLineIndex = 0.0;
  }

  b_k = 0;
  if ((!rtIsNaN(waypts[0])) && (!rtIsNaN(waypts[1]))) {
    for (i = 0; i < 1; i++) {
      b_k++;
    }
  }

  for (i = 0; i < b_k; i++) {
    pathFollowingWithObstacleAvoidance_B.waypoints_data[i] = waypts[0];
    pathFollowingWithObstacleAvoidance_B.waypoints_data[i + b_k] = waypts[1];
  }

  if (b_k == 0) {
    *varargout_1 = 0.0;
    *varargout_2 = 0.0;
    *varargout_3 = 0.0;
  } else {
    searchFlag = false;
    if (obj->ProjectionLineIndex == 0.0) {
      searchFlag = true;
      obj->ProjectionPoint[0] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[0];
      obj->ProjectionPoint[1] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[b_k];
      obj->ProjectionLineIndex = 1.0;
    }

    if (b_k == 1) {
      obj->ProjectionPoint[0] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[0];
      obj->ProjectionPoint[1] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[b_k];
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[0];
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[b_k];
    } else {
      i = static_cast<int32_T>(obj->ProjectionLineIndex + 1.0);
      pathFollowingWithObstacleAvoidance_B.waypoints[0] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[i - 1];
      pathFollowingWithObstacleAvoidance_B.waypoints[1] =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[(i + b_k) - 1];
      for (i = 0; i < 2; i++) {
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[i] =
          obj->ProjectionPoint[i];
      }

      pathFollowin_closestPointOnLine
        (pathFollowingWithObstacleAvoidance_B.lookaheadStartPt,
         pathFollowingWithObstacleAvoidance_B.waypoints, &curPose[0],
         obj->ProjectionPoint, &pathFollowingWithObstacleAvoidance_B.minDistance);
      i = static_cast<int32_T>(obj->ProjectionLineIndex + 1.0);
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] =
        obj->ProjectionPoint[0] -
        pathFollowingWithObstacleAvoidance_B.waypoints_data[i - 1];
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] =
        obj->ProjectionPoint[1] -
        pathFollowingWithObstacleAvoidance_B.waypoints_data[(i + b_k) - 1];
      pathFollowingWithObstacleAvoidance_B.dist =
        pathFollowingWithObstacleA_norm
        (pathFollowingWithObstacleAvoidance_B.lookaheadStartPt);
      pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1 =
        obj->ProjectionLineIndex + 1.0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i <= static_cast<int32_T>((1.0 -
                pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1) +
               -1.0) - 1)) {
        pathFollowingWithObstacleAvoidance_B.overshootDist =
          pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1 +
          static_cast<real_T>(i);
        if ((!searchFlag) && (pathFollowingWithObstacleAvoidance_B.dist >
                              obj->LookaheadDistance)) {
          exitg1 = true;
        } else {
          i_tmp = static_cast<int32_T>
            (pathFollowingWithObstacleAvoidance_B.overshootDist);
          i_tmp_0 = static_cast<int32_T>
            (pathFollowingWithObstacleAvoidance_B.overshootDist + 1.0);
          pathFollowingWithObstacleAvoidance_B.waypoints[0] =
            pathFollowingWithObstacleAvoidance_B.waypoints_data[i_tmp - 1] -
            pathFollowingWithObstacleAvoidance_B.waypoints_data[i_tmp_0 - 1];
          pathFollowingWithObstacleAvoidance_B.waypoints_d[0] =
            pathFollowingWithObstacleAvoidance_B.waypoints_data[i_tmp - 1];
          pathFollowingWithObstacleAvoidance_B.waypoints_l[0] =
            pathFollowingWithObstacleAvoidance_B.waypoints_data[i_tmp_0 - 1];
          pathFollowingWithObstacleAvoidance_B.waypoints[1] =
            pathFollowingWithObstacleAvoidance_B.waypoints_data[(i_tmp + b_k) -
            1] - pathFollowingWithObstacleAvoidance_B.waypoints_data[(i_tmp_0 +
            b_k) - 1];
          pathFollowingWithObstacleAvoidance_B.waypoints_d[1] =
            pathFollowingWithObstacleAvoidance_B.waypoints_data[(i_tmp + b_k) -
            1];
          pathFollowingWithObstacleAvoidance_B.waypoints_l[1] =
            pathFollowingWithObstacleAvoidance_B.waypoints_data[(i_tmp_0 + b_k)
            - 1];
          pathFollowingWithObstacleAvoidance_B.dist +=
            pathFollowingWithObstacleA_norm
            (pathFollowingWithObstacleAvoidance_B.waypoints);
          pathFollowin_closestPointOnLine
            (pathFollowingWithObstacleAvoidance_B.waypoints_d,
             pathFollowingWithObstacleAvoidance_B.waypoints_l, &curPose[0],
             pathFollowingWithObstacleAvoidance_B.lookaheadStartPt,
             &pathFollowingWithObstacleAvoidance_B.lookaheadIdx);
          if (pathFollowingWithObstacleAvoidance_B.lookaheadIdx <
              pathFollowingWithObstacleAvoidance_B.minDistance) {
            pathFollowingWithObstacleAvoidance_B.minDistance =
              pathFollowingWithObstacleAvoidance_B.lookaheadIdx;
            obj->ProjectionPoint[0] =
              pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0];
            obj->ProjectionPoint[1] =
              pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1];
            obj->ProjectionLineIndex =
              pathFollowingWithObstacleAvoidance_B.overshootDist;
          }

          i++;
        }
      }

      i = static_cast<int32_T>(obj->ProjectionLineIndex + 1.0);
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] =
        obj->ProjectionPoint[0] -
        pathFollowingWithObstacleAvoidance_B.waypoints_data[i - 1];
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] =
        obj->ProjectionPoint[1] -
        pathFollowingWithObstacleAvoidance_B.waypoints_data[(i + b_k) - 1];
      pathFollowingWithObstacleAvoidance_B.dist =
        pathFollowingWithObstacleA_norm
        (pathFollowingWithObstacleAvoidance_B.lookaheadStartPt);
      i = static_cast<int32_T>(obj->ProjectionLineIndex + 1.0);
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] =
        obj->ProjectionPoint[0];
      pathFollowingWithObstacleAvoidance_B.minDistance =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[i - 1];
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] =
        obj->ProjectionPoint[1];
      pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1 =
        pathFollowingWithObstacleAvoidance_B.waypoints_data[(i + b_k) - 1];
      pathFollowingWithObstacleAvoidance_B.overshootDist =
        pathFollowingWithObstacleAvoidance_B.dist - obj->LookaheadDistance;
      pathFollowingWithObstacleAvoidance_B.lookaheadIdx =
        obj->ProjectionLineIndex;
      while ((pathFollowingWithObstacleAvoidance_B.overshootDist < 0.0) &&
             (pathFollowingWithObstacleAvoidance_B.lookaheadIdx < -1.0)) {
        pathFollowingWithObstacleAvoidance_B.lookaheadIdx++;
        i = static_cast<int32_T>
          (pathFollowingWithObstacleAvoidance_B.lookaheadIdx);
        i_tmp = static_cast<int32_T>
          (pathFollowingWithObstacleAvoidance_B.lookaheadIdx + 1.0);
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] =
          pathFollowingWithObstacleAvoidance_B.waypoints_data[i - 1];
        pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1 =
          pathFollowingWithObstacleAvoidance_B.waypoints_data[i_tmp - 1];
        pathFollowingWithObstacleAvoidance_B.waypoints[0] =
          pathFollowingWithObstacleAvoidance_B.waypoints_data[i - 1] -
          pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1;
        pathFollowingWithObstacleAvoidance_B.minDistance =
          pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1;
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] =
          pathFollowingWithObstacleAvoidance_B.waypoints_data[(i + b_k) - 1];
        pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1 =
          pathFollowingWithObstacleAvoidance_B.waypoints_data[(i_tmp + b_k) - 1];
        pathFollowingWithObstacleAvoidance_B.waypoints[1] =
          pathFollowingWithObstacleAvoidance_B.waypoints_data[(i + b_k) - 1] -
          pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1;
        pathFollowingWithObstacleAvoidance_B.dist +=
          pathFollowingWithObstacleA_norm
          (pathFollowingWithObstacleAvoidance_B.waypoints);
        pathFollowingWithObstacleAvoidance_B.overshootDist =
          pathFollowingWithObstacleAvoidance_B.dist - obj->LookaheadDistance;
      }

      pathFollowingWithObstacleAvoidance_B.waypoints_data[0] =
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] -
        pathFollowingWithObstacleAvoidance_B.minDistance;
      pathFollowingWithObstacleAvoidance_B.waypoints_data[1] =
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] -
        pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1;
      pathFollowingWithObstacleAvoidance_B.dist =
        pathFollowingWithObstacleAvoidance_B.overshootDist /
        pathFollowingWithObstacleA_norm
        (pathFollowingWithObstacleAvoidance_B.waypoints_data);
      if (pathFollowingWithObstacleAvoidance_B.dist > 0.0) {
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] = (1.0 -
          pathFollowingWithObstacleAvoidance_B.dist) *
          pathFollowingWithObstacleAvoidance_B.minDistance +
          pathFollowingWithObstacleAvoidance_B.dist *
          pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0];
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] = (1.0 -
          pathFollowingWithObstacleAvoidance_B.dist) *
          pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1 +
          pathFollowingWithObstacleAvoidance_B.dist *
          pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1];
      } else {
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0] =
          pathFollowingWithObstacleAvoidance_B.minDistance;
        pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1] =
          pathFollowingWithObstacleAvoidance_B.lookaheadEndPt_idx_1;
      }
    }

    obj->LookaheadPoint[0] =
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[0];
    obj->LookaheadPoint[1] =
      pathFollowingWithObstacleAvoidance_B.lookaheadStartPt[1];
    *varargout_3 = rt_atan2d_snf(obj->LookaheadPoint[1] - curPose[1],
      obj->LookaheadPoint[0] - curPose[0]) - curPose[2];
    if (fabs(*varargout_3) > 3.1415926535897931) {
      if (rtIsNaN(*varargout_3 + 3.1415926535897931) || rtIsInf(*varargout_3 +
           3.1415926535897931)) {
        pathFollowingWithObstacleAvoidance_B.dist = (rtNaN);
      } else if (*varargout_3 + 3.1415926535897931 == 0.0) {
        pathFollowingWithObstacleAvoidance_B.dist = 0.0;
      } else {
        pathFollowingWithObstacleAvoidance_B.dist = fmod(*varargout_3 +
          3.1415926535897931, 6.2831853071795862);
        searchFlag = (pathFollowingWithObstacleAvoidance_B.dist == 0.0);
        if (!searchFlag) {
          pathFollowingWithObstacleAvoidance_B.minDistance = fabs((*varargout_3
            + 3.1415926535897931) / 6.2831853071795862);
          searchFlag = !(fabs(pathFollowingWithObstacleAvoidance_B.minDistance -
                              floor
                              (pathFollowingWithObstacleAvoidance_B.minDistance
                               + 0.5)) > 2.2204460492503131E-16 *
                         pathFollowingWithObstacleAvoidance_B.minDistance);
        }

        if (searchFlag) {
          pathFollowingWithObstacleAvoidance_B.dist = 0.0;
        } else {
          if (*varargout_3 + 3.1415926535897931 < 0.0) {
            pathFollowingWithObstacleAvoidance_B.dist += 6.2831853071795862;
          }
        }
      }

      pathFollowingWithObstacleAvoidance_B.b =
        pathFollowingWithObstacleAvoidance_B.dist;
      if ((pathFollowingWithObstacleAvoidance_B.dist == 0.0) && (*varargout_3 +
           3.1415926535897931 > 0.0)) {
        pathFollowingWithObstacleAvoidance_B.b = 6.2831853071795862;
      }

      *varargout_3 = pathFollowingWithObstacleAvoidance_B.b - 3.1415926535897931;
    }

    *varargout_2 = 2.0 * sin(*varargout_3) / obj->LookaheadDistance;
    if (fabs(fabs(*varargout_3) - 3.1415926535897931) < 1.4901161193847656E-8) {
      if (*varargout_2 < 0.0) {
        *varargout_2 = -1.0;
      } else if (*varargout_2 > 0.0) {
        *varargout_2 = 1.0;
      } else if (*varargout_2 == 0.0) {
        *varargout_2 = 0.0;
      } else {
        *varargout_2 = (rtNaN);
      }
    }

    if (fabs(*varargout_2) > obj->MaxAngularVelocity) {
      if (*varargout_2 < 0.0) {
        pathFollowingWithObstacleAvoidance_B.dist = -1.0;
      } else if (*varargout_2 > 0.0) {
        pathFollowingWithObstacleAvoidance_B.dist = 1.0;
      } else if (*varargout_2 == 0.0) {
        pathFollowingWithObstacleAvoidance_B.dist = 0.0;
      } else {
        pathFollowingWithObstacleAvoidance_B.dist = (rtNaN);
      }

      *varargout_2 = pathFollowingWithObstacleAvoidance_B.dist *
        obj->MaxAngularVelocity;
    }

    *varargout_1 = obj->DesiredLinearVelocity;
    obj->LastPose[0] = curPose[0];
    obj->LastPose[1] = curPose[1];
    obj->LastPose[2] = curPose[2];
    if (rtIsNaN(*varargout_3)) {
      *varargout_3 = 0.0;
    }
  }
}

static boolean_T pathFollowingWithObstac_isequal(const real_T varargin_1[2],
  const real_T varargin_2[2])
{
  boolean_T p;
  boolean_T p_0;
  int32_T b_k;
  boolean_T exitg1;
  p = false;
  p_0 = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if (!(varargin_1[b_k] == varargin_2[b_k])) {
      p_0 = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (p_0) {
    p = true;
  }

  return p;
}

static void VectorFieldHistogramBase_set_Di(nav_slalgs_internal_VectorFie_T *obj,
  const real_T val[2])
{
  if ((val[0] > val[1]) || (rtIsNaN(val[0]) && (!rtIsNaN(val[1])))) {
    obj->DistanceLimits[0] = val[1];
  } else {
    obj->DistanceLimits[0] = val[0];
  }

  if ((val[0] < val[1]) || (rtIsNaN(val[0]) && (!rtIsNaN(val[1])))) {
    obj->DistanceLimits[1] = val[1];
  } else {
    obj->DistanceLimits[1] = val[0];
  }
}

static void VectorFieldHistogramBase_set_Hi(nav_slalgs_internal_VectorFie_T *obj,
  const real_T val[2])
{
  if ((val[0] > val[1]) || (rtIsNaN(val[0]) && (!rtIsNaN(val[1])))) {
    obj->HistogramThresholds[0] = val[1];
  } else {
    obj->HistogramThresholds[0] = val[0];
  }

  if ((val[0] < val[1]) || (rtIsNaN(val[0]) && (!rtIsNaN(val[1])))) {
    obj->HistogramThresholds[1] = val[1];
  } else {
    obj->HistogramThresholds[1] = val[0];
  }
}

static real_T pathFollowingWithObsta_floatmod(real_T x)
{
  real_T r;
  boolean_T rEQ0;
  if (rtIsNaN(x) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = fmod(x, 6.2831853071795862);
    rEQ0 = (r == 0.0);
    if (!rEQ0) {
      pathFollowingWithObstacleAvoidance_B.q = fabs(x / 6.2831853071795862);
      rEQ0 = !(fabs(pathFollowingWithObstacleAvoidance_B.q - floor
                    (pathFollowingWithObstacleAvoidance_B.q + 0.5)) >
               2.2204460492503131E-16 * pathFollowingWithObstacleAvoidance_B.q);
    }

    if (rEQ0) {
      r = 0.0;
    } else {
      if (x < 0.0) {
        r += 6.2831853071795862;
      }
    }
  }

  return r;
}

static void pathFollowingWithObstacleAv_mod(const real_T x_data[], const int32_T
  *x_size, real_T r_data[], int32_T *r_size)
{
  int32_T nx;
  int32_T b_k;
  *r_size = *x_size;
  nx = *x_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    r_data[b_k] = pathFollowingWithObsta_floatmod(x_data[b_k]);
  }
}

static void pathFollowingWit_wrapToPi_iygmu(real_T theta_data[], int32_T
  *theta_size)
{
  boolean_T y;
  int32_T nx;
  int32_T b_k;
  boolean_T exitg1;
  nx = *theta_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    pathFollowingWithObstacleAvoidance_B.y_data[b_k] = fabs(theta_data[b_k]);
  }

  nx = *theta_size;
  for (b_k = 0; b_k < nx; b_k++) {
    pathFollowingWithObstacleAvoidance_B.x_data[b_k] =
      (pathFollowingWithObstacleAvoidance_B.y_data[b_k] > 3.1415926535897931);
  }

  y = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k + 1 <= *theta_size)) {
    if (!pathFollowingWithObstacleAvoidance_B.x_data[b_k]) {
      b_k++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  if (y) {
    nx = *theta_size;
    for (b_k = 0; b_k < nx; b_k++) {
      pathFollowingWithObstacleAvoidance_B.y_data[b_k] = theta_data[b_k] +
        3.1415926535897931;
    }

    pathFollowingWithObstacleAv_mod(pathFollowingWithObstacleAvoidance_B.y_data,
      &nx, theta_data, theta_size);
    nx = *theta_size;
    for (b_k = 0; b_k < nx; b_k++) {
      pathFollowingWithObstacleAvoidance_B.x_data[b_k] = (theta_data[b_k] == 0.0);
    }

    nx = *theta_size - 1;
    for (b_k = 0; b_k <= nx; b_k++) {
      if (pathFollowingWithObstacleAvoidance_B.x_data[b_k] &&
          (pathFollowingWithObstacleAvoidance_B.y_data[b_k] > 0.0)) {
        theta_data[b_k] = 6.2831853071795862;
      }
    }

    nx = *theta_size;
    for (b_k = 0; b_k < nx; b_k++) {
      theta_data[b_k] -= 3.1415926535897931;
    }
  }
}

static void VectorFieldHistogram_parseAndVa(const real_T ranges[360], const
  real_T angles[360], real_T target, real_T scan_InternalRanges_data[], int32_T *
  scan_InternalRanges_size, real_T scan_InternalAngles_data[], int32_T
  *scan_InternalAngles_size, boolean_T *scan_ContainsOnlyFiniteData, real_T
  *b_target)
{
  *b_target = target;
  *scan_ContainsOnlyFiniteData = false;
  *scan_InternalRanges_size = 360;
  *scan_InternalAngles_size = 360;
  memcpy(&scan_InternalRanges_data[0], &ranges[0], 360U * sizeof(real_T));
  memcpy(&scan_InternalAngles_data[0], &angles[0], 360U * sizeof(real_T));
  pathFollowingWit_wrapToPi_iygmu(scan_InternalAngles_data,
    scan_InternalAngles_size);
}

static real_T pathFollowingWithOb_wrapToPi_iy(real_T theta)
{
  real_T b_theta;
  real_T thetaWrap;
  b_theta = theta;
  if (fabs(theta) > 3.1415926535897931) {
    thetaWrap = pathFollowingWithObsta_floatmod(theta + 3.1415926535897931);
    if ((thetaWrap == 0.0) && (theta + 3.1415926535897931 > 0.0)) {
      thetaWrap = 6.2831853071795862;
    }

    b_theta = thetaWrap - 3.1415926535897931;
  }

  return b_theta;
}

static void pathFollowingWithObsta_isfinite(const real_T x_data[], boolean_T
  b_data[], int32_T *b_size)
{
  int32_T i;
  *b_size = 360;
  for (i = 0; i < 360; i++) {
    b_data[i] = ((!rtIsInf(x_data[i])) && (!rtIsNaN(x_data[i])));
  }
}

static c_robotics_core_internal_code_T *NameValueParser_NameValueParser
  (c_robotics_core_internal_code_T *obj)
{
  c_robotics_core_internal_code_T *b_obj;
  d_cell_wrap_pathFollowingWith_T c;
  d_cell_wrap_pathFollowingWith_T d;
  c.f1[0] = 0.0;
  d.f1[0] = -3.1415926535897931;
  c.f1[1] = (rtInf);
  d.f1[1] = 3.1415926535897931;
  b_obj = obj;
  obj->Defaults[0] = c;
  obj->Defaults[1] = d;
  return b_obj;
}

static void pathFollowingWithO_wrapToPi_iyg(const real_T theta[2], real_T
  b_theta[2])
{
  real_T y[2];
  boolean_T y_0;
  boolean_T x[2];
  int32_T b_k;
  real_T b_theta_0;
  boolean_T exitg1;
  b_theta[0] = theta[0];
  b_theta[1] = theta[1];
  x[0] = (fabs(theta[0]) > 3.1415926535897931);
  x[1] = (fabs(theta[1]) > 3.1415926535897931);
  y_0 = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= 1)) {
    if (!x[b_k]) {
      b_k++;
    } else {
      y_0 = true;
      exitg1 = true;
    }
  }

  if (y_0) {
    y[0] = theta[0] + 3.1415926535897931;
    y[1] = theta[1] + 3.1415926535897931;
    b_theta[0] = pathFollowingWithObsta_floatmod(theta[0] + 3.1415926535897931);
    b_theta[1] = pathFollowingWithObsta_floatmod(theta[1] + 3.1415926535897931);
    for (b_k = 0; b_k < 2; b_k++) {
      b_theta_0 = b_theta[b_k];
      if ((b_theta[b_k] == 0.0) && (y[b_k] > 0.0)) {
        b_theta_0 = 6.2831853071795862;
      }

      b_theta[b_k] = b_theta_0;
    }

    b_theta[0] -= 3.1415926535897931;
    b_theta[1] -= 3.1415926535897931;
  }
}

static void pathFollowingWithObstacleA_sort(const real_T x[2], real_T b_x[2])
{
  b_x[0] = x[0];
  b_x[1] = x[1];
  if ((x[0] <= x[1]) || rtIsNaN(x[1])) {
  } else {
    b_x[0] = x[1];
    b_x[1] = x[0];
  }
}

static boolean_T pathFollowingWithObstacleAv_all(const boolean_T x_data[], const
  int32_T *x_size)
{
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= *x_size)) {
    if (!x_data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void pathFollowingW_nullAssignment_i(real_T x_data[], int32_T *x_size,
  const boolean_T idx_data[], const int32_T *idx_size)
{
  int32_T nxin;
  int32_T nxout;
  int32_T k0;
  int32_T b_k;
  nxin = *x_size - 1;
  nxout = 0;
  k0 = *idx_size - 1;
  for (b_k = 0; b_k <= k0; b_k++) {
    nxout += idx_data[b_k];
  }

  nxout = *x_size - nxout;
  k0 = -1;
  for (b_k = 0; b_k <= nxin; b_k++) {
    if ((b_k + 1 > *idx_size) || (!idx_data[b_k])) {
      k0++;
      x_data[k0] = x_data[b_k];
    }
  }

  if (1 > nxout) {
    nxout = 0;
  }

  *x_size = nxout;
}

static void pathFollowi_lidarScan_lidarScan(const real_T varargin_1_data[],
  const int32_T *varargin_1_size, const real_T varargin_2_data[], const int32_T *
  varargin_2_size, real_T obj_InternalRanges_data[], int32_T
  *obj_InternalRanges_size, real_T obj_InternalAngles_data[], int32_T
  *obj_InternalAngles_size, boolean_T *obj_ContainsOnlyFiniteData)
{
  *obj_ContainsOnlyFiniteData = false;
  *obj_InternalRanges_size = *varargin_1_size;
  if (0 <= *varargin_1_size - 1) {
    memcpy(&obj_InternalRanges_data[0], &varargin_1_data[0], *varargin_1_size *
           sizeof(real_T));
  }

  *obj_InternalAngles_size = *varargin_2_size;
  if (0 <= *varargin_2_size - 1) {
    memcpy(&obj_InternalAngles_data[0], &varargin_2_data[0], *varargin_2_size *
           sizeof(real_T));
  }

  pathFollowingWit_wrapToPi_iygmu(obj_InternalAngles_data,
    obj_InternalAngles_size);
}

static void path_lidarScan_extractValidData(const real_T
  objIn_InternalRanges_data[], const int32_T *objIn_InternalRanges_size, const
  real_T objIn_InternalAngles_data[], const int32_T *objIn_InternalAngles_size,
  const boolean_T validIndices_data[], real_T objOut_InternalRanges_data[],
  int32_T *objOut_InternalRanges_size, real_T objOut_InternalAngles_data[],
  int32_T *objOut_InternalAngles_size, boolean_T *objOut_ContainsOnlyFiniteData)
{
  int32_T loop_ub;
  int32_T tmp_size;
  int32_T tmp_size_0;
  int32_T validIndices_size;
  tmp_size = *objIn_InternalRanges_size;
  if (0 <= *objIn_InternalRanges_size - 1) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.tmp_data_k[0],
           &objIn_InternalRanges_data[0], *objIn_InternalRanges_size * sizeof
           (real_T));
  }

  validIndices_size = 360;
  for (loop_ub = 0; loop_ub < 360; loop_ub++) {
    pathFollowingWithObstacleAvoidance_B.validIndices_data_p[loop_ub] =
      !validIndices_data[loop_ub];
  }

  pathFollowingW_nullAssignment_i
    (pathFollowingWithObstacleAvoidance_B.tmp_data_k, &tmp_size,
     pathFollowingWithObstacleAvoidance_B.validIndices_data_p,
     &validIndices_size);
  tmp_size_0 = *objIn_InternalAngles_size;
  if (0 <= *objIn_InternalAngles_size - 1) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.tmp_data_cx[0],
           &objIn_InternalAngles_data[0], *objIn_InternalAngles_size * sizeof
           (real_T));
  }

  validIndices_size = 360;
  for (loop_ub = 0; loop_ub < 360; loop_ub++) {
    pathFollowingWithObstacleAvoidance_B.validIndices_data_p[loop_ub] =
      !validIndices_data[loop_ub];
  }

  pathFollowingW_nullAssignment_i
    (pathFollowingWithObstacleAvoidance_B.tmp_data_cx, &tmp_size_0,
     pathFollowingWithObstacleAvoidance_B.validIndices_data_p,
     &validIndices_size);
  pathFollowi_lidarScan_lidarScan
    (pathFollowingWithObstacleAvoidance_B.tmp_data_k, &tmp_size,
     pathFollowingWithObstacleAvoidance_B.tmp_data_cx, &tmp_size_0,
     objOut_InternalRanges_data, objOut_InternalRanges_size,
     objOut_InternalAngles_data, objOut_InternalAngles_size,
     objOut_ContainsOnlyFiniteData);
}

static boolean_T p_lidarScan_removeInvalidData_i(real_T
  objIn_InternalRanges_data[], int32_T *objIn_InternalRanges_size, real_T
  objIn_InternalAngles_data[], int32_T *objIn_InternalAngles_size, boolean_T
  objIn_ContainsOnlyFiniteData, const real_T varargin_2[2])
{
  boolean_T objOut_ContainsOnlyFiniteData;
  int32_T validRangeLimitIndices_size;
  int32_T objIn_InternalAngles_size_0;
  static real_T tmp[2] = { 0.0, 0.0 };

  tmp[1U] = (rtInf);
  if (!objIn_ContainsOnlyFiniteData) {
    pathFollowingWithObsta_isfinite(objIn_InternalRanges_data,
      pathFollowingWithObstacleAvoidance_B.validIndices_data,
      &pathFollowingWithObstacleAvoidance_B.validIndices_size);
    pathFollowingWithObsta_isfinite(objIn_InternalAngles_data,
      pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data,
      &validRangeLimitIndices_size);
    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e < 360;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.validIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
        =
        (pathFollowingWithObstacleAvoidance_B.validIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
         &&
         pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]);
    }
  } else {
    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalRanges_size;
    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e <
         pathFollowingWithObstacleAvoidance_B.loop_ub_bj;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.validIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
        = true;
    }
  }

  for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
       pathFollowingWithObstacleAvoidance_B.i_e < 360;
       pathFollowingWithObstacleAvoidance_B.i_e++) {
    pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
      = true;
    pathFollowingWithObstacleAvoidance_B.validAngleLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
      = true;
  }

  NameValueParser_NameValueParser(&pathFollowingWithObstacleAvoidance_B.parser);
  pathFollowingWithObstacleAvoidance_B.parsedResults[0].f1[0] = varargin_2[0];
  pathFollowingWithObstacleAvoidance_B.parsedResults[0].f1[1] = varargin_2[1];
  pathFollowingWithObstacleAvoidance_B.parsedResults[1] =
    pathFollowingWithObstacleAvoidance_B.parser.Defaults[1];
  pathFollowingWithObstacleAvoidance_B.parser.ParsedResults[0] =
    pathFollowingWithObstacleAvoidance_B.parsedResults[0];
  pathFollowingWithObstacleAvoidance_B.parser.ParsedResults[1] =
    pathFollowingWithObstacleAvoidance_B.parsedResults[1];
  pathFollowingWithObstacleAvoidance_B.parsedRangeLimits[0] =
    pathFollowingWithObstacleAvoidance_B.parser.ParsedResults[0].f1[0];
  pathFollowingWithObstacleAvoidance_B.parsedRangeLimits[1] =
    pathFollowingWithObstacleAvoidance_B.parser.ParsedResults[0].f1[1];
  pathFollowingWithObstacleAvoidance_B.parsedAngleLimits[0] =
    pathFollowingWithObstacleAvoidance_B.parser.ParsedResults[1].f1[0];
  pathFollowingWithObstacleAvoidance_B.parsedAngleLimits[1] =
    pathFollowingWithObstacleAvoidance_B.parser.ParsedResults[1].f1[1];
  if (!pathFollowingWithObstac_isequal
      (pathFollowingWithObstacleAvoidance_B.parsedRangeLimits, tmp)) {
    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalRanges_size;
    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e <
         pathFollowingWithObstacleAvoidance_B.loop_ub_bj;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
        = (objIn_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.i_e] >=
           pathFollowingWithObstacleAvoidance_B.parsedRangeLimits[0]);
    }

    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalRanges_size;
    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e <
         pathFollowingWithObstacleAvoidance_B.loop_ub_bj;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.g_data[pathFollowingWithObstacleAvoidance_B.i_e]
        = (objIn_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.i_e] <=
           pathFollowingWithObstacleAvoidance_B.parsedRangeLimits[1]);
    }

    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e < 360;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
        =
        (pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
         &&
         pathFollowingWithObstacleAvoidance_B.g_data[pathFollowingWithObstacleAvoidance_B.i_e]);
    }
  }

  pathFollowingWithObstacleAvoidance_B.parsedRangeLimits[0] =
    -3.1415926535897931;
  pathFollowingWithObstacleAvoidance_B.parsedRangeLimits[1] = 3.1415926535897931;
  if (!pathFollowingWithObstac_isequal
      (pathFollowingWithObstacleAvoidance_B.parsedAngleLimits,
       pathFollowingWithObstacleAvoidance_B.parsedRangeLimits)) {
    pathFollowingWithO_wrapToPi_iyg
      (pathFollowingWithObstacleAvoidance_B.parsedAngleLimits,
       pathFollowingWithObstacleAvoidance_B.parsedRangeLimits);
    pathFollowingWithObstacleA_sort
      (pathFollowingWithObstacleAvoidance_B.parsedRangeLimits,
       pathFollowingWithObstacleAvoidance_B.parsedAngleLimits);
    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalAngles_size;
    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e <
         pathFollowingWithObstacleAvoidance_B.loop_ub_bj;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.validAngleLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
        = (objIn_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.i_e] >=
           pathFollowingWithObstacleAvoidance_B.parsedAngleLimits[0]);
    }

    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalAngles_size;
    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e <
         pathFollowingWithObstacleAvoidance_B.loop_ub_bj;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.g_data[pathFollowingWithObstacleAvoidance_B.i_e]
        = (objIn_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.i_e] <=
           pathFollowingWithObstacleAvoidance_B.parsedAngleLimits[1]);
    }

    for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
         pathFollowingWithObstacleAvoidance_B.i_e < 360;
         pathFollowingWithObstacleAvoidance_B.i_e++) {
      pathFollowingWithObstacleAvoidance_B.validAngleLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
        =
        (pathFollowingWithObstacleAvoidance_B.validAngleLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
         &&
         pathFollowingWithObstacleAvoidance_B.g_data[pathFollowingWithObstacleAvoidance_B.i_e]);
    }
  }

  pathFollowingWithObstacleAvoidance_B.validIndices_size = 360;
  for (pathFollowingWithObstacleAvoidance_B.i_e = 0;
       pathFollowingWithObstacleAvoidance_B.i_e < 360;
       pathFollowingWithObstacleAvoidance_B.i_e++) {
    pathFollowingWithObstacleAvoidance_B.validIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
      =
      (pathFollowingWithObstacleAvoidance_B.validIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
       &&
       pathFollowingWithObstacleAvoidance_B.validRangeLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]
       &&
       pathFollowingWithObstacleAvoidance_B.validAngleLimitIndices_data[pathFollowingWithObstacleAvoidance_B.i_e]);
  }

  if (!pathFollowingWithObstacleAv_all
      (pathFollowingWithObstacleAvoidance_B.validIndices_data,
       &pathFollowingWithObstacleAvoidance_B.validIndices_size)) {
    validRangeLimitIndices_size = *objIn_InternalRanges_size;
    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalRanges_size;
    if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub_bj - 1) {
      memcpy(&pathFollowingWithObstacleAvoidance_B.objIn_InternalRanges_data[0],
             &objIn_InternalRanges_data[0],
             pathFollowingWithObstacleAvoidance_B.loop_ub_bj * sizeof(real_T));
    }

    objIn_InternalAngles_size_0 = *objIn_InternalAngles_size;
    pathFollowingWithObstacleAvoidance_B.loop_ub_bj = *objIn_InternalAngles_size;
    if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub_bj - 1) {
      memcpy(&pathFollowingWithObstacleAvoidance_B.objIn_InternalAngles_data[0],
             &objIn_InternalAngles_data[0],
             pathFollowingWithObstacleAvoidance_B.loop_ub_bj * sizeof(real_T));
    }

    path_lidarScan_extractValidData
      (pathFollowingWithObstacleAvoidance_B.objIn_InternalRanges_data,
       &validRangeLimitIndices_size,
       pathFollowingWithObstacleAvoidance_B.objIn_InternalAngles_data,
       &objIn_InternalAngles_size_0,
       pathFollowingWithObstacleAvoidance_B.validIndices_data,
       objIn_InternalRanges_data, objIn_InternalRanges_size,
       objIn_InternalAngles_data, objIn_InternalAngles_size,
       &objOut_ContainsOnlyFiniteData);
    objOut_ContainsOnlyFiniteData = true;
  } else {
    objOut_ContainsOnlyFiniteData = true;
  }

  return objOut_ContainsOnlyFiniteData;
}

static boolean_T pathFollowingWithObst_isequal_i(const real_T
  varargin_1_InternalRanges_data[], const int32_T
  *varargin_1_InternalRanges_size, const real_T varargin_1_InternalAngles_data[],
  const int32_T *varargin_1_InternalAngles_size, boolean_T
  varargin_1_ContainsOnlyFiniteDa, const real_T varargin_2_InternalRanges_data[],
  const int32_T *varargin_2_InternalRanges_size, const real_T
  varargin_2_InternalAngles_data[], const int32_T
  *varargin_2_InternalAngles_size, boolean_T varargin_2_ContainsOnlyFiniteDa)
{
  boolean_T p;
  int32_T b_k;
  boolean_T p_0;
  boolean_T exitg1;
  p = false;
  p_0 = false;
  if (*varargin_1_InternalRanges_size == *varargin_2_InternalRanges_size) {
    p_0 = true;
  }

  if (p_0 && (*varargin_1_InternalRanges_size != 0) &&
      (*varargin_2_InternalRanges_size != 0)) {
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k <= *varargin_2_InternalRanges_size - 1)) {
      if (!(varargin_1_InternalRanges_data[b_k] ==
            varargin_2_InternalRanges_data[b_k])) {
        p_0 = false;
        exitg1 = true;
      } else {
        b_k++;
      }
    }
  }

  if (!p_0) {
  } else {
    p_0 = false;
    if (*varargin_1_InternalAngles_size == *varargin_2_InternalAngles_size) {
      p_0 = true;
    }

    if (p_0 && (*varargin_1_InternalAngles_size != 0) &&
        (*varargin_2_InternalAngles_size != 0)) {
      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k <= *varargin_2_InternalAngles_size - 1)) {
        if (!(varargin_1_InternalAngles_data[b_k] ==
              varargin_2_InternalAngles_data[b_k])) {
          p_0 = false;
          exitg1 = true;
        } else {
          b_k++;
        }
      }
    }

    if ((!p_0) || (varargin_1_ContainsOnlyFiniteDa !=
                   varargin_2_ContainsOnlyFiniteDa)) {
    } else {
      p = true;
    }
  }

  return p;
}

static void pathFollowingWithObstacleA_asin(const real_T x_data[], const int32_T
  *x_size, real_T b_x_data[], int32_T *b_x_size)
{
  int32_T nx;
  int32_T loop_ub;
  *b_x_size = *x_size;
  if (0 <= *x_size - 1) {
    memcpy(&b_x_data[0], &x_data[0], *x_size * sizeof(real_T));
  }

  nx = *x_size - 1;
  for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
    b_x_data[loop_ub] = asin(b_x_data[loop_ub]);
  }
}

static void pathFollowingWithObstacleAv_cos(const real_T x_data[], const int32_T
  *x_size, real_T b_x_data[], int32_T *b_x_size)
{
  int32_T nx;
  int32_T loop_ub;
  *b_x_size = *x_size;
  if (0 <= *x_size - 1) {
    memcpy(&b_x_data[0], &x_data[0], *x_size * sizeof(real_T));
  }

  nx = *x_size - 1;
  for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
    b_x_data[loop_ub] = cos(b_x_data[loop_ub]);
  }
}

static void pathFollowingWithObstacleAv_sin(const real_T x_data[], const int32_T
  *x_size, real_T b_x_data[], int32_T *b_x_size)
{
  int32_T nx;
  int32_T loop_ub;
  *b_x_size = *x_size;
  if (0 <= *x_size - 1) {
    memcpy(&b_x_data[0], &x_data[0], *x_size * sizeof(real_T));
  }

  nx = *x_size - 1;
  for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
    b_x_data[loop_ub] = sin(b_x_data[loop_ub]);
  }
}

static void pathFollowingWithObstacle_cross(const real_T a_data[], const int32_T
  a_size[2], const real_T b_data[], real_T c_data[], int32_T c_size[2])
{
  int32_T stride;
  int32_T stridem1;
  int32_T iNext;
  int32_T nHigh;
  int32_T iEnd;
  int32_T i2;
  int32_T i3;
  int32_T dim;
  int32_T k;
  real_T c_data_tmp;
  real_T c_data_tmp_0;
  boolean_T exitg1;
  c_size[0] = a_size[0];
  c_size[1] = 3;
  if (a_size[0] != 0) {
    dim = 0;
    stride = 1;
    exitg1 = false;
    while ((!exitg1) && (stride - 1 < 2)) {
      if (stride <= 2) {
        stridem1 = a_size[stride - 1];
      } else {
        stridem1 = 1;
      }

      if (stridem1 == 3) {
        dim = stride;
        exitg1 = true;
      } else {
        stride++;
      }
    }

    if (dim >= 2) {
      if (dim > 2) {
        stride = a_size[0] * 3;
      } else {
        stride = 1;
        for (stridem1 = 0; stridem1 < 1; stridem1++) {
          stride *= a_size[0];
        }
      }

      stridem1 = stride;
    } else {
      stride = 1;
      stridem1 = 1;
    }

    iNext = stride * 3;
    if (dim >= 2) {
      nHigh = 0;
    } else {
      nHigh = 1;
      for (k = dim + 1; k < 3; k++) {
        nHigh *= a_size[k - 1];
      }

      nHigh = (nHigh - 1) * iNext;
    }

    for (dim = 1; iNext < 0 ? dim >= nHigh + 1 : dim <= nHigh + 1; dim += iNext)
    {
      iEnd = (dim + stridem1) - 1;
      for (k = dim; k <= iEnd; k++) {
        i2 = (k + stride) - 1;
        i3 = i2 + stride;
        c_data[k - 1] = a_data[i2] * b_data[i3] - a_data[i3] * b_data[i2];
        c_data_tmp = a_data[k - 1];
        c_data_tmp_0 = b_data[k - 1];
        c_data[i2] = c_data_tmp_0 * a_data[i3] - c_data_tmp * b_data[i3];
        c_data[i3] = c_data_tmp * b_data[i2] - c_data_tmp_0 * a_data[i2];
      }
    }
  }
}

static void pathFollowingWithObstacl_repmat(const real_T a[3], real_T varargin_1,
  real_T b_data[], int32_T b_size[2])
{
  int32_T ibmat;
  int32_T b_jcol;
  int32_T b_itilerow;
  int32_T b_size_tmp;
  b_size_tmp = static_cast<int32_T>(varargin_1);
  b_size[0] = b_size_tmp;
  b_size[1] = 3;
  for (b_jcol = 0; b_jcol < 3; b_jcol++) {
    ibmat = b_jcol * b_size_tmp;
    for (b_itilerow = 0; b_itilerow < b_size_tmp; b_itilerow++) {
      b_data[ibmat + b_itilerow] = a[b_jcol];
    }
  }
}

static void pathFollowingWithObstacl_sign_i(real_T x_data[], const int32_T
  *x_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    if (x_data[b_k] < 0.0) {
      x_data[b_k] = -1.0;
    } else if (x_data[b_k] > 0.0) {
      x_data[b_k] = 1.0;
    } else if (x_data[b_k] == 0.0) {
      x_data[b_k] = 0.0;
    } else {
      x_data[b_k] = (rtNaN);
    }
  }
}

static void pathFollowingWithObstacleAv_abs(const real_T x_data[], const int32_T
  *x_size, real_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  *y_size = *x_size;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = fabs(x_data[b_k]);
  }
}

static void pathFollowingWithObstacle_histc(const real_T X_data[], const int32_T
  *X_size, const real_T edges[180], real_T N[180], real_T BIN_data[], int32_T
  *BIN_size)
{
  int32_T xind;
  int32_T c;
  int32_T low_i;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  int32_T b_idx_0;
  int32_T exitg1;
  memset(&N[0], 0, 180U * sizeof(real_T));
  b_idx_0 = *X_size;
  *BIN_size = *X_size;
  if (0 <= *X_size - 1) {
    memset(&BIN_data[0], 0, *X_size * sizeof(real_T));
  }

  xind = 0;
  do {
    exitg1 = 0;
    if (xind + 2 < 181) {
      if (!(edges[xind + 1] >= edges[xind])) {
        for (xind = 0; xind < 180; xind++) {
          N[xind] = (rtNaN);
        }

        *BIN_size = *X_size;
        for (xind = 0; xind < b_idx_0; xind++) {
          BIN_data[xind] = (rtNaN);
        }

        exitg1 = 1;
      } else {
        xind++;
      }
    } else {
      xind = 0;
      c = *X_size - 1;
      for (b_idx_0 = 0; b_idx_0 <= c; b_idx_0++) {
        low_i = 0;
        if (!rtIsNaN(X_data[xind])) {
          if ((X_data[xind] >= edges[0]) && (X_data[xind] < edges[179])) {
            low_i = 1;
            low_ip1 = 1;
            high_i = 180;
            while (high_i > low_ip1 + 1) {
              mid_i = (low_i + high_i) >> 1;
              if (X_data[xind] >= edges[mid_i - 1]) {
                low_i = mid_i;
                low_ip1 = mid_i;
              } else {
                high_i = mid_i;
              }
            }
          }

          if (X_data[xind] == edges[179]) {
            low_i = 180;
          }
        }

        if (low_i > 0) {
          N[low_i - 1]++;
        }

        BIN_data[xind] = low_i;
        xind++;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

static void VectorFieldHistogramBase_buildP(nav_slalgs_internal_VectorFie_T *obj,
  const real_T scan_InternalRanges_data[], const int32_T
  *scan_InternalRanges_size, const real_T scan_InternalAngles_data[], const
  int32_T *scan_InternalAngles_size, boolean_T scan_ContainsOnlyFiniteData)
{
  boolean_T validScan_ContainsOnlyFiniteDat;
  pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size =
    *scan_InternalRanges_size;
  pathFollowingWithObstacleAvoidance_B.loop_ub = *scan_InternalRanges_size;
  if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub - 1) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[0],
           &scan_InternalRanges_data[0],
           pathFollowingWithObstacleAvoidance_B.loop_ub * sizeof(real_T));
  }

  pathFollowingWithObstacleAvoidance_B.lowerAng_size = *scan_InternalAngles_size;
  pathFollowingWithObstacleAvoidance_B.loop_ub = *scan_InternalAngles_size;
  if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub - 1) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.lowerAng_data[0],
           &scan_InternalAngles_data[0],
           pathFollowingWithObstacleAvoidance_B.loop_ub * sizeof(real_T));
  }

  pathFollowingWithObstacleAvoidance_B.obj[0] = obj->DistanceLimits[0];
  pathFollowingWithObstacleAvoidance_B.obj[1] = obj->DistanceLimits[1];
  validScan_ContainsOnlyFiniteDat = p_lidarScan_removeInvalidData_i
    (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data,
     &pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size,
     pathFollowingWithObstacleAvoidance_B.lowerAng_data,
     &pathFollowingWithObstacleAvoidance_B.lowerAng_size,
     scan_ContainsOnlyFiniteData, pathFollowingWithObstacleAvoidance_B.obj);
  pathFollowingWithObstacleAvoidance_B.loop_ub =
    pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size;
  for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
       pathFollowingWithObstacleAvoidance_B.e_i <
       pathFollowingWithObstacleAvoidance_B.loop_ub;
       pathFollowingWithObstacleAvoidance_B.e_i++) {
    pathFollowingWithObstacleAvoidance_B.weightedRanges_data[pathFollowingWithObstacleAvoidance_B.e_i]
      = obj->DistanceLimits[1] -
      pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.e_i];
  }

  if (pathFollowingWithObst_isequal_i
      (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data,
       &pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size,
       pathFollowingWithObstacleAvoidance_B.lowerAng_data,
       &pathFollowingWithObstacleAvoidance_B.lowerAng_size,
       validScan_ContainsOnlyFiniteDat, scan_InternalRanges_data,
       scan_InternalRanges_size, scan_InternalAngles_data,
       scan_InternalAngles_size, scan_ContainsOnlyFiniteData)) {
    memset(&obj->PolarObstacleDensity[0], 0, 180U * sizeof(real_T));
  } else {
    pathFollowingWithObstacleAvoidance_B.x = obj->RobotRadius +
      obj->SafetyDistance;
    if (pathFollowingWithObstacleAvoidance_B.x == 0.0) {
      pathFollowingWithObstacle_histc
        (pathFollowingWithObstacleAvoidance_B.lowerAng_data,
         &pathFollowingWithObstacleAvoidance_B.lowerAng_size,
         obj->AngularSectorMidPoints,
         pathFollowingWithObstacleAvoidance_B.obstacleDensity,
         pathFollowingWithObstacleAvoidance_B.enlargementAngle_data,
         &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size);
      memset(&pathFollowingWithObstacleAvoidance_B.obstacleDensity[0], 0, 180U *
             sizeof(real_T));
      pathFollowingWithObstacleAvoidance_B.n =
        pathFollowingWithObstacleAvoidance_B.enlargementAngle_size - 1;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <=
           pathFollowingWithObstacleAvoidance_B.n;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.end = static_cast<int32_T>
          (pathFollowingWithObstacleAvoidance_B.enlargementAngle_data[pathFollowingWithObstacleAvoidance_B.e_i])
          - 1;
        pathFollowingWithObstacleAvoidance_B.obstacleDensity[pathFollowingWithObstacleAvoidance_B.end]
          +=
          pathFollowingWithObstacleAvoidance_B.weightedRanges_data[pathFollowingWithObstacleAvoidance_B.e_i];
      }

      memcpy(&obj->PolarObstacleDensity[0],
             &pathFollowingWithObstacleAvoidance_B.obstacleDensity[0], 180U *
             sizeof(real_T));
    } else {
      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.loop_ub;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.e_i]
          = pathFollowingWithObstacleAvoidance_B.x /
          pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.e_i];
      }

      pathFollowingWithObstacleAvoidance_B.end =
        pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size - 1;
      pathFollowingWithObstacleAvoidance_B.n = 0;
      pathFollowingWithObstacleAvoidance_B.loop_ub = 0;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <=
           pathFollowingWithObstacleAvoidance_B.end;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        if (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.e_i]
            >= 1.0) {
          pathFollowingWithObstacleAvoidance_B.n++;
          pathFollowingWithObstacleAvoidance_B.m_data[pathFollowingWithObstacleAvoidance_B.loop_ub]
            = pathFollowingWithObstacleAvoidance_B.e_i + 1;
          pathFollowingWithObstacleAvoidance_B.loop_ub++;
        }
      }

      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.n;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.m_data
          [pathFollowingWithObstacleAvoidance_B.e_i] - 1] = 0.99999999999999978;
      }

      pathFollowingWithObstacleA_asin
        (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data,
         &pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size,
         pathFollowingWithObstacleAvoidance_B.enlargementAngle_data,
         &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size);
      pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size =
        pathFollowingWithObstacleAvoidance_B.lowerAng_size;
      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.lowerAng_size;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.loop_ub;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.e_i]
          =
          pathFollowingWithObstacleAvoidance_B.lowerAng_data[pathFollowingWithObstacleAvoidance_B.e_i]
          + pathFollowingWithObstacleAvoidance_B.enlargementAngle_data[pathFollowingWithObstacleAvoidance_B.e_i];
      }

      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.lowerAng_size;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.loop_ub;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.lowerAng_data[pathFollowingWithObstacleAvoidance_B.e_i]
          -=
          pathFollowingWithObstacleAvoidance_B.enlargementAngle_data[pathFollowingWithObstacleAvoidance_B.e_i];
      }

      pathFollowingWithObstacleAv_cos
        (pathFollowingWithObstacleAvoidance_B.lowerAng_data,
         &pathFollowingWithObstacleAvoidance_B.lowerAng_size,
         pathFollowingWithObstacleAvoidance_B.tmp_data_m,
         &pathFollowingWithObstacleAvoidance_B.tmp_size_d);
      pathFollowingWithObstacleAv_sin
        (pathFollowingWithObstacleAvoidance_B.lowerAng_data,
         &pathFollowingWithObstacleAvoidance_B.lowerAng_size,
         pathFollowingWithObstacleAvoidance_B.tmp_data_c,
         &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size);
      pathFollowingWithObstacleAvoidance_B.lowerVec_size[0] =
        pathFollowingWithObstacleAvoidance_B.tmp_size_d;
      pathFollowingWithObstacleAvoidance_B.lowerVec_size[1] = 3;
      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.tmp_size_d;
      if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub - 1) {
        memcpy(&pathFollowingWithObstacleAvoidance_B.lowerVec_data[0],
               &pathFollowingWithObstacleAvoidance_B.tmp_data_m[0],
               pathFollowingWithObstacleAvoidance_B.loop_ub * sizeof(real_T));
      }

      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.enlargementAngle_size;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.loop_ub;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.lowerVec_data[pathFollowingWithObstacleAvoidance_B.e_i
          + pathFollowingWithObstacleAvoidance_B.tmp_size_d] =
          pathFollowingWithObstacleAvoidance_B.tmp_data_c[pathFollowingWithObstacleAvoidance_B.e_i];
      }

      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.lowerAng_size;
      if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub - 1) {
        memset
          (&pathFollowingWithObstacleAvoidance_B.lowerVec_data[pathFollowingWithObstacleAvoidance_B.tmp_size_d
           + pathFollowingWithObstacleAvoidance_B.enlargementAngle_size], 0,
           ((((pathFollowingWithObstacleAvoidance_B.loop_ub +
               pathFollowingWithObstacleAvoidance_B.tmp_size_d) +
              pathFollowingWithObstacleAvoidance_B.enlargementAngle_size) -
             pathFollowingWithObstacleAvoidance_B.tmp_size_d) -
            pathFollowingWithObstacleAvoidance_B.enlargementAngle_size) * sizeof
           (real_T));
      }

      pathFollowingWithObstacleAv_cos
        (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data,
         &pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size,
         pathFollowingWithObstacleAvoidance_B.tmp_data_m,
         &pathFollowingWithObstacleAvoidance_B.tmp_size_d);
      pathFollowingWithObstacleAv_sin
        (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data,
         &pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_size,
         pathFollowingWithObstacleAvoidance_B.tmp_data_c,
         &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size);
      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.tmp_size_d;
      if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub - 1) {
        memcpy(&pathFollowingWithObstacleAvoidance_B.higherVec_data[0],
               &pathFollowingWithObstacleAvoidance_B.tmp_data_m[0],
               pathFollowingWithObstacleAvoidance_B.loop_ub * sizeof(real_T));
      }

      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.enlargementAngle_size;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.loop_ub;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.higherVec_data[pathFollowingWithObstacleAvoidance_B.e_i
          + pathFollowingWithObstacleAvoidance_B.tmp_size_d] =
          pathFollowingWithObstacleAvoidance_B.tmp_data_c[pathFollowingWithObstacleAvoidance_B.e_i];
      }

      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.lowerAng_size;
      if (0 <= pathFollowingWithObstacleAvoidance_B.loop_ub - 1) {
        memset
          (&pathFollowingWithObstacleAvoidance_B.higherVec_data[pathFollowingWithObstacleAvoidance_B.tmp_size_d
           + pathFollowingWithObstacleAvoidance_B.enlargementAngle_size], 0,
           ((((pathFollowingWithObstacleAvoidance_B.loop_ub +
               pathFollowingWithObstacleAvoidance_B.tmp_size_d) +
              pathFollowingWithObstacleAvoidance_B.enlargementAngle_size) -
             pathFollowingWithObstacleAvoidance_B.tmp_size_d) -
            pathFollowingWithObstacleAvoidance_B.enlargementAngle_size) * sizeof
           (real_T));
      }

      pathFollowingWithObstacleAvoidance_B.end =
        pathFollowingWithObstacleAvoidance_B.lowerVec_size[0];
      pathFollowingWithObstacleAvoidance_B.loop_ub = 180 *
        pathFollowingWithObstacleAvoidance_B.lowerVec_size[0] - 1;
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <=
           pathFollowingWithObstacleAvoidance_B.loop_ub;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.validWeights_data[pathFollowingWithObstacleAvoidance_B.e_i]
          = true;
      }

      pathFollowingWithObstacle_cross
        (pathFollowingWithObstacleAvoidance_B.lowerVec_data,
         pathFollowingWithObstacleAvoidance_B.lowerVec_size,
         pathFollowingWithObstacleAvoidance_B.higherVec_data,
         pathFollowingWithObstacleAvoidance_B.lh_data,
         pathFollowingWithObstacleAvoidance_B.lh_size);
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i < 180;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.kalpha[pathFollowingWithObstacleAvoidance_B.e_i]
          = cos(obj->
                AngularSectorMidPoints[pathFollowingWithObstacleAvoidance_B.e_i]);
        pathFollowingWithObstacleAvoidance_B.kalpha[pathFollowingWithObstacleAvoidance_B.e_i
          + 180] = sin(obj->
                       AngularSectorMidPoints[pathFollowingWithObstacleAvoidance_B.e_i]);
        pathFollowingWithObstacleAvoidance_B.kalpha[pathFollowingWithObstacleAvoidance_B.e_i
          + 360] = 0.0;
      }

      pathFollowingWithObstacleAvoidance_B.loop_ub =
        pathFollowingWithObstacleAvoidance_B.lh_size[0];
      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i <
           pathFollowingWithObstacleAvoidance_B.end;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        pathFollowingWithObstacleAvoidance_B.m_data[pathFollowingWithObstacleAvoidance_B.e_i]
          = pathFollowingWithObstacleAvoidance_B.e_i;
      }

      for (pathFollowingWithObstacleAvoidance_B.n = 0;
           pathFollowingWithObstacleAvoidance_B.n < 180;
           pathFollowingWithObstacleAvoidance_B.n++) {
        pathFollowingWithObstacleAvoidance_B.kalpha_l[0] =
          pathFollowingWithObstacleAvoidance_B.kalpha[pathFollowingWithObstacleAvoidance_B.n];
        pathFollowingWithObstacleAvoidance_B.kalpha_l[1] =
          pathFollowingWithObstacleAvoidance_B.kalpha[pathFollowingWithObstacleAvoidance_B.n
          + 180];
        pathFollowingWithObstacleAvoidance_B.kalpha_l[2] =
          pathFollowingWithObstacleAvoidance_B.kalpha[pathFollowingWithObstacleAvoidance_B.n
          + 360];
        pathFollowingWithObstacl_repmat
          (pathFollowingWithObstacleAvoidance_B.kalpha_l, static_cast<real_T>
           (pathFollowingWithObstacleAvoidance_B.lowerVec_size[0]),
           pathFollowingWithObstacleAvoidance_B.kalphaVec_data,
           pathFollowingWithObstacleAvoidance_B.kalphaVec_size);
        pathFollowingWithObstacle_cross
          (pathFollowingWithObstacleAvoidance_B.lowerVec_data,
           pathFollowingWithObstacleAvoidance_B.lowerVec_size,
           pathFollowingWithObstacleAvoidance_B.kalphaVec_data,
           pathFollowingWithObstacleAvoidance_B.lk_data,
           pathFollowingWithObstacleAvoidance_B.lk_size);
        pathFollowingWithObstacle_cross
          (pathFollowingWithObstacleAvoidance_B.kalphaVec_data,
           pathFollowingWithObstacleAvoidance_B.kalphaVec_size,
           pathFollowingWithObstacleAvoidance_B.higherVec_data,
           pathFollowingWithObstacleAvoidance_B.kh_data,
           pathFollowingWithObstacleAvoidance_B.kh_size);
        pathFollowingWithObstacleAvoidance_B.loop_ub_b =
          pathFollowingWithObstacleAvoidance_B.lk_size[0];
        pathFollowingWithObstacleAvoidance_B.tmp_size_d =
          pathFollowingWithObstacleAvoidance_B.lk_size[0];
        for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
             pathFollowingWithObstacleAvoidance_B.e_i <
             pathFollowingWithObstacleAvoidance_B.loop_ub_b;
             pathFollowingWithObstacleAvoidance_B.e_i++) {
          pathFollowingWithObstacleAvoidance_B.tmp_data_m[pathFollowingWithObstacleAvoidance_B.e_i]
            = pathFollowingWithObstacleAvoidance_B.lk_data
            [(pathFollowingWithObstacleAvoidance_B.lk_size[0] << 1) +
            pathFollowingWithObstacleAvoidance_B.e_i];
        }

        pathFollowingWithObstacl_sign_i
          (pathFollowingWithObstacleAvoidance_B.tmp_data_m,
           &pathFollowingWithObstacleAvoidance_B.tmp_size_d);
        pathFollowingWithObstacleAvoidance_B.loop_ub_b =
          pathFollowingWithObstacleAvoidance_B.kh_size[0];
        pathFollowingWithObstacleAvoidance_B.enlargementAngle_size =
          pathFollowingWithObstacleAvoidance_B.kh_size[0];
        for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
             pathFollowingWithObstacleAvoidance_B.e_i <
             pathFollowingWithObstacleAvoidance_B.loop_ub_b;
             pathFollowingWithObstacleAvoidance_B.e_i++) {
          pathFollowingWithObstacleAvoidance_B.tmp_data_c[pathFollowingWithObstacleAvoidance_B.e_i]
            = pathFollowingWithObstacleAvoidance_B.kh_data
            [(pathFollowingWithObstacleAvoidance_B.kh_size[0] << 1) +
            pathFollowingWithObstacleAvoidance_B.e_i];
        }

        pathFollowingWithObstacl_sign_i
          (pathFollowingWithObstacleAvoidance_B.tmp_data_c,
           &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size);
        pathFollowingWithObstacleAvoidance_B.enlargementAngle_size =
          pathFollowingWithObstacleAvoidance_B.lh_size[0];
        for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
             pathFollowingWithObstacleAvoidance_B.e_i <
             pathFollowingWithObstacleAvoidance_B.loop_ub;
             pathFollowingWithObstacleAvoidance_B.e_i++) {
          pathFollowingWithObstacleAvoidance_B.enlargementAngle_data[pathFollowingWithObstacleAvoidance_B.e_i]
            = pathFollowingWithObstacleAvoidance_B.lh_data
            [(pathFollowingWithObstacleAvoidance_B.lh_size[0] << 1) +
            pathFollowingWithObstacleAvoidance_B.e_i];
        }

        pathFollowingWithObstacl_sign_i
          (pathFollowingWithObstacleAvoidance_B.enlargementAngle_data,
           &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size);
        pathFollowingWithObstacleAvoidance_B.enlargementAngle_size =
          pathFollowingWithObstacleAvoidance_B.tmp_size_d;
        pathFollowingWithObstacleAvoidance_B.loop_ub_b =
          pathFollowingWithObstacleAvoidance_B.tmp_size_d;
        for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
             pathFollowingWithObstacleAvoidance_B.e_i <
             pathFollowingWithObstacleAvoidance_B.loop_ub_b;
             pathFollowingWithObstacleAvoidance_B.e_i++) {
          pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data[pathFollowingWithObstacleAvoidance_B.e_i]
            =
            (pathFollowingWithObstacleAvoidance_B.tmp_data_m[pathFollowingWithObstacleAvoidance_B.e_i]
             + pathFollowingWithObstacleAvoidance_B.tmp_data_c[pathFollowingWithObstacleAvoidance_B.e_i])
            + pathFollowingWithObstacleAvoidance_B.enlargementAngle_data[pathFollowingWithObstacleAvoidance_B.e_i];
        }

        pathFollowingWithObstacleAv_abs
          (pathFollowingWithObstacleAvoidance_B.sinOfEnlargement_data,
           &pathFollowingWithObstacleAvoidance_B.enlargementAngle_size,
           pathFollowingWithObstacleAvoidance_B.tmp_data_m,
           &pathFollowingWithObstacleAvoidance_B.tmp_size_d);
        for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
             pathFollowingWithObstacleAvoidance_B.e_i <
             pathFollowingWithObstacleAvoidance_B.end;
             pathFollowingWithObstacleAvoidance_B.e_i++) {
          pathFollowingWithObstacleAvoidance_B.validWeights_data[pathFollowingWithObstacleAvoidance_B.n
            + 180 *
            pathFollowingWithObstacleAvoidance_B.m_data[pathFollowingWithObstacleAvoidance_B.e_i]]
            =
            (pathFollowingWithObstacleAvoidance_B.tmp_data_m[pathFollowingWithObstacleAvoidance_B.e_i]
             > 1.0);
        }
      }

      for (pathFollowingWithObstacleAvoidance_B.e_i = 0;
           pathFollowingWithObstacleAvoidance_B.e_i < 180;
           pathFollowingWithObstacleAvoidance_B.e_i++) {
        obj->PolarObstacleDensity[pathFollowingWithObstacleAvoidance_B.e_i] =
          0.0;
        for (pathFollowingWithObstacleAvoidance_B.n = 0;
             pathFollowingWithObstacleAvoidance_B.n <
             pathFollowingWithObstacleAvoidance_B.end;
             pathFollowingWithObstacleAvoidance_B.n++) {
          obj->PolarObstacleDensity[pathFollowingWithObstacleAvoidance_B.e_i] +=
            static_cast<real_T>
            (pathFollowingWithObstacleAvoidance_B.validWeights_data[180 *
             pathFollowingWithObstacleAvoidance_B.n +
             pathFollowingWithObstacleAvoidance_B.e_i]) *
            pathFollowingWithObstacleAvoidance_B.weightedRanges_data[pathFollowingWithObstacleAvoidance_B.n];
        }
      }
    }
  }
}

static void VectorFieldHistogramBase_buildB(nav_slalgs_internal_VectorFie_T *obj)
{
  int32_T trueCount;
  int32_T partialTrueCount;
  int32_T i;
  trueCount = 0;
  partialTrueCount = 0;
  for (i = 0; i < 180; i++) {
    if (obj->PolarObstacleDensity[i] > obj->HistogramThresholds[1]) {
      trueCount++;
      pathFollowingWithObstacleAvoidance_B.b_data_d[partialTrueCount] =
        static_cast<uint8_T>(i + 1);
      partialTrueCount++;
    }
  }

  for (i = 0; i < trueCount; i++) {
    obj->BinaryHistogram[pathFollowingWithObstacleAvoidance_B.b_data_d[i] - 1] =
      true;
  }

  trueCount = 0;
  partialTrueCount = 0;
  for (i = 0; i < 180; i++) {
    if (obj->PolarObstacleDensity[i] < obj->HistogramThresholds[0]) {
      trueCount++;
      pathFollowingWithObstacleAvoidance_B.c_data[partialTrueCount] =
        static_cast<uint8_T>(i + 1);
      partialTrueCount++;
    }
  }

  for (i = 0; i < trueCount; i++) {
    obj->BinaryHistogram[pathFollowingWithObstacleAvoidance_B.c_data[i] - 1] =
      false;
  }
}

static void pathFollowingWithObstacle_power(const real_T a_data[], const int32_T
  *a_size, real_T y_data[], int32_T *y_size)
{
  int32_T nx;
  int32_T b_k;
  *y_size = *a_size;
  nx = *a_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = a_data[b_k] * a_data[b_k];
  }
}

static void pathFollowingWithObstacl_sqrt_i(real_T x_data[], const int32_T
  *x_size)
{
  int32_T nx;
  int32_T b_k;
  nx = *x_size - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    x_data[b_k] = sqrt(x_data[b_k]);
  }
}

static void VectorFieldHistogramBase_buildM(nav_slalgs_internal_VectorFie_T *obj,
  const real_T scan_InternalRanges_data[], const int32_T
  *scan_InternalRanges_size, const real_T scan_InternalAngles_data[], const
  int32_T *scan_InternalAngles_size, boolean_T scan_ContainsOnlyFiniteData)
{
  boolean_T exitg1;
  pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size =
    *scan_InternalRanges_size;
  pathFollowingWithObstacleAvoidance_B.k = *scan_InternalRanges_size;
  if (0 <= pathFollowingWithObstacleAvoidance_B.k - 1) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data[0],
           &scan_InternalRanges_data[0], pathFollowingWithObstacleAvoidance_B.k *
           sizeof(real_T));
  }

  pathFollowingWithObstacleAvoidance_B.ii_data_j = *scan_InternalAngles_size;
  pathFollowingWithObstacleAvoidance_B.k = *scan_InternalAngles_size;
  if (0 <= pathFollowingWithObstacleAvoidance_B.k - 1) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[0],
           &scan_InternalAngles_data[0], pathFollowingWithObstacleAvoidance_B.k *
           sizeof(real_T));
  }

  pathFollowingWithObstacleAvoidance_B.obj_d[0] = obj->DistanceLimits[0];
  pathFollowingWithObstacleAvoidance_B.obj_d[1] = obj->DistanceLimits[1];
  p_lidarScan_removeInvalidData_i
    (pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data,
     &pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size,
     pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data,
     &pathFollowingWithObstacleAvoidance_B.ii_data_j,
     scan_ContainsOnlyFiniteData, pathFollowingWithObstacleAvoidance_B.obj_d);
  pathFollowingWithObstacleAv_sin
    (pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data,
     &pathFollowingWithObstacleAvoidance_B.ii_data_j,
     pathFollowingWithObstacleAvoidance_B.DYj_data,
     &pathFollowingWithObstacleAvoidance_B.DYj_size);
  pathFollowingWithObstacleAvoidance_B.DYj_size =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.DYj_data[pathFollowingWithObstacleAvoidance_B.idx_f]
      *=
      pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.idx_f];
  }

  pathFollowingWithObstacleAv_cos
    (pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data,
     &pathFollowingWithObstacleAvoidance_B.ii_data_j,
     pathFollowingWithObstacleAvoidance_B.tmp_data_b,
     &pathFollowingWithObstacleAvoidance_B.tmp_size_j);
  pathFollowingWithObstacleAvoidance_B.tmp_size_jz =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.tmp_data_p[pathFollowingWithObstacleAvoidance_B.idx_f]
      = 0.0 -
      pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.idx_f]
      * pathFollowingWithObstacleAvoidance_B.tmp_data_b[pathFollowingWithObstacleAvoidance_B.idx_f];
  }

  pathFollowingWithObstacle_power
    (pathFollowingWithObstacleAvoidance_B.tmp_data_p,
     &pathFollowingWithObstacleAvoidance_B.tmp_size_jz,
     pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data,
     &pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size);
  pathFollowingWithObstacleAvoidance_B.obj_size_o =
    pathFollowingWithObstacleAvoidance_B.DYj_size;
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.DYj_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.tmp_data_p[pathFollowingWithObstacleAvoidance_B.idx_f]
      = -obj->MinTurningRadius -
      pathFollowingWithObstacleAvoidance_B.DYj_data[pathFollowingWithObstacleAvoidance_B.idx_f];
  }

  pathFollowingWithObstacle_power
    (pathFollowingWithObstacleAvoidance_B.tmp_data_p,
     &pathFollowingWithObstacleAvoidance_B.obj_size_o,
     pathFollowingWithObstacleAvoidance_B.tmp_data_b,
     &pathFollowingWithObstacleAvoidance_B.tmp_size_j);
  pathFollowingWithObstacleAvoidance_B.tmp_size_j =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.tmp_data_b[pathFollowingWithObstacleAvoidance_B.idx_f]
      +=
      pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.idx_f];
  }

  pathFollowingWithObstacl_sqrt_i
    (pathFollowingWithObstacleAvoidance_B.tmp_data_b,
     &pathFollowingWithObstacleAvoidance_B.tmp_size_j);
  pathFollowingWithObstacleAvoidance_B.obj_tmp = (obj->MinTurningRadius +
    obj->RobotRadius) + obj->SafetyDistance;
  pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0 =
    pathFollowingWithObstacleAvoidance_B.tmp_size_j;
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.tmp_size_j;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.blockedR_data[pathFollowingWithObstacleAvoidance_B.idx_f]
      =
      ((pathFollowingWithObstacleAvoidance_B.tmp_data_b[pathFollowingWithObstacleAvoidance_B.idx_f]
        < pathFollowingWithObstacleAvoidance_B.obj_tmp) &&
       (pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.idx_f]
        <= 0.0));
  }

  pathFollowingWithObstacleAvoidance_B.obj_size_n =
    pathFollowingWithObstacleAvoidance_B.DYj_size;
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.DYj_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.tmp_data_p[pathFollowingWithObstacleAvoidance_B.idx_f]
      = obj->MinTurningRadius -
      pathFollowingWithObstacleAvoidance_B.DYj_data[pathFollowingWithObstacleAvoidance_B.idx_f];
  }

  pathFollowingWithObstacle_power
    (pathFollowingWithObstacleAvoidance_B.tmp_data_p,
     &pathFollowingWithObstacleAvoidance_B.obj_size_n,
     pathFollowingWithObstacleAvoidance_B.tmp_data_b,
     &pathFollowingWithObstacleAvoidance_B.tmp_size_j);
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.idx_f]
      +=
      pathFollowingWithObstacleAvoidance_B.tmp_data_b[pathFollowingWithObstacleAvoidance_B.idx_f];
  }

  pathFollowingWithObstacl_sqrt_i
    (pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data,
     &pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size);
  pathFollowingWithObstacleAvoidance_B.k =
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.blockedL_data[pathFollowingWithObstacleAvoidance_B.idx_f]
      =
      ((pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_data[pathFollowingWithObstacleAvoidance_B.idx_f]
        < pathFollowingWithObstacleAvoidance_B.obj_tmp) &&
       (pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.idx_f]
        >= 0.0));
  }

  if (1 <= pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0) {
    pathFollowingWithObstacleAvoidance_B.k = 1;
  } else {
    pathFollowingWithObstacleAvoidance_B.k =
      pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0;
  }

  pathFollowingWithObstacleAvoidance_B.idx_f = 0;
  exitg1 = false;
  while ((!exitg1) && (pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0 >
                       0)) {
    if (pathFollowingWithObstacleAvoidance_B.blockedR_data[pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0
        - 1]) {
      pathFollowingWithObstacleAvoidance_B.idx_f++;
      pathFollowingWithObstacleAvoidance_B.ii_data_j =
        pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0;
      if (pathFollowingWithObstacleAvoidance_B.idx_f >=
          pathFollowingWithObstacleAvoidance_B.k) {
        exitg1 = true;
      } else {
        pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0--;
      }
    } else {
      pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0--;
    }
  }

  if (pathFollowingWithObstacleAvoidance_B.k == 1) {
    if (pathFollowingWithObstacleAvoidance_B.idx_f == 0) {
      pathFollowingWithObstacleAvoidance_B.k = 0;
    }
  } else if (1 > pathFollowingWithObstacleAvoidance_B.idx_f) {
    pathFollowingWithObstacleAvoidance_B.k = 0;
  } else {
    pathFollowingWithObstacleAvoidance_B.k = 1;
  }

  pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0 =
    pathFollowingWithObstacleAvoidance_B.k;
  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.i_data = static_cast<uint32_T>
      (pathFollowingWithObstacleAvoidance_B.ii_data_j);
    pathFollowingWithObstacleAvoidance_B.phiR_data =
      pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.ii_data_j
      - 1];
  }

  if (1 <= pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size) {
    pathFollowingWithObstacleAvoidance_B.k = 1;
  } else {
    pathFollowingWithObstacleAvoidance_B.k =
      pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size;
  }

  pathFollowingWithObstacleAvoidance_B.idx_f = 0;
  pathFollowingWithObstacleAvoidance_B.b_ii_a = 1;
  exitg1 = false;
  while ((!exitg1) && (pathFollowingWithObstacleAvoidance_B.b_ii_a - 1 <=
                       pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size
                       - 1)) {
    if (pathFollowingWithObstacleAvoidance_B.blockedL_data[pathFollowingWithObstacleAvoidance_B.b_ii_a
        - 1]) {
      pathFollowingWithObstacleAvoidance_B.idx_f++;
      pathFollowingWithObstacleAvoidance_B.ii_data_j =
        pathFollowingWithObstacleAvoidance_B.b_ii_a;
      if (pathFollowingWithObstacleAvoidance_B.idx_f >=
          pathFollowingWithObstacleAvoidance_B.k) {
        exitg1 = true;
      } else {
        pathFollowingWithObstacleAvoidance_B.b_ii_a++;
      }
    } else {
      pathFollowingWithObstacleAvoidance_B.b_ii_a++;
    }
  }

  if (pathFollowingWithObstacleAvoidance_B.k == 1) {
    if (pathFollowingWithObstacleAvoidance_B.idx_f == 0) {
      pathFollowingWithObstacleAvoidance_B.k = 0;
    }
  } else if (1 > pathFollowingWithObstacleAvoidance_B.idx_f) {
    pathFollowingWithObstacleAvoidance_B.k = 0;
  } else {
    pathFollowingWithObstacleAvoidance_B.k = 1;
  }

  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f <
       pathFollowingWithObstacleAvoidance_B.k;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size =
      pathFollowingWithObstacleAvoidance_B.ii_data_j;
    pathFollowingWithObstacleAvoidance_B.phiL_data =
      pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.ii_data_j
      - 1];
  }

  if (pathFollowingWithObstacleAvoidance_B.blockedR_size_idx_0 == 0) {
    pathFollowingWithObstacleAvoidance_B.phiR_data = obj->
      AngularSectorMidPoints[0];
  } else {
    if (pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[
        static_cast<int32_T>(pathFollowingWithObstacleAvoidance_B.i_data) - 1] <=
        obj->AngularSectorMidPoints[0]) {
      pathFollowingWithObstacleAvoidance_B.phiR_data =
        obj->AngularSectorMidPoints[1];
    }
  }

  if (pathFollowingWithObstacleAvoidance_B.k == 0) {
    pathFollowingWithObstacleAvoidance_B.phiL_data = obj->
      AngularSectorMidPoints[179];
  } else {
    if (pathFollowingWithObstacleAvoidance_B.validScan_InternalAngles_data[pathFollowingWithObstacleAvoidance_B.validScan_InternalRanges_size
        - 1] >= obj->AngularSectorMidPoints[179]) {
      pathFollowingWithObstacleAvoidance_B.phiL_data =
        obj->AngularSectorMidPoints[178];
    }
  }

  for (pathFollowingWithObstacleAvoidance_B.idx_f = 0;
       pathFollowingWithObstacleAvoidance_B.idx_f < 180;
       pathFollowingWithObstacleAvoidance_B.idx_f++) {
    obj->MaskedHistogram[pathFollowingWithObstacleAvoidance_B.idx_f] =
      (obj->BinaryHistogram[pathFollowingWithObstacleAvoidance_B.idx_f] ||
       ((obj->AngularSectorMidPoints[pathFollowingWithObstacleAvoidance_B.idx_f]
         < pathFollowingWithObstacleAvoidance_B.phiR_data) ||
        (obj->AngularSectorMidPoints[pathFollowingWithObstacleAvoidance_B.idx_f]
         > pathFollowingWithObstacleAvoidance_B.phiL_data)));
  }
}

static void pathFollowingWithObstacleA_diff(const real_T x[182], real_T y[181])
{
  real_T work;
  int32_T ixLead;
  int32_T iyLead;
  real_T tmp2;
  int32_T m;
  ixLead = 1;
  iyLead = 0;
  work = x[0];
  for (m = 0; m < 181; m++) {
    tmp2 = work;
    work = x[ixLead];
    y[iyLead] = x[ixLead] - tmp2;
    ixLead++;
    iyLead++;
  }
}

static boolean_T pathFollowingWithObstacleAv_any(const real_T x[181])
{
  boolean_T y;
  int32_T b_k;
  boolean_T exitg1;
  y = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= 180)) {
    if ((x[b_k] == 0.0) || rtIsNaN(x[b_k])) {
      b_k++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void pathFollowingWithObstacl_diff_i(const real_T x_data[], const int32_T
  x_size[2], real_T y_data[], int32_T y_size[2])
{
  int32_T nHigh;
  int32_T ixStart;
  int32_T iyStart;
  int32_T r;
  if (x_size[1] != 0) {
    nHigh = x_size[1] - 1;
    ixStart = 0;
    iyStart = 0;
    for (r = 0; r <= nHigh; r++) {
      pathFollowingWithObstacleAvoidance_B.b_y1_data[iyStart] = x_data[ixStart +
        1] - x_data[ixStart];
      ixStart += 2;
      iyStart++;
    }
  }

  y_size[0] = 1;
  y_size[1] = x_size[1];
  r = x_size[1] - 1;
  if (0 <= r) {
    memcpy(&y_data[0], &pathFollowingWithObstacleAvoidance_B.b_y1_data[0], (r +
            1) * sizeof(real_T));
  }
}

static void pathFollowingWithObstacle_mod_i(const real_T x_data[], const int32_T
  x_size[2], real_T r_data[], int32_T r_size[2])
{
  int32_T nx;
  int32_T loop_ub;
  loop_ub = x_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&pathFollowingWithObstacleAvoidance_B.b_z1_data[0], &r_data[0],
           (loop_ub + 1) * sizeof(real_T));
  }

  nx = x_size[1] - 1;
  for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
    pathFollowingWithObstacleAvoidance_B.b_z1_data[loop_ub] =
      pathFollowingWithObsta_floatmod(x_data[loop_ub]);
  }

  r_size[0] = 1;
  r_size[1] = x_size[1];
  loop_ub = x_size[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&r_data[0], &pathFollowingWithObstacleAvoidance_B.b_z1_data[0],
           (loop_ub + 1) * sizeof(real_T));
  }
}

static void pathFollowingWith_wrapToPi_iygm(const real_T theta_data[], const
  int32_T theta_size[2], real_T b_theta_data[], int32_T b_theta_size[2])
{
  boolean_T y;
  int32_T nx;
  int32_T b_k;
  int32_T loop_ub_tmp;
  boolean_T exitg1;
  b_theta_size[0] = 1;
  b_theta_size[1] = theta_size[1];
  loop_ub_tmp = theta_size[0] * theta_size[1] - 1;
  if (0 <= loop_ub_tmp) {
    memcpy(&b_theta_data[0], &theta_data[0], (loop_ub_tmp + 1) * sizeof(real_T));
  }

  nx = theta_size[1] - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    pathFollowingWithObstacleAvoidance_B.y_data_g[b_k] = fabs(theta_data[b_k]);
  }

  nx = theta_size[1] - 1;
  for (b_k = 0; b_k <= nx; b_k++) {
    pathFollowingWithObstacleAvoidance_B.pos_data[b_k] =
      (pathFollowingWithObstacleAvoidance_B.y_data_g[b_k] > 3.1415926535897931);
  }

  y = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k + 1 <= theta_size[1])) {
    if (!pathFollowingWithObstacleAvoidance_B.pos_data[b_k]) {
      b_k++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  if (y) {
    pathFollowingWithObstacleAvoidance_B.theta_size[0] = 1;
    pathFollowingWithObstacleAvoidance_B.theta_size[1] = theta_size[1];
    for (b_k = 0; b_k <= loop_ub_tmp; b_k++) {
      pathFollowingWithObstacleAvoidance_B.theta_data[b_k] = theta_data[b_k] +
        3.1415926535897931;
    }

    nx = theta_size[1] - 1;
    for (b_k = 0; b_k <= nx; b_k++) {
      pathFollowingWithObstacleAvoidance_B.pos_data[b_k] =
        (pathFollowingWithObstacleAvoidance_B.theta_data[b_k] > 0.0);
    }

    pathFollowingWithObstacle_mod_i
      (pathFollowingWithObstacleAvoidance_B.theta_data,
       pathFollowingWithObstacleAvoidance_B.theta_size,
       pathFollowingWithObstacleAvoidance_B.y_data_g,
       pathFollowingWithObstacleAvoidance_B.y_size);
    loop_ub_tmp = pathFollowingWithObstacleAvoidance_B.y_size[0] *
      pathFollowingWithObstacleAvoidance_B.y_size[1] - 1;
    for (b_k = 0; b_k <= loop_ub_tmp; b_k++) {
      pathFollowingWithObstacleAvoidance_B.b_data_l[b_k] =
        (pathFollowingWithObstacleAvoidance_B.y_data_g[b_k] == 0.0);
    }

    nx = pathFollowingWithObstacleAvoidance_B.y_size[1] - 1;
    for (b_k = 0; b_k <= nx; b_k++) {
      if (pathFollowingWithObstacleAvoidance_B.b_data_l[b_k] &&
          pathFollowingWithObstacleAvoidance_B.pos_data[b_k]) {
        pathFollowingWithObstacleAvoidance_B.y_data_g[b_k] = 6.2831853071795862;
      }
    }

    b_theta_size[0] = 1;
    b_theta_size[1] = pathFollowingWithObstacleAvoidance_B.y_size[1];
    for (b_k = 0; b_k <= loop_ub_tmp; b_k++) {
      b_theta_data[b_k] = pathFollowingWithObstacleAvoidance_B.y_data_g[b_k] -
        3.1415926535897931;
    }
  }
}

static void pathFollowingWithO_bisectAngles(real_T theta1_data[], int32_T
  theta1_size[2], real_T theta2_data[], const int32_T theta2_size[2], real_T
  bisect_data[], int32_T bisect_size[2])
{
  int32_T theta1_size_0[2];
  int32_T loop_ub_tmp;
  int32_T loop_ub;
  pathFollowingWith_wrapToPi_iygm(theta1_data, theta1_size,
    pathFollowingWithObstacleAvoidance_B.tmp_data_g,
    pathFollowingWithObstacleAvoidance_B.tmp_size_b);
  theta1_size[1] = pathFollowingWithObstacleAvoidance_B.tmp_size_b[1];
  loop_ub_tmp = pathFollowingWithObstacleAvoidance_B.tmp_size_b[0] *
    pathFollowingWithObstacleAvoidance_B.tmp_size_b[1];
  if (0 <= loop_ub_tmp - 1) {
    memcpy(&theta1_data[0], &pathFollowingWithObstacleAvoidance_B.tmp_data_g[0],
           loop_ub_tmp * sizeof(real_T));
  }

  pathFollowingWith_wrapToPi_iygm(theta2_data, theta2_size,
    pathFollowingWithObstacleAvoidance_B.tmp_data_g,
    pathFollowingWithObstacleAvoidance_B.tmp_size_b);
  loop_ub = pathFollowingWithObstacleAvoidance_B.tmp_size_b[0] *
    pathFollowingWithObstacleAvoidance_B.tmp_size_b[1];
  if (0 <= loop_ub - 1) {
    memcpy(&theta2_data[0], &pathFollowingWithObstacleAvoidance_B.tmp_data_g[0],
           loop_ub * sizeof(real_T));
  }

  theta1_size_0[0] = 1;
  theta1_size_0[1] = theta1_size[1];
  loop_ub = theta1_size[1];
  for (loop_ub_tmp = 0; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
    pathFollowingWithObstacleAvoidance_B.theta1_data[loop_ub_tmp] =
      theta1_data[loop_ub_tmp] - (theta1_data[loop_ub_tmp] -
      theta2_data[loop_ub_tmp]) / 2.0;
  }

  pathFollowingWith_wrapToPi_iygm
    (pathFollowingWithObstacleAvoidance_B.theta1_data, theta1_size_0,
     pathFollowingWithObstacleAvoidance_B.tmp_data_g,
     pathFollowingWithObstacleAvoidance_B.tmp_size_b);
  bisect_size[0] = 1;
  bisect_size[1] = pathFollowingWithObstacleAvoidance_B.tmp_size_b[1];
  loop_ub = pathFollowingWithObstacleAvoidance_B.tmp_size_b[0] *
    pathFollowingWithObstacleAvoidance_B.tmp_size_b[1];
  if (0 <= loop_ub - 1) {
    memcpy(&bisect_data[0], &pathFollowingWithObstacleAvoidance_B.tmp_data_g[0],
           loop_ub * sizeof(real_T));
  }
}

static void pathFollowingWithObstacl_bsxfun(const real_T a[180], const real_T
  b_data[], const int32_T *b_size, real_T c_data[], int32_T c_size[2])
{
  int32_T k;
  int32_T bcoef;
  int32_T k_0;
  int32_T csz_idx_0;
  csz_idx_0 = *b_size;
  c_size[0] = *b_size;
  c_size[1] = 180;
  if (*b_size != 0) {
    bcoef = (*b_size != 1);
    for (k = 0; k < 180; k++) {
      for (k_0 = 0; k_0 < csz_idx_0; k_0++) {
        c_data[k_0 + *b_size * k] = pathFollowingWithOb_wrapToPi_iy(b_data[bcoef
          * k_0] - a[k]);
      }
    }
  }
}

static void pathFollowingWithObstacle_abs_i(const real_T x_data[], const int32_T
  x_size[2], real_T y_data[], int32_T y_size[2])
{
  int32_T nx;
  int32_T b_k;
  nx = x_size[0] * 180 - 1;
  y_size[0] = x_size[0];
  y_size[1] = 180;
  for (b_k = 0; b_k <= nx; b_k++) {
    y_data[b_k] = fabs(x_data[b_k]);
  }
}

static void pathFollowingWithObsta_bsxfun_i(const real_T a_data[], const int32_T
  a_size[2], const real_T b_data[], const int32_T *b_size, real_T c_data[],
  int32_T c_size[2])
{
  int32_T k;
  int32_T acoef;
  int32_T bcoef;
  int32_T k_0;
  int32_T csz_idx_0;
  if (*b_size == 1) {
    csz_idx_0 = a_size[0];
  } else if (a_size[0] == 1) {
    csz_idx_0 = *b_size;
  } else if (a_size[0] == *b_size) {
    csz_idx_0 = a_size[0];
  } else if (*b_size < a_size[0]) {
    csz_idx_0 = *b_size;
  } else {
    csz_idx_0 = a_size[0];
  }

  c_size[0] = csz_idx_0;
  c_size[1] = 180;
  if (csz_idx_0 != 0) {
    acoef = (a_size[0] != 1);
    bcoef = (*b_size != 1);
    for (k = 0; k < 180; k++) {
      for (k_0 = 0; k_0 < csz_idx_0; k_0++) {
        c_data[k_0 + csz_idx_0 * k] = a_data[acoef * k_0 + a_size[0] * k] -
          b_data[bcoef * k_0];
      }
    }
  }
}

static boolean_T pathFollowingWithObstacle_any_i(const boolean_T x_data[], const
  int32_T x_size[2])
{
  boolean_T y;
  int32_T ix;
  boolean_T exitg1;
  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[1])) {
    if (!x_data[ix]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void VectorFieldHistogramBase_localC(const real_T candidateDir_data[],
  const real_T selectDir_data[], const int32_T selectDir_size[2], real_T
  cost_data[], int32_T cost_size[2])
{
  int32_T nx;
  int32_T b_k;
  pathFollowingWithObstacleAvoidance_B.selectDir_size[0] = 1;
  pathFollowingWithObstacleAvoidance_B.selectDir_size[1] = selectDir_size[1];
  nx = selectDir_size[0] * selectDir_size[1];
  for (b_k = 0; b_k < nx; b_k++) {
    pathFollowingWithObstacleAvoidance_B.selectDir_data[b_k] =
      selectDir_data[b_k] - candidateDir_data[b_k];
  }

  pathFollowingWith_wrapToPi_iygm
    (pathFollowingWithObstacleAvoidance_B.selectDir_data,
     pathFollowingWithObstacleAvoidance_B.selectDir_size,
     pathFollowingWithObstacleAvoidance_B.delta_data,
     pathFollowingWithObstacleAvoidance_B.delta_size);
  nx = pathFollowingWithObstacleAvoidance_B.delta_size[1] - 1;
  cost_size[0] = 1;
  cost_size[1] = pathFollowingWithObstacleAvoidance_B.delta_size[1];
  for (b_k = 0; b_k <= nx; b_k++) {
    cost_data[b_k] = fabs(pathFollowingWithObstacleAvoidance_B.delta_data[b_k]);
  }
}

static void VectorFieldHistogramBase_comput(const
  nav_slalgs_internal_VectorFie_T *obj, const real_T c_data[], const int32_T
  c_size[2], real_T targetDir, real_T prevDir, real_T cost_data[], int32_T
  cost_size[2])
{
  int32_T i;
  int32_T tmp;
  pathFollowingWithObstacleAvoidance_B.totalWeight = (obj->TargetDirectionWeight
    + obj->CurrentDirectionWeight) + obj->PreviousDirectionWeight;
  tmp = c_size[1];
  pathFollowingWithObstacleAvoidance_B.targetDir_size[0] = 1;
  pathFollowingWithObstacleAvoidance_B.targetDir_size[1] = c_size[1];
  for (i = 0; i < tmp; i++) {
    pathFollowingWithObstacleAvoidance_B.targetDir_data[i] = targetDir;
  }

  VectorFieldHistogramBase_localC(c_data,
    pathFollowingWithObstacleAvoidance_B.targetDir_data,
    pathFollowingWithObstacleAvoidance_B.targetDir_size,
    pathFollowingWithObstacleAvoidance_B.b_data,
    pathFollowingWithObstacleAvoidance_B.b_size);
  tmp = c_size[1];
  pathFollowingWithObstacleAvoidance_B.tmp_size[0] = 1;
  pathFollowingWithObstacleAvoidance_B.tmp_size[1] = c_size[1];
  if (0 <= tmp - 1) {
    memset(&pathFollowingWithObstacleAvoidance_B.tmp_data_f[0], 0, tmp * sizeof
           (real_T));
  }

  VectorFieldHistogramBase_localC(c_data,
    pathFollowingWithObstacleAvoidance_B.tmp_data_f,
    pathFollowingWithObstacleAvoidance_B.tmp_size,
    pathFollowingWithObstacleAvoidance_B.targetDir_data,
    pathFollowingWithObstacleAvoidance_B.targetDir_size);
  tmp = c_size[1];
  pathFollowingWithObstacleAvoidance_B.prevDir_size[0] = 1;
  pathFollowingWithObstacleAvoidance_B.prevDir_size[1] = c_size[1];
  for (i = 0; i < tmp; i++) {
    pathFollowingWithObstacleAvoidance_B.tmp_data_f[i] = prevDir;
  }

  VectorFieldHistogramBase_localC(c_data,
    pathFollowingWithObstacleAvoidance_B.tmp_data_f,
    pathFollowingWithObstacleAvoidance_B.prevDir_size,
    pathFollowingWithObstacleAvoidance_B.b_data_c,
    pathFollowingWithObstacleAvoidance_B.targetDir_size);
  cost_size[0] = 1;
  cost_size[1] = pathFollowingWithObstacleAvoidance_B.b_size[1];
  tmp = pathFollowingWithObstacleAvoidance_B.b_size[0] *
    pathFollowingWithObstacleAvoidance_B.b_size[1] - 1;
  for (i = 0; i <= tmp; i++) {
    cost_data[i] = ((obj->TargetDirectionWeight *
                     pathFollowingWithObstacleAvoidance_B.b_data[i] +
                     obj->CurrentDirectionWeight *
                     pathFollowingWithObstacleAvoidance_B.targetDir_data[i]) +
                    obj->PreviousDirectionWeight *
                    pathFollowingWithObstacleAvoidance_B.b_data_c[i]) / 3.0 *
      pathFollowingWithObstacleAvoidance_B.totalWeight;
  }
}

static real_T VectorFieldHistogramBase_select(nav_slalgs_internal_VectorFie_T
  *obj, real_T targetDir)
{
  real_T thetaSteer;
  int32_T b_idx;
  int32_T m;
  boolean_T tmp;
  int32_T sectors_data_tmp;
  boolean_T exitg1;
  pathFollowingWithObstacleAvoidance_B.angles_data[0] = 0.0;
  for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
       pathFollowingWithObstacleAvoidance_B.b_ii < 180;
       pathFollowingWithObstacleAvoidance_B.b_ii++) {
    pathFollowingWithObstacleAvoidance_B.angles_data[pathFollowingWithObstacleAvoidance_B.b_ii
      + 1] = !obj->MaskedHistogram[pathFollowingWithObstacleAvoidance_B.b_ii];
  }

  pathFollowingWithObstacleAvoidance_B.angles_data[181] = 0.0;
  pathFollowingWithObstacleA_diff
    (pathFollowingWithObstacleAvoidance_B.angles_data,
     pathFollowingWithObstacleAvoidance_B.changes);
  if (!pathFollowingWithObstacleAv_any
      (pathFollowingWithObstacleAvoidance_B.changes)) {
    thetaSteer = (rtNaN);
    obj->PreviousDirection = (rtNaN);
  } else {
    pathFollowingWithObstacleAvoidance_B.idx = 0;
    pathFollowingWithObstacleAvoidance_B.b_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (pathFollowingWithObstacleAvoidance_B.b_ii - 1 < 181)) {
      if (pathFollowingWithObstacleAvoidance_B.changes[pathFollowingWithObstacleAvoidance_B.b_ii
          - 1] != 0.0) {
        pathFollowingWithObstacleAvoidance_B.idx++;
        pathFollowingWithObstacleAvoidance_B.ii_data[pathFollowingWithObstacleAvoidance_B.idx
          - 1] = pathFollowingWithObstacleAvoidance_B.b_ii;
        if (pathFollowingWithObstacleAvoidance_B.idx >= 181) {
          exitg1 = true;
        } else {
          pathFollowingWithObstacleAvoidance_B.b_ii++;
        }
      } else {
        pathFollowingWithObstacleAvoidance_B.b_ii++;
      }
    }

    if (1 > pathFollowingWithObstacleAvoidance_B.idx) {
      pathFollowingWithObstacleAvoidance_B.idx = 0;
    }

    m = pathFollowingWithObstacleAvoidance_B.idx - 1;
    if (0 <= m) {
      memcpy(&pathFollowingWithObstacleAvoidance_B.foundSectors_data[0],
             &pathFollowingWithObstacleAvoidance_B.ii_data[0], (m + 1) * sizeof
             (int32_T));
    }

    pathFollowingWithObstacleAvoidance_B.sectors_size[0] = 2;
    pathFollowingWithObstacleAvoidance_B.idx >>= 1;
    pathFollowingWithObstacleAvoidance_B.sectors_size[1] =
      pathFollowingWithObstacleAvoidance_B.idx;
    m = (pathFollowingWithObstacleAvoidance_B.idx << 1) - 1;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.sectors_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        =
        pathFollowingWithObstacleAvoidance_B.foundSectors_data[pathFollowingWithObstacleAvoidance_B.b_ii];
    }

    if (1 > pathFollowingWithObstacleAvoidance_B.idx) {
      m = -1;
    } else {
      m = pathFollowingWithObstacleAvoidance_B.idx - 1;
    }

    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      sectors_data_tmp = (pathFollowingWithObstacleAvoidance_B.b_ii << 1) + 1;
      pathFollowingWithObstacleAvoidance_B.sectors_data[sectors_data_tmp] =
        static_cast<real_T>
        (pathFollowingWithObstacleAvoidance_B.foundSectors_data[sectors_data_tmp])
        - 1.0;
    }

    m = (pathFollowingWithObstacleAvoidance_B.idx << 1) - 1;
    if (0 <= m) {
      memset(&pathFollowingWithObstacleAvoidance_B.angles_data[0], 0, (m + 1) *
             sizeof(real_T));
    }

    if (1 > pathFollowingWithObstacleAvoidance_B.idx) {
      sectors_data_tmp = -1;
      pathFollowingWithObstacleAvoidance_B.idx = -1;
    } else {
      sectors_data_tmp = pathFollowingWithObstacleAvoidance_B.idx - 1;
      pathFollowingWithObstacleAvoidance_B.idx--;
    }

    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= sectors_data_tmp;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      m = pathFollowingWithObstacleAvoidance_B.b_ii << 1;
      pathFollowingWithObstacleAvoidance_B.angles_data[m] =
        obj->AngularSectorMidPoints[static_cast<int32_T>
        (pathFollowingWithObstacleAvoidance_B.sectors_data[m]) - 1];
    }

    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <=
         pathFollowingWithObstacleAvoidance_B.idx;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      m = (pathFollowingWithObstacleAvoidance_B.b_ii << 1) + 1;
      pathFollowingWithObstacleAvoidance_B.angles_data[m] =
        obj->AngularSectorMidPoints[static_cast<int32_T>
        (pathFollowingWithObstacleAvoidance_B.sectors_data[m]) - 1];
    }

    pathFollowingWithObstacl_diff_i
      (pathFollowingWithObstacleAvoidance_B.sectors_data,
       pathFollowingWithObstacleAvoidance_B.sectors_size,
       pathFollowingWithObstacleAvoidance_B.sectorSizes_data,
       pathFollowingWithObstacleAvoidance_B.sectorSizes_size);
    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[0] *
      pathFollowingWithObstacleAvoidance_B.sectorSizes_size[1] - 1;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.sectorSizes_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        *= obj->AngularDifference;
    }

    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[1] - 1;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        = obj->NarrowOpeningThreshold;
    }

    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[1] - 1;
    pathFollowingWithObstacleAvoidance_B.idx = 0;
    sectors_data_tmp = 0;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      if (pathFollowingWithObstacleAvoidance_B.sectorSizes_data[pathFollowingWithObstacleAvoidance_B.b_ii]
          <
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii])
      {
        pathFollowingWithObstacleAvoidance_B.idx++;
        pathFollowingWithObstacleAvoidance_B.md_data[sectors_data_tmp] =
          pathFollowingWithObstacleAvoidance_B.b_ii + 1;
        sectors_data_tmp++;
      }
    }

    pathFollowingWithObstacleAvoidance_B.angles_size[0] = 1;
    pathFollowingWithObstacleAvoidance_B.angles_size[1] =
      pathFollowingWithObstacleAvoidance_B.idx;
    pathFollowingWithObstacleAvoidance_B.angles_size_o[0] = 1;
    pathFollowingWithObstacleAvoidance_B.angles_size_o[1] =
      pathFollowingWithObstacleAvoidance_B.idx;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <
         pathFollowingWithObstacleAvoidance_B.idx;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      m =
        (pathFollowingWithObstacleAvoidance_B.md_data[pathFollowingWithObstacleAvoidance_B.b_ii]
         - 1) << 1;
      pathFollowingWithObstacleAvoidance_B.angles_data_m[pathFollowingWithObstacleAvoidance_B.b_ii]
        = pathFollowingWithObstacleAvoidance_B.angles_data[m];
      pathFollowingWithObstacleAvoidance_B.angles_data_n[pathFollowingWithObstacleAvoidance_B.b_ii]
        = pathFollowingWithObstacleAvoidance_B.angles_data[m + 1];
    }

    pathFollowingWithO_bisectAngles
      (pathFollowingWithObstacleAvoidance_B.angles_data_m,
       pathFollowingWithObstacleAvoidance_B.angles_size,
       pathFollowingWithObstacleAvoidance_B.angles_data_n,
       pathFollowingWithObstacleAvoidance_B.angles_size_o,
       pathFollowingWithObstacleAvoidance_B.narrowDirs_data,
       pathFollowingWithObstacleAvoidance_B.sectors_size);
    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[1] - 1;
    pathFollowingWithObstacleAvoidance_B.idx = 0;
    sectors_data_tmp = 0;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      if (!(pathFollowingWithObstacleAvoidance_B.sectorSizes_data[pathFollowingWithObstacleAvoidance_B.b_ii]
            <
            pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii]))
      {
        pathFollowingWithObstacleAvoidance_B.idx++;
        pathFollowingWithObstacleAvoidance_B.rd_data[sectors_data_tmp] =
          pathFollowingWithObstacleAvoidance_B.b_ii + 1;
        sectors_data_tmp++;
      }
    }

    sectors_data_tmp = pathFollowingWithObstacleAvoidance_B.idx +
      pathFollowingWithObstacleAvoidance_B.idx;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <
         pathFollowingWithObstacleAvoidance_B.idx;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      m =
        (pathFollowingWithObstacleAvoidance_B.rd_data[pathFollowingWithObstacleAvoidance_B.b_ii]
         - 1) << 1;
      pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp =
        obj->NarrowOpeningThreshold / 2.0;
      pathFollowingWithObstacleAvoidance_B.sectors_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        = pathFollowingWithObstacleAvoidance_B.angles_data[m] +
        pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp;
      pathFollowingWithObstacleAvoidance_B.sectors_data[pathFollowingWithObstacleAvoidance_B.b_ii
        + pathFollowingWithObstacleAvoidance_B.idx] =
        pathFollowingWithObstacleAvoidance_B.angles_data[m + 1] -
        pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp;
    }

    if (rtIsNaN(obj->PreviousDirection)) {
      obj->PreviousDirection = 0.0;
    }

    m = pathFollowingWithObstacleAvoidance_B.sectors_size[1];
    pathFollowingWithObstacleAvoidance_B.idx = sectors_data_tmp +
      pathFollowingWithObstacleAvoidance_B.sectors_size[1];
    pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1] =
      pathFollowingWithObstacleAvoidance_B.idx + 3;
    if (0 <= sectors_data_tmp - 1) {
      memcpy(&pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0],
             &pathFollowingWithObstacleAvoidance_B.sectors_data[0],
             sectors_data_tmp * sizeof(real_T));
    }

    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii < m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii
        + sectors_data_tmp] =
        pathFollowingWithObstacleAvoidance_B.narrowDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii];
    }

    pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.idx]
      = targetDir;
    pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.idx
      + 1] = 0.0;
    pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.idx
      + 2] = obj->PreviousDirection;
    sectors_data_tmp = pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1];
    m = pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1];
    if (0 <= m - 1) {
      memcpy(&pathFollowingWithObstacleAvoidance_B.cDiff_data[0],
             &pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0], m *
             sizeof(real_T));
    }

    pathFollowingWithObstacl_bsxfun(obj->AngularSectorMidPoints,
      pathFollowingWithObstacleAvoidance_B.cDiff_data, &sectors_data_tmp,
      pathFollowingWithObstacleAvoidance_B.tmp_data,
      pathFollowingWithObstacleAvoidance_B.sectorSizes_size);
    pathFollowingWithObstacle_abs_i
      (pathFollowingWithObstacleAvoidance_B.tmp_data,
       pathFollowingWithObstacleAvoidance_B.sectorSizes_size,
       pathFollowingWithObstacleAvoidance_B.candToSectDiff_data,
       pathFollowingWithObstacleAvoidance_B.angles_size);
    m = pathFollowingWithObstacleAvoidance_B.angles_size[0] - 1;
    b_idx = pathFollowingWithObstacleAvoidance_B.angles_size[0];
    if (pathFollowingWithObstacleAvoidance_B.angles_size[0] >= 1) {
      if (0 <= m) {
        memcpy(&pathFollowingWithObstacleAvoidance_B.cDiff_data[0],
               &pathFollowingWithObstacleAvoidance_B.candToSectDiff_data[0], (m
                + 1) * sizeof(real_T));
      }

      for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
           pathFollowingWithObstacleAvoidance_B.b_ii < 179;
           pathFollowingWithObstacleAvoidance_B.b_ii++) {
        for (pathFollowingWithObstacleAvoidance_B.idx = 0;
             pathFollowingWithObstacleAvoidance_B.idx <= m;
             pathFollowingWithObstacleAvoidance_B.idx++) {
          pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp =
            pathFollowingWithObstacleAvoidance_B.cDiff_data[pathFollowingWithObstacleAvoidance_B.idx];
          sectors_data_tmp = (pathFollowingWithObstacleAvoidance_B.b_ii + 1) *
            pathFollowingWithObstacleAvoidance_B.angles_size[0] +
            pathFollowingWithObstacleAvoidance_B.idx;
          if (rtIsNaN
              (pathFollowingWithObstacleAvoidance_B.candToSectDiff_data[sectors_data_tmp]))
          {
            tmp = false;
          } else {
            tmp = (rtIsNaN
                   (pathFollowingWithObstacleAvoidance_B.cDiff_data[pathFollowingWithObstacleAvoidance_B.idx])
                   ||
                   (pathFollowingWithObstacleAvoidance_B.cDiff_data[pathFollowingWithObstacleAvoidance_B.idx]
                    >
                    pathFollowingWithObstacleAvoidance_B.candToSectDiff_data[sectors_data_tmp]));
          }

          if (tmp) {
            pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp =
              pathFollowingWithObstacleAvoidance_B.candToSectDiff_data[sectors_data_tmp];
          }

          pathFollowingWithObstacleAvoidance_B.cDiff_data[pathFollowingWithObstacleAvoidance_B.idx]
            = pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp;
        }
      }
    }

    pathFollowingWithObsta_bsxfun_i
      (pathFollowingWithObstacleAvoidance_B.candToSectDiff_data,
       pathFollowingWithObstacleAvoidance_B.angles_size,
       pathFollowingWithObstacleAvoidance_B.cDiff_data, &b_idx,
       pathFollowingWithObstacleAvoidance_B.tmp_data,
       pathFollowingWithObstacleAvoidance_B.sectorSizes_size);
    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[0] *
      pathFollowingWithObstacleAvoidance_B.sectorSizes_size[1];
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii < m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.nearIdx_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        =
        (pathFollowingWithObstacleAvoidance_B.tmp_data[pathFollowingWithObstacleAvoidance_B.b_ii]
         < 1.4901161193847656E-8);
    }

    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[0] - 1;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.freeDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        = true;
    }

    m = pathFollowingWithObstacleAvoidance_B.sectorSizes_size[0] - 1;
    if (0 <= m) {
      pathFollowingWithObstacleAvoidance_B.obj_size[0] = 1;
    }

    for (pathFollowingWithObstacleAvoidance_B.idx = 0;
         pathFollowingWithObstacleAvoidance_B.idx <= m;
         pathFollowingWithObstacleAvoidance_B.idx++) {
      sectors_data_tmp = 0;
      b_idx = 0;
      for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
           pathFollowingWithObstacleAvoidance_B.b_ii < 180;
           pathFollowingWithObstacleAvoidance_B.b_ii++) {
        if (pathFollowingWithObstacleAvoidance_B.nearIdx_data[pathFollowingWithObstacleAvoidance_B.sectorSizes_size
            [0] * pathFollowingWithObstacleAvoidance_B.b_ii +
            pathFollowingWithObstacleAvoidance_B.idx]) {
          sectors_data_tmp++;
          pathFollowingWithObstacleAvoidance_B.sd_data[b_idx] =
            static_cast<uint8_T>(pathFollowingWithObstacleAvoidance_B.b_ii + 1);
          b_idx++;
        }
      }

      pathFollowingWithObstacleAvoidance_B.obj_size[1] = sectors_data_tmp;
      for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
           pathFollowingWithObstacleAvoidance_B.b_ii < sectors_data_tmp;
           pathFollowingWithObstacleAvoidance_B.b_ii++) {
        pathFollowingWithObstacleAvoidance_B.obj_data[pathFollowingWithObstacleAvoidance_B.b_ii]
          = obj->
          MaskedHistogram[pathFollowingWithObstacleAvoidance_B.sd_data[pathFollowingWithObstacleAvoidance_B.b_ii]
          - 1];
      }

      pathFollowingWithObstacleAvoidance_B.freeDirs_data[pathFollowingWithObstacleAvoidance_B.idx]
        = !pathFollowingWithObstacle_any_i
        (pathFollowingWithObstacleAvoidance_B.obj_data,
         pathFollowingWithObstacleAvoidance_B.obj_size);
    }

    pathFollowingWithObstacleAvoidance_B.idx =
      pathFollowingWithObstacleAvoidance_B.sectorSizes_size[0] - 1;
    m = 0;
    pathFollowingWithObstacleAvoidance_B.candidateDirections_size[0] = 1;
    sectors_data_tmp = 0;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <=
         pathFollowingWithObstacleAvoidance_B.idx;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      if (pathFollowingWithObstacleAvoidance_B.freeDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii])
      {
        m++;
        pathFollowingWithObstacleAvoidance_B.candidateDirections_data[sectors_data_tmp]
          =
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii];
        sectors_data_tmp++;
      }
    }

    pathFollowingWithObstacleAvoidance_B.candidateDirections_size[1] = m;
    VectorFieldHistogramBase_comput(obj,
      pathFollowingWithObstacleAvoidance_B.candidateDirections_data,
      pathFollowingWithObstacleAvoidance_B.candidateDirections_size, targetDir,
      obj->PreviousDirection,
      pathFollowingWithObstacleAvoidance_B.candidateDirs_data,
      pathFollowingWithObstacleAvoidance_B.candidateDirs_size);
    m = pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1];
    if (pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1] <= 2) {
      if (pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1] == 0) {
        pathFollowingWithObstacleAvoidance_B.cVal = (rtNaN);
      } else if (pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1] == 1)
      {
        pathFollowingWithObstacleAvoidance_B.cVal =
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0];
      } else if ((pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0] >
                  pathFollowingWithObstacleAvoidance_B.candidateDirs_data[1]) ||
                 (rtIsNaN
                  (pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0]) &&
                  (!rtIsNaN
                   (pathFollowingWithObstacleAvoidance_B.candidateDirs_data[1]))))
      {
        pathFollowingWithObstacleAvoidance_B.cVal =
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[1];
      } else {
        pathFollowingWithObstacleAvoidance_B.cVal =
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0];
      }
    } else {
      if (!rtIsNaN(pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0]))
      {
        b_idx = 1;
      } else {
        b_idx = 0;
        sectors_data_tmp = 2;
        exitg1 = false;
        while ((!exitg1) && (sectors_data_tmp <=
                             pathFollowingWithObstacleAvoidance_B.candidateDirs_size
                             [1])) {
          if (!rtIsNaN
              (pathFollowingWithObstacleAvoidance_B.candidateDirs_data[sectors_data_tmp
               - 1])) {
            b_idx = sectors_data_tmp;
            exitg1 = true;
          } else {
            sectors_data_tmp++;
          }
        }
      }

      if (b_idx == 0) {
        pathFollowingWithObstacleAvoidance_B.cVal =
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[0];
      } else {
        pathFollowingWithObstacleAvoidance_B.cVal =
          pathFollowingWithObstacleAvoidance_B.candidateDirs_data[b_idx - 1];
        for (sectors_data_tmp = b_idx + 1; sectors_data_tmp <= m;
             sectors_data_tmp++) {
          pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp =
            pathFollowingWithObstacleAvoidance_B.candidateDirs_data[sectors_data_tmp
            - 1];
          if (pathFollowingWithObstacleAvoidance_B.cVal >
              pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp) {
            pathFollowingWithObstacleAvoidance_B.cVal =
              pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp;
          }
        }
      }
    }

    m = pathFollowingWithObstacleAvoidance_B.candidateDirs_size[0] *
      pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1] - 1;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      pathFollowingWithObstacleAvoidance_B.cDiff_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        =
        pathFollowingWithObstacleAvoidance_B.candidateDirs_data[pathFollowingWithObstacleAvoidance_B.b_ii]
        - pathFollowingWithObstacleAvoidance_B.cVal;
    }

    m = pathFollowingWithObstacleAvoidance_B.candidateDirs_size[1] - 1;
    pathFollowingWithObstacleAvoidance_B.idx = 0;
    sectors_data_tmp = 0;
    for (pathFollowingWithObstacleAvoidance_B.b_ii = 0;
         pathFollowingWithObstacleAvoidance_B.b_ii <= m;
         pathFollowingWithObstacleAvoidance_B.b_ii++) {
      if (pathFollowingWithObstacleAvoidance_B.cDiff_data[pathFollowingWithObstacleAvoidance_B.b_ii]
          < 1.4901161193847656E-8) {
        pathFollowingWithObstacleAvoidance_B.idx++;
        pathFollowingWithObstacleAvoidance_B.td_data[sectors_data_tmp] =
          pathFollowingWithObstacleAvoidance_B.b_ii + 1;
        sectors_data_tmp++;
      }
    }

    if (pathFollowingWithObstacleAvoidance_B.idx <= 2) {
      if (pathFollowingWithObstacleAvoidance_B.idx == 0) {
        thetaSteer = (rtNaN);
      } else if (pathFollowingWithObstacleAvoidance_B.idx == 1) {
        thetaSteer =
          pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
          [0] - 1];
      } else {
        pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp =
          pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
          [1] - 1];
        thetaSteer =
          pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
          [0] - 1];
        if ((thetaSteer >
             pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp) ||
            (rtIsNaN
             (pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
              [0] - 1]) && (!rtIsNaN
                            (pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp))))
        {
          thetaSteer =
            pathFollowingWithObstacleAvoidance_B.nonNarrowDirs_data_tmp;
        }
      }
    } else {
      thetaSteer =
        pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
        [0] - 1];
      if (!rtIsNaN(thetaSteer)) {
        b_idx = 1;
      } else {
        b_idx = 0;
        sectors_data_tmp = 2;
        exitg1 = false;
        while ((!exitg1) && (sectors_data_tmp <=
                             pathFollowingWithObstacleAvoidance_B.idx)) {
          if (!rtIsNaN
              (pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
               [sectors_data_tmp - 1] - 1])) {
            b_idx = sectors_data_tmp;
            exitg1 = true;
          } else {
            sectors_data_tmp++;
          }
        }
      }

      if (b_idx != 0) {
        thetaSteer =
          pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.td_data
          [b_idx - 1] - 1];
        for (sectors_data_tmp = b_idx + 1; sectors_data_tmp <=
             pathFollowingWithObstacleAvoidance_B.idx; sectors_data_tmp++) {
          pathFollowingWithObstacleAvoidance_B.b_ii =
            pathFollowingWithObstacleAvoidance_B.td_data[sectors_data_tmp - 1] -
            1;
          if (thetaSteer >
              pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.b_ii])
          {
            thetaSteer =
              pathFollowingWithObstacleAvoidance_B.candidateDirections_data[pathFollowingWithObstacleAvoidance_B.b_ii];
          }
        }
      }
    }

    obj->PreviousDirection = thetaSteer;
  }

  return thetaSteer;
}

static real_T VectorFieldHistogramBase_stepIm(nav_slalgs_internal_VectorFie_T
  *obj, const real_T varargin_1[360], const real_T varargin_2[360], real_T
  varargin_3)
{
  real_T steeringDir;
  boolean_T scan_ContainsOnlyFiniteData;
  VectorFieldHistogram_parseAndVa(varargin_1, varargin_2, varargin_3,
    pathFollowingWithObstacleAvoidance_B.scan_InternalRanges_data,
    &pathFollowingWithObstacleAvoidance_B.scan_InternalRanges_size,
    pathFollowingWithObstacleAvoidance_B.scan_InternalAngles_data,
    &pathFollowingWithObstacleAvoidance_B.scan_InternalAngles_size,
    &scan_ContainsOnlyFiniteData, &pathFollowingWithObstacleAvoidance_B.target);
  if (fabs(pathFollowingWithObstacleAvoidance_B.target) > 3.1415926535897931) {
    pathFollowingWithObstacleAvoidance_B.target =
      pathFollowingWithOb_wrapToPi_iy
      (pathFollowingWithObstacleAvoidance_B.target);
  }

  VectorFieldHistogramBase_buildP(obj,
    pathFollowingWithObstacleAvoidance_B.scan_InternalRanges_data,
    &pathFollowingWithObstacleAvoidance_B.scan_InternalRanges_size,
    pathFollowingWithObstacleAvoidance_B.scan_InternalAngles_data,
    &pathFollowingWithObstacleAvoidance_B.scan_InternalAngles_size,
    scan_ContainsOnlyFiniteData);
  VectorFieldHistogramBase_buildB(obj);
  VectorFieldHistogramBase_buildM(obj,
    pathFollowingWithObstacleAvoidance_B.scan_InternalRanges_data,
    &pathFollowingWithObstacleAvoidance_B.scan_InternalRanges_size,
    pathFollowingWithObstacleAvoidance_B.scan_InternalAngles_data,
    &pathFollowingWithObstacleAvoidance_B.scan_InternalAngles_size,
    scan_ContainsOnlyFiniteData);
  steeringDir = VectorFieldHistogramBase_select(obj,
    pathFollowingWithObstacleAvoidance_B.target);
  return steeringDir;
}

static real_T pathFollowingWi_SystemCore_step(nav_slalgs_internal_VectorFie_T
  *obj, const real_T varargin_1[360], const real_T varargin_2[360], real_T
  varargin_3)
{
  real_T varargout_1;
  varargout_1 = VectorFieldHistogramBase_stepIm(obj, varargin_1, varargin_2,
    varargin_3);
  return varargout_1;
}

static void matlabCodegenHandle_matlabCod_i(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void pathFollowingWithObsta_linspace(real_T d1, real_T d2, real_T y[180])
{
  real_T delta1;
  real_T delta2;
  int32_T d_k;
  y[179] = d2;
  y[0] = d1;
  if (d1 == -d2) {
    for (d_k = 0; d_k < 178; d_k++) {
      y[d_k + 1] = (static_cast<real_T>((d_k + 2) << 1) - 181.0) / 179.0 * d2;
    }
  } else if (((d1 < 0.0) != (d2 < 0.0)) && ((fabs(d1) > 8.9884656743115785E+307)
              || (fabs(d2) > 8.9884656743115785E+307))) {
    delta1 = d1 / 179.0;
    delta2 = d2 / 179.0;
    for (d_k = 0; d_k < 178; d_k++) {
      y[d_k + 1] = ((static_cast<real_T>(d_k) + 1.0) * delta2 + d1) - (
        static_cast<real_T>(d_k) + 1.0) * delta1;
    }
  } else {
    delta1 = (d2 - d1) / 179.0;
    for (d_k = 0; d_k < 178; d_k++) {
      y[d_k + 1] = (static_cast<real_T>(d_k) + 1.0) * delta1 + d1;
    }
  }
}

static void VectorFieldHistogramBase_setupI(nav_slalgs_internal_VectorFie_T *obj)
{
  real_T obj_0;
  int32_T i;
  obj->PreviousDirection = 0.0;
  pathFollowingWithObsta_linspace(obj->AngularLimits[0] + 0.017453292519943295,
    obj->AngularLimits[1] - 0.017453292519943295, obj->AngularSectorMidPoints);
  obj->AngularDifference = fabs(pathFollowingWithOb_wrapToPi_iy
    (obj->AngularSectorMidPoints[1] - obj->AngularSectorMidPoints[0]));
  obj_0 = obj->AngularDifference / 2.0;
  for (i = 0; i < 180; i++) {
    obj->AngularSectorStartPoints[i] = obj->AngularSectorMidPoints[i] - obj_0;
    obj->BinaryHistogram[i] = false;
  }
}

static void pathFollowingW_SystemCore_setup(nav_slalgs_internal_VectorFie_T *obj)
{
  obj->isInitialized = 1;
  VectorFieldHistogramBase_setupI(obj);
}

// Model step function
void pathFollowingWithObstacleAvoidance_step(void)
{
  boolean_T b[2];
  boolean_T rEQ0;
  boolean_T rtb_LogicalOperator;
  boolean_T exitg1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S18>/In1'

  pathFollowing_SystemCore_step_i(&rtb_LogicalOperator,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_AngleMin,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_AngleMax,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_AngleIncrement,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_TimeIncrement,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_ScanTime,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_RangeMin,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_RangeMax,
    pathFollowingWithObstacleAvoidance_B.b_varargout_2_Ranges,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_Ranges_SL_Info_Cu,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_Ranges_SL_Info_Re,
    pathFollowingWithObstacleAvoidance_B.b_varargout_2_Intensities,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_Intensities_SL_In,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_Intensities_SL__m,
    &pathFollowingWithObstacleAvoidance_B.b_varargout_2_Header);

  // Outputs for Enabled SubSystem: '<Root>/Extract message data' incorporates:
  //   EnablePort: '<S1>/Enable'

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (rtb_LogicalOperator) {
    pathFollowingWithObstacleAvoidance_B.In1.AngleMin =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_AngleMin;
    pathFollowingWithObstacleAvoidance_B.In1.AngleMax =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_AngleMax;
    pathFollowingWithObstacleAvoidance_B.In1.AngleIncrement =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_AngleIncrement;
    pathFollowingWithObstacleAvoidance_B.In1.TimeIncrement =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_TimeIncrement;
    pathFollowingWithObstacleAvoidance_B.In1.ScanTime =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_ScanTime;
    pathFollowingWithObstacleAvoidance_B.In1.RangeMin =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_RangeMin;
    pathFollowingWithObstacleAvoidance_B.In1.RangeMax =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_RangeMax;
    pathFollowingWithObstacleAvoidance_B.In1.Ranges_SL_Info.CurrentLength =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_Ranges_SL_Info_Cu;
    pathFollowingWithObstacleAvoidance_B.In1.Ranges_SL_Info.ReceivedLength =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_Ranges_SL_Info_Re;
    pathFollowingWithObstacleAvoidance_B.In1.Intensities_SL_Info.CurrentLength =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_Intensities_SL_In;
    pathFollowingWithObstacleAvoidance_B.In1.Intensities_SL_Info.ReceivedLength =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_Intensities_SL__m;
    pathFollowingWithObstacleAvoidance_B.In1.Header =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_Header;
    for (pathFollowingWithObstacleAvoidance_B.i = 0;
         pathFollowingWithObstacleAvoidance_B.i < 360;
         pathFollowingWithObstacleAvoidance_B.i++) {
      pathFollowingWithObstacleAvoidance_B.In1.Ranges[pathFollowingWithObstacleAvoidance_B.i]
        =
        pathFollowingWithObstacleAvoidance_B.b_varargout_2_Ranges[pathFollowingWithObstacleAvoidance_B.i];
      pathFollowingWithObstacleAvoidance_B.In1.Intensities[pathFollowingWithObstacleAvoidance_B.i]
        =
        pathFollowingWithObstacleAvoidance_B.b_varargout_2_Intensities[pathFollowingWithObstacleAvoidance_B.i];

      // MATLAB Function: '<S1>/MATLAB Function'
      pathFollowingWithObstacleAvoidance_B.Ranges[pathFollowingWithObstacleAvoidance_B.i]
        =
        pathFollowingWithObstacleAvoidance_B.In1.Ranges[pathFollowingWithObstacleAvoidance_B.i];
    }

    // MATLAB Function: '<S1>/MATLAB Function' incorporates:
    //   Inport: '<S18>/In1'

    pathFollowingWithObstacleAvoidance_B.angMax =
      pathFollowingWithObstacleAvoidance_B.In1.AngleMax;
    pathFollowingWithObstacleAvoidance_B.Angles[359] =
      pathFollowingWithObstacleAvoidance_B.In1.AngleMin;
    pathFollowingWithObstacleAvoidance_B.Angles[0] =
      pathFollowingWithObstacleAvoidance_B.In1.AngleMax;
    if (pathFollowingWithObstacleAvoidance_B.In1.AngleMax == -static_cast<real_T>
        (pathFollowingWithObstacleAvoidance_B.In1.AngleMin)) {
      for (pathFollowingWithObstacleAvoidance_B.i = 0;
           pathFollowingWithObstacleAvoidance_B.i < 358;
           pathFollowingWithObstacleAvoidance_B.i++) {
        pathFollowingWithObstacleAvoidance_B.Angles[pathFollowingWithObstacleAvoidance_B.i
          + 1] = ((static_cast<real_T>(pathFollowingWithObstacleAvoidance_B.i) +
                   2.0) * 2.0 - 361.0) / 359.0 *
          pathFollowingWithObstacleAvoidance_B.In1.AngleMin;
      }
    } else if (((pathFollowingWithObstacleAvoidance_B.In1.AngleMax < 0.0F) !=
                (pathFollowingWithObstacleAvoidance_B.In1.AngleMin < 0.0F)) &&
               ((fabs(static_cast<real_T>
                      (pathFollowingWithObstacleAvoidance_B.In1.AngleMax)) >
                 8.9884656743115785E+307) || (fabs(static_cast<real_T>
                  (pathFollowingWithObstacleAvoidance_B.In1.AngleMin)) >
                 8.9884656743115785E+307))) {
      pathFollowingWithObstacleAvoidance_B.delta1 =
        pathFollowingWithObstacleAvoidance_B.In1.AngleMax / 359.0;
      pathFollowingWithObstacleAvoidance_B.delta2 =
        pathFollowingWithObstacleAvoidance_B.In1.AngleMin / 359.0;
      for (pathFollowingWithObstacleAvoidance_B.i = 0;
           pathFollowingWithObstacleAvoidance_B.i < 358;
           pathFollowingWithObstacleAvoidance_B.i++) {
        pathFollowingWithObstacleAvoidance_B.Angles[pathFollowingWithObstacleAvoidance_B.i
          + 1] = ((static_cast<real_T>(pathFollowingWithObstacleAvoidance_B.i) +
                   1.0) * pathFollowingWithObstacleAvoidance_B.delta2 +
                  pathFollowingWithObstacleAvoidance_B.angMax) -
          (static_cast<real_T>(pathFollowingWithObstacleAvoidance_B.i) + 1.0) *
          pathFollowingWithObstacleAvoidance_B.delta1;
      }
    } else {
      pathFollowingWithObstacleAvoidance_B.delta1 = (static_cast<real_T>
        (pathFollowingWithObstacleAvoidance_B.In1.AngleMin) -
        pathFollowingWithObstacleAvoidance_B.In1.AngleMax) / 359.0;
      for (pathFollowingWithObstacleAvoidance_B.i = 0;
           pathFollowingWithObstacleAvoidance_B.i < 358;
           pathFollowingWithObstacleAvoidance_B.i++) {
        pathFollowingWithObstacleAvoidance_B.Angles[pathFollowingWithObstacleAvoidance_B.i
          + 1] = (static_cast<real_T>(pathFollowingWithObstacleAvoidance_B.i) +
                  1.0) * pathFollowingWithObstacleAvoidance_B.delta1 +
          pathFollowingWithObstacleAvoidance_B.angMax;
      }
    }

    pathFollowingWithObsta_wrapToPi(pathFollowingWithObstacleAvoidance_B.Angles);
  }

  // End of MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Extract message data'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S6>/SourceBlock'
  rtb_LogicalOperator =
    Sub_pathFollowingWithObstacleAvoidance_14.getLatestMessage
    (&pathFollowingWithObstacleAvoidance_B.b_varargout_2_j);

  // Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
  //   EnablePort: '<S8>/Enable'

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S19>/Enable'

  if (rtb_LogicalOperator) {
    // Sqrt: '<S28>/sqrt' incorporates:
    //   Product: '<S29>/Product'
    //   Product: '<S29>/Product1'
    //   Product: '<S29>/Product2'
    //   Product: '<S29>/Product3'
    //   Sum: '<S29>/Sum'

    pathFollowingWithObstacleAvoidance_B.delta1 = sqrt
      (((pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.X
         * pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.X
         + pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.Y
         * pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.Y)
        + pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.Z
        * pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.Z)
       + pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.W
       * pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.W);

    // Product: '<S23>/Product'
    pathFollowingWithObstacleAvoidance_B.delta2 =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.X /
      pathFollowingWithObstacleAvoidance_B.delta1;

    // Product: '<S23>/Product1'
    pathFollowingWithObstacleAvoidance_B.Product =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.Y /
      pathFollowingWithObstacleAvoidance_B.delta1;

    // Product: '<S23>/Product2'
    pathFollowingWithObstacleAvoidance_B.angMax =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.Z /
      pathFollowingWithObstacleAvoidance_B.delta1;

    // Product: '<S23>/Product3'
    pathFollowingWithObstacleAvoidance_B.delta1 =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Orientation.W /
      pathFollowingWithObstacleAvoidance_B.delta1;

    // Fcn: '<S21>/fcn3'
    pathFollowingWithObstacleAvoidance_B.fcn3 =
      (pathFollowingWithObstacleAvoidance_B.Product *
       pathFollowingWithObstacleAvoidance_B.delta1 -
       pathFollowingWithObstacleAvoidance_B.delta2 *
       pathFollowingWithObstacleAvoidance_B.angMax) * -2.0;

    // Fcn: '<S21>/fcn2' incorporates:
    //   Fcn: '<S21>/fcn5'

    pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp =
      pathFollowingWithObstacleAvoidance_B.delta2 *
      pathFollowingWithObstacleAvoidance_B.delta2;
    pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_b =
      pathFollowingWithObstacleAvoidance_B.Product *
      pathFollowingWithObstacleAvoidance_B.Product;
    pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_l =
      pathFollowingWithObstacleAvoidance_B.angMax *
      pathFollowingWithObstacleAvoidance_B.angMax;
    pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_h =
      pathFollowingWithObstacleAvoidance_B.delta1 *
      pathFollowingWithObstacleAvoidance_B.delta1;

    // Trigonometry: '<S22>/Trigonometric Function1' incorporates:
    //   Fcn: '<S21>/fcn1'
    //   Fcn: '<S21>/fcn2'

    pathFollowingWithObstacleAvoidance_B.VectorConcatenate[0] = rt_atan2d_snf
      ((pathFollowingWithObstacleAvoidance_B.Product *
        pathFollowingWithObstacleAvoidance_B.angMax +
        pathFollowingWithObstacleAvoidance_B.delta2 *
        pathFollowingWithObstacleAvoidance_B.delta1) * 2.0,
       ((pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp +
         pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_b) -
        pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_l) -
       pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_h);

    // Trigonometry: '<S22>/Trigonometric Function3' incorporates:
    //   Fcn: '<S21>/fcn4'
    //   Fcn: '<S21>/fcn5'

    pathFollowingWithObstacleAvoidance_B.VectorConcatenate[2] = rt_atan2d_snf
      ((pathFollowingWithObstacleAvoidance_B.angMax *
        pathFollowingWithObstacleAvoidance_B.delta1 +
        pathFollowingWithObstacleAvoidance_B.delta2 *
        pathFollowingWithObstacleAvoidance_B.Product) * 2.0,
       ((pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp -
         pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_b) -
        pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_l) +
       pathFollowingWithObstacleAvoidance_B.VectorConcatenate_tmp_h);

    // If: '<S24>/If' incorporates:
    //   Constant: '<S25>/Constant'
    //   Constant: '<S26>/Constant'

    if (pathFollowingWithObstacleAvoidance_B.fcn3 > 1.0) {
      pathFollowingWithObstacleAvoidance_B.fcn3 =
        pathFollowingWithObstacleAvoidance_P.Constant_Value_c;
    } else {
      if (pathFollowingWithObstacleAvoidance_B.fcn3 < -1.0) {
        pathFollowingWithObstacleAvoidance_B.fcn3 =
          pathFollowingWithObstacleAvoidance_P.Constant_Value_a;
      }
    }

    // End of If: '<S24>/If'

    // Trigonometry: '<S22>/trigFcn'
    if (pathFollowingWithObstacleAvoidance_B.fcn3 > 1.0) {
      pathFollowingWithObstacleAvoidance_B.fcn3 = 1.0;
    } else {
      if (pathFollowingWithObstacleAvoidance_B.fcn3 < -1.0) {
        pathFollowingWithObstacleAvoidance_B.fcn3 = -1.0;
      }
    }

    pathFollowingWithObstacleAvoidance_B.VectorConcatenate[1] = asin
      (pathFollowingWithObstacleAvoidance_B.fcn3);

    // End of Trigonometry: '<S22>/trigFcn'

    // SignalConversion generated from: '<S8>/Bus Selector1'
    pathFollowingWithObstacleAvoidance_B.X =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Position.X;

    // SignalConversion generated from: '<S8>/Bus Selector1'
    pathFollowingWithObstacleAvoidance_B.Y =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_j.Pose.Position.Y;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S7>/SourceBlock'
  rtb_LogicalOperator =
    Sub_pathFollowingWithObstacleAvoidance_97.getLatestMessage
    (&pathFollowingWithObstacleAvoidance_B.b_varargout_2_g);

  // Outputs for Enabled SubSystem: '<Root>/Subsystem1' incorporates:
  //   EnablePort: '<S9>/Enable'

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S20>/Enable'

  if (rtb_LogicalOperator) {
    // Reshape: '<S9>/Reshape'
    pathFollowingWithObstacleAvoidance_B.Reshape[0] =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_g.Position.X;
    pathFollowingWithObstacleAvoidance_B.Reshape[1] =
      pathFollowingWithObstacleAvoidance_B.b_varargout_2_g.Position.Y;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subsystem1'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // MATLAB Function: '<S4>/ Extract Goal'
  b[0] = rtIsNaN(pathFollowingWithObstacleAvoidance_B.Reshape[0]);
  b[1] = rtIsNaN(pathFollowingWithObstacleAvoidance_B.Reshape[1]);
  pathFollowingWithObstacleAvoidance_B.i = 0;
  pathFollowingWithObstacleAvoidance_B.jj = 1;
  exitg1 = false;
  while ((!exitg1) && (pathFollowingWithObstacleAvoidance_B.jj <= 2)) {
    if (b[pathFollowingWithObstacleAvoidance_B.jj - 1]) {
      pathFollowingWithObstacleAvoidance_B.i++;
      if (pathFollowingWithObstacleAvoidance_B.i >= 2) {
        exitg1 = true;
      } else {
        pathFollowingWithObstacleAvoidance_B.jj++;
      }
    } else {
      pathFollowingWithObstacleAvoidance_B.jj++;
    }
  }

  if (1 > pathFollowingWithObstacleAvoidance_B.i) {
    pathFollowingWithObstacleAvoidance_B.i = 0;
  }

  pathFollowingWithObstacleAvoidance_B.e_size[0] = 1;
  pathFollowingWithObstacleAvoidance_B.e_size[1] =
    pathFollowingWithObstacleAvoidance_B.i;
  pathFollowingWithObstacleAvoidance_B.i--;
  for (pathFollowingWithObstacleAvoidance_B.jj = 0;
       pathFollowingWithObstacleAvoidance_B.jj <=
       pathFollowingWithObstacleAvoidance_B.i;
       pathFollowingWithObstacleAvoidance_B.jj++) {
    pathFollowingWithObstacleAvoidance_B.e_data[pathFollowingWithObstacleAvoidance_B.jj]
      = 1.0;
  }

  pathFollowingWithObstacl_sort_a(pathFollowingWithObstacleAvoidance_B.e_data,
    pathFollowingWithObstacleAvoidance_B.e_size);
  pathFollowingWithObs_do_vectors(pathFollowingWithObstacleAvoidance_B.e_data,
    pathFollowingWithObstacleAvoidance_B.e_size,
    &pathFollowingWithObstacleAvoidance_B.c_data_n,
    pathFollowingWithObstacleAvoidance_B.c_size,
    &pathFollowingWithObstacleAvoidance_B.ia_data,
    &pathFollowingWithObstacleAvoidance_B.ia_size,
    &pathFollowingWithObstacleAvoidance_B.ib_size);

  // Sum: '<S4>/Subtract' incorporates:
  //   MATLAB Function: '<S4>/ Extract Goal'

  pathFollowingWithObstacleAvoidance_B.angMax =
    pathFollowingWithObstacleAvoidance_B.X -
    pathFollowingWithObstacleAvoidance_B.Reshape[0];
  pathFollowingWithObstacleAvoidance_B.delta1 =
    pathFollowingWithObstacleAvoidance_B.Y -
    pathFollowingWithObstacleAvoidance_B.Reshape[1];

  // Logic: '<S3>/Logical Operator' incorporates:
  //   Constant: '<S4>/GoalRadius'
  //   DotProduct: '<S4>/Dot Product'
  //   RelationalOperator: '<S4>/Relational Operator'
  //   Sqrt: '<S4>/Sqrt'

  rtb_LogicalOperator = !(sqrt(pathFollowingWithObstacleAvoidance_B.angMax *
    pathFollowingWithObstacleAvoidance_B.angMax +
    pathFollowingWithObstacleAvoidance_B.delta1 *
    pathFollowingWithObstacleAvoidance_B.delta1) <=
    pathFollowingWithObstacleAvoidance_P.GoalRadius_Value);

  // MATLABSystem: '<S4>/Pure Pursuit'
  if (pathFollowingWithObstacleAvoidance_DW.obj_h.DesiredLinearVelocity !=
      pathFollowingWithObstacleAvoidance_P.PurePursuit_DesiredLinearVeloci) {
    pathFollowingWithObstacleAvoidance_DW.obj_h.DesiredLinearVelocity =
      pathFollowingWithObstacleAvoidance_P.PurePursuit_DesiredLinearVeloci;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj_h.MaxAngularVelocity !=
      pathFollowingWithObstacleAvoidance_P.PurePursuit_MaxAngularVelocity) {
    pathFollowingWithObstacleAvoidance_DW.obj_h.MaxAngularVelocity =
      pathFollowingWithObstacleAvoidance_P.PurePursuit_MaxAngularVelocity;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadDistance !=
      pathFollowingWithObstacleAvoidance_P.PurePursuit_LookaheadDistance) {
    pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadDistance =
      pathFollowingWithObstacleAvoidance_P.PurePursuit_LookaheadDistance;
  }

  // SignalConversion generated from: '<S4>/Pure Pursuit'
  pathFollowingWithObstacleAvoidance_B.dv[0] =
    pathFollowingWithObstacleAvoidance_B.X;
  pathFollowingWithObstacleAvoidance_B.dv[1] =
    pathFollowingWithObstacleAvoidance_B.Y;
  pathFollowingWithObstacleAvoidance_B.dv[2] =
    pathFollowingWithObstacleAvoidance_B.VectorConcatenate[2];

  // MATLABSystem: '<S4>/Pure Pursuit'
  pathFollow_PurePursuit_stepImpl(&pathFollowingWithObstacleAvoidance_DW.obj_h,
    pathFollowingWithObstacleAvoidance_B.dv,
    pathFollowingWithObstacleAvoidance_B.Reshape,
    &pathFollowingWithObstacleAvoidance_B.angMax,
    &pathFollowingWithObstacleAvoidance_B.delta1,
    &pathFollowingWithObstacleAvoidance_B.delta2);

  // MATLABSystem: '<S2>/Vector Field Histogram' incorporates:
  //   MATLABSystem: '<S4>/Pure Pursuit'

  if (!pathFollowingWithObstac_isequal
      (pathFollowingWithObstacleAvoidance_DW.obj.DistanceLimits,
       pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_DistanceLi)) {
    VectorFieldHistogramBase_set_Di(&pathFollowingWithObstacleAvoidance_DW.obj,
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_DistanceLi);
  }

  if (!pathFollowingWithObstac_isequal
      (pathFollowingWithObstacleAvoidance_DW.obj.HistogramThresholds,
       pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_HistogramT)) {
    VectorFieldHistogramBase_set_Hi(&pathFollowingWithObstacleAvoidance_DW.obj,
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_HistogramT);
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj.RobotRadius !=
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_RobotRadiu) {
    pathFollowingWithObstacleAvoidance_DW.obj.RobotRadius =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_RobotRadiu;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj.SafetyDistance !=
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_SafetyDist) {
    pathFollowingWithObstacleAvoidance_DW.obj.SafetyDistance =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_SafetyDist;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj.MinTurningRadius !=
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_MinTurning) {
    pathFollowingWithObstacleAvoidance_DW.obj.MinTurningRadius =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_MinTurning;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj.TargetDirectionWeight !=
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_TargetDire) {
    pathFollowingWithObstacleAvoidance_DW.obj.TargetDirectionWeight =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_TargetDire;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj.CurrentDirectionWeight !=
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_CurrentDir) {
    pathFollowingWithObstacleAvoidance_DW.obj.CurrentDirectionWeight =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_CurrentDir;
  }

  if (pathFollowingWithObstacleAvoidance_DW.obj.PreviousDirectionWeight !=
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_PreviousDi) {
    pathFollowingWithObstacleAvoidance_DW.obj.PreviousDirectionWeight =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_PreviousDi;
  }

  pathFollowingWithObstacleAvoidance_B.delta1 = pathFollowingWi_SystemCore_step(
    &pathFollowingWithObstacleAvoidance_DW.obj,
    pathFollowingWithObstacleAvoidance_B.Ranges,
    pathFollowingWithObstacleAvoidance_B.Angles,
    pathFollowingWithObstacleAvoidance_B.delta2);

  // If: '<S2>/If' incorporates:
  //   MATLABSystem: '<S2>/Vector Field Histogram'
  //   RelationalOperator: '<S2>/Relational Operator'

  if (rtIsNaN(pathFollowingWithObstacleAvoidance_B.delta1)) {
    // Outputs for IfAction SubSystem: '<S2>/Recovery' incorporates:
    //   ActionPort: '<S13>/Action Port'

    // SignalConversion generated from: '<S13>/V' incorporates:
    //   Constant: '<S13>/Constant'

    pathFollowingWithObstacleAvoidance_B.angMax =
      pathFollowingWithObstacleAvoidance_P.Constant_Value_f;

    // SignalConversion generated from: '<S13>/W' incorporates:
    //   Constant: '<S13>/Constant1'

    pathFollowingWithObstacleAvoidance_B.delta1 =
      pathFollowingWithObstacleAvoidance_P.Constant1_Value;

    // End of Outputs for SubSystem: '<S2>/Recovery'
  } else {
    // Outputs for IfAction SubSystem: '<S2>/Path Following' incorporates:
    //   ActionPort: '<S12>/Action Port'

    // MATLAB Function: '<S12>/Compute Angular Velocity' incorporates:
    //   Constant: '<S12>/MaxAngularVelocity'

    pathFollowingWithObstacleAvoidance_B.delta2 = rt_atan2d_snf(sin
      (pathFollowingWithObstacleAvoidance_B.delta1), cos
      (pathFollowingWithObstacleAvoidance_B.delta1));
    if (fabs(pathFollowingWithObstacleAvoidance_B.delta2) > 3.1415926535897931)
    {
      if (rtIsNaN(pathFollowingWithObstacleAvoidance_B.delta2 +
                  3.1415926535897931)) {
        pathFollowingWithObstacleAvoidance_B.delta1 = (rtNaN);
      } else if (rtIsInf(pathFollowingWithObstacleAvoidance_B.delta2 +
                         3.1415926535897931)) {
        pathFollowingWithObstacleAvoidance_B.delta1 = (rtNaN);
      } else if (pathFollowingWithObstacleAvoidance_B.delta2 +
                 3.1415926535897931 == 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = 0.0;
      } else {
        pathFollowingWithObstacleAvoidance_B.delta1 = fmod
          (pathFollowingWithObstacleAvoidance_B.delta2 + 3.1415926535897931,
           6.2831853071795862);
        rEQ0 = (pathFollowingWithObstacleAvoidance_B.delta1 == 0.0);
        if (!rEQ0) {
          pathFollowingWithObstacleAvoidance_B.Product = fabs
            ((pathFollowingWithObstacleAvoidance_B.delta2 + 3.1415926535897931) /
             6.2831853071795862);
          rEQ0 = !(fabs(pathFollowingWithObstacleAvoidance_B.Product - floor
                        (pathFollowingWithObstacleAvoidance_B.Product + 0.5)) >
                   2.2204460492503131E-16 *
                   pathFollowingWithObstacleAvoidance_B.Product);
        }

        if (rEQ0) {
          pathFollowingWithObstacleAvoidance_B.delta1 = 0.0;
        } else {
          if (pathFollowingWithObstacleAvoidance_B.delta2 + 3.1415926535897931 <
              0.0) {
            pathFollowingWithObstacleAvoidance_B.delta1 += 6.2831853071795862;
          }
        }
      }

      if ((pathFollowingWithObstacleAvoidance_B.delta1 == 0.0) &&
          (pathFollowingWithObstacleAvoidance_B.delta2 + 3.1415926535897931 >
           0.0)) {
        pathFollowingWithObstacleAvoidance_B.delta1 = 6.2831853071795862;
      }

      pathFollowingWithObstacleAvoidance_B.delta2 =
        pathFollowingWithObstacleAvoidance_B.delta1 - 3.1415926535897931;
    }

    pathFollowingWithObstacleAvoidance_B.delta1 = 2.0 * sin
      (pathFollowingWithObstacleAvoidance_B.delta2);
    if (fabs(fabs(pathFollowingWithObstacleAvoidance_B.delta2) -
             3.1415926535897931) < 1.0E-12) {
      if (pathFollowingWithObstacleAvoidance_B.delta1 < 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = -1.0;
      } else if (pathFollowingWithObstacleAvoidance_B.delta1 > 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = 1.0;
      } else if (pathFollowingWithObstacleAvoidance_B.delta1 == 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = 0.0;
      } else {
        pathFollowingWithObstacleAvoidance_B.delta1 = (rtNaN);
      }
    }

    if (fabs(pathFollowingWithObstacleAvoidance_B.delta1) >
        pathFollowingWithObstacleAvoidance_P.MaxAngularVelocity_Value) {
      if (pathFollowingWithObstacleAvoidance_B.delta1 < 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = -1.0;
      } else if (pathFollowingWithObstacleAvoidance_B.delta1 > 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = 1.0;
      } else if (pathFollowingWithObstacleAvoidance_B.delta1 == 0.0) {
        pathFollowingWithObstacleAvoidance_B.delta1 = 0.0;
      } else {
        pathFollowingWithObstacleAvoidance_B.delta1 = (rtNaN);
      }

      pathFollowingWithObstacleAvoidance_B.delta1 *=
        pathFollowingWithObstacleAvoidance_P.MaxAngularVelocity_Value;
    }

    // End of MATLAB Function: '<S12>/Compute Angular Velocity'
    // End of Outputs for SubSystem: '<S2>/Path Following'
  }

  // End of If: '<S2>/If'

  // BusAssignment: '<S3>/Bus Assignment' incorporates:
  //   Constant: '<S15>/Constant'
  //   Product: '<S3>/Product'
  //   Product: '<S3>/Product1'

  pathFollowingWithObstacleAvoidance_B.BusAssignment =
    pathFollowingWithObstacleAvoidance_P.Constant_Value_hx;
  pathFollowingWithObstacleAvoidance_B.BusAssignment.Linear.X =
    pathFollowingWithObstacleAvoidance_B.angMax * static_cast<real_T>
    (rtb_LogicalOperator);
  pathFollowingWithObstacleAvoidance_B.BusAssignment.Angular.Z =
    pathFollowingWithObstacleAvoidance_B.delta1 * static_cast<real_T>
    (rtb_LogicalOperator);

  // Outputs for Atomic SubSystem: '<S3>/Publish1'
  // MATLABSystem: '<S16>/SinkBlock'
  Pub_pathFollowingWithObstacleAvoidance_85.publish
    (&pathFollowingWithObstacleAvoidance_B.BusAssignment);

  // End of Outputs for SubSystem: '<S3>/Publish1'
}

// Model initialize function
void pathFollowingWithObstacleAvoidance_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T tmp[13];
    char_T tmp_0[12];
    static const char_T tmp_1[12] = { '/', 'l', 'i', 'd', 'a', 'r', '2', 'D',
      's', 'c', 'a', 'n' };

    static const char_T tmp_2[27] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'l', 'o', 'c', 'a', 'l', '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', '/',
      'p', 'o', 's', 'e' };

    static const char_T tmp_3[11] = { '/', 't', 'a', 'r', 'g', 'e', 't', '_',
      'p', 'o', 's' };

    static const char_T tmp_4[17] = { '/', 's', 'i', 'm', 'u', 'l', 'i', 'n',
      'k', '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1'
    pathFollowingWithObstacleAvoidance_B.In1 =
      pathFollowingWithObstacleAvoidance_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    pathFollowingWithObstacleAvoidance_DW.obj_n.matlabCodegenIsDeleted = false;
    pathFollowingWithObstacleAvoidance_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[12] = '\x00';
    Sub_pathFollowingWithObstacleAvoidance_1.createSubscriber(tmp, 1);
    pathFollowingWithObstacleAvoidance_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Enabled SubSystem: '<Root>/Extract message data'
    for (i = 0; i < 360; i++) {
      // SystemInitialize for Outport: '<S1>/Ranges'
      pathFollowingWithObstacleAvoidance_B.Ranges[i] =
        pathFollowingWithObstacleAvoidance_P.Ranges_Y0;

      // SystemInitialize for Outport: '<S1>/Angles'
      pathFollowingWithObstacleAvoidance_B.Angles[i] =
        pathFollowingWithObstacleAvoidance_P.Angles_Y0;
    }

    // End of SystemInitialize for SubSystem: '<Root>/Extract message data'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S6>/SourceBlock'
    pathFollowingWithObstacleAvoidance_DW.obj_p.matlabCodegenIsDeleted = false;
    pathFollowingWithObstacleAvoidance_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      pathFollowingWithObstacleAvoidance_B.cv[i] = tmp_2[i];
    }

    pathFollowingWithObstacleAvoidance_B.cv[27] = '\x00';
    Sub_pathFollowingWithObstacleAvoidance_14.createSubscriber
      (pathFollowingWithObstacleAvoidance_B.cv, 1);
    pathFollowingWithObstacleAvoidance_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Enabled SubSystem: '<Root>/Subsystem'
    // SystemInitialize for Outport: '<S8>/CurrentPose'
    pathFollowingWithObstacleAvoidance_B.X =
      pathFollowingWithObstacleAvoidance_P.CurrentPose_Y0;
    pathFollowingWithObstacleAvoidance_B.Y =
      pathFollowingWithObstacleAvoidance_P.CurrentPose_Y0;
    pathFollowingWithObstacleAvoidance_B.VectorConcatenate[2] =
      pathFollowingWithObstacleAvoidance_P.CurrentPose_Y0;

    // End of SystemInitialize for SubSystem: '<Root>/Subsystem'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S7>/SourceBlock'
    pathFollowingWithObstacleAvoidance_DW.obj_e.matlabCodegenIsDeleted = false;
    pathFollowingWithObstacleAvoidance_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_0[i] = tmp_3[i];
    }

    tmp_0[11] = '\x00';
    Sub_pathFollowingWithObstacleAvoidance_97.createSubscriber(tmp_0, 1);
    pathFollowingWithObstacleAvoidance_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Enabled SubSystem: '<Root>/Subsystem1'
    // SystemInitialize for Outport: '<S9>/Waypoints'
    pathFollowingWithObstacleAvoidance_B.Reshape[0] =
      pathFollowingWithObstacleAvoidance_P.Waypoints_Y0;
    pathFollowingWithObstacleAvoidance_B.Reshape[1] =
      pathFollowingWithObstacleAvoidance_P.Waypoints_Y0;

    // End of SystemInitialize for SubSystem: '<Root>/Subsystem1'

    // SystemInitialize for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S16>/SinkBlock'
    pathFollowingWithObstacleAvoidance_DW.obj_k.matlabCodegenIsDeleted = false;
    pathFollowingWithObstacleAvoidance_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      pathFollowingWithObstacleAvoidance_B.cv1[i] = tmp_4[i];
    }

    pathFollowingWithObstacleAvoidance_B.cv1[17] = '\x00';
    Pub_pathFollowingWithObstacleAvoidance_85.createPublisher
      (pathFollowingWithObstacleAvoidance_B.cv1, 105);
    pathFollowingWithObstacleAvoidance_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S16>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Publish1'

    // Start for MATLABSystem: '<S4>/Pure Pursuit'
    pathFollowingWithObstacleAvoidance_DW.obj_h.DesiredLinearVelocity =
      pathFollowingWithObstacleAvoidance_P.PurePursuit_DesiredLinearVeloci;
    pathFollowingWithObstacleAvoidance_DW.obj_h.MaxAngularVelocity =
      pathFollowingWithObstacleAvoidance_P.PurePursuit_MaxAngularVelocity;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadDistance =
      pathFollowingWithObstacleAvoidance_P.PurePursuit_LookaheadDistance;
    pathFollowingWithObstacleAvoidance_DW.obj_h.isInitialized = 1;
    pathFollowingWithObstacleAvoidance_DW.obj_h.WaypointsInternal[0] = (rtNaN);
    pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadPoint[0] = 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.WaypointsInternal[1] = (rtNaN);
    pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadPoint[1] = 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LastPose[0] = 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LastPose[1] = 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LastPose[2] = 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.ProjectionLineIndex = 0.0;

    // InitializeConditions for MATLABSystem: '<S4>/Pure Pursuit'
    pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadPoint[0] *= 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LookaheadPoint[1] *= 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LastPose[0] *= 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LastPose[1] *= 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.LastPose[2] *= 0.0;
    pathFollowingWithObstacleAvoidance_DW.obj_h.ProjectionLineIndex *= 0.0;

    // Start for MATLABSystem: '<S2>/Vector Field Histogram'
    pathFollowingWithObstacleAvoidance_DW.obj.NarrowOpeningThreshold = 0.8;

    // InitializeConditions for MATLABSystem: '<S4>/Pure Pursuit'
    pathFollowingWithObstacleAvoidance_DW.obj_h.ProjectionPoint[0] = (rtNaN);

    // Start for MATLABSystem: '<S2>/Vector Field Histogram'
    pathFollowingWithObstacleAvoidance_DW.obj.AngularLimits[0] =
      -3.1415926535897931;

    // InitializeConditions for MATLABSystem: '<S4>/Pure Pursuit'
    pathFollowingWithObstacleAvoidance_DW.obj_h.ProjectionPoint[1] = (rtNaN);

    // Start for MATLABSystem: '<S2>/Vector Field Histogram'
    pathFollowingWithObstacleAvoidance_DW.obj.AngularLimits[1] =
      3.1415926535897931;
    pathFollowingWithObstacleAvoidance_DW.obj.isInitialized = 0;
    VectorFieldHistogramBase_set_Di(&pathFollowingWithObstacleAvoidance_DW.obj,
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_DistanceLi);
    VectorFieldHistogramBase_set_Hi(&pathFollowingWithObstacleAvoidance_DW.obj,
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_HistogramT);
    pathFollowingWithObstacleAvoidance_DW.obj.RobotRadius =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_RobotRadiu;
    pathFollowingWithObstacleAvoidance_DW.obj.SafetyDistance =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_SafetyDist;
    pathFollowingWithObstacleAvoidance_DW.obj.MinTurningRadius =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_MinTurning;
    pathFollowingWithObstacleAvoidance_DW.obj.TargetDirectionWeight =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_TargetDire;
    pathFollowingWithObstacleAvoidance_DW.obj.CurrentDirectionWeight =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_CurrentDir;
    pathFollowingWithObstacleAvoidance_DW.obj.PreviousDirectionWeight =
      pathFollowingWithObstacleAvoidance_P.VectorFieldHistogram_PreviousDi;
    pathFollowingW_SystemCore_setup(&pathFollowingWithObstacleAvoidance_DW.obj);

    // InitializeConditions for MATLABSystem: '<S2>/Vector Field Histogram'
    memset(&pathFollowingWithObstacleAvoidance_DW.obj.BinaryHistogram[0], 0,
           180U * sizeof(boolean_T));
    pathFollowingWithObstacleAvoidance_DW.obj.PreviousDirection *= 0.0;
  }
}

// Model terminate function
void pathFollowingWithObstacleAvoidance_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  matlabCodegenHandle_matlabCod_i(&pathFollowingWithObstacleAvoidance_DW.obj_n);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  matlabCodegenHandle_matlabCod_i(&pathFollowingWithObstacleAvoidance_DW.obj_p);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  matlabCodegenHandle_matlabCod_i(&pathFollowingWithObstacleAvoidance_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Terminate for MATLABSystem: '<S16>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&pathFollowingWithObstacleAvoidance_DW.obj_k);

  // End of Terminate for SubSystem: '<S3>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
