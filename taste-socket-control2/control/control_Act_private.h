/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act_private.h
 *
 * Code generated for Simulink model 'control_Act'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jun 14 10:11:45 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_control_Act_private_h_
#define RTW_HEADER_control_Act_private_h_
#include "rtwtypes.h"
#include "control_Act.h"

extern void control_Act_MovingAverage1_Init(DW_MovingAverage1_control_Act_T
  *localDW);
extern void control_Ac_MovingAverage1_Start(DW_MovingAverage1_control_Act_T
  *localDW);
extern void control_Act_MovingAverage1(real_T rtu_0,
  DW_MovingAverage1_control_Act_T *localDW);
extern void control_Act_MovingAverage1_Term(DW_MovingAverage1_control_Act_T
  *localDW);

#endif                                 /* RTW_HEADER_control_Act_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
