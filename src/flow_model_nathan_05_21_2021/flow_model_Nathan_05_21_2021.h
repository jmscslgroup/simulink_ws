//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: flow_model_Nathan_05_21_2021.h
//
// Code generated for Simulink model 'flow_model_Nathan_05_21_2021'.
//
// Model version                  : 1.26
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed May 26 11:22:41 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_flow_model_Nathan_05_21_2021_h_
#define RTW_HEADER_flow_model_Nathan_05_21_2021_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "flow_model_Nathan_05_21_2021_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_flow_model_Nathan_05_21_202_T {
  real32_T T[64];
  real32_T fv[64];
  real_T VectorConcatenate[7];         // '<Root>/Vector Concatenate'
  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist In1;// '<S17>/In1'
  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist In1_l;// '<S16>/In1'
  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist In1_lz;// '<S15>/In1'
  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  char_T b_zeroDelimTopic[15];
  char_T b_zeroDelimTopic_m[14];
  real_T value;
  real_T value_c;
  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 In1_b;// '<S13>/In1'
  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 In1_d;// '<S12>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_flow_model_Nathan_05_21_20_T {
  ros_slros_internal_block_GetP_T obj; // '<S3>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_b;// '<Root>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_m;// '<Root>/Get Parameter1'
  ros_slros_internal_block_GetP_T obj_o;// '<Root>/Get Parameter'
  ros_slroscpp_internal_block_S_T obj_h;// '<S9>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_l;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_p;// '<S11>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_k;// '<S10>/SourceBlock'
  ros_slroscpp_internal_block_P_T obj_g;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_a;// '<S5>/SinkBlock'
  boolean_T network_not_empty;         // '<S4>/MLFB'
  c_coder_ctarget_DeepLearningN_T network;// '<S4>/MLFB'
};

// Parameters (default storage)
struct P_flow_model_Nathan_05_21_202_T_ {
  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S1>/Constant'

  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                                     //  Referenced by: '<S15>/Out1'

  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                      //  Referenced by: '<S7>/Constant'

  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                                      //  Referenced by: '<S16>/Out1'

  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                      //  Referenced by: '<S8>/Constant'

  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                                      //  Referenced by: '<S17>/Out1'

  SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S9>/Constant'

  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 Constant_Value_f1;// Computed Parameter: Constant_Value_f1
                                                                      //  Referenced by: '<S2>/Constant'

  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 Out1_Y0_e0;// Computed Parameter: Out1_Y0_e0
                                                                     //  Referenced by: '<S12>/Out1'

  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 Constant_Value_ej;// Computed Parameter: Constant_Value_ej
                                                                      //  Referenced by: '<S10>/Constant'

  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 Out1_Y0_l;// Computed Parameter: Out1_Y0_l
                                                                    //  Referenced by: '<S13>/Out1'

  SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                      //  Referenced by: '<S11>/Constant'

  real_T Constant_Value_of;            // Expression: 4
                                          //  Referenced by: '<S3>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant2'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant3'

};

// Real-time Model Data Structure
struct tag_RTM_flow_model_Nathan_05__T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_flow_model_Nathan_05_21_202_T flow_model_Nathan_05_21_2021_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_flow_model_Nathan_05_21_202_T flow_model_Nathan_05_21_2021_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_flow_model_Nathan_05_21_20_T flow_model_Nathan_05_21_2021_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void flow_model_Nathan_05_21_2021_initialize(void);
  extern void flow_model_Nathan_05_21_2021_step(void);
  extern void flow_model_Nathan_05_21_2021_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_flow_model_Nathan_05_T *const flow_model_Nathan_05_21_2021_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Cast To Double' : Eliminate redundant data type conversion
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
//  '<Root>' : 'flow_model_Nathan_05_21_2021'
//  '<S1>'   : 'flow_model_Nathan_05_21_2021/Blank Message'
//  '<S2>'   : 'flow_model_Nathan_05_21_2021/Blank Message1'
//  '<S3>'   : 'flow_model_Nathan_05_21_2021/Headway Calculation'
//  '<S4>'   : 'flow_model_Nathan_05_21_2021/Predict'
//  '<S5>'   : 'flow_model_Nathan_05_21_2021/Publish'
//  '<S6>'   : 'flow_model_Nathan_05_21_2021/Publish1'
//  '<S7>'   : 'flow_model_Nathan_05_21_2021/Subscribe'
//  '<S8>'   : 'flow_model_Nathan_05_21_2021/Subscribe1'
//  '<S9>'   : 'flow_model_Nathan_05_21_2021/Subscribe2'
//  '<S10>'  : 'flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe3'
//  '<S11>'  : 'flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe4'
//  '<S12>'  : 'flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe3/Enabled Subsystem'
//  '<S13>'  : 'flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe4/Enabled Subsystem'
//  '<S14>'  : 'flow_model_Nathan_05_21_2021/Predict/MLFB'
//  '<S15>'  : 'flow_model_Nathan_05_21_2021/Subscribe/Enabled Subsystem'
//  '<S16>'  : 'flow_model_Nathan_05_21_2021/Subscribe1/Enabled Subsystem'
//  '<S17>'  : 'flow_model_Nathan_05_21_2021/Subscribe2/Enabled Subsystem'

#endif                            // RTW_HEADER_flow_model_Nathan_05_21_2021_h_

//
// File trailer for generated code.
//
// [EOF]
//
