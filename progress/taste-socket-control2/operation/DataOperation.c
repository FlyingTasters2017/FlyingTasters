/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DataOperation.c
 *
 * Code generated for Simulink model 'DataOperation'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jun 12 12:15:26 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DataOperation.h"
#include "DataOperation_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_DataOperation_T DataOperation_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_DataOperation_T DataOperation_Y;

/* Real-time model */
RT_MODEL_DataOperation_T DataOperation_M_;
RT_MODEL_DataOperation_T *const DataOperation_M = &DataOperation_M_;
const MySensorData DataOperation_rtZMySensorData = { 0.0,/* yawAct */
  0.0,                                 /* pitchAct */
  0.0,                                 /* rollAct */
  0.0,                                 /* baropAct */
  0.0,                                 /* accxAct */
  0.0,                                 /* accyAct */
  0.0                                  /* acczAct */
};

/* Model step function */
void DataOperation_step(void)
{
  real_T psi;
  real_T theta;
  real_T phi;
  real_T psi_0;
  real_T theta_0;
  real_T phi_0;
  real_T G[3];
  real_T tmp[9];
  int32_T i;
  real_T tmp_0[9];
  real_T tmp_1[3];

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Sensordata_in'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' psi = yaw*pi/180; */
  psi = DataOperation_U.Sensordata_in.yawAct * 3.1415926535897931 / 180.0;

  /* '<S1>:1:3' theta = pitch*pi/180; */
  theta = DataOperation_U.Sensordata_in.pitchAct * 3.1415926535897931 / 180.0;

  /* '<S1>:1:4' phi = roll*pi/180; */
  phi = DataOperation_U.Sensordata_in.rollAct * 3.1415926535897931 / 180.0;

  /* MATLAB Function: '<Root>/R From globabl to body' incorporates:
   *  Inport: '<Root>/Sensordata_in'
   */
  /* BBF > Inertial rotation matrix */
  /* '<S1>:1:6' Rb_o = [cos(theta)*cos(psi)                                cos(theta)*sin(psi)                             -sin(theta)  ;   %BBF > Inertial rotation matrix */
  /* '<S1>:1:7'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)    sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)  sin(phi)*cos(theta) ; */
  /* '<S1>:1:8'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)    cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)   cos(phi)*cos(theta)]; */
  /* '<S1>:1:9' Ro_b = Rb_o'; */
  /* '<S1>:1:11' cordi_g = Ro_b * [0 0 zrange_raw]'; */
  /* '<S1>:1:12' zrange = cordi_g(3,1) */
  /* MATLAB Function 'R From globabl to body': '<S2>:1' */
  /* '<S2>:1:2' psi = yaw*pi/180; */
  psi_0 = DataOperation_U.Sensordata_in.yawAct * 3.1415926535897931 / 180.0;

  /* '<S2>:1:3' theta = pitch*pi/180; */
  theta_0 = DataOperation_U.Sensordata_in.pitchAct * 3.1415926535897931 / 180.0;

  /* '<S2>:1:4' phi = roll*pi/180; */
  phi_0 = DataOperation_U.Sensordata_in.rollAct * 3.1415926535897931 / 180.0;

  /* BBF > Inertial rotation matrix */
  /* '<S2>:1:6' Rb_o = [cos(theta)*cos(psi)                                cos(theta)*sin(psi)                             -sin(theta)  ;   %BBF > Inertial rotation matrix */
  /* '<S2>:1:7'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)    sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)  sin(phi)*cos(theta) ; */
  /* '<S2>:1:8'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)    cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)   cos(phi)*cos(theta)]; */
  /* '<S2>:1:10' G = Rb_o * [-0.0316    0.0022    0.9947]'; */
  tmp[0] = cos(theta_0) * cos(psi_0);
  tmp[3] = cos(theta_0) * sin(psi_0);
  tmp[6] = -sin(theta_0);
  tmp[1] = sin(phi_0) * sin(theta_0) * cos(psi_0) - cos(phi_0) * sin(psi_0);
  tmp[4] = sin(phi_0) * sin(theta_0) * sin(psi_0) + cos(phi_0) * cos(psi_0);
  tmp[7] = sin(phi_0) * cos(theta_0);
  tmp[2] = cos(phi_0) * sin(theta_0) * cos(psi_0) + sin(phi_0) * sin(psi_0);
  tmp[5] = cos(phi_0) * sin(theta_0) * sin(psi_0) - sin(phi_0) * cos(psi_0);
  tmp[8] = cos(phi_0) * cos(theta_0);

  /* Outport: '<Root>/Sensordata_out' incorporates:
   *  BusCreator: '<Root>/Sensordata_out_MySensorData_BusCre'
   *  Inport: '<Root>/Sensordata_in'
   */
  /* '<S2>:1:11' g_x = G(1,1); */
  /* '<S2>:1:12' g_y = G(2,1); */
  /* '<S2>:1:13' g_z = G(3,1); */
  DataOperation_Y.Sensordata_out.yawAct = DataOperation_U.Sensordata_in.yawAct;
  DataOperation_Y.Sensordata_out.pitchAct =
    DataOperation_U.Sensordata_in.pitchAct;
  DataOperation_Y.Sensordata_out.rollAct = DataOperation_U.Sensordata_in.rollAct;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  tmp_0[0] = cos(theta) * cos(psi);
  tmp_0[1] = cos(theta) * sin(psi);
  tmp_0[2] = -sin(theta);
  tmp_0[3] = sin(phi) * sin(theta) * cos(psi) - cos(phi) * sin(psi);
  tmp_0[4] = sin(phi) * sin(theta) * sin(psi) + cos(phi) * cos(psi);
  tmp_0[5] = sin(phi) * cos(theta);
  tmp_0[6] = cos(phi) * sin(theta) * cos(psi) + sin(phi) * sin(psi);
  tmp_0[7] = cos(phi) * sin(theta) * sin(psi) - sin(phi) * cos(psi);
  tmp_0[8] = cos(phi) * cos(theta);
  for (i = 0; i < 3; i++) {
    /* MATLAB Function: '<Root>/R From globabl to body' */
    G[i] = tmp[i + 6] * 0.9947 + (tmp[i + 3] * 0.0022 + tmp[i] * -0.0316);

    /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
     *  Inport: '<Root>/Sensordata_in'
     */
    tmp_1[i] = tmp_0[i + 6] * DataOperation_U.Sensordata_in.baropAct + (tmp_0[i
      + 3] * 0.0 + tmp_0[i] * 0.0);
  }

  /* Outport: '<Root>/Sensordata_out' incorporates:
   *  Inport: '<Root>/Sensordata_in'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLAB Function: '<Root>/R From globabl to body'
   *  Sum: '<Root>/Add'
   *  Sum: '<Root>/Add1'
   *  Sum: '<Root>/Add2'
   */
  DataOperation_Y.Sensordata_out.baropAct = tmp_1[2];
  DataOperation_Y.Sensordata_out.accxAct = DataOperation_U.Sensordata_in.accxAct
    + G[0];
  DataOperation_Y.Sensordata_out.accyAct = DataOperation_U.Sensordata_in.accyAct
    - G[1];
  DataOperation_Y.Sensordata_out.acczAct = DataOperation_U.Sensordata_in.acczAct
    - G[2];
}

/* Model initialize function */
void DataOperation_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(DataOperation_M, (NULL));

  /* external inputs */
  DataOperation_U.Sensordata_in = DataOperation_rtZMySensorData;

  /* external outputs */
  DataOperation_Y.Sensordata_out = DataOperation_rtZMySensorData;
}

/* Model terminate function */
void DataOperation_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
