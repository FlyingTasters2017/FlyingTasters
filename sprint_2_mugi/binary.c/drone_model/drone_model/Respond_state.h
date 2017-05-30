/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Respond_state.h
 *
 * Code generated for Simulink model 'Respond_state'.
 *
 * Model version                  : 1.62
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue May 23 15:47:37 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Respond_state_h_
#define RTW_HEADER_Respond_state_h_
#include <math.h>
#include <string.h>
#ifndef Respond_state_COMMON_INCLUDES_
# define Respond_state_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Respond_state_COMMON_INCLUDES_ */

#include "Respond_state_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T pqr_dot[3];                   /* '<S2>/MATLAB Function3' */
  real_T uvw_dot[3];                   /* '<S2>/MATLAB Function2' */
  real_T angles_dot[3];                /* '<S2>/MATLAB Function1' */
  real_T xyz_dot[3];                   /* '<S2>/MATLAB Function' */
} B_Respond_state_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T Integrator4_CSTATE[3];        /* '<S2>/Integrator4' */
  real_T Integrator3_CSTATE[3];        /* '<S2>/Integrator3' */
  real_T Integrator1_CSTATE[3];        /* '<S2>/Integrator1' */
  real_T Integrator2_CSTATE[3];        /* '<S2>/Integrator2' */
} X_Respond_state_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T Integrator4_CSTATE[3];        /* '<S2>/Integrator4' */
  real_T Integrator3_CSTATE[3];        /* '<S2>/Integrator3' */
  real_T Integrator1_CSTATE[3];        /* '<S2>/Integrator1' */
  real_T Integrator2_CSTATE[3];        /* '<S2>/Integrator2' */
} XDot_Respond_state_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator4_CSTATE[3];     /* '<S2>/Integrator4' */
  boolean_T Integrator3_CSTATE[3];     /* '<S2>/Integrator3' */
  boolean_T Integrator1_CSTATE[3];     /* '<S2>/Integrator1' */
  boolean_T Integrator2_CSTATE[3];     /* '<S2>/Integrator2' */
} XDis_Respond_state_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MyPWM PWM;                           /* '<Root>/PWM' */
} ExtU_Respond_state_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MyStates States;                     /* '<Root>/States' */
} ExtY_Respond_state_T;

/* Real-time Model Data Structure */
struct tag_RTM_Respond_state_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_Respond_state_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeF[1][12];
  ODE1_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[1];
  } Timing;
};

/* Block signals (auto storage) */
extern B_Respond_state_T Respond_state_B;

/* Continuous states (auto storage) */
extern X_Respond_state_T Respond_state_X;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Respond_state_T Respond_state_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Respond_state_T Respond_state_Y;

/* External data declarations for dependent source files */
extern const MyPWM Respond_state_rtZMyPWM;/* MyPWM ground */
extern const MyStates Respond_state_rtZMyStates;/* MyStates ground */

/* Model entry point functions */
extern void Respond_state_initialize(void);
extern void Respond_state_step(void);
extern void Respond_state_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Respond_state_T *const Respond_state_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Add4' : Unused code path elimination
 * Block '<S2>/Gain5' : Unused code path elimination
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
 * '<Root>' : 'Respond_state'
 * '<S1>'   : 'Respond_state/PWM_RPM'
 * '<S2>'   : 'Respond_state/Quad_Model_X'
 * '<S3>'   : 'Respond_state/Quad_Model_X/MATLAB Function'
 * '<S4>'   : 'Respond_state/Quad_Model_X/MATLAB Function1'
 * '<S5>'   : 'Respond_state/Quad_Model_X/MATLAB Function2'
 * '<S6>'   : 'Respond_state/Quad_Model_X/MATLAB Function3'
 */
#endif                                 /* RTW_HEADER_Respond_state_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
