/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control.c
 *
 * Code generated for Simulink model 'calc_control'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jun 26 10:33:25 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calc_control.h"
#include "calc_control_private.h"

const MultiDroneControllerInput calc_control_rtZMultiDroneControllerInput = {
  {
    {
      0.0,                             /* yawrateRef */
      0.0,                             /* pitchRef */
      0.0,                             /* rollRef */
      0.0,                             /* heightRef */
      0.0                              /* thrustRef */
    },                                 /* element_00 */

    {
      0.0,                             /* yawrateRef */
      0.0,                             /* pitchRef */
      0.0,                             /* rollRef */
      0.0,                             /* heightRef */
      0.0                              /* thrustRef */
    },                                 /* element_01 */

    {
      0.0,                             /* yawrateRef */
      0.0,                             /* pitchRef */
      0.0,                             /* rollRef */
      0.0,                             /* heightRef */
      0.0                              /* thrustRef */
    },                                 /* element_02 */

    {
      0.0,                             /* yawrateRef */
      0.0,                             /* pitchRef */
      0.0,                             /* rollRef */
      0.0,                             /* heightRef */
      0.0                              /* thrustRef */
    },                                 /* element_03 */

    {
      0.0,                             /* yawrateRef */
      0.0,                             /* pitchRef */
      0.0,                             /* rollRef */
      0.0,                             /* heightRef */
      0.0                              /* thrustRef */
    },                                 /* element_04 */
    0                                  /* length */
  }                                    /* controllerInput */
} ;                                    /* MultiDroneControllerInput ground */

/* Block states (auto storage) */
DW_calc_control_T calc_control_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_calc_control_T calc_control_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_calc_control_T calc_control_Y;

/* Real-time model */
RT_MODEL_calc_control_T calc_control_M_;
RT_MODEL_calc_control_T *const calc_control_M = &calc_control_M_;

