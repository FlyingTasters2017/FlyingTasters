/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Compute_Thrust.c
 *
 * Code generated for Simulink model 'Compute_Thrust'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri May 12 14:39:33 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Compute_Thrust.h"
#include "Compute_Thrust_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Compute_Thrust_T Compute_Thrust_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Compute_Thrust_T Compute_Thrust_Y;

/* Real-time model */
RT_MODEL_Compute_Thrust_T Compute_Thrust_M_;
RT_MODEL_Compute_Thrust_T *const Compute_Thrust_M = &Compute_Thrust_M_;

/* Model step function */
void Compute_Thrust_step(void)
{
  /* Outport: '<Root>/Outp' incorporates:
   *  Inport: '<Root>/Inp'
   */
  Compute_Thrust_Y.Outp = Compute_Thrust_U.Inp;
}

/* Model initialize function */
void Compute_Thrust_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Compute_Thrust_M, (NULL));

  /* external inputs */
  Compute_Thrust_U.Inp = 0U;

  /* external outputs */
  Compute_Thrust_Y.Outp = 0U;
}

/* Model terminate function */
void Compute_Thrust_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
