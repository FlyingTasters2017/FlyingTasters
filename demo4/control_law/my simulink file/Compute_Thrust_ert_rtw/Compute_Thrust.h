/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Compute_Thrust.h
 *
 * Code generated for Simulink model 'Compute_Thrust'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Fri May 12 14:39:33 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Compute_Thrust_h_
#define RTW_HEADER_Compute_Thrust_h_
#include <stddef.h>
#ifndef Compute_Thrust_COMMON_INCLUDES_
# define Compute_Thrust_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Compute_Thrust_COMMON_INCLUDES_ */

#include "Compute_Thrust_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MyInteger Inp;                       /* '<Root>/Inp' */
} ExtU_Compute_Thrust_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MyInteger Outp;                      /* '<Root>/Outp' */
} ExtY_Compute_Thrust_T;

/* Real-time Model Data Structure */
struct tag_RTM_Compute_Thrust_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Compute_Thrust_T Compute_Thrust_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Compute_Thrust_T Compute_Thrust_Y;

/* Model entry point functions */
extern void Compute_Thrust_initialize(void);
extern void Compute_Thrust_step(void);
extern void Compute_Thrust_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Compute_Thrust_T *const Compute_Thrust_M;

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
 * '<Root>' : 'Compute_Thrust'
 */
#endif                                 /* RTW_HEADER_Compute_Thrust_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
