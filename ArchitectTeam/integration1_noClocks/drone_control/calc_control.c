/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control.c
 *
 * Code generated for Simulink model 'calc_control'.
 *
 * Model version                  : 1.32
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Jun 24 20:51:23 2017
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
  real_T rtb_TSamp_h;
  real_T u0;

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Inport: '<Root>/processed_world_data'
   *  Sum: '<S3>/Sum'
   */
  u0 = (0.0 -
        calc_control_U.processed_world_data.agents.element_00.currentOrientation.yaw)
    * -0.5;

  /* Saturate: '<S3>/Saturation' */
  if (u0 > 30.0) {
    calc_control_Y.control_data.controller_input.element_00.yawrateRef = 30.0;
  } else if (u0 < -30.0) {
    calc_control_Y.control_data.controller_input.element_00.yawrateRef = -30.0;
  } else {
    calc_control_Y.control_data.controller_input.element_00.yawrateRef = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* SampleTimeMath: '<S1>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = calc_control_U.control_error.bodyFrameError.element_00.x * -350.0;

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
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_00.x +
    (rtb_TSamp - calc_control_DW.UD_DSTATE);

  /* Saturate: '<Root>/Saturation' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controller_input.element_00.pitchRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controller_input.element_00.pitchRef = -10.0;
  } else {
    calc_control_Y.control_data.controller_input.element_00.pitchRef = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* SampleTimeMath: '<S2>/TSamp' incorporates:
   *  Inport: '<Root>/control_error'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_h = calc_control_U.control_error.bodyFrameError.element_00.y *
    -350.0;

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
  u0 = -5.0 * calc_control_U.control_error.bodyFrameError.element_00.y +
    (rtb_TSamp_h - calc_control_DW.UD_DSTATE_b);

  /* Saturate: '<Root>/Saturation1' */
  if (u0 > 10.0) {
    calc_control_Y.control_data.controller_input.element_00.rollRef = 10.0;
  } else if (u0 < -10.0) {
    calc_control_Y.control_data.controller_input.element_00.rollRef = -10.0;
  } else {
    calc_control_Y.control_data.controller_input.element_00.rollRef = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  calc_control_Y.control_data.controller_input.element_00.heightRef = 0.3;
  calc_control_Y.control_data.controller_input.element_00.thrustRef = 0.3;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre3' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant6'
   *  Constant: '<Root>/Constant7'
   */
  calc_control_Y.control_data.controller_input.element_01.yawrateRef = 0.0;
  calc_control_Y.control_data.controller_input.element_01.pitchRef = 0.0;
  calc_control_Y.control_data.controller_input.element_01.rollRef = 0.0;
  calc_control_Y.control_data.controller_input.element_01.heightRef = 0.0;
  calc_control_Y.control_data.controller_input.element_01.thrustRef = 0.0;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre4' incorporates:
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant11'
   *  Constant: '<Root>/Constant12'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<Root>/Constant9'
   */
  calc_control_Y.control_data.controller_input.element_02.yawrateRef = 0.0;
  calc_control_Y.control_data.controller_input.element_02.pitchRef = 0.0;
  calc_control_Y.control_data.controller_input.element_02.rollRef = 0.0;
  calc_control_Y.control_data.controller_input.element_02.heightRef = 0.0;
  calc_control_Y.control_data.controller_input.element_02.thrustRef = 0.0;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre5' incorporates:
   *  Constant: '<Root>/Constant13'
   *  Constant: '<Root>/Constant14'
   *  Constant: '<Root>/Constant15'
   *  Constant: '<Root>/Constant16'
   *  Constant: '<Root>/Constant17'
   */
  calc_control_Y.control_data.controller_input.element_03.yawrateRef = 0.0;
  calc_control_Y.control_data.controller_input.element_03.pitchRef = 0.0;
  calc_control_Y.control_data.controller_input.element_03.rollRef = 0.0;
  calc_control_Y.control_data.controller_input.element_03.heightRef = 0.0;
  calc_control_Y.control_data.controller_input.element_03.thrustRef = 0.0;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre6' incorporates:
   *  Constant: '<Root>/Constant18'
   *  Constant: '<Root>/Constant19'
   *  Constant: '<Root>/Constant20'
   *  Constant: '<Root>/Constant21'
   *  Constant: '<Root>/Constant22'
   */
  calc_control_Y.control_data.controller_input.element_04.yawrateRef = 0.0;
  calc_control_Y.control_data.controller_input.element_04.pitchRef = 0.0;
  calc_control_Y.control_data.controller_input.element_04.rollRef = 0.0;
  calc_control_Y.control_data.controller_input.element_04.heightRef = 0.0;
  calc_control_Y.control_data.controller_input.element_04.thrustRef = 0.0;

  /* BusCreator: '<Root>/control_data_MultiDroneControllerInput_BusCre2' incorporates:
   *  Constant: '<Root>/Constant23'
   */
  calc_control_Y.control_data.controller_input.length = 5;

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
  calc_control_DW.UD_DSTATE_b = rtb_TSamp_h;
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
