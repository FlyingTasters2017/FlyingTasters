/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Compute_PWM.h
 *
 * Code generated for Simulink model 'Compute_PWM'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed May 24 10:41:41 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Compute_PWM_h_
#define RTW_HEADER_Compute_PWM_h_
#include <math.h>
#include <string.h>
#ifndef Compute_PWM_COMMON_INCLUDES_
# define Compute_PWM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Compute_PWM_COMMON_INCLUDES_ */

#include "Compute_PWM_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

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
  real_T pid_error;                    /* '<S10>/Sum6' */
  real_T pid_error_b;                  /* '<S17>/Sum6' */
  real_T pid_error_n;                  /* '<S14>/Sum6' */
  real_T pid_error_a;                  /* '<S18>/Sum6' */
  real_T pid_error_o;                  /* '<S13>/Sum6' */
  real_T pid_error_j;                  /* '<S24>/Sum6' */
  real_T pid_error_nt;                 /* '<S23>/Sum6' */
  real_T pid_error_k;                  /* '<S8>/Sum6' */
  real_T Memory1;                      /* '<S8>/Memory1' */
  real_T pid_integ;                    /* '<S8>/Sum1' */
  real_T pid_prevError;                /* '<S8>/Memory' */
  real_T pid_error_g;                  /* '<S9>/Sum6' */
  real_T Memory1_j;                    /* '<S9>/Memory1' */
  real_T pid_integ_l;                  /* '<S9>/Sum1' */
  real_T pid_prevError_p;              /* '<S9>/Memory' */
} B_Compute_PWM_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T TimeStampA;                   /* '<S10>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S10>/Derivative' */
  real_T TimeStampB;                   /* '<S10>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S10>/Derivative' */
  real_T TimeStampA_h;                 /* '<S17>/Derivative' */
  real_T LastUAtTimeA_d;               /* '<S17>/Derivative' */
  real_T TimeStampB_p;                 /* '<S17>/Derivative' */
  real_T LastUAtTimeB_k;               /* '<S17>/Derivative' */
  real_T TimeStampA_m;                 /* '<S14>/Derivative' */
  real_T LastUAtTimeA_n;               /* '<S14>/Derivative' */
  real_T TimeStampB_h;                 /* '<S14>/Derivative' */
  real_T LastUAtTimeB_b;               /* '<S14>/Derivative' */
  real_T TimeStampA_b;                 /* '<S18>/Derivative' */
  real_T LastUAtTimeA_e;               /* '<S18>/Derivative' */
  real_T TimeStampB_g;                 /* '<S18>/Derivative' */
  real_T LastUAtTimeB_a;               /* '<S18>/Derivative' */
  real_T TimeStampA_o;                 /* '<S13>/Derivative' */
  real_T LastUAtTimeA_f;               /* '<S13>/Derivative' */
  real_T TimeStampB_gn;                /* '<S13>/Derivative' */
  real_T LastUAtTimeB_f;               /* '<S13>/Derivative' */
  real_T TimeStampA_n;                 /* '<S24>/Derivative' */
  real_T LastUAtTimeA_a;               /* '<S24>/Derivative' */
  real_T TimeStampB_gu;                /* '<S24>/Derivative' */
  real_T LastUAtTimeB_kd;              /* '<S24>/Derivative' */
  real_T TimeStampA_c;                 /* '<S23>/Derivative' */
  real_T LastUAtTimeA_k;               /* '<S23>/Derivative' */
  real_T TimeStampB_ha;                /* '<S23>/Derivative' */
  real_T LastUAtTimeB_fi;              /* '<S23>/Derivative' */
  real_T Memory1_PreviousInput;        /* '<S8>/Memory1' */
  real_T Memory_PreviousInput;         /* '<S8>/Memory' */
  real_T Memory1_PreviousInput_b;      /* '<S9>/Memory1' */
  real_T Memory_PreviousInput_k;       /* '<S9>/Memory' */
} DW_Compute_PWM_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T IntegratorLimited_CSTATE;     /* '<S10>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_i;   /* '<S17>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_a;   /* '<S14>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_h;   /* '<S18>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_al;  /* '<S13>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_n;   /* '<S24>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_n4;  /* '<S23>/Integrator Limited' */
} X_Compute_PWM_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T IntegratorLimited_CSTATE;     /* '<S10>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_i;   /* '<S17>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_a;   /* '<S14>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_h;   /* '<S18>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_al;  /* '<S13>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_n;   /* '<S24>/Integrator Limited' */
  real_T IntegratorLimited_CSTATE_n4;  /* '<S23>/Integrator Limited' */
} XDot_Compute_PWM_T;

