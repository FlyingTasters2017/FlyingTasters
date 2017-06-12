/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act_types.h
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

#ifndef RTW_HEADER_control_Act_types_h_
#define RTW_HEADER_control_Act_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_MySensorData_
#define DEFINED_TYPEDEF_FOR_MySensorData_

typedef struct {
  real_T yawAct;
  real_T pitchAct;
  real_T rollAct;
  real_T baropAct;
  real_T accxAct;
  real_T accyAct;
  real_T acczAct;
} MySensorData;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MyDroneData_
#define DEFINED_TYPEDEF_FOR_MyDroneData_

typedef struct {
  real_T yawrateRef;
  real_T pitchRef;
  real_T rollRef;
  real_T thrustRef;
} MyDroneData;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_control_Act_T RT_MODEL_control_Act_T;

#endif                                 /* RTW_HEADER_control_Act_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
