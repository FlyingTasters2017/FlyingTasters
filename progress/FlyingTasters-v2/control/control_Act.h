/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act.h
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

/* Block states (auto storage) for system '<Root>/Moving Average1' */
typedef struct {
  dsp_private_SlidingWindowAver_T gobj_0;/* '<Root>/Moving Average1' */
  dsp_private_SlidingWindowAver_T gobj_1;/* '<Root>/Moving Average1' */
  dsp_MovingAverage_control_Act_T obj; /* '<Root>/Moving Average1' */
  void *MovingAverage1_PWORK;          /* '<Root>/Moving Average1' */
  boolean_T objisempty;                /* '<Root>/Moving Average1' */
} DW_MovingAverage1_control_Act_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  DW_MovingAverage1_control_Act_T MovingAverage;/* '<Root>/Moving Average' */
  DW_MovingAverage1_control_Act_T MovingAverage1;/* '<Root>/Moving Average1' */
} DW_control_Act_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MySensorData sensorData;             /* '<Root>/sensorData' */
  MyDroneData Ref;                     /* '<Root>/Ref' */
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
 * Block '<Root>/Dead Zone' : Unused code path elimination
 * Block '<Root>/Dead Zone1' : Unused code path elimination
 * Block '<Root>/Discrete-Time Integrator' : Unused code path elimination
 * Block '<Root>/Discrete-Time Integrator1' : Unused code path elimination
 * Block '<S3>/Discrete-Time Integrator' : Unused code path elimination
 * Block '<S3>/Ki' : Unused code path elimination
 * Block '<S3>/Kp' : Unused code path elimination
 * Block '<S3>/Scope' : Unused code path elimination
 * Block '<S3>/Sum5' : Unused code path elimination
 * Block '<S3>/Sum6' : Unused code path elimination
 * Block '<S4>/Discrete-Time Integrator' : Unused code path elimination
 * Block '<S4>/Ki' : Unused code path elimination
 * Block '<S4>/Kp' : Unused code path elimination
 * Block '<S4>/Scope' : Unused code path elimination
 * Block '<S4>/Sum5' : Unused code path elimination
 * Block '<S4>/Sum6' : Unused code path elimination
 * Block '<S5>/1//dt' : Unused code path elimination
 * Block '<S5>/Kd' : Unused code path elimination
 * Block '<S5>/Ki' : Unused code path elimination
 * Block '<S5>/Kp' : Unused code path elimination
 * Block '<S5>/Memory' : Unused code path elimination
 * Block '<S5>/Memory1' : Unused code path elimination
 * Block '<S5>/Saturation' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S5>/Scope2' : Unused code path elimination
 * Block '<S5>/Sum1' : Unused code path elimination
 * Block '<S5>/Sum2' : Unused code path elimination
 * Block '<S5>/Sum5' : Unused code path elimination
 * Block '<S5>/Sum6' : Unused code path elimination
 * Block '<S5>/dt' : Unused code path elimination
 * Block '<S6>/1//dt' : Unused code path elimination
 * Block '<S6>/Kd' : Unused code path elimination
 * Block '<S6>/Ki' : Unused code path elimination
 * Block '<S6>/Kp' : Unused code path elimination
 * Block '<S6>/Memory' : Unused code path elimination
 * Block '<S6>/Memory1' : Unused code path elimination
 * Block '<S6>/Saturation' : Unused code path elimination
 * Block '<S6>/Scope1' : Unused code path elimination
 * Block '<S6>/Scope2' : Unused code path elimination
 * Block '<S6>/Sum1' : Unused code path elimination
 * Block '<S6>/Sum2' : Unused code path elimination
 * Block '<S6>/Sum5' : Unused code path elimination
 * Block '<S6>/Sum6' : Unused code path elimination
 * Block '<S6>/dt' : Unused code path elimination
 * Block '<S2>/Saturation' : Unused code path elimination
 * Block '<S2>/Saturation1' : Unused code path elimination
 * Block '<S2>/Scope1' : Unused code path elimination
 * Block '<S2>/Scope2' : Unused code path elimination
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
 * '<S1>'   : 'control_Act/Discrete PID Controller1'
 * '<S2>'   : 'control_Act/Position_controller'
 * '<S3>'   : 'control_Act/Position_controller/PID_Roll_Rate2'
 * '<S4>'   : 'control_Act/Position_controller/PID_Roll_Rate3'
 * '<S5>'   : 'control_Act/Position_controller/PID_X2'
 * '<S6>'   : 'control_Act/Position_controller/PID_Y2'
 */
#endif                                 /* RTW_HEADER_control_Act_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
