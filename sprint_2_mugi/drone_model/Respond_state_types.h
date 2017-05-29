/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Respond_state_types.h
 *
 * Code generated for Simulink model 'Respond_state'.
 *
 * Model version                  : 1.62
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue May 23 15:47:37 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Respond_state_types_h_
#define RTW_HEADER_Respond_state_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_MyPWM_
#define DEFINED_TYPEDEF_FOR_MyPWM_

typedef struct {
  real_T pwm1;
  real_T pwm2;
  real_T pwm3;
  real_T pwm4;
} MyPWM;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MyStates_
#define DEFINED_TYPEDEF_FOR_MyStates_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
  real_T yaw;
  real_T pitch;
  real_T roll;
  real_T dx;
  real_T dy;
  real_T dz;
  real_T dyaw;
  real_T dpitch;
  real_T droll;
} MyStates;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Respond_state_T RT_MODEL_Respond_state_T;

#endif                                 /* RTW_HEADER_Respond_state_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
