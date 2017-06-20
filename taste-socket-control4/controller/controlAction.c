/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controlAction.c
 *
 * Code generated for Simulink model 'controlAction'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jun 19 14:09:58 2017
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
  real_T phi;
  real_T rtb_cospsi;
  real_T rtb_XError;
  real_T rtb_Filter;
  real_T rtb_YError;
  real_T rtb_XerrcospsiYerrsinpsi;
  real_T rtb_FilterCoefficient;
  real_T tmp[9];
  real_T tmp_0[3];
  int32_T i;
  real_T u0;

  /* Fcn: '<S2>/Fcn1' incorporates:
   *  Inport: '<Root>/sensorData'
   */
  rtb_cospsi = cos(controlAction_U.sensorData.yawAct);

  /* Fcn: '<S2>/Fcn' incorporates:
   *  Inport: '<Root>/sensorData'
   */
  rtb_Filter = sin(controlAction_U.sensorData.yawAct);

  /* Sum: '<S2>/Sum2' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/posData'
   *  Product: '<S2>/Product'
   *  Product: '<S2>/Product2'
   *  Sum: '<S2>/Sum'
   *  Sum: '<S2>/Sum1'
   */
  rtb_XerrcospsiYerrsinpsi = (0.0 - controlAction_U.posData.xAct) * rtb_cospsi +
    (0.0 - controlAction_U.posData.yAct) * rtb_Filter;

  /* Gain: '<S4>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S4>/Filter'
   *  Gain: '<S4>/Derivative Gain'
   *  Sum: '<S4>/SumD'
   */
  rtb_FilterCoefficient = (-20.0 * rtb_XerrcospsiYerrsinpsi -
    controlAction_DW.Filter_DSTATE) * 100.0;

  /* Sum: '<S2>/Sum4' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/posData'
   *  Product: '<S2>/Product1'
   *  Product: '<S2>/Product3'
   *  Sum: '<S2>/Sum'
   *  Sum: '<S2>/Sum1'
   */
  rtb_XError = (0.0 - controlAction_U.posData.yAct) * rtb_cospsi - (0.0 -
    controlAction_U.posData.xAct) * rtb_Filter;

  /* Gain: '<S5>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S5>/Filter'
   *  Gain: '<S5>/Derivative Gain'
   *  Sum: '<S5>/SumD'
   */
  rtb_cospsi = (-20.0 * rtb_XError - controlAction_DW.Filter_DSTATE_p) * 100.0;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/sensorData'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' psi = yaw*pi/180; */
  rtb_YError = controlAction_U.sensorData.yawAct * 3.1415926535897931 / 180.0;

  /* '<S1>:1:3' theta = pitch*pi/180; */
  rtb_Filter = controlAction_U.sensorData.pitchAct * 3.1415926535897931 / 180.0;

  /* '<S1>:1:4' phi = roll*pi/180; */
  phi = controlAction_U.sensorData.rollAct * 3.1415926535897931 / 180.0;

  /* Outport: '<Root>/droneData' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Gain: '<S3>/Gain'
   *  Inport: '<Root>/sensorData'
   *  Sum: '<S3>/Sum'
   */
  /* BBF > Inertial rotation matrix */
  /* '<S1>:1:6' Rb_o = [cos(theta)*cos(psi)                                cos(theta)*sin(psi)                             -sin(theta)  ;   %BBF > Inertial rotation matrix */
  /* '<S1>:1:7'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)    sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)  sin(phi)*cos(theta) ; */
  /* '<S1>:1:8'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)    cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)   cos(phi)*cos(theta)]; */
  /* '<S1>:1:9' Ro_b = Rb_o'; */
  /* '<S1>:1:11' cordi_g = Ro_b * [0 0 zrange_raw]'; */
  /* '<S1>:1:12' zrange = cordi_g(3,1) */
  controlAction_Y.droneData.yawrateRef = (0.0 -
    controlAction_U.sensorData.yawAct) * 0.5;

  /* Sum: '<S4>/Sum' incorporates:
   *  DiscreteIntegrator: '<S4>/Integrator'
   *  Gain: '<S4>/Proportional Gain'
   */
  u0 = (-5.0 * rtb_XerrcospsiYerrsinpsi + controlAction_DW.Integrator_DSTATE) +
    rtb_FilterCoefficient;

  /* Saturate: '<S2>/Saturation' */
  if (u0 > 30.0) {
    /* Outport: '<Root>/droneData' */
    controlAction_Y.droneData.pitchRef = 30.0;
  } else if (u0 < -30.0) {
    /* Outport: '<Root>/droneData' */
    controlAction_Y.droneData.pitchRef = -30.0;
  } else {
    /* Outport: '<Root>/droneData' */
    controlAction_Y.droneData.pitchRef = u0;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* Sum: '<S5>/Sum' incorporates:
   *  DiscreteIntegrator: '<S5>/Integrator'
   *  Gain: '<S5>/Proportional Gain'
   */
  u0 = (-5.0 * rtb_XError + controlAction_DW.Integrator_DSTATE_p) + rtb_cospsi;

  /* Saturate: '<S2>/Saturation1' */
  if (u0 > 30.0) {
    /* Outport: '<Root>/droneData' */
    controlAction_Y.droneData.rollRef = 30.0;
  } else if (u0 < -30.0) {
    /* Outport: '<Root>/droneData' */
    controlAction_Y.droneData.rollRef = -30.0;
  } else {
    /* Outport: '<Root>/droneData' */
    controlAction_Y.droneData.rollRef = u0;
  }

  /* End of Saturate: '<S2>/Saturation1' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/sensorData'
   */
  tmp[0] = cos(rtb_Filter) * cos(rtb_YError);
  tmp[1] = cos(rtb_Filter) * sin(rtb_YError);
  tmp[2] = -sin(rtb_Filter);
  tmp[3] = sin(phi) * sin(rtb_Filter) * cos(rtb_YError) - cos(phi) * sin
    (rtb_YError);
  tmp[4] = sin(phi) * sin(rtb_Filter) * sin(rtb_YError) + cos(phi) * cos
    (rtb_YError);
  tmp[5] = sin(phi) * cos(rtb_Filter);
  tmp[6] = cos(phi) * sin(rtb_Filter) * cos(rtb_YError) + sin(phi) * sin
    (rtb_YError);
  tmp[7] = cos(phi) * sin(rtb_Filter) * sin(rtb_YError) - sin(phi) * cos
    (rtb_YError);
  tmp[8] = cos(phi) * cos(rtb_Filter);
  for (i = 0; i < 3; i++) {
    tmp_0[i] = tmp[i + 6] * controlAction_U.sensorData.baropAct + (tmp[i + 3] *
      0.0 + tmp[i] * 0.0);
  }

  /* Outport: '<Root>/droneData' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  controlAction_Y.droneData.thrustRef = tmp_0[2];

  /* Update for DiscreteIntegrator: '<S4>/Integrator' incorporates:
   *  Gain: '<S4>/Integral Gain'
   */
  controlAction_DW.Integrator_DSTATE += 0.0 * rtb_XerrcospsiYerrsinpsi * 0.01;

  /* Update for DiscreteIntegrator: '<S4>/Filter' */
  controlAction_DW.Filter_DSTATE += 0.01 * rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S5>/Integrator' incorporates:
   *  Gain: '<S5>/Integral Gain'
   */
  controlAction_DW.Integrator_DSTATE_p += 0.0 * rtb_XError * 0.01;

  /* Update for DiscreteIntegrator: '<S5>/Filter' */
  controlAction_DW.Filter_DSTATE_p += 0.01 * rtb_cospsi;
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
