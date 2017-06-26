/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control.h
 *
 * Code generated for Simulink model 'calc_control'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Mon Jun 26 10:33:25 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calc_control_h_
#define RTW_HEADER_calc_control_h_
#include <string.h>
#include <stddef.h>
#ifndef calc_control_COMMON_INCLUDES_
# define calc_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc_control_COMMON_INCLUDES_ */

#include "calc_control_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S4>/UD' */
  real_T UD_DSTATE_p;                  /* '<S5>/UD' */
  real_T UD_DSTATE_o;                  /* '<S7>/UD' */
  real_T UD_DSTATE_n;                  /* '<S8>/UD' */
  real_T UD_DSTATE_b;                  /* '<S10>/UD' */
  real_T UD_DSTATE_a;                  /* '<S11>/UD' */
} DW_calc_control_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MultiControlError control_error;     /* '<Root>/control_error' */
  WorldData processed_world_data;      /* '<Root>/processed_world_data' */
} ExtU_calc_control_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MultiDroneControllerInput control_data;/* '<Root>/control_data' */
} ExtY_calc_control_T;

/* Real-time Model Data Structure */
struct tag_RTM_calc_control_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_calc_control_T calc_control_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_calc_control_T calc_control_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_calc_control_T calc_control_Y;

/* External data declarations for dependent source files */
extern const MultiDroneControllerInput calc_control_rtZMultiDroneControllerInput;/* MultiDroneControllerInput ground */

/* Model entry point functions */
extern void calc_control_initialize(void);
extern void calc_control_step(void);
extern void calc_control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calc_control_T *const calc_control_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S4>/Data Type Duplicate' : Unused code path elimination
 * Block '<S5>/Data Type Duplicate' : Unused code path elimination
 * Block '<S7>/Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'calc_control'
 * '<S1>'   : 'calc_control/droneController'
 * '<S2>'   : 'calc_control/droneController1'
 * '<S3>'   : 'calc_control/droneController2'
 * '<S4>'   : 'calc_control/droneController/Discrete Derivative'
 * '<S5>'   : 'calc_control/droneController/Discrete Derivative1'
 * '<S6>'   : 'calc_control/droneController/yaw control'
 * '<S7>'   : 'calc_control/droneController1/Discrete Derivative'
 * '<S8>'   : 'calc_control/droneController1/Discrete Derivative1'
 * '<S9>'   : 'calc_control/droneController1/yaw control'
 * '<S10>'  : 'calc_control/droneController2/Discrete Derivative'
 * '<S11>'  : 'calc_control/droneController2/Discrete Derivative1'
 * '<S12>'  : 'calc_control/droneController2/yaw control'
 */
#endif                                 /* RTW_HEADER_calc_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
