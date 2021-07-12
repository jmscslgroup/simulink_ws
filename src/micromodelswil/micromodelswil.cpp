//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: micromodelswil.cpp
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
#include "micromodelswil.h"
#include "micromodelswil_private.h"

// Block signals (default storage)
B_micromodelswil_T micromodelswil_B;

// Block states (default storage)
DW_micromodelswil_T micromodelswil_DW;

// Real-time model
RT_MODEL_micromodelswil_T micromodelswil_M_ = RT_MODEL_micromodelswil_T();
RT_MODEL_micromodelswil_T *const micromodelswil_M = &micromodelswil_M_;

// Model step function
void micromodelswil_step(void)
{
  SL_Bus_micromodelswil_std_msgs_Float64 b_varargout_2;
  SL_Bus_micromodelswil_std_msgs_Float64 rtb_BusAssignment1_j;
  real_T dx_3;
  real_T dx_5;
  real_T rtb_Subtract1;
  real_T rtb_TotalTime;
  real_T v_des2;
  int32_T i;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S18>/In1'

  b_varargout_1 = Sub_micromodelswil_15.getLatestMessage
    (&micromodelswil_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (b_varargout_1) {
    micromodelswil_B.In1 = micromodelswil_B.BusAssignment;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // MATLABSystem: '<S4>/Get Parameter2'
  ParamGet_micromodelswil_39.get_parameter(&dx_5);

  // Outputs for Atomic SubSystem: '<S4>/Subscribe3'
  // MATLABSystem: '<S13>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'

  b_varargout_1 = Sub_micromodelswil_42.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    micromodelswil_B.In1_aj = b_varargout_2;
  }

  // End of MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe3'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe4'
  // MATLABSystem: '<S14>/SourceBlock' incorporates:
  //   Inport: '<S16>/In1'

  b_varargout_1 = Sub_micromodelswil_43.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  if (b_varargout_1) {
    micromodelswil_B.In1_a = b_varargout_2;
  }

  // End of MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe4'

  // Sum: '<S4>/Subtract1' incorporates:
  //   Constant: '<S4>/Constant'
  //   MATLABSystem: '<S4>/Get Parameter2'
  //   Sum: '<S4>/Add'
  //   Sum: '<S4>/Subtract'

  rtb_Subtract1 = ((dx_5 + micromodelswil_B.In1_aj.Data) -
                   micromodelswil_B.In1_a.Data) -
    micromodelswil_P.Constant_Value_op;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S17>/In1'

  b_varargout_1 = Sub_micromodelswil_51.getLatestMessage
    (&micromodelswil_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  if (b_varargout_1) {
    micromodelswil_B.In1_m = micromodelswil_B.BusAssignment;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // MATLABSystem: '<Root>/Current Time'
  currentROSTimeBus(&micromodelswil_B.r);

  // Sum: '<Root>/Total Time' incorporates:
  //   Gain: '<Root>/Gain'
  //   MATLABSystem: '<Root>/Current Time'

  rtb_TotalTime = micromodelswil_P.Gain_Gain * micromodelswil_B.r.Nsec +
    micromodelswil_B.r.Sec;

  // MATLABSystem: '<Root>/Get Parameter2'
  ParamGet_micromodelswil_56.get_parameter(&dx_5);

  // MATLABSystem: '<Root>/Get Parameter1'
  ParamGet_micromodelswil_55.get_parameter(&micromodelswil_B.dx_2);

  // MATLABSystem: '<Root>/Get Parameter3'
  ParamGet_micromodelswil_57.get_parameter(&dx_3);

  // MATLABSystem: '<Root>/Get Parameter4'
  ParamGet_micromodelswil_58.get_parameter(&micromodelswil_B.dx_1);

  // MATLAB Function: '<Root>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter1'
  //   MATLABSystem: '<Root>/Get Parameter2'
  //   MATLABSystem: '<Root>/Get Parameter3'
  //   MATLABSystem: '<Root>/Get Parameter4'
  //   Memory: '<Root>/Memory'
  //   Sum: '<Root>/Subtract'

  if (!micromodelswil_DW.time_avg_target_not_empty) {
    micromodelswil_DW.t_length = 1.0;
    memset(&micromodelswil_DW.time_avg_target[0], 0, sizeof(real_T) << 6U);
    micromodelswil_DW.time_avg_target_not_empty = true;
    micromodelswil_DW.time_avg_target[63] = micromodelswil_B.In1_m.Linear.X;
  } else {
    for (i = 0; i < 63; i++) {
      micromodelswil_DW.time_avg_target[i] = micromodelswil_DW.time_avg_target[i
        + 1];
    }

    micromodelswil_DW.time_avg_target[63] = micromodelswil_B.In1_m.Linear.X;
    if (micromodelswil_DW.t_length < 64.0) {
      micromodelswil_DW.t_length++;
    }
  }

  micromodelswil_B.v_des = micromodelswil_DW.time_avg_target[0];
  for (i = 0; i < 63; i++) {
    micromodelswil_B.v_des += micromodelswil_DW.time_avg_target[i + 1];
  }

  micromodelswil_B.v_des /= micromodelswil_DW.t_length;
  if ((micromodelswil_DW.d1 == 0.0) && (micromodelswil_DW.d2 == 0.0)) {
    v_des2 = micromodelswil_B.v_des * 0.8;
    micromodelswil_DW.d2 = 1.0;
  } else {
    v_des2 = ((rtb_TotalTime - micromodelswil_DW.Memory_PreviousInput) * 0.01 +
              1.0) * micromodelswil_B.v_des;
    if ((!(v_des2 < micromodelswil_B.v_des)) && (!rtIsNaN(micromodelswil_B.v_des)))
    {
      v_des2 = micromodelswil_B.v_des;
    }
  }

  if (micromodelswil_B.In1_m.Linear.X > 20.0) {
    v_des2 = micromodelswil_B.In1_m.Linear.X;
  } else if (micromodelswil_B.In1_m.Linear.X > 15.0) {
    v_des2 += (micromodelswil_B.In1_m.Linear.X - v_des2) *
      (micromodelswil_B.In1_m.Linear.X - 15.0) / 5.0;
  }

  micromodelswil_B.dv_minus = micromodelswil_B.In1_m.Linear.X -
    micromodelswil_B.In1.Linear.X;
  if (!(micromodelswil_B.dv_minus < 0.0)) {
    micromodelswil_B.dv_minus = 0.0;
  }

  if (micromodelswil_B.In1_m.Linear.X > 0.0) {
    micromodelswil_B.v = micromodelswil_B.In1_m.Linear.X;
  } else {
    micromodelswil_B.v = 0.0;
  }

  if ((!(micromodelswil_B.v < micromodelswil_B.v_des)) && (!rtIsNaN
       (micromodelswil_B.v_des))) {
    micromodelswil_B.v = micromodelswil_B.v_des;
  }

  dx_5 *= micromodelswil_B.In1.Linear.X;
  if ((micromodelswil_B.dx_1 > dx_5) || rtIsNaN(dx_5)) {
    dx_5 = micromodelswil_B.dx_1;
  }

  micromodelswil_B.dv_minus *= micromodelswil_B.dv_minus;
  micromodelswil_B.dx_1 = micromodelswil_B.dv_minus * 0.33333333333333331 + dx_5;
  dx_5 = micromodelswil_B.dx_2 * micromodelswil_B.In1.Linear.X;
  if ((5.25 > dx_5) || rtIsNaN(dx_5)) {
    dx_5 = 5.25;
  }

  micromodelswil_B.dx_2 = micromodelswil_B.dv_minus * 0.5 + dx_5;
  dx_5 = dx_3 * micromodelswil_B.In1.Linear.X;
  if ((6.0 > dx_5) || rtIsNaN(dx_5)) {
    dx_5 = 6.0;
  }

  dx_3 = micromodelswil_B.dv_minus + dx_5;
  dx_5 = 1.3 * dx_3;
  if ((30.0 > dx_5) || rtIsNaN(dx_5)) {
    dx_5 = 30.0;
  }

  micromodelswil_B.dv_minus = 1.1 * dx_3;
  if ((12.0 > micromodelswil_B.dv_minus) || rtIsNaN(micromodelswil_B.dv_minus))
  {
    micromodelswil_B.dv_minus = 12.0;
  }

  if (rtb_Subtract1 >= dx_5) {
    micromodelswil_B.v = ((rtb_Subtract1 - dx_5) / dx_5 + 1.0) *
      micromodelswil_B.v_des;
    if (!(micromodelswil_B.v < 40.0)) {
      micromodelswil_B.v = 40.0;
    }
  } else if (rtb_Subtract1 >= micromodelswil_B.dv_minus) {
    dx_5 = (v_des2 - micromodelswil_B.v_des) * (dx_5 - rtb_Subtract1) / (dx_5 -
      micromodelswil_B.dv_minus);
    if ((0.0 < dx_5) || rtIsNaN(dx_5)) {
      dx_5 = 0.0;
    }

    micromodelswil_B.v = micromodelswil_B.v_des + dx_5;
  } else if (rtb_Subtract1 >= dx_3) {
    micromodelswil_B.v = v_des2;
  } else if (rtb_Subtract1 >= micromodelswil_B.dx_2) {
    micromodelswil_B.v += (v_des2 - micromodelswil_B.v) * (rtb_Subtract1 -
      micromodelswil_B.dx_2) / (dx_3 - micromodelswil_B.dx_2);
  } else if (rtb_Subtract1 >= micromodelswil_B.dx_1) {
    micromodelswil_B.v = (rtb_Subtract1 - micromodelswil_B.dx_1) *
      micromodelswil_B.v / (micromodelswil_B.dx_2 - micromodelswil_B.dx_1);
    micromodelswil_DW.d1 = 1.0;
    micromodelswil_DW.d2 = 0.0;
  } else {
    micromodelswil_B.v = 0.0;
    micromodelswil_DW.d1 = 0.0;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S1>/Constant'

  micromodelswil_B.BusAssignment = micromodelswil_P.Constant_Value;
  micromodelswil_B.BusAssignment.Linear.X = micromodelswil_B.v;
  micromodelswil_B.BusAssignment.Angular.Z = micromodelswil_P.Constant_Value_i;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_micromodelswil_29.publish(&micromodelswil_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<S2>/Constant'
  //   MATLAB Function: '<Root>/MATLAB Function1'

  micromodelswil_B.BusAssignment = micromodelswil_P.Constant_Value_b;
  micromodelswil_B.BusAssignment.Linear.X = micromodelswil_B.v_des;
  micromodelswil_B.BusAssignment.Angular.Z = micromodelswil_P.Constant1_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S7>/SinkBlock'
  Pub_micromodelswil_67.publish(&micromodelswil_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<Root>/Constant2'
  //   Constant: '<S3>/Constant'
  //   MATLAB Function: '<Root>/MATLAB Function1'

  micromodelswil_B.BusAssignment = micromodelswil_P.Constant_Value_a;
  micromodelswil_B.BusAssignment.Linear.X = v_des2;
  micromodelswil_B.BusAssignment.Angular.Z = micromodelswil_P.Constant2_Value;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_micromodelswil_71.publish(&micromodelswil_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // BusAssignment: '<S4>/Bus Assignment1'
  rtb_BusAssignment1_j.Data = rtb_Subtract1;

  // Outputs for Atomic SubSystem: '<S4>/Publish1'
  // MATLABSystem: '<S12>/SinkBlock'
  Pub_micromodelswil_40.publish(&rtb_BusAssignment1_j);

  // End of Outputs for SubSystem: '<S4>/Publish1'

  // Update for Memory: '<Root>/Memory'
  micromodelswil_DW.Memory_PreviousInput = rtb_TotalTime;
}

// Model initialize function
void micromodelswil_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_4[12];
    char_T b_zeroDelimTopic_1[11];
    char_T b_zeroDelimName[9];
    char_T b_zeroDelimTopic_2[8];
    char_T b_zeroDelimTopic_0[7];
    char_T b_zeroDelimTopic_3[6];
    char_T b_zeroDelimTopic[4];
    char_T b_zeroDelimName_0[3];
    static const char_T tmp[13] = { 'l', 'e', 'a', 'd', 'e', 'r', '_', 'd', 'i',
      's', 't', '_', 'x' };

    static const char_T tmp_0[6] = { 'd', 'i', 's', 't', '_', 'x' };

    static const char_T tmp_1[10] = { 'l', 'e', 'a', 'd', 'e', 'r', '_', 'v',
      'e', 'l' };

    static const char_T tmp_2[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_3[5] = { 'v', '_', 'd', 'e', 's' };

    static const char_T tmp_4[6] = { 'v', '_', 'd', 'e', 's', '2' };

    static const char_T tmp_5[11] = { 'h', 'e', 'a', 'd', 'w', 'a', 'y', '_',
      'e', 's', 't' };

    static const char_T tmp_6[8] = { 'i', 'n', 'i', 't', '_', 'g', 'a', 'p' };

    // InitializeConditions for Memory: '<Root>/Memory'
    micromodelswil_DW.Memory_PreviousInput =
      micromodelswil_P.Memory_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1' incorporates:
    //   Inport: '<S18>/In1'

    micromodelswil_B.In1 = micromodelswil_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    micromodelswil_DW.obj_cg.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_cg.isInitialized = 1;
    b_zeroDelimTopic[0] = 'v';
    b_zeroDelimTopic[1] = 'e';
    b_zeroDelimTopic[2] = 'l';
    b_zeroDelimTopic[3] = '\x00';
    Sub_micromodelswil_15.createSubscriber(&b_zeroDelimTopic[0], 1);
    micromodelswil_DW.obj_cg.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1' incorporates:
    //   Inport: '<S15>/In1'

    micromodelswil_B.In1_aj = micromodelswil_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'

    // Start for MATLABSystem: '<S13>/SourceBlock'
    micromodelswil_DW.obj_d5.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_d5.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      micromodelswil_B.b_zeroDelimTopic[i] = tmp[i];
    }

    micromodelswil_B.b_zeroDelimTopic[13] = '\x00';
    Sub_micromodelswil_42.createSubscriber(&micromodelswil_B.b_zeroDelimTopic[0],
      1);
    micromodelswil_DW.obj_d5.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S16>/Out1' incorporates:
    //   Inport: '<S16>/In1'

    micromodelswil_B.In1_a = micromodelswil_P.Out1_Y0_o;

    // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'

    // Start for MATLABSystem: '<S14>/SourceBlock'
    micromodelswil_DW.obj_f.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[6] = '\x00';
    Sub_micromodelswil_43.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    micromodelswil_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S17>/Out1' incorporates:
    //   Inport: '<S17>/In1'

    micromodelswil_B.In1_m = micromodelswil_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    micromodelswil_DW.obj_j4.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_j4.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_1[i] = tmp_1[i];
    }

    b_zeroDelimTopic_1[10] = '\x00';
    Sub_micromodelswil_51.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    micromodelswil_DW.obj_j4.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for MATLAB Function: '<Root>/MATLAB Function1'
    micromodelswil_DW.d1 = 1.0;
    micromodelswil_DW.d2 = 1.0;

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    micromodelswil_DW.obj_j.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[7] = '\x00';
    Pub_micromodelswil_29.createPublisher(&b_zeroDelimTopic_2[0], 1);
    micromodelswil_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    micromodelswil_DW.obj_c.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic_3[i] = tmp_3[i];
    }

    b_zeroDelimTopic_3[5] = '\x00';
    Pub_micromodelswil_67.createPublisher(&b_zeroDelimTopic_3[0], 1);
    micromodelswil_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    micromodelswil_DW.obj_no.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_no.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_0[i] = tmp_4[i];
    }

    b_zeroDelimTopic_0[6] = '\x00';
    Pub_micromodelswil_71.createPublisher(&b_zeroDelimTopic_0[0], 1);
    micromodelswil_DW.obj_no.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<S4>/Publish1'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    micromodelswil_DW.obj_h.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_4[i] = tmp_5[i];
    }

    b_zeroDelimTopic_4[11] = '\x00';
    Pub_micromodelswil_40.createPublisher(&b_zeroDelimTopic_4[0], 1);
    micromodelswil_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Publish1'

    // Start for MATLABSystem: '<S4>/Get Parameter2'
    micromodelswil_DW.obj_a.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimName[i] = tmp_6[i];
    }

    b_zeroDelimName[8] = '\x00';
    ParamGet_micromodelswil_39.initialize(&b_zeroDelimName[0]);
    ParamGet_micromodelswil_39.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelswil_39.set_initial_value(30.0);
    micromodelswil_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/Get Parameter2'

    // Start for MATLABSystem: '<Root>/Current Time'
    micromodelswil_DW.obj.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj.isInitialized = 1;
    micromodelswil_DW.obj.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter2'
    micromodelswil_DW.obj_d.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_d.isInitialized = 1;
    b_zeroDelimTopic[0] = 't';
    b_zeroDelimTopic[1] = 'h';
    b_zeroDelimTopic[2] = '1';
    b_zeroDelimTopic[3] = '\x00';
    ParamGet_micromodelswil_56.initialize(&b_zeroDelimTopic[0]);
    ParamGet_micromodelswil_56.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelswil_56.set_initial_value(0.4);
    micromodelswil_DW.obj_d.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter1'
    micromodelswil_DW.obj_az.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_az.isInitialized = 1;
    b_zeroDelimTopic[0] = 't';
    b_zeroDelimTopic[1] = 'h';
    b_zeroDelimTopic[2] = '2';
    b_zeroDelimTopic[3] = '\x00';
    ParamGet_micromodelswil_55.initialize(&b_zeroDelimTopic[0]);
    ParamGet_micromodelswil_55.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelswil_55.set_initial_value(1.2);
    micromodelswil_DW.obj_az.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter3'
    micromodelswil_DW.obj_g.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_g.isInitialized = 1;
    b_zeroDelimTopic[0] = 't';
    b_zeroDelimTopic[1] = 'h';
    b_zeroDelimTopic[2] = '3';
    b_zeroDelimTopic[3] = '\x00';
    ParamGet_micromodelswil_57.initialize(&b_zeroDelimTopic[0]);
    ParamGet_micromodelswil_57.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelswil_57.set_initial_value(1.8);
    micromodelswil_DW.obj_g.isSetupComplete = true;

    // Start for MATLABSystem: '<Root>/Get Parameter4'
    micromodelswil_DW.obj_n.matlabCodegenIsDeleted = false;
    micromodelswil_DW.obj_n.isInitialized = 1;
    b_zeroDelimName_0[0] = 'w';
    b_zeroDelimName_0[1] = '1';
    b_zeroDelimName_0[2] = '\x00';
    ParamGet_micromodelswil_58.initialize(&b_zeroDelimName_0[0]);
    ParamGet_micromodelswil_58.initialize_error_codes(0, 1, 2, 3);
    ParamGet_micromodelswil_58.set_initial_value(4.5);
    micromodelswil_DW.obj_n.isSetupComplete = true;
  }
}

