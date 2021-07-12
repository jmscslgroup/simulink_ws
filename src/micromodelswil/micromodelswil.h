//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: micromodelswil.h
//
// Code generated for Simulink model 'micromodelswil'.
//
// Model version                  : 1.93
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Tue Jul  6 14:52:30 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_micromodelswil_h_
#define RTW_HEADER_micromodelswil_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "micromodelswil_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_micromodelswil_T {
  SL_Bus_micromodelswil_geometry_msgs_Twist In1;// '<S18>/In1'
  SL_Bus_micromodelswil_geometry_msgs_Twist In1_m;// '<S17>/In1'
  SL_Bus_micromodelswil_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  SL_Bus_micromodelswil_ros_time_Time r;
  char_T b_zeroDelimTopic[14];
  real_T v_des;
  real_T dv_minus;
  real_T v;
  real_T dx_1;
  real_T dx_2;
  SL_Bus_micromodelswil_std_msgs_Float64 In1_a;// '<S16>/In1'
  SL_Bus_micromodelswil_std_msgs_Float64 In1_aj;// '<S15>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_micromodelswil_T {
  ros_slros_internal_block_Curr_T obj; // '<Root>/Current Time'
  ros_slros_internal_block_GetP_T obj_a;// '<S4>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_n;// '<Root>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_g;// '<Root>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_d;// '<Root>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_az;// '<Root>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_no;// '<S8>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S7>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_j;// '<S6>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_h;// '<S12>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_cg;// '<S10>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_j4;// '<S9>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S14>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d5;// '<S13>/SourceBlock'
  real_T Memory_PreviousInput;         // '<Root>/Memory'
  real_T d1;                           // '<Root>/MATLAB Function1'
  real_T d2;                           // '<Root>/MATLAB Function1'
  real_T time_avg_target[64];          // '<Root>/MATLAB Function1'
  real_T t_length;                     // '<Root>/MATLAB Function1'
  boolean_T time_avg_target_not_empty; // '<Root>/MATLAB Function1'
};

// Parameters (default storage)
struct P_micromodelswil_T_ {
  SL_Bus_micromodelswil_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                              //  Referenced by: '<S1>/Constant'

  SL_Bus_micromodelswil_geometry_msgs_Twist Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                //  Referenced by: '<S2>/Constant'

  SL_Bus_micromodelswil_geometry_msgs_Twist Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                //  Referenced by: '<S3>/Constant'

  SL_Bus_micromodelswil_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                       //  Referenced by: '<S17>/Out1'

  SL_Bus_micromodelswil_geometry_msgs_Twist Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                //  Referenced by: '<S9>/Constant'

  SL_Bus_micromodelswil_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                         //  Referenced by: '<S18>/Out1'

  SL_Bus_micromodelswil_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                                //  Referenced by: '<S10>/Constant'

  SL_Bus_micromodelswil_std_msgs_Float64 Constant_Value_ow;// Computed Parameter: Constant_Value_ow
                                                              //  Referenced by: '<S11>/Constant'

  SL_Bus_micromodelswil_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                      //  Referenced by: '<S15>/Out1'

  SL_Bus_micromodelswil_std_msgs_Float64 Constant_Value_az;// Computed Parameter: Constant_Value_az
                                                              //  Referenced by: '<S13>/Constant'

  SL_Bus_micromodelswil_std_msgs_Float64 Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                      //  Referenced by: '<S16>/Out1'

  SL_Bus_micromodelswil_std_msgs_Float64 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                             //  Referenced by: '<S14>/Constant'

  real_T Constant_Value_op;            // Expression: 4
                                          //  Referenced by: '<S4>/Constant'

  real_T Gain_Gain;                    // Expression: 1e-9
                                          //  Referenced by: '<Root>/Gain'

  real_T Memory_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<Root>/Memory'

  real_T Constant_Value_i;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant2'

};

// Real-time Model Data Structure
struct tag_RTM_micromodelswil_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_micromodelswil_T micromodelswil_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_micromodelswil_T micromodelswil_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_micromodelswil_T micromodelswil_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void micromodelswil_initialize(void);
  extern void micromodelswil_step(void);
  extern void micromodelswil_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_micromodelswil_T *const micromodelswil_M;

#ifdef __cplusplus

}
#endif

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
//  '<Root>' : 'micromodelswil'
//  '<S1>'   : 'micromodelswil/Blank Message'
//  '<S2>'   : 'micromodelswil/Blank Message1'
//  '<S3>'   : 'micromodelswil/Blank Message2'
//  '<S4>'   : 'micromodelswil/Headway Calculation'
//  '<S5>'   : 'micromodelswil/MATLAB Function1'
//  '<S6>'   : 'micromodelswil/Publish'
//  '<S7>'   : 'micromodelswil/Publish1'
//  '<S8>'   : 'micromodelswil/Publish2'
//  '<S9>'   : 'micromodelswil/Subscribe2'
//  '<S10>'  : 'micromodelswil/Subscribe3'
//  '<S11>'  : 'micromodelswil/Headway Calculation/Blank Message1'
//  '<S12>'  : 'micromodelswil/Headway Calculation/Publish1'
//  '<S13>'  : 'micromodelswil/Headway Calculation/Subscribe3'
//  '<S14>'  : 'micromodelswil/Headway Calculation/Subscribe4'
//  '<S15>'  : 'micromodelswil/Headway Calculation/Subscribe3/Enabled Subsystem'
//  '<S16>'  : 'micromodelswil/Headway Calculation/Subscribe4/Enabled Subsystem'
//  '<S17>'  : 'micromodelswil/Subscribe2/Enabled Subsystem'
//  '<S18>'  : 'micromodelswil/Subscribe3/Enabled Subsystem'

#endif                                 // RTW_HEADER_micromodelswil_h_

//
// File trailer for generated code.
//
// [EOF]
//
