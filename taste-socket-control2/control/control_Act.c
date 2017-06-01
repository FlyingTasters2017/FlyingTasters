/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act.c
 *
 * Code generated for Simulink model 'control_Act'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 01 21:55:05 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control_Act.h"
#include "control_Act_private.h"
#define control_Act_WindowLength       (10.0)

const MyDroneData control_Act_rtZMyDroneData = {
  0.0,                                 /* yawrateRef */
  0.0,                                 /* pitchRef */
  0.0,                                 /* rollRef */
  0.0                                  /* thrustRef */
} ;                                    /* MyDroneData ground */

/* Block states (auto storage) */
DW_control_Act_T control_Act_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_control_Act_T control_Act_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_control_Act_T control_Act_Y;

/* Real-time model */
RT_MODEL_control_Act_T control_Act_M_;
RT_MODEL_control_Act_T *const control_Act_M = &control_Act_M_;
const MySensorData control_Act_rtZMySensorData = { 0.0,/* yawAct */
  0.0,                                 /* pitchAct */
  0.0,                                 /* rollAct */
  0.0,                                 /* baropAct */
  0.0,                                 /* accxAct */
  0.0,                                 /* accyAct */
  0.0                                  /* acczAct */
};

/* Model step function */
void control_Act_step(void)
{
  int32_T k;
  real_T cumRevIndex;
  real_T csum;
  real_T csumrev[9];
  real_T z;
  real_T rtb_id_error;
  real_T rtb_TSamp;
  boolean_T exitg1;

  /* Gain: '<Root>/Kp-yaw' incorporates:
   *  Constant: '<Root>/ref_yaw'
   *  Inport: '<Root>/sensorData'
   *  Sum: '<Root>/Sum1'
   */
  cumRevIndex = (0.0 - control_Act_U.sensorData.yawAct) * 0.052359877559829883;

  /* Saturate: '<Root>/Saturation1' */
  if (cumRevIndex > 100.0) {
    control_Act_Y.droneData.yawrateRef = 100.0;
  } else if (cumRevIndex < -100.0) {
    control_Act_Y.droneData.yawrateRef = -100.0;
  } else {
    control_Act_Y.droneData.yawrateRef = cumRevIndex;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* Sum: '<Root>/Sum2' incorporates:
   *  Constant: '<Root>/ref_z'
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator2'
   */
  rtb_id_error = 0.5 - control_Act_DW.DiscreteTimeIntegrator2_DSTATE;

  /* SampleTimeMath: '<S1>/TSamp' incorporates:
   *  Constant: '<Root>/ref_z'
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator2'
   *  Sum: '<Root>/Sum2'
   *
   * About '<S1>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = (0.5 - control_Act_DW.DiscreteTimeIntegrator2_DSTATE) * 5.0;

  /* Sum: '<Root>/Sum5' incorporates:
   *  Constant: '<Root>/lifting thrust '
   *  Constant: '<Root>/ref_z'
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator2'
   *  Gain: '<Root>/Kd'
   *  Gain: '<Root>/Ki'
   *  Gain: '<Root>/Kp'
   *  Sum: '<Root>/Sum2'
   *  Sum: '<S1>/Diff'
   *  UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  cumRevIndex = (((0.5 - control_Act_DW.DiscreteTimeIntegrator2_DSTATE) *
                  11000.0 + (rtb_TSamp - control_Act_DW.UD_DSTATE) * 3500.0) +
                 9000.0 * control_Act_DW.DiscreteTimeIntegrator_DSTATE) +
    40000.0;

  /* Saturate: '<Root>/Saturation' */
  if (cumRevIndex > 60000.0) {
    control_Act_Y.droneData.thrustRef = 60000.0;
  } else if (cumRevIndex < -20000.0) {
    control_Act_Y.droneData.thrustRef = -20000.0;
  } else {
    control_Act_Y.droneData.thrustRef = cumRevIndex;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* BusCreator: '<Root>/droneData_MyDroneData_BusCre' incorporates:
   *  Constant: '<Root>/pitch'
   *  Constant: '<Root>/roll'
   */
  control_Act_Y.droneData.pitchRef = 0.0;
  control_Act_Y.droneData.rollRef = 0.0;

  /* Start for MATLABSystem: '<Root>/Moving Average1' incorporates:
   *  Inport: '<Root>/sensorData'
   *  MATLABSystem: '<Root>/Moving Average1'
   */
  if (control_Act_DW.obj.TunablePropsChanged) {
    control_Act_DW.obj.TunablePropsChanged = false;
  }

  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (control_Act_DW.obj.inputVarSize.f1[k] != 1U) {
      for (k = 0; k < 8; k++) {
        control_Act_DW.obj.inputVarSize.f1[k] = 1U;
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (control_Act_DW.obj.pStatistic->isInitialized != 1) {
    control_Act_DW.obj.pStatistic->isInitialized = 1;
    control_Act_DW.obj.pStatistic->pCumSum = 0.0;
    control_Act_DW.obj.pStatistic->pCumRevIndex = 1.0;
    control_Act_DW.obj.pStatistic->pCumSum = 0.0;
    memset(&control_Act_DW.obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    control_Act_DW.obj.pStatistic->pCumRevIndex = 1.0;
  }

  cumRevIndex = control_Act_DW.obj.pStatistic->pCumRevIndex;
  csum = control_Act_DW.obj.pStatistic->pCumSum;
  for (k = 0; k < 9; k++) {
    csumrev[k] = control_Act_DW.obj.pStatistic->pCumSumRev[k];
  }

  csum += control_Act_U.sensorData.acczAct;
  z = csumrev[(int32_T)cumRevIndex - 1] + csum;
  csumrev[(int32_T)cumRevIndex - 1] = control_Act_U.sensorData.acczAct;
  if (cumRevIndex != 9.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (k = 0; k < 8; k++) {
      csumrev[7 - k] += csumrev[8 - k];
    }
  }

  control_Act_DW.obj.pStatistic->pCumSum = csum;
  memcpy(&control_Act_DW.obj.pStatistic->pCumSumRev[0], &csumrev[0], 9U * sizeof
         (real_T));
  control_Act_DW.obj.pStatistic->pCumRevIndex = cumRevIndex;

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator2' incorporates:
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator1'
   */
  control_Act_DW.DiscreteTimeIntegrator2_DSTATE += 0.2 *
    control_Act_DW.DiscreteTimeIntegrator1_DSTATE;

  /* Update for UnitDelay: '<S1>/UD'
   *
   * Block description for '<S1>/UD':
   *
   *  Store in Global RAM
   */
  control_Act_DW.UD_DSTATE = rtb_TSamp;

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  control_Act_DW.DiscreteTimeIntegrator_DSTATE += 0.2 * rtb_id_error;

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator1' incorporates:
   *  MATLABSystem: '<Root>/Moving Average1'
   *  Start for MATLABSystem: '<Root>/Moving Average1'
   */
  control_Act_DW.DiscreteTimeIntegrator1_DSTATE += z / control_Act_WindowLength *
    0.2;
}

/* Model initialize function */
void control_Act_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(control_Act_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&control_Act_DW, 0,
                sizeof(DW_control_Act_T));

  /* external inputs */
  control_Act_U.sensorData = control_Act_rtZMySensorData;

  /* external outputs */
  control_Act_Y.droneData = control_Act_rtZMyDroneData;

  {
    cell_wrap_control_Act_T varSizes;
    int32_T i;

    /* Start for MATLABSystem: '<Root>/Moving Average1' */
    control_Act_DW.obj.isInitialized = 0;
    control_Act_DW.obj.NumChannels = -1.0;
    control_Act_DW.objisempty = true;
    control_Act_DW.obj.isInitialized = 1;
    varSizes.f1[0] = 1U;
    varSizes.f1[1] = 1U;
    for (i = 0; i < 6; i++) {
      varSizes.f1[i + 2] = 1U;
    }

    control_Act_DW.obj.inputVarSize = varSizes;
    control_Act_DW.obj.NumChannels = 1.0;
    control_Act_DW.gobj_0.isInitialized = 0;
    control_Act_DW.obj.pStatistic = &control_Act_DW.gobj_0;
    control_Act_DW.obj.TunablePropsChanged = false;

    /* Start for MATLABSystem: '<Root>/Moving Average1' incorporates:
     *  InitializeConditions for MATLABSystem: '<Root>/Moving Average1'
     */
    if ((control_Act_DW.obj.isInitialized == 1) &&
        (control_Act_DW.obj.pStatistic->isInitialized == 1)) {
      control_Act_DW.obj.pStatistic->pCumSum = 0.0;
      memset(&control_Act_DW.obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof
             (real_T));
      control_Act_DW.obj.pStatistic->pCumRevIndex = 1.0;
    }
  }
}

/* Model terminate function */
void control_Act_terminate(void)
{
  /* Start for MATLABSystem: '<Root>/Moving Average1' incorporates:
   *  Terminate for MATLABSystem: '<Root>/Moving Average1'
   */
  if (control_Act_DW.obj.isInitialized == 1) {
    control_Act_DW.obj.isInitialized = 2;
    if (control_Act_DW.obj.pStatistic->isInitialized == 1) {
      control_Act_DW.obj.pStatistic->isInitialized = 2;
    }

    control_Act_DW.obj.NumChannels = -1.0;
  }

  /* End of Start for MATLABSystem: '<Root>/Moving Average1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
