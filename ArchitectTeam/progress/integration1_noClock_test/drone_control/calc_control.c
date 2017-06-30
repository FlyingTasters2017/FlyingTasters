/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control.c
 *
 * Code generated for Simulink model 'calc_control'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 22 17:47:16 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calc_control.h"
#include "calc_control_private.h"

const DroneControllerInput calc_control_rtZDroneControllerInput = {
  0.0,                                 /* yawrateRef */
  0.0,                                 /* pitchRef */
  0.0,                                 /* rollRef */
  0.0,                                 /* heightRef */
  0.0                                  /* thrustRef */
} ;                                    /* DroneControllerInput ground */

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
  real_T rtb_TSamp_o;
  real_T u0;

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Inport: '<Root>/processed_world_data'
   *  Sum: '<S3>/Sum'
   */
  u0 = (0.0 -
        calc_control_U.processed_world_data.agentData.currentOrientation.yaw) *
    -0.5;

  /* Saturate: '<S3>/Saturation' */
  if (u0 > 30.0) {
    calc_control_Y.control_data.yawrateRef = 30.0;
  } else if (u0 < -30.0) {
    calc_control_Y.control_data.yawrateRef = -30.0;
  } else {
    calc_control_Y.control_data.yawrateRef = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* SampleTimeMath: '<S1>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = calc_control_U.control_error.x * -350.0;

  /* Sum: '<Root>/Sum3' incorporates:
   *  Gain: '<Root>/Gain1'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S1>/Diff'
   *  UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.x + (rtb_TSamp -
    calc_control_DW.UD_DSTATE);

  /* Saturate: '<Root>/Saturation' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.pitchRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.pitchRef = -10.0;
  } else {
    calc_control_Y.control_data.pitchRef = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* SampleTimeMath: '<S2>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = calc_control_U.control_error.y * -350.0;

  /* Sum: '<Root>/Sum5' incorporates:
   *  Gain: '<Root>/Gain2'
   *  Inport: '<Root>/control_error'
   *  Sum: '<S2>/Diff'
   *  UnitDelay: '<S2>/UD'
   *
   * Block description for '<S2>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S2>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -5.0 * calc_control_U.control_error.y + (rtb_TSamp_o -
    calc_control_DW.UD_DSTATE_o);

  /* Saturate: '<Root>/Saturation1' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.rollRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.rollRef = -10.0;
  } else {
    calc_control_Y.control_data.rollRef = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* BusCreator: '<Root>/control_data_DroneControllerInput_BusCre' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  calc_control_Y.control_data.heightRef = 0.3;
  calc_control_Y.control_data.thrustRef = 0.0;

  /* Update for UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S2>/UD'
   *
   * Block description for '<S2>/UD':
   *
   *  Store in Global RAM
   */
  calc_control_DW.UD_DSTATE_o = rtb_TSamp_o;
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
  calc_control_Y.control_data = calc_control_rtZDroneControllerInput;
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