// Model terminate function
void micromodelswil_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!micromodelswil_DW.obj_cg.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_cg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for MATLABSystem: '<S4>/Get Parameter2'
  if (!micromodelswil_DW.obj_a.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/Get Parameter2'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe3'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!micromodelswil_DW.obj_d5.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_d5.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe3'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe4'
  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  if (!micromodelswil_DW.obj_f.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/SourceBlock'
  // End of Terminate for SubSystem: '<S4>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!micromodelswil_DW.obj_j4.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_j4.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for MATLABSystem: '<Root>/Current Time'
  if (!micromodelswil_DW.obj.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Current Time'

  // Terminate for MATLABSystem: '<Root>/Get Parameter2'
  if (!micromodelswil_DW.obj_d.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter2'

  // Terminate for MATLABSystem: '<Root>/Get Parameter1'
  if (!micromodelswil_DW.obj_az.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_az.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter1'

  // Terminate for MATLABSystem: '<Root>/Get Parameter3'
  if (!micromodelswil_DW.obj_g.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter3'

  // Terminate for MATLABSystem: '<Root>/Get Parameter4'
  if (!micromodelswil_DW.obj_n.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter4'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  if (!micromodelswil_DW.obj_j.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  if (!micromodelswil_DW.obj_c.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!micromodelswil_DW.obj_no.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_no.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<S4>/Publish1'
  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!micromodelswil_DW.obj_h.matlabCodegenIsDeleted) {
    micromodelswil_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<S4>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
