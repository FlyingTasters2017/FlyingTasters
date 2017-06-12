/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act.c
 *
 * Code generated for Simulink model 'control_Act'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri Jun 09 11:16:05 2017
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

/* Model step function */
void control_Act_step(void)
{
  /* Outport: '<Root>/droneData' incorporates:
   *  Inport: '<Root>/Ref'
   */
  control_Act_Y.droneData = control_Act_U.Ref;
}

/* Model initialize function */
void control_Act_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(control_Act_M, (NULL));

  /* external inputs */
  (void)memset((void *)&control_Act_U, 0, sizeof(ExtU_control_Act_T));

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
