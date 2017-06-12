/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: DataOperation.h
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

#ifndef RTW_HEADER_DataOperation_h_
#define RTW_HEADER_DataOperation_h_
#include <math.h>
#include <stddef.h>
#ifndef DataOperation_COMMON_INCLUDES_
# define DataOperation_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DataOperation_COMMON_INCLUDES_ */

#include "DataOperation_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MySensorData Sensordata_in;          /* '<Root>/Sensordata_in' */
} ExtU_DataOperation_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MySensorData Sensordata_out;         /* '<Root>/Sensordata_out' */
} ExtY_DataOperation_T;

/* Real-time Model Data Structure */
struct tag_RTM_DataOperation_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_DataOperation_T DataOperation_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_DataOperation_T DataOperation_Y;

/* External data declarations for dependent source files */
extern const MySensorData DataOperation_rtZMySensorData;/* MySensorData ground */

/* Model entry point functions */
extern void DataOperation_initialize(void);
extern void DataOperation_step(void);
extern void DataOperation_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DataOperation_T *const DataOperation_M;

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
 * '<Root>' : 'DataOperation'
 * '<S1>'   : 'DataOperation/MATLAB Function'
 * '<S2>'   : 'DataOperation/R From globabl to body'
 */
#endif                                 /* RTW_HEADER_DataOperation_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