/* State disabled  */
typedef struct {
  boolean_T IntegratorLimited_CSTATE;  /* '<S10>/Integrator Limited' */
  boolean_T IntegratorLimited_CSTATE_i;/* '<S17>/Integrator Limited' */
  boolean_T IntegratorLimited_CSTATE_a;/* '<S14>/Integrator Limited' */
  boolean_T IntegratorLimited_CSTATE_h;/* '<S18>/Integrator Limited' */
  boolean_T IntegratorLimited_CSTATE_al;/* '<S13>/Integrator Limited' */
  boolean_T IntegratorLimited_CSTATE_n;/* '<S24>/Integrator Limited' */
  boolean_T IntegratorLimited_CSTATE_n4;/* '<S23>/Integrator Limited' */
} XDis_Compute_PWM_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  MyTrajectory Trajectory;             /* '<Root>/Trajectory' */
  MyStates States;                     /* '<Root>/States' */
} ExtU_Compute_PWM_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  MyPWM PWM;                           /* '<Root>/PWM' */
} ExtY_Compute_PWM_T;

/* Real-time Model Data Structure */
struct tag_RTM_Compute_PWM_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_Compute_PWM_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeF[1][7];
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
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (auto storage) */
extern B_Compute_PWM_T Compute_PWM_B;

/* Continuous states (auto storage) */
extern X_Compute_PWM_T Compute_PWM_X;

/* Block states (auto storage) */
extern DW_Compute_PWM_T Compute_PWM_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Compute_PWM_T Compute_PWM_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Compute_PWM_T Compute_PWM_Y;

/* External data declarations for dependent source files */
extern const MyPWM Compute_PWM_rtZMyPWM;/* MyPWM ground */

/* Model entry point functions */
extern void Compute_PWM_initialize(void);
extern void Compute_PWM_step(void);
extern void Compute_PWM_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Compute_PWM_T *const Compute_PWM_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S13>/Scope' : Unused code path elimination
 * Block '<S14>/Scope' : Unused code path elimination
 * Block '<S17>/Scope' : Unused code path elimination
 * Block '<S18>/Scope' : Unused code path elimination
 * Block '<S5>/Scope1' : Unused code path elimination
 * Block '<S5>/Scope2' : Unused code path elimination
 * Block '<S23>/Scope' : Unused code path elimination
 * Block '<S24>/Scope' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S1>/Scope1' : Unused code path elimination
 * Block '<S1>/Scope2' : Unused code path elimination
 * Block '<S4>/Multiport Switch' : Eliminated due to constant selection input
 * Block '<S15>/Sum1' : Unused code path elimination
 * Block '<S15>/Sum10' : Unused code path elimination
 * Block '<S15>/Sum11' : Unused code path elimination
 * Block '<S15>/Sum12' : Unused code path elimination
 * Block '<S15>/Sum3' : Unused code path elimination
 * Block '<S15>/Sum5' : Unused code path elimination
 * Block '<S15>/Sum7' : Unused code path elimination
 * Block '<S15>/Sum9' : Unused code path elimination
 * Block '<S4>/Mode_Selector' : Unused code path elimination
 * Block '<S4>/PWM_MyPWM_BusCre1' : Unused code path elimination
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
 * '<Root>' : 'Compute_PWM'
 * '<S1>'   : 'Compute_PWM/Controller'
 * '<S2>'   : 'Compute_PWM/Controller/Altitude_controller'
 * '<S3>'   : 'Compute_PWM/Controller/Attitude_controller'
 * '<S4>'   : 'Compute_PWM/Controller/Control_mixer'
 * '<S5>'   : 'Compute_PWM/Controller/Position_controller'
 * '<S6>'   : 'Compute_PWM/Controller/Position_error'
 * '<S7>'   : 'Compute_PWM/Controller/Rate_controller'
 * '<S8>'   : 'Compute_PWM/Controller/Yaw_Position_controller'
 * '<S9>'   : 'Compute_PWM/Controller/Yaw_Rate_controller'
 * '<S10>'  : 'Compute_PWM/Controller/Altitude_controller/PID_Altitude'
 * '<S11>'  : 'Compute_PWM/Controller/Attitude_controller/PID_Pitch1'
 * '<S12>'  : 'Compute_PWM/Controller/Attitude_controller/PID_Pitch3'
 * '<S13>'  : 'Compute_PWM/Controller/Attitude_controller/PID_Roll_Rate1'
 * '<S14>'  : 'Compute_PWM/Controller/Attitude_controller/PID_Roll_Rate2'
 * '<S15>'  : 'Compute_PWM/Controller/Control_mixer/Configuration_+'
 * '<S16>'  : 'Compute_PWM/Controller/Control_mixer/Configuration_X1'
 * '<S17>'  : 'Compute_PWM/Controller/Position_controller/PID_Roll_Rate2'
 * '<S18>'  : 'Compute_PWM/Controller/Position_controller/PID_Roll_Rate3'
 * '<S19>'  : 'Compute_PWM/Controller/Position_controller/PID_X2'
 * '<S20>'  : 'Compute_PWM/Controller/Position_controller/PID_Y2'
 * '<S21>'  : 'Compute_PWM/Controller/Rate_controller/PID_Pitch_Rate1'
 * '<S22>'  : 'Compute_PWM/Controller/Rate_controller/PID_Pitch_Rate3'
 * '<S23>'  : 'Compute_PWM/Controller/Rate_controller/PID_Roll_Rate1'
 * '<S24>'  : 'Compute_PWM/Controller/Rate_controller/PID_Roll_Rate3'
 */
#endif                                 /* RTW_HEADER_Compute_PWM_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
