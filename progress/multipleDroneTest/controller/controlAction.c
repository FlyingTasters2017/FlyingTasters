/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controlAction.c
 *
 * Code generated for Simulink model 'controlAction'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jun 20 19:40:21 2017
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

/* Block states (auto storage) */
DW_controlAction_T controlAction_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_controlAction_T controlAction_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_controlAction_T controlAction_Y;

/* Real-time model */
RT_MODEL_controlAction_T controlAction_M_;
RT_MODEL_controlAction_T *const controlAction_M = &controlAction_M_;

/* Model step function */
void controlAction_step(void)
{
  real_T rtb_sinpsi;
  real_T rtb_cospsi;
  real_T rtb_Sum5;
  real_T rtb_TSamp;

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Inport: '<Root>/sensorData'
   *  Sum: '<S3>/Sum'
   */
  rtb_Sum5 = (0.0 - controlAction_U.sensorData.yawAct) * -0.5;

  /* Saturate: '<S3>/Saturation' */
  if (rtb_Sum5 > 30.0) {
    controlAction_Y.droneData.yawrateRef = 30.0;
  } else if (rtb_Sum5 < -30.0) {
    controlAction_Y.droneData.yawrateRef = -30.0;
  } else {
    controlAction_Y.droneData.yawrateRef = rtb_Sum5;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* Gain: '<S2>/Gain' incorporates:
   *  Inport: '<Root>/sensorData'
   */
  rtb_sinpsi = 0.017453292519943295 * controlAction_U.sensorData.yawAct;

  /* Fcn: '<S2>/Fcn1' */
  rtb_cospsi = cos(rtb_sinpsi);

  /* Fcn: '<S2>/Fcn' */
  rtb_sinpsi = sin(rtb_sinpsi);

  /* Sum: '<S2>/Sum2' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/posData'
   *  Product: '<S2>/Product'
   *  Product: '<S2>/Product2'
   *  Sum: '<S2>/Sum'
   *  Sum: '<S2>/Sum1'
   */
  rtb_Sum5 = (0.0 - controlAction_U.posData.xAct) * rtb_cospsi + (0.0 -
    controlAction_U.posData.yAct) * rtb_sinpsi;

  /* SampleTimeMath: '<S4>/TSamp'
   *
   * About '<S4>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = rtb_Sum5 * -2000.0;

  /* Sum: '<S2>/Sum3' incorporates:
   *  Gain: '<S2>/Gain1'
   *  Sum: '<S4>/Diff'
   *  UnitDelay: '<S4>/UD'
   *
   * Block description for '<S4>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S4>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Sum5 = -5.0 * rtb_Sum5 + (rtb_TSamp - controlAction_DW.UD_DSTATE);

  /* Saturate: '<S2>/Saturation' */
  if (rtb_Sum5 > 10.0) {
    controlAction_Y.droneData.pitchRef = 10.0;
  } else if (rtb_Sum5 < -10.0) {
    controlAction_Y.droneData.pitchRef = -10.0;
  } else {
    controlAction_Y.droneData.pitchRef = rtb_Sum5;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Sum: '<S2>/Sum4' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/posData'
   *  Product: '<S2>/Product1'
   *  Product: '<S2>/Product3'
   *  Sum: '<S2>/Sum'
   *  Sum: '<S2>/Sum1'
   */
  rtb_Sum5 = (0.0 - controlAction_U.posData.yAct) * rtb_cospsi - (0.0 -
    controlAction_U.posData.xAct) * rtb_sinpsi;

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_sinpsi = rtb_Sum5 * -2000.0;

  /* Sum: '<S2>/Sum5' incorporates:
   *  Gain: '<S2>/Gain2'
   *  Sum: '<S5>/Diff'
   *  UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Sum5 = -5.0 * rtb_Sum5 + (rtb_sinpsi - controlAction_DW.UD_DSTATE_e);

  /* Saturate: '<S2>/Saturation1' */
  if (rtb_Sum5 > 10.0) {
    controlAction_Y.droneData.rollRef = 10.0;
  } else if (rtb_Sum5 < -10.0) {
    controlAction_Y.droneData.rollRef = -10.0;
  } else {
    controlAction_Y.droneData.rollRef = rtb_Sum5;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* BusCreator: '<Root>/droneData_MyDroneData_BusCre' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  controlAction_Y.droneData.thrustRef = 0.3;

  /* Update for UnitDelay: '<S4>/UD'
   *
   * Block description for '<S4>/UD':
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

  /* Update for UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  controlAction_DW.UD_DSTATE_e = rtb_sinpsi;
}

/* Model initialize function */
void controlAction_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(controlAction_M, (NULL));

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
