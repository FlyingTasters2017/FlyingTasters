/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control_types.h
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

#ifndef DEFINED_TYPEDEF_FOR_Position_
#define DEFINED_TYPEDEF_FOR_Position_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
} Position;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Area_
#define DEFINED_TYPEDEF_FOR_Area_

typedef struct {
  int8_T height;
  int8_T width;
  int8_T depth;
  Position refLocation;
} Area;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ReferencePath_locations_
#define DEFINED_TYPEDEF_FOR_ReferencePath_locations_

typedef struct {
  Position element_00;
  Position element_01;
  Position element_02;
  int32_T length;
} ReferencePath_locations;

#endif

#ifndef DEFINED_TYPEDEF_FOR_HoverAction_
#define DEFINED_TYPEDEF_FOR_HoverAction_

typedef struct {
  real_T yaw_rate;
  real_T duration;
} HoverAction;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ReferencePath_actions_
#define DEFINED_TYPEDEF_FOR_ReferencePath_actions_

typedef struct {
  HoverAction element_00;
  HoverAction element_01;
  HoverAction element_02;
  int32_T length;
} ReferencePath_actions;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ReferencePath_
#define DEFINED_TYPEDEF_FOR_ReferencePath_

typedef struct {
  ReferencePath_locations locations;
  ReferencePath_actions actions;
} ReferencePath;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ReferenceFormation_nodes_
#define DEFINED_TYPEDEF_FOR_ReferenceFormation_nodes_

typedef struct {
  int8_T element_data[5];
} ReferenceFormation_nodes;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ReferenceFormation_
#define DEFINED_TYPEDEF_FOR_ReferenceFormation_

typedef struct {
  ReferenceFormation_nodes nodes;
  int8_T anchor;
  Position formationAnchorPosition;
} ReferenceFormation;

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

#ifndef DEFINED_TYPEDEF_FOR_WorldData_agents_
#define DEFINED_TYPEDEF_FOR_WorldData_agents_

typedef struct {
  Agent element_00;
  Agent element_01;
  Agent element_02;
  Agent element_03;
  Agent element_04;
  int32_T length;
} WorldData_agents;

#endif

#ifndef DEFINED_TYPEDEF_FOR_WorldData_
#define DEFINED_TYPEDEF_FOR_WorldData_

typedef struct {
  Area myArea;
  ReferencePath refPath;
  ReferenceFormation refFormation;
  WorldData_agents agents;
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
  MultiDroneControllerInput_controllerInput controller_input;
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
