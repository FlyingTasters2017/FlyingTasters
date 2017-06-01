/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act.h
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

#ifndef RTW_HEADER_control_Act_h_
#define RTW_HEADER_control_Act_h_
#include <string.h>
#include <stddef.h>
#ifndef control_Act_COMMON_INCLUDES_
# define control_Act_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* control_Act_COMMON_INCLUDES_ */

#include "control_Act_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  dsp_private_SlidingWindowAver_T gobj_0;/* '<Root>/Moving Average1' */
  dsp_private_SlidingWindowAver_T gobj_1;/* '<Root>/Moving Average1' */
  dsp_MovingAverage_control_Act_T obj; /* '<Root>/Moving Average1' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<Root>/Discrete-Time Integrator2' */
  real_T UD_DSTATE;                    /* '<S1>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<Root>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<Root>/Discrete-Time Integrator1' */
  void *MovingAverage1_PWORK;          /* '<Root>/Moving Average1' */
  boolean_T objisempty;                /* '<Root>/Moving Average1' */
} DW_control_Act_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MySensorData sensorData;             /* '<Root>/sensorData' */
} ExtU_control_Act_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MyDroneData droneData;               /* '<Root>/droneData' */
} ExtY_control_Act_T;

/* Real-time Model Data Structure */
struct tag_RTM_control_Act_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_control_Act_T control_Act_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_control_Act_T control_Act_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_control_Act_T control_Act_Y;

/* External data declarations for dependent source files */
extern const MySensorData control_Act_rtZMySensorData;/* MySensorData ground */
extern const MyDroneData control_Act_rtZMyDroneData;/* MyDroneData ground */

/* Model entry point functions */
extern void control_Act_initialize(void);
extern void control_Act_step(void);
extern void control_Act_terminate(void);

/* Real-time Model object */
extern RT_MODEL_control_Act_T *const control_Act_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Duplicate' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'control_Act'
 * '<S1>'   : 'control_Act/Discrete Derivative'
 */
#endif                                 /* RTW_HEADER_control_Act_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
