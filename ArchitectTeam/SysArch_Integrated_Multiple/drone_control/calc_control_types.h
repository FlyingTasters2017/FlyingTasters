/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control_types.h
 *
 * Code generated for Simulink model 'calc_control'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jun 26 15:21:23 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calc_control_types_h_
#define RTW_HEADER_calc_control_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_ControlError_
#define DEFINED_TYPEDEF_FOR_ControlError_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
  real_T yaw;
} ControlError;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MultiControlError_bodyFrameError_
#define DEFINED_TYPEDEF_FOR_MultiControlError_bodyFrameError_

typedef struct {
  ControlError element_00;
  ControlError element_01;
  ControlError element_02;
  ControlError element_03;
  ControlError element_04;
  int32_T length;
} MultiControlError_bodyFrameError;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MultiControlError_
#define DEFINED_TYPEDEF_FOR_MultiControlError_

typedef struct {
  MultiControlError_bodyFrameError bodyFrameError;
} MultiControlError;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DroneControllerInput_
#define DEFINED_TYPEDEF_FOR_DroneControllerInput_

typedef struct {
  real_T yawrateRef;
  real_T pitchRef;
  real_T rollRef;
  real_T heightRef;
  real_T thrustRef;
} DroneControllerInput;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MultiDroneControllerInput_controllerInput_
#define DEFINED_TYPEDEF_FOR_MultiDroneControllerInput_controllerInput_

typedef struct {
  DroneControllerInput element_00;
  DroneControllerInput element_01;
  DroneControllerInput element_02;
  DroneControllerInput element_03;
  DroneControllerInput element_04;
  int32_T length;
} MultiDroneControllerInput_controllerInput;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MultiDroneControllerInput_
#define DEFINED_TYPEDEF_FOR_MultiDroneControllerInput_

typedef struct {
  MultiDroneControllerInput_controllerInput controllerInput;
} MultiDroneControllerInput;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_calc_control_T RT_MODEL_calc_control_T;

#endif                                 /* RTW_HEADER_calc_control_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
