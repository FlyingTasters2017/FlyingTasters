/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controlAction2.c
 *
 * Code generated for Simulink model 'controlAction2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jun 27 22:10:57 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "controlAction2.h"
#include "controlAction2_private.h"

const MyDroneData controlAction2_rtZMyDroneData = {
  0.0,                                 /* yawrateRef */
  0.0,                                 /* pitchRef */
  0.0,                                 /* rollRef */
  0.0                                  /* zRef */
} ;                                    /* MyDroneData ground */

/* Block signals (auto storage) */
B_controlAction2_T controlAction2_B;

/* Block states (auto storage) */
DW_controlAction2_T controlAction2_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_controlAction2_T controlAction2_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_controlAction2_T controlAction2_Y;

/* Real-time model */
RT_MODEL_controlAction2_T controlAction2_M_;
RT_MODEL_controlAction2_T *const controlAction2_M = &controlAction2_M_;

/*
 * Output and update for atomic system:
 *    '<S1>/Dead Zone'
 *    '<S1>/Dead Zone1'
 */
void controlAction2_DeadZone(real_T rtu_error, B_DeadZone_controlAction2_T
  *localB)
{
  /* MATLAB Function 'Position Control/Dead Zone': '<S3>:1' */
  /* '<S3>:1:2' if abs(error)<.03 */
  if (fabs(rtu_error) < 0.03) {
    /* '<S3>:1:3' error_dz=error; */
    localB->error_dz = rtu_error;
  } else {
    /* '<S3>:1:4' else */
    /* '<S3>:1:5' error_dz=error; */
    localB->error_dz = rtu_error;
  }
}

/* Model step function */
void controlAction2_step(void)
{
  real_T rtb_XError;
  real_T rtb_sinpsi;
  real_T rtb_cospsi;
  real_T rtb_YError;
  real_T rtb_Gain1;
  real_T rtb_TSamp;

  /* Sum: '<S1>/Sum' incorporates:
   *  Inport: '<Root>/posData2'
   *  Inport: '<Root>/refData2'
   */
  rtb_XError = controlAction2_U.refData2.xAct - controlAction2_U.posData2.xAct;

  /* Gain: '<S1>/Gain' incorporates:
   *  Inport: '<Root>/sensorData2'
   */
  rtb_sinpsi = 0.017453292519943295 * controlAction2_U.sensorData2.yawAct;

  /* Fcn: '<S1>/Fcn1' */
  rtb_cospsi = cos(rtb_sinpsi);

  /* Sum: '<S1>/Sum1' incorporates:
   *  Inport: '<Root>/posData2'
   *  Inport: '<Root>/refData2'
   */
  rtb_YError = controlAction2_U.refData2.yAct - controlAction2_U.posData2.yAct;

  /* Fcn: '<S1>/Fcn' */
  rtb_sinpsi = sin(rtb_sinpsi);

  /* MATLAB Function: '<S1>/Dead Zone' incorporates:
   *  Product: '<S1>/Product'
   *  Product: '<S1>/Product2'
   *  Sum: '<S1>/Sum2'
   */
  controlAction2_DeadZone(rtb_XError * rtb_cospsi + rtb_YError * rtb_sinpsi,
    &controlAction2_B.sf_DeadZone);

  /* Gain: '<S1>/Gain1' */
  rtb_Gain1 = -18.0 * controlAction2_B.sf_DeadZone.error_dz;

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = controlAction2_B.sf_DeadZone.error_dz * -250.0;

  /* MATLAB Function: '<S1>/Dead Zone1' incorporates:
   *  Product: '<S1>/Product1'
   *  Product: '<S1>/Product3'
   *  Sum: '<S1>/Sum4'
   */
  controlAction2_DeadZone(rtb_YError * rtb_cospsi - rtb_XError * rtb_sinpsi,
    &controlAction2_B.sf_DeadZone1);

  /* SampleTimeMath: '<S6>/TSamp'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_XError = controlAction2_B.sf_DeadZone1.error_dz * -250.0;

  /* Gain: '<S2>/Gain' incorporates:
   *  Constant: '<S2>/Constant2'
   *  Inport: '<Root>/sensorData2'
   *  Sum: '<S2>/Sum'
   */
  rtb_sinpsi = (0.0 - controlAction2_U.sensorData2.yawAct) * -0.5;

  /* Saturate: '<S2>/Saturation' */
  if (rtb_sinpsi > 30.0) {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.yawrateRef = 30.0;
  } else if (rtb_sinpsi < -30.0) {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.yawrateRef = -30.0;
  } else {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.yawrateRef = rtb_sinpsi;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Sum: '<S1>/Sum3' incorporates:
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
  rtb_sinpsi = (rtb_TSamp - controlAction2_DW.UD_DSTATE) + rtb_Gain1;

  /* Saturate: '<S1>/Saturation' */
  if (rtb_sinpsi > 10.0) {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.pitchRef = 10.0;
  } else if (rtb_sinpsi < -10.0) {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.pitchRef = -10.0;
  } else {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.pitchRef = rtb_sinpsi;
  }

  /* End of Saturate: '<S1>/Saturation' */

  /* Sum: '<S1>/Sum5' incorporates:
   *  Gain: '<S1>/Gain2'
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
  rtb_sinpsi = -18.0 * controlAction2_B.sf_DeadZone1.error_dz + (rtb_XError -
    controlAction2_DW.UD_DSTATE_g);

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_sinpsi > 10.0) {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.rollRef = 10.0;
  } else if (rtb_sinpsi < -10.0) {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.rollRef = -10.0;
  } else {
    /* Outport: '<Root>/droneData2' */
    controlAction2_Y.droneData2.rollRef = rtb_sinpsi;
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* Outport: '<Root>/droneData2' incorporates:
   *  Inport: '<Root>/refData2'
   *  Product: '<Root>/Product'
   */
  controlAction2_Y.droneData2.zRef = controlAction2_U.refData2.zAct;

  /* Update for UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  controlAction2_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S6>/UD'
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   */
  controlAction2_DW.UD_DSTATE_g = rtb_XError;
}

/* Model initialize function */
void controlAction2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(controlAction2_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &controlAction2_B), 0,
                sizeof(B_controlAction2_T));

  /* states (dwork) */
  (void) memset((void *)&controlAction2_DW, 0,
                sizeof(DW_controlAction2_T));

  /* external inputs */
  (void)memset((void *)&controlAction2_U, 0, sizeof(ExtU_controlAction2_T));

  /* external outputs */
  controlAction2_Y.droneData2 = controlAction2_rtZMyDroneData;
}

/* Model terminate function */
void controlAction2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