/* Model step function */
void calc_control_step(void)
{
  real_T rtb_TSamp;
  real_T rtb_TSamp_je;
  real_T rtb_TSamp_b;
  real_T rtb_TSamp_f;
  real_T rtb_TSamp_c;
  real_T rtb_TSamp_o;
  real_T u0;

  /* Gain: '<S6>/Gain' incorporates:
   *  Constant: '<S6>/Constant2'
   *  Inport: '<Root>/processed_world_data'
   *  Sum: '<S6>/Sum'
   */
  u0 = (0.0 -
        calc_control_U.processed_world_data.agents.element_00.currentOrientation.yaw)
    * -0.5;

  /* Saturate: '<S6>/Saturation' */
  if (u0 > 30.0) {
    calc_control_Y.control_data.controllerInput.element_00.yawrateRef = 30.0;
  } else if (u0 < -30.0) {
    calc_control_Y.control_data.controllerInput.element_00.yawrateRef = -30.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_00.yawrateRef = u0;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* SampleTimeMath: '<S4>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = calc_control_U.control_error.bodyFrameError.element_00.x * -350.0;

  /* Sum: '<S1>/Sum3' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S4>/Diff'
   *  UnitDelay: '<S4>/UD'
   *
   * Block description for '<S4>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S4>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_00.x +
    (rtb_TSamp - calc_control_DW.UD_DSTATE);

  /* Saturate: '<S1>/Saturation' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controllerInput.element_00.pitchRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controllerInput.element_00.pitchRef = -10.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_00.pitchRef = u0;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* SampleTimeMath: '<S5>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_je = calc_control_U.control_error.bodyFrameError.element_00.y *
    -350.0;

  /* Sum: '<S1>/Sum5' incorporates:
   *  Gain: '<S1>/Gain2'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S5>/Diff'
   *  UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_00.y +
    (rtb_TSamp_je - calc_control_DW.UD_DSTATE_p);

  /* Saturate: '<S1>/Saturation1' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controllerInput.element_00.rollRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controllerInput.element_00.rollRef = -10.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_00.rollRef = u0;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  calc_control_Y.control_data.controllerInput.element_00.heightRef = 0.3;
  calc_control_Y.control_data.controllerInput.element_00.thrustRef = 0.3;

  /* Gain: '<S9>/Gain' incorporates:
   *  Constant: '<S9>/Constant2'
   *  Inport: '<Root>/processed_world_data'
   *  Sum: '<S9>/Sum'
   */
  u0 = (0.0 -
        calc_control_U.processed_world_data.agents.element_01.currentOrientation.yaw)
    * -0.5;

  /* Saturate: '<S9>/Saturation' */
  if (u0 > 30.0) {
    calc_control_Y.control_data.controllerInput.element_01.yawrateRef = 30.0;
  } else if (u0 < -30.0) {
    calc_control_Y.control_data.controllerInput.element_01.yawrateRef = -30.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_01.yawrateRef = u0;
  }

  /* End of Saturate: '<S9>/Saturation' */

  /* SampleTimeMath: '<S7>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_b = calc_control_U.control_error.bodyFrameError.element_01.x *
    -350.0;

  /* Sum: '<S2>/Sum3' incorporates:
   *  Gain: '<S2>/Gain1'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S7>/Diff'
   *  UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_01.x +
    (rtb_TSamp_b - calc_control_DW.UD_DSTATE_o);

  /* Saturate: '<S2>/Saturation' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controllerInput.element_01.pitchRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controllerInput.element_01.pitchRef = -10.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_01.pitchRef = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* SampleTimeMath: '<S8>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_f = calc_control_U.control_error.bodyFrameError.element_01.y *
    -350.0;

  /* Sum: '<S2>/Sum5' incorporates:
   *  Gain: '<S2>/Gain2'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S8>/Diff'
   *  UnitDelay: '<S8>/UD'
   *
   * Block description for '<S8>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_01.y +
    (rtb_TSamp_f - calc_control_DW.UD_DSTATE_n);

  /* Saturate: '<S2>/Saturation1' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controllerInput.element_01.rollRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controllerInput.element_01.rollRef = -10.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_01.rollRef = u0;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre2' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   */
  calc_control_Y.control_data.controllerInput.element_01.heightRef = 0.3;
  calc_control_Y.control_data.controllerInput.element_01.thrustRef = 0.3;

  /* Gain: '<S12>/Gain' incorporates:
   *  Constant: '<S12>/Constant2'
   *  Inport: '<Root>/processed_world_data'
   *  Sum: '<S12>/Sum'
   */
  u0 = (0.0 -
        calc_control_U.processed_world_data.agents.element_02.currentOrientation.yaw)
    * -0.5;

  /* Saturate: '<S12>/Saturation' */
  if (u0 > 30.0) {
    calc_control_Y.control_data.controllerInput.element_02.yawrateRef = 30.0;
  } else if (u0 < -30.0) {
    calc_control_Y.control_data.controllerInput.element_02.yawrateRef = -30.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_02.yawrateRef = u0;
  }

  /* End of Saturate: '<S12>/Saturation' */

  /* SampleTimeMath: '<S10>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S10>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_c = calc_control_U.control_error.bodyFrameError.element_02.x *
    -350.0;

  /* Sum: '<S3>/Sum3' incorporates:
   *  Gain: '<S3>/Gain1'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S10>/Diff'
   *  UnitDelay: '<S10>/UD'
   *
   * Block description for '<S10>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S10>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_02.x +
    (rtb_TSamp_c - calc_control_DW.UD_DSTATE_b);

  /* Saturate: '<S3>/Saturation' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controllerInput.element_02.pitchRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controllerInput.element_02.pitchRef = -10.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_02.pitchRef = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* SampleTimeMath: '<S11>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S11>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = calc_control_U.control_error.bodyFrameError.element_02.y *
    -350.0;

  /* Sum: '<S3>/Sum5' incorporates:
   *  Gain: '<S3>/Gain2'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S11>/Diff'
   *  UnitDelay: '<S11>/UD'
   *
   * Block description for '<S11>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S11>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_02.y +
    (rtb_TSamp_o - calc_control_DW.UD_DSTATE_a);

  /* Saturate: '<S3>/Saturation1' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controllerInput.element_02.rollRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controllerInput.element_02.rollRef = -10.0;
  } else {
    calc_control_Y.control_data.controllerInput.element_02.rollRef = u0;
  }

  /* End of Saturate: '<S3>/Saturation1' */

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre3' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant6'
   */
  calc_control_Y.control_data.controllerInput.element_02.heightRef = 0.3;
  calc_control_Y.control_data.controllerInput.element_02.thrustRef = 0.3;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre5' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant15'
   *  Constant: '<Root>/Constant16'
   *  Constant: '<Root>/Constant17'
   */
  calc_control_Y.control_data.controllerInput.element_03.yawrateRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_03.pitchRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_03.rollRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_03.heightRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_03.thrustRef = 0.0;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre6' incorporates:
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant19'
   *  Constant: '<Root>/Constant20'
   *  Constant: '<Root>/Constant21'
   *  Constant: '<Root>/Constant22'
   */
  calc_control_Y.control_data.controllerInput.element_04.yawrateRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_04.pitchRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_04.rollRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_04.heightRef = 0.0;
  calc_control_Y.control_data.controllerInput.element_04.thrustRef = 0.0;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre4' incorporates:
   *  Constant: '<Root>/Constant23'
   */
  calc_control_Y.control_data.controllerInput.length = 5;

  /* Update for UnitDelay: '<S4>/UD'
   *
   * Block description for '<S4>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE_p = rtb_TSamp_je;

  /* Update for UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE_o = rtb_TSamp_b;

  /* Update for UnitDelay: '<S8>/UD'
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE_n = rtb_TSamp_f;

  /* Update for UnitDelay: '<S10>/UD'
   *
   * Block description for '<S10>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE_b = rtb_TSamp_c;

  /* Update for UnitDelay: '<S11>/UD'
   *
   * Block description for '<S11>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE_a = rtb_TSamp_o;
}

/* Model initialize function */
void calc_control_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calc_control_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&calc_control_DW, 0,
                sizeof(DW_calc_control_T));

  /* external inputs */
  (void)memset((void *)&calc_control_U, 0, sizeof(ExtU_calc_control_T));

  /* external outputs */
  calc_control_Y.control_data = calc_control_rtZMultiDroneControllerInput;
}

/* Model terminate function */
void calc_control_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
