/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controlAction.h
 *
 * Code generated for Simulink model 'controlAction'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 22 13:02:20 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controlAction_h_
#define RTW_HEADER_controlAction_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef controlAction_COMMON_INCLUDES_
# define controlAction_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* controlAction_COMMON_INCLUDES_ */

#include "controlAction_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S2>/Dead Zone' */
typedef struct {
  real_T error_dz;                     /* '<S2>/Dead Zone' */
} B_DeadZone_controlAction_T;

/* Block signals (auto storage) */
typedef struct {
  B_DeadZone_controlAction_T sf_DeadZone1;/* '<S2>/Dead Zone1' */
  B_DeadZone_controlAction_T sf_DeadZone;/* '<S2>/Dead Zone' */
} B_controlAction_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S6>/UD' */
  real_T UD_DSTATE_g;                  /* '<S7>/UD' */
} DW_controlAction_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MyPositionData posData;              /* '<Root>/posData' */
  MySensorData sensorData;             /* '<Root>/sensorData' */
  MyPositionData refData;              /* '<Root>/refData' */
} ExtU_controlAction_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MyDroneData droneData;               /* '<Root>/droneData' */
} ExtY_controlAction_T;

/* Real-time Model Data Structure */
struct tag_RTM_controlAction_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_controlAction_T controlAction_B;

/* Block states (auto storage) */
extern DW_controlAction_T controlAction_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_controlAction_T controlAction_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_controlAction_T controlAction_Y;

/* External data declarations for dependent source files */
extern const MyDroneData controlAction_rtZMyDroneData;/* MyDroneData ground */

/* Model entry point functions */
extern void controlAction_initialize(void);
extern void controlAction_step(void);
extern void controlAction_terminate(void);

/* Real-time Model object */
extern RT_MODEL_controlAction_T *const controlAction_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S6>/Data Type Duplicate' : Unused code path elimination
 * Block '<S7>/Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'controlAction'
 * '<S1>'   : 'controlAction/MATLAB Function'
 * '<S2>'   : 'controlAction/Position Control'
 * '<S3>'   : 'controlAction/yaw control'
 * '<S4>'   : 'controlAction/Position Control/Dead Zone'
 * '<S5>'   : 'controlAction/Position Control/Dead Zone1'
 * '<S6>'   : 'controlAction/Position Control/Discrete Derivative'
 * '<S7>'   : 'controlAction/Position Control/Discrete Derivative1'
 */
#endif                                 /* RTW_HEADER_controlAction_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
