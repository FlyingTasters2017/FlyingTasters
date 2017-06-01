/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act.c
 *
 * Code generated for Simulink model 'control_Act'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed May 31 22:10:36 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control_Act.h"
#include "control_Act_private.h"

const MyDroneData control_Act_rtZMyDroneData = {
  0.0,                                 /* yawrateRef */
  0.0,                                 /* pitchRef */
  0.0,                                 /* rollRef */
  0.0                                  /* thrustRef */
} ;                                    /* MyDroneData ground */

/* External inputs (root inport signals with auto storage) */
ExtU_control_Act_T control_Act_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_control_Act_T control_Act_Y;

/* Real-time model */
RT_MODEL_control_Act_T control_Act_M_;
RT_MODEL_control_Act_T *const control_Act_M = &control_Act_M_;
const MySensorData control_Act_rtZMySensorData = { 0.0,/* yawAct */
  0.0,                                 /* pitchAct */
  0.0,                                 /* rollAct */
  0.0,                                 /* baropAct */
  0.0,                                 /* accxAct */
  0.0,                                 /* accyAct */
  0.0                                  /* acczAct */
};

/* Model step function */
void control_Act_step(void)
{
  real_T u0;

  /* Gain: '<Root>/Kp-yaw' incorporates:
   *  Constant: '<Root>/ref_yaw'
   *  Inport: '<Root>/sensorData'
   *  Sum: '<Root>/Sum1'
   */
  u0 = (0.0 - control_Act_U.sensorData.yawAct) * 3.0;

  /* Saturate: '<Root>/Saturation1' */
  if (u0 > 100.0) {
    control_Act_Y.droneData.yawrateRef = 100.0;
  } else if (u0 < -100.0) {
    control_Act_Y.droneData.yawrateRef = -100.0;
  } else {
    control_Act_Y.droneData.yawrateRef = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* BusCreator: '<Root>/droneData_MyDroneData_BusCre' incorporates:
   *  Constant: '<Root>/lifting thrust '
   *  Constant: '<Root>/pitch'
   *  Constant: '<Root>/roll'
   */
  control_Act_Y.droneData.pitchRef = 0.0;
  control_Act_Y.droneData.rollRef = 0.0;
  control_Act_Y.droneData.thrustRef = 44700.0;
}

/* Model initialize function */
void control_Act_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(control_Act_M, (NULL));

  /* external inputs */
  control_Act_U.sensorData = control_Act_rtZMySensorData;

  /* external outputs */
  control_Act_Y.droneData = control_Act_rtZMyDroneData;
}

/* Model terminate function */
void control_Act_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
