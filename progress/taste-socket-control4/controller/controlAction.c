/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controlAction.c
 *
 * Code generated for Simulink model 'controlAction'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 22 13:02:20 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "controlAction.h"
#include "controlAction_private.h"

const MyDroneData controlAction_rtZMyDroneData = {
  0.0,                                 /* yawrateRef */
  0.0,                                 /* pitchRef */
  0.0,                                 /* rollRef */
  0.0                                  /* thrustRef */
} ;                                    /* MyDroneData ground */

/* Block signals (auto storage) */
B_controlAction_T controlAction_B;

/* Block states (auto storage) */
DW_controlAction_T controlAction_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_controlAction_T controlAction_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_controlAction_T controlAction_Y;

/* Real-time model */
RT_MODEL_controlAction_T controlAction_M_;
RT_MODEL_controlAction_T *const controlAction_M = &controlAction_M_;

/*
 * Output and update for atomic system:
 *    '<S2>/Dead Zone'
 *    '<S2>/Dead Zone1'
 */
void controlAction_DeadZone(real_T rtu_error, B_DeadZone_controlAction_T *localB)
{
  /* MATLAB Function 'Position Control/Dead Zone': '<S4>:1' */
  /* '<S4>:1:2' if abs(error)<.03 */
  if (fabs(rtu_error) < 0.03) {
    /* '<S4>:1:3' error_dz=error; */
    localB->error_dz = rtu_error;
  } else {
    /* '<S4>:1:4' else */
    /* '<S4>:1:5' error_dz=error; */
    localB->error_dz = rtu_error;
  }
}

/* Model step function */
void controlAction_step(void)
{
  real_T rtb_XError;
  real_T rtb_sinpsi;
  real_T rtb_cospsi;
  real_T rtb_YError;
  real_T rtb_TSamp;
  real_T u0;

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Inport: '<Root>/sensorData'
   *  Sum: '<S3>/Sum'
   */
  u0 = (0.0 - controlAction_U.sensorData.yawAct) * -0.5;

  /* Saturate: '<S3>/Saturation' */
  if (u0 > 30.0) {
    controlAction_Y.droneData.yawrateRef = 30.0;
  } else if (u0 < -30.0) {
    controlAction_Y.droneData.yawrateRef = -30.0;
  } else {
    controlAction_Y.droneData.yawrateRef = u0;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Sum: '<S2>/Sum' incorporates:
   *  Inport: '<Root>/posData'
   *  Inport: '<Root>/refData'
   */
  rtb_XError = controlAction_U.refData.xAct - controlAction_U.posData.xAct;

  /* Gain: '<S2>/Gain' incorporates:
   *  Inport: '<Root>/sensorData'
   */
  rtb_sinpsi = 0.017453292519943295 * controlAction_U.sensorData.yawAct;

  /* Fcn: '<S2>/Fcn1' */
  rtb_cospsi = cos(rtb_sinpsi);

  /* Sum: '<S2>/Sum1' incorporates:
   *  Inport: '<Root>/posData'
   *  Inport: '<Root>/refData'
   */
  rtb_YError = controlAction_U.refData.yAct - controlAction_U.posData.yAct;

  /* Fcn: '<S2>/Fcn' */
  rtb_sinpsi = sin(rtb_sinpsi);

  /* MATLAB Function: '<S2>/Dead Zone' incorporates:
   *  Product: '<S2>/Product'
   *  Product: '<S2>/Product2'
   *  Sum: '<S2>/Sum2'
   */
  controlAction_DeadZone(rtb_XError * rtb_cospsi + rtb_YError * rtb_sinpsi,
    &controlAction_B.sf_DeadZone);

  /* SampleTimeMath: '<S6>/TSamp'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = controlAction_B.sf_DeadZone.error_dz * -1100.0;

  /* Sum: '<S2>/Sum3' incorporates:
   *  Gain: '<S2>/Gain1'
   *  Sum: '<S6>/Diff'
   *  UnitDelay: '<S6>/UD'
   *
   * Block description for '<S6>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -20.0 * controlAction_B.sf_DeadZone.error_dz + (rtb_TSamp -
    controlAction_DW.UD_DSTATE);

  /* Saturate: '<S2>/Saturation' */
  if (u0 > 10.0) {
    controlAction_Y.droneData.pitchRef = 10.0;
  } else if (u0 < -10.0) {
    controlAction_Y.droneData.pitchRef = -10.0;
  } else {
    controlAction_Y.droneData.pitchRef = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* MATLAB Function: '<S2>/Dead Zone1' incorporates:
   *  Product: '<S2>/Product1'
   *  Product: '<S2>/Product3'
   *  Sum: '<S2>/Sum4'
   */
  controlAction_DeadZone(rtb_YError * rtb_cospsi - rtb_XError * rtb_sinpsi,
    &controlAction_B.sf_DeadZone1);

  /* SampleTimeMath: '<S7>/TSamp'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_XError = controlAction_B.sf_DeadZone1.error_dz * -1100.0;

  /* Sum: '<S2>/Sum5' incorporates:
   *  Gain: '<S2>/Gain2'
   *  Sum: '<S7>/Diff'
   *  UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  u0 = -20.0 * controlAction_B.sf_DeadZone1.error_dz + (rtb_XError -
    controlAction_DW.UD_DSTATE_g);

  /* Saturate: '<S2>/Saturation1' */
  if (u0 > 10.0) {
    controlAction_Y.droneData.rollRef = 10.0;
  } else if (u0 < -10.0) {
    controlAction_Y.droneData.rollRef = -10.0;
  } else {
    controlAction_Y.droneData.rollRef = u0;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* BusCreator: '<Root>/droneData_MyDroneData_BusCre' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  controlAction_Y.droneData.thrustRef = 0.3;

  /* Update for UnitDelay: '<S6>/UD'
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' psi = yaw*pi/180; */
  /* '<S1>:1:3' theta = pitch*pi/180; */
  /* '<S1>:1:4' phi = roll*pi/180; */
  /* BBF > Inertial rotation matrix */
  /* '<S1>:1:6' Rb_o = [cos(theta)*cos(psi)                                cos(theta)*sin(psi)                             -sin(theta)  ;   %BBF > Inertial rotation matrix */
  /* '<S1>:1:7'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)    sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)  sin(phi)*cos(theta) ; */
  /* '<S1>:1:8'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)    cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)   cos(phi)*cos(theta)]; */
  /* '<S1>:1:9' Ro_b = Rb_o'; */
  /* '<S1>:1:11' cordi_g = Ro_b * [0 0 zrange_raw]'; */
  /* '<S1>:1:12' zrange = cordi_g(3,1) */
  controlAction_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  controlAction_DW.UD_DSTATE_g = rtb_XError;
}

/* Model initialize function */
void controlAction_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(controlAction_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &controlAction_B), 0,
                sizeof(B_controlAction_T));

  /* states (dwork) */
  (void) memset((void *)&controlAction_DW, 0,
                sizeof(DW_controlAction_T));

  /* external inputs */
  (void)memset((void *)&controlAction_U, 0, sizeof(ExtU_controlAction_T));

  /* external outputs */
  controlAction_Y.droneData = controlAction_rtZMyDroneData;
}

/* Model terminate function */
void controlAction_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
