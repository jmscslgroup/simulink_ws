//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: trajectory_07_05_2021_real.h
//
// Code generated for Simulink model 'trajectory_07_05_2021_real'.
//
// Model version                  : 1.50
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Jul 11 17:36:40 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_trajectory_07_05_2021_real_h_
#define RTW_HEADER_trajectory_07_05_2021_real_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "trajectory_07_05_2021_real_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_trajectory_07_05_2021_real_T {
  real32_T fv[64];
  real32_T fv1[64];
  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist In1;// '<S11>/In1'
  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist In1_l;// '<S10>/In1'
  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist BusAssignment1;// '<Root>/Bus Assignment1' 
  real_T VectorConcatenate[3];         // '<Root>/Vector Concatenate'
  real32_T varargin_1[3];
  SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64 In1_c;// '<S12>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_trajectory_07_05_2021_real_T {
  ros_slros_internal_block_GetP_T obj; // '<Root>/Get Parameter1'
  ros_slros_internal_block_GetP_T obj_o;// '<Root>/Get Parameter'
  ros_slroscpp_internal_block_P_T obj_g;// '<S5>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_a;// '<S4>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_e;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_l;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_lt;// '<S6>/SourceBlock'
  boolean_T network_not_empty;         // '<S3>/MLFB'
  c_coder_ctarget_DeepLearningN_T network;// '<S3>/MLFB'
};

// Parameters (default storage)
struct P_trajectory_07_05_2021_real_T_ {
  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S2>/Constant'

  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                                   //  Referenced by: '<S10>/Out1'

  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                      //  Referenced by: '<S6>/Constant'

  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                                     //  Referenced by: '<S11>/Out1'

  SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                      //  Referenced by: '<S7>/Constant'

  SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64 Constant_Value_h2;// Computed Parameter: Constant_Value_h2
                                                                      //  Referenced by: '<S1>/Constant'

  SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64 Out1_Y0_i;// Computed Parameter: Out1_Y0_i
                                                                  //  Referenced by: '<S12>/Out1'

  SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64 Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S8>/Constant'

  real32_T Saturation_UpperSat;       // Computed Parameter: Saturation_UpperSat
                                         //  Referenced by: '<Root>/Saturation'

  real32_T Saturation_LowerSat;       // Computed Parameter: Saturation_LowerSat
                                         //  Referenced by: '<Root>/Saturation'

};

// Real-time Model Data Structure
struct tag_RTM_trajectory_07_05_2021_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_trajectory_07_05_2021_real_T trajectory_07_05_2021_real_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_trajectory_07_05_2021_real_T trajectory_07_05_2021_real_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_trajectory_07_05_2021_real_T trajectory_07_05_2021_real_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void trajectory_07_05_2021_real_initialize(void);
  extern void trajectory_07_05_2021_real_step(void);
  extern void trajectory_07_05_2021_real_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_trajectory_07_05_202_T *const trajectory_07_05_2021_real_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'trajectory_07_05_2021_real'
//  '<S1>'   : 'trajectory_07_05_2021_real/Blank Message'
//  '<S2>'   : 'trajectory_07_05_2021_real/Blank Message1'
//  '<S3>'   : 'trajectory_07_05_2021_real/Predict'
//  '<S4>'   : 'trajectory_07_05_2021_real/Publish'
//  '<S5>'   : 'trajectory_07_05_2021_real/Publish1'
//  '<S6>'   : 'trajectory_07_05_2021_real/Subscribe'
//  '<S7>'   : 'trajectory_07_05_2021_real/Subscribe1'
//  '<S8>'   : 'trajectory_07_05_2021_real/Subscribe2'
//  '<S9>'   : 'trajectory_07_05_2021_real/Predict/MLFB'
//  '<S10>'  : 'trajectory_07_05_2021_real/Subscribe/Enabled Subsystem'
//  '<S11>'  : 'trajectory_07_05_2021_real/Subscribe1/Enabled Subsystem'
//  '<S12>'  : 'trajectory_07_05_2021_real/Subscribe2/Enabled Subsystem'

#endif                              // RTW_HEADER_trajectory_07_05_2021_real_h_

//
// File trailer for generated code.
//
// [EOF]
//
