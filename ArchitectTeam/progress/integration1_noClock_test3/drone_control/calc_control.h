/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: calc_control.h
 *
 * Code generated for Simulink model 'calc_control'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 22 17:47:16 2017
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
  real_T UD_DSTATE;                    /* '<S1>/UD' */
  real_T UD_DSTATE_o;                  /* '<S2>/UD' */
} DW_calc_control_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  Trajectory control_error;            /* '<Root>/control_error' */
  WorldData processed_world_data;      /* '<Root>/processed_world_data' */
} ExtU_calc_control_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  DroneControllerInput control_data;   /* '<Root>/control_data' */
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
extern const DroneControllerInput calc_control_rtZDroneControllerInput;/* DroneControllerInput ground */

/* Model entry point functions */
extern void calc_control_initialize(void);
extern void calc_control_step(void);
extern void calc_control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calc_control_T *const calc_control_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/Data Type Duplicate' : Unused code path elimination
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
 * '<S1>'   : 'calc_control/Discrete Derivative'
 * '<S2>'   : 'calc_control/Discrete Derivative1'
 * '<S3>'   : 'calc_control/yaw control'
 */
#endif                                 /* RTW_HEADER_calc_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
