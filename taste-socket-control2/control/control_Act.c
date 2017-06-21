/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act.c
 *
 * Code generated for Simulink model 'control_Act'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Jun 14 10:11:45 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "control_Act.h"
#include "control_Act_private.h"

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

/*
 * System initialize for atomic system:
 *    'synthesized block'
 *    'synthesized block'
 */
void control_Act_MovingAverage1_Init(DW_MovingAverage1_control_Act_T *localDW)
{
  /* Start for MATLABSystem: '<Root>/Moving Average1' incorporates:
   *  InitializeConditions for MATLABSystem: '<Root>/Moving Average1'
   */
  if ((localDW->obj.isInitialized == 1) && (localDW->
       obj.pStatistic->isInitialized == 1)) {
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
  }

  /* End of Start for MATLABSystem: '<Root>/Moving Average1' */
}

/*
 * Start for atomic system:
 *    'synthesized block'
 *    'synthesized block'
 */
void control_Ac_MovingAverage1_Start(DW_MovingAverage1_control_Act_T *localDW)
{
  cell_wrap_control_Act_T varSizes;
  int32_T i;

  /* Start for MATLABSystem: '<Root>/Moving Average1' */
  localDW->obj.isInitialized = 0;
  localDW->obj.NumChannels = -1.0;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  varSizes.f1[0] = 1U;
  varSizes.f1[1] = 1U;
  for (i = 0; i < 6; i++) {
    varSizes.f1[i + 2] = 1U;
  }

  localDW->obj.inputVarSize = varSizes;
  localDW->obj.NumChannels = 1.0;
  localDW->gobj_0.isInitialized = 0;
  localDW->obj.pStatistic = &localDW->gobj_0;
  localDW->obj.TunablePropsChanged = false;

  /* End of Start for MATLABSystem: '<Root>/Moving Average1' */
}

/*
 * Output and update for atomic system:
 *    'synthesized block'
 *    'synthesized block'
 */
void control_Act_MovingAverage1(real_T rtu_0, DW_MovingAverage1_control_Act_T
  *localDW)
{
  int32_T k;
  real_T cumRevIndex;
  real_T csum;
  real_T csumrev[9];
  boolean_T exitg1;

  /* Start for MATLABSystem: '<Root>/Moving Average1' incorporates:
   *  MATLABSystem: '<Root>/Moving Average1'
   */
  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
  }

  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (localDW->obj.inputVarSize.f1[k] != 1U) {
      for (k = 0; k < 8; k++) {
        localDW->obj.inputVarSize.f1[k] = 1U;
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  if (localDW->obj.pStatistic->isInitialized != 1) {
    localDW->obj.pStatistic->isInitialized = 1;
    localDW->obj.pStatistic->pCumSum = 0.0;
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
    localDW->obj.pStatistic->pCumSum = 0.0;
    memset(&localDW->obj.pStatistic->pCumSumRev[0], 0, 9U * sizeof(real_T));
    localDW->obj.pStatistic->pCumRevIndex = 1.0;
  }

  cumRevIndex = localDW->obj.pStatistic->pCumRevIndex;
  csum = localDW->obj.pStatistic->pCumSum;
  for (k = 0; k < 9; k++) {
    csumrev[k] = localDW->obj.pStatistic->pCumSumRev[k];
  }

  csum += rtu_0;
  csumrev[(int32_T)cumRevIndex - 1] = rtu_0;
  if (cumRevIndex != 9.0) {
    cumRevIndex++;
  } else {
    cumRevIndex = 1.0;
    csum = 0.0;
    for (k = 0; k < 8; k++) {
      csumrev[7 - k] += csumrev[8 - k];
    }
  }

  localDW->obj.pStatistic->pCumSum = csum;
  memcpy(&localDW->obj.pStatistic->pCumSumRev[0], &csumrev[0], 9U * sizeof
         (real_T));
  localDW->obj.pStatistic->pCumRevIndex = cumRevIndex;

  /* End of Start for MATLABSystem: '<Root>/Moving Average1' */
}

/*
 * Termination for atomic system:
 *    'synthesized block'
 *    'synthesized block'
 */
void control_Act_MovingAverage1_Term(DW_MovingAverage1_control_Act_T *localDW)
{
  /* Start for MATLABSystem: '<Root>/Moving Average1' incorporates:
   *  Terminate for MATLABSystem: '<Root>/Moving Average1'
   */
  if (localDW->obj.isInitialized == 1) {
    localDW->obj.isInitialized = 2;
    if (localDW->obj.pStatistic->isInitialized == 1) {
      localDW->obj.pStatistic->isInitialized = 2;
    }

    localDW->obj.NumChannels = -1.0;
  }

  /* End of Start for MATLABSystem: '<Root>/Moving Average1' */
}

/* Model step function */
void control_Act_step(void)
{
  /* Outport: '<Root>/droneData' incorporates:
   *  Inport: '<Root>/Ref'
   */
  control_Act_Y.droneData = control_Act_U.Ref;

  /* Inport: '<Root>/sensorData' */
  control_Act_MovingAverage1(control_Act_U.sensorData.accxAct,
    &control_Act_DW.MovingAverage);
  control_Act_MovingAverage1(control_Act_U.sensorData.accyAct,
    &control_Act_DW.MovingAverage1);
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
  (void)memset((void *)&control_Act_U, 0, sizeof(ExtU_control_Act_T));

  /* external outputs */
  control_Act_Y.droneData = control_Act_rtZMyDroneData;

  /* Start for Inport: '<Root>/sensorData' */
  control_Ac_MovingAverage1_Start(&control_Act_DW.MovingAverage);
  control_Ac_MovingAverage1_Start(&control_Act_DW.MovingAverage1);
  control_Act_MovingAverage1_Init(&control_Act_DW.MovingAverage);
  control_Act_MovingAverage1_Init(&control_Act_DW.MovingAverage1);
}

/* Model terminate function */
void control_Act_terminate(void)
{
  control_Act_MovingAverage1_Term(&control_Act_DW.MovingAverage);
  control_Act_MovingAverage1_Term(&control_Act_DW.MovingAverage1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
