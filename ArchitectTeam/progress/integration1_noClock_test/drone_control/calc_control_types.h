/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control_types.h
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

#ifndef RTW_HEADER_calc_control_types_h_
#define RTW_HEADER_calc_control_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_Trajectory_
#define DEFINED_TYPEDEF_FOR_Trajectory_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
  real_T yaw;
} Trajectory;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Position_
#define DEFINED_TYPEDEF_FOR_Position_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
} Position;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Orientation_
#define DEFINED_TYPEDEF_FOR_Orientation_

typedef struct {
  real_T roll;
  real_T pitch;
  real_T yaw;
} Orientation;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Velocity_
#define DEFINED_TYPEDEF_FOR_Velocity_

typedef struct {
  real_T vX;
  real_T vY;
  real_T vZ;
  real_T vRoll;
  real_T vPitch;
  real_T vYaw;
} Velocity;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Acceleration_
#define DEFINED_TYPEDEF_FOR_Acceleration_

typedef struct {
  real_T aX;
  real_T aY;
  real_T aZ;
  real_T aRoll;
  real_T aPitch;
  real_T aYaw;
} Acceleration;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Agent_
#define DEFINED_TYPEDEF_FOR_Agent_

typedef struct {
  int8_T agentID;
  int32_T agentColor;
  Position currentPosition;
  Orientation currentOrientation;
  Velocity currentVelocity;
  Acceleration currentAcceleration;
} Agent;

#endif

#ifndef DEFINED_TYPEDEF_FOR_WorldData_
#define DEFINED_TYPEDEF_FOR_WorldData_

typedef struct {
  Agent agentData;
} WorldData;

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

/* Forward declaration for rtModel */
typedef struct tag_RTM_calc_control_T RT_MODEL_calc_control_T;

#endif                                 /* RTW_HEADER_calc_control_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
