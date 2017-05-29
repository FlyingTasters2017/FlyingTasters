/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Compute_PWM.c
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

#include "Compute_PWM.h"
#include "Compute_PWM_private.h"

const MyPWM Compute_PWM_rtZMyPWM = {
  0.0,                                 /* pwm1 */
  0.0,                                 /* pwm2 */
  0.0,                                 /* pwm3 */
  0.0                                  /* pwm4 */
} ;                                    /* MyPWM ground */

/* Block signals (auto storage) */
B_Compute_PWM_T Compute_PWM_B;

/* Continuous states */
X_Compute_PWM_T Compute_PWM_X;

/* Block states (auto storage) */
DW_Compute_PWM_T Compute_PWM_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_Compute_PWM_T Compute_PWM_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Compute_PWM_T Compute_PWM_Y;

/* Real-time model */
RT_MODEL_Compute_PWM_T Compute_PWM_M_;
RT_MODEL_Compute_PWM_T *const Compute_PWM_M = &Compute_PWM_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 7;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Compute_PWM_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void Compute_PWM_step(void)
{
  if (rtmIsMajorTimeStep(Compute_PWM_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&Compute_PWM_M->solverInfo,
                          ((Compute_PWM_M->Timing.clockTick0+1)*
      Compute_PWM_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Compute_PWM_M)) {
    Compute_PWM_M->Timing.t[0] = rtsiGetT(&Compute_PWM_M->solverInfo);
  }

  {
    real_T *lastU;
    real_T lastTime;
    real_T rtb_XError;
    real_T rtb_cospsi;
    real_T rtb_Sum5_dh;
    real_T rtb_YError;
    real_T rtb_Gain1_p;
    real_T u0;

    /* Outputs for Atomic SubSystem: '<Root>/Controller' */
    /* Sum: '<S10>/Sum6' incorporates:
     *  Inport: '<Root>/States'
     *  Inport: '<Root>/Trajectory'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_2'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_Trajectory_MyTrajectory_BusSel_at_outport_2'
     */
    Compute_PWM_B.pid_error = Compute_PWM_U.Trajectory.z -
      Compute_PWM_U.States.z;

    /* Derivative: '<S10>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB >= Compute_PWM_M->Timing.t[0])) {
      rtb_XError = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA;
      lastU = &Compute_PWM_DW.LastUAtTimeA;
      if (Compute_PWM_DW.TimeStampA < Compute_PWM_DW.TimeStampB) {
        if (Compute_PWM_DW.TimeStampB < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB;
          lastU = &Compute_PWM_DW.LastUAtTimeB;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB;
          lastU = &Compute_PWM_DW.LastUAtTimeB;
        }
      }

      rtb_XError = (Compute_PWM_B.pid_error - *lastU) / (Compute_PWM_M->
        Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S10>/Derivative' */

    /* Integrator: '<S10>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE >= 1000.0) {
      Compute_PWM_X.IntegratorLimited_CSTATE = 1000.0;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE <= -1000.0) {
        Compute_PWM_X.IntegratorLimited_CSTATE = -1000.0;
      }
    }

    /* Sum: '<S10>/Sum5' incorporates:
     *  Gain: '<S10>/Kd'
     *  Gain: '<S10>/Ki'
     *  Gain: '<S10>/Kp'
     *  Integrator: '<S10>/Integrator Limited'
     */
    u0 = (11000.0 * Compute_PWM_B.pid_error + 3500.0 *
          Compute_PWM_X.IntegratorLimited_CSTATE) + 9000.0 * rtb_XError;

    /* Saturate: '<S2>/Saturation1' */
    if (u0 > 15000.0) {
      u0 = 15000.0;
    } else {
      if (u0 < -20000.0) {
        u0 = -20000.0;
      }
    }

    /* End of Saturate: '<S2>/Saturation1' */

    /* Sum: '<S6>/Sum' incorporates:
     *  Inport: '<Root>/States'
     *  Inport: '<Root>/Trajectory'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_0'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_Trajectory_MyTrajectory_BusSel_at_outport_0'
     */
    rtb_XError = Compute_PWM_U.Trajectory.x - Compute_PWM_U.States.x;

    /* Fcn: '<S6>/Fcn1' incorporates:
     *  Inport: '<Root>/States'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_3'
     */
    rtb_cospsi = cos(Compute_PWM_U.States.yaw);

    /* Sum: '<S6>/Sum1' incorporates:
     *  Inport: '<Root>/States'
     *  Inport: '<Root>/Trajectory'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_1'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_Trajectory_MyTrajectory_BusSel_at_outport_1'
     */
    rtb_YError = Compute_PWM_U.Trajectory.y - Compute_PWM_U.States.y;

    /* Fcn: '<S6>/Fcn' incorporates:
     *  Inport: '<Root>/States'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_3'
     */
    rtb_Sum5_dh = sin(Compute_PWM_U.States.yaw);

    /* Sum: '<S17>/Sum6' incorporates:
     *  Inport: '<Root>/States'
     *  Product: '<S6>/Product'
     *  Product: '<S6>/Product2'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_6'
     *  Sum: '<S6>/Sum2'
     */
    Compute_PWM_B.pid_error_b = (rtb_XError * rtb_cospsi + rtb_YError *
      rtb_Sum5_dh) - Compute_PWM_U.States.dx;

    /* Integrator: '<S17>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE_i >= 0.1) {
      Compute_PWM_X.IntegratorLimited_CSTATE_i = 0.1;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE_i <= -0.1) {
        Compute_PWM_X.IntegratorLimited_CSTATE_i = -0.1;
      }
    }

    /* Derivative: '<S17>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA_h >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB_p >= Compute_PWM_M->Timing.t[0])) {
      rtb_Gain1_p = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA_h;
      lastU = &Compute_PWM_DW.LastUAtTimeA_d;
      if (Compute_PWM_DW.TimeStampA_h < Compute_PWM_DW.TimeStampB_p) {
        if (Compute_PWM_DW.TimeStampB_p < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_p;
          lastU = &Compute_PWM_DW.LastUAtTimeB_k;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA_h >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_p;
          lastU = &Compute_PWM_DW.LastUAtTimeB_k;
        }
      }

      rtb_Gain1_p = (Compute_PWM_B.pid_error_b - *lastU) /
        (Compute_PWM_M->Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S17>/Derivative' */

    /* Sum: '<S17>/Sum5' incorporates:
     *  Gain: '<S17>/Kd'
     *  Gain: '<S17>/Ki'
     *  Gain: '<S17>/Kp'
     *  Integrator: '<S17>/Integrator Limited'
     */
    rtb_Gain1_p = (30.0 * Compute_PWM_B.pid_error_b + 2.0 *
                   Compute_PWM_X.IntegratorLimited_CSTATE_i) + 0.0 * rtb_Gain1_p;

    /* Saturate: '<S5>/Saturation' */
    if (rtb_Gain1_p > 30.0) {
      rtb_Gain1_p = 30.0;
    } else {
      if (rtb_Gain1_p < -30.0) {
        rtb_Gain1_p = -30.0;
      }
    }

    /* End of Saturate: '<S5>/Saturation' */

    /* Sum: '<S14>/Sum6' incorporates:
     *  Gain: '<S1>/Gain3'
     *  Inport: '<Root>/States'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_4'
     */
    Compute_PWM_B.pid_error_n = rtb_Gain1_p - 57.295779513082323 *
      Compute_PWM_U.States.pitch;

    /* Derivative: '<S14>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA_m >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB_h >= Compute_PWM_M->Timing.t[0])) {
      rtb_Gain1_p = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA_m;
      lastU = &Compute_PWM_DW.LastUAtTimeA_n;
      if (Compute_PWM_DW.TimeStampA_m < Compute_PWM_DW.TimeStampB_h) {
        if (Compute_PWM_DW.TimeStampB_h < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_h;
          lastU = &Compute_PWM_DW.LastUAtTimeB_b;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA_m >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_h;
          lastU = &Compute_PWM_DW.LastUAtTimeB_b;
        }
      }

      rtb_Gain1_p = (Compute_PWM_B.pid_error_n - *lastU) /
        (Compute_PWM_M->Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S14>/Derivative' */

    /* Integrator: '<S14>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE_a >= 20.0) {
      Compute_PWM_X.IntegratorLimited_CSTATE_a = 20.0;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE_a <= -20.0) {
        Compute_PWM_X.IntegratorLimited_CSTATE_a = -20.0;
      }
    }

    /* Sum: '<S18>/Sum6' incorporates:
     *  Inport: '<Root>/States'
     *  Product: '<S6>/Product1'
     *  Product: '<S6>/Product3'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_7'
     *  Sum: '<S6>/Sum4'
     */
    Compute_PWM_B.pid_error_a = (rtb_YError * rtb_cospsi - rtb_XError *
      rtb_Sum5_dh) - Compute_PWM_U.States.dy;

    /* Integrator: '<S18>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE_h >= 0.1) {
      Compute_PWM_X.IntegratorLimited_CSTATE_h = 0.1;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE_h <= -0.1) {
        Compute_PWM_X.IntegratorLimited_CSTATE_h = -0.1;
      }
    }

    /* Derivative: '<S18>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA_b >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB_g >= Compute_PWM_M->Timing.t[0])) {
      rtb_XError = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA_b;
      lastU = &Compute_PWM_DW.LastUAtTimeA_e;
      if (Compute_PWM_DW.TimeStampA_b < Compute_PWM_DW.TimeStampB_g) {
        if (Compute_PWM_DW.TimeStampB_g < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_g;
          lastU = &Compute_PWM_DW.LastUAtTimeB_a;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA_b >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_g;
          lastU = &Compute_PWM_DW.LastUAtTimeB_a;
        }
      }

      rtb_XError = (Compute_PWM_B.pid_error_a - *lastU) /
        (Compute_PWM_M->Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S18>/Derivative' */

    /* Sum: '<S18>/Sum5' incorporates:
     *  Gain: '<S18>/Kd'
     *  Gain: '<S18>/Ki'
     *  Gain: '<S18>/Kp'
     *  Integrator: '<S18>/Integrator Limited'
     */
    rtb_XError = (-30.0 * Compute_PWM_B.pid_error_a + -2.0 *
                  Compute_PWM_X.IntegratorLimited_CSTATE_h) + 0.0 * rtb_XError;

    /* Saturate: '<S5>/Saturation1' */
    if (rtb_XError > 30.0) {
      rtb_XError = 30.0;
    } else {
      if (rtb_XError < -30.0) {
        rtb_XError = -30.0;
      }
    }

    /* End of Saturate: '<S5>/Saturation1' */

    /* Sum: '<S13>/Sum6' incorporates:
     *  Gain: '<S1>/Gain1'
     *  Inport: '<Root>/States'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_5'
     */
    Compute_PWM_B.pid_error_o = rtb_XError - 57.295779513082323 *
      Compute_PWM_U.States.roll;

    /* Derivative: '<S13>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA_o >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB_gn >= Compute_PWM_M->Timing.t[0])) {
      rtb_XError = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA_o;
      lastU = &Compute_PWM_DW.LastUAtTimeA_f;
      if (Compute_PWM_DW.TimeStampA_o < Compute_PWM_DW.TimeStampB_gn) {
        if (Compute_PWM_DW.TimeStampB_gn < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_gn;
          lastU = &Compute_PWM_DW.LastUAtTimeB_f;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA_o >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_gn;
          lastU = &Compute_PWM_DW.LastUAtTimeB_f;
        }
      }

      rtb_XError = (Compute_PWM_B.pid_error_o - *lastU) /
        (Compute_PWM_M->Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S13>/Derivative' */

    /* Integrator: '<S13>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE_al >= 20.0) {
      Compute_PWM_X.IntegratorLimited_CSTATE_al = 20.0;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE_al <= -20.0) {
        Compute_PWM_X.IntegratorLimited_CSTATE_al = -20.0;
      }
    }

    /* Gain: '<S13>/Kd' */
    rtb_Sum5_dh = 0.0 * rtb_XError;

    /* Sum: '<S24>/Sum6' incorporates:
     *  Gain: '<S14>/Kd'
     *  Gain: '<S14>/Ki'
     *  Gain: '<S14>/Kp'
     *  Gain: '<S1>/Gain5'
     *  Inport: '<Root>/States'
     *  Integrator: '<S14>/Integrator Limited'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_10'
     *  Sum: '<S14>/Sum5'
     */
    Compute_PWM_B.pid_error_j = ((3.5 * Compute_PWM_B.pid_error_n + 2.0 *
      Compute_PWM_X.IntegratorLimited_CSTATE_a) + 0.0 * rtb_Gain1_p) -
      57.295779513082323 * Compute_PWM_U.States.dpitch;

    /* Integrator: '<S24>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE_n >= 1000.0) {
      Compute_PWM_X.IntegratorLimited_CSTATE_n = 1000.0;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE_n <= -1000.0) {
        Compute_PWM_X.IntegratorLimited_CSTATE_n = -1000.0;
      }
    }

    /* Derivative: '<S24>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA_n >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB_gu >= Compute_PWM_M->Timing.t[0])) {
      rtb_XError = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA_n;
      lastU = &Compute_PWM_DW.LastUAtTimeA_a;
      if (Compute_PWM_DW.TimeStampA_n < Compute_PWM_DW.TimeStampB_gu) {
        if (Compute_PWM_DW.TimeStampB_gu < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_gu;
          lastU = &Compute_PWM_DW.LastUAtTimeB_kd;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA_n >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_gu;
          lastU = &Compute_PWM_DW.LastUAtTimeB_kd;
        }
      }

      rtb_XError = (Compute_PWM_B.pid_error_j - *lastU) /
        (Compute_PWM_M->Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S24>/Derivative' */

    /* Gain: '<S16>/Gain' incorporates:
     *  Gain: '<S24>/Kd'
     *  Gain: '<S24>/Ki'
     *  Gain: '<S24>/Kp'
     *  Integrator: '<S24>/Integrator Limited'
     *  Sum: '<S24>/Sum5'
     */
    rtb_XError = ((70.0 * Compute_PWM_B.pid_error_j + 0.0 *
                   Compute_PWM_X.IntegratorLimited_CSTATE_n) + 0.0 * rtb_XError)
      * 0.5;

    /* Sum: '<S23>/Sum6' incorporates:
     *  Gain: '<S13>/Ki'
     *  Gain: '<S13>/Kp'
     *  Gain: '<S1>/Gain4'
     *  Inport: '<Root>/States'
     *  Integrator: '<S13>/Integrator Limited'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_11'
     *  Sum: '<S13>/Sum5'
     */
    Compute_PWM_B.pid_error_nt = ((3.5 * Compute_PWM_B.pid_error_o + 2.0 *
      Compute_PWM_X.IntegratorLimited_CSTATE_al) + rtb_Sum5_dh) -
      57.295779513082323 * Compute_PWM_U.States.droll;

    /* Integrator: '<S23>/Integrator Limited' */
    /* Limited  Integrator  */
    if (Compute_PWM_X.IntegratorLimited_CSTATE_n4 >= 1000.0) {
      Compute_PWM_X.IntegratorLimited_CSTATE_n4 = 1000.0;
    } else {
      if (Compute_PWM_X.IntegratorLimited_CSTATE_n4 <= -1000.0) {
        Compute_PWM_X.IntegratorLimited_CSTATE_n4 = -1000.0;
      }
    }

    /* Derivative: '<S23>/Derivative' */
    if ((Compute_PWM_DW.TimeStampA_c >= Compute_PWM_M->Timing.t[0]) &&
        (Compute_PWM_DW.TimeStampB_ha >= Compute_PWM_M->Timing.t[0])) {
      rtb_Gain1_p = 0.0;
    } else {
      lastTime = Compute_PWM_DW.TimeStampA_c;
      lastU = &Compute_PWM_DW.LastUAtTimeA_k;
      if (Compute_PWM_DW.TimeStampA_c < Compute_PWM_DW.TimeStampB_ha) {
        if (Compute_PWM_DW.TimeStampB_ha < Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_ha;
          lastU = &Compute_PWM_DW.LastUAtTimeB_fi;
        }
      } else {
        if (Compute_PWM_DW.TimeStampA_c >= Compute_PWM_M->Timing.t[0]) {
          lastTime = Compute_PWM_DW.TimeStampB_ha;
          lastU = &Compute_PWM_DW.LastUAtTimeB_fi;
        }
      }

      rtb_Gain1_p = (Compute_PWM_B.pid_error_nt - *lastU) /
        (Compute_PWM_M->Timing.t[0] - lastTime);
    }

    /* End of Derivative: '<S23>/Derivative' */

    /* Gain: '<S16>/Gain1' incorporates:
     *  Gain: '<S23>/Kd'
     *  Gain: '<S23>/Ki'
     *  Gain: '<S23>/Kp'
     *  Integrator: '<S23>/Integrator Limited'
     *  Sum: '<S23>/Sum5'
     */
    rtb_Gain1_p = ((70.0 * Compute_PWM_B.pid_error_nt + 0.0 *
                    Compute_PWM_X.IntegratorLimited_CSTATE_n4) + 0.0 *
                   rtb_Gain1_p) * 0.5;

    /* Sum: '<S8>/Sum6' incorporates:
     *  Gain: '<S1>/Gain6'
     *  Inport: '<Root>/States'
     *  Inport: '<Root>/Trajectory'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_3'
     */
    Compute_PWM_B.pid_error_k = Compute_PWM_U.Trajectory.yaw -
      57.295779513082323 * Compute_PWM_U.States.yaw;
    if (rtmIsMajorTimeStep(Compute_PWM_M)) {
      /* Memory: '<S8>/Memory1' */
      Compute_PWM_B.Memory1 = Compute_PWM_DW.Memory1_PreviousInput;

      /* Memory: '<S8>/Memory' */
      Compute_PWM_B.pid_prevError = Compute_PWM_DW.Memory_PreviousInput;
    }

    /* Sum: '<S8>/Sum1' incorporates:
     *  Gain: '<S8>/dt'
     */
    Compute_PWM_B.pid_integ = 0.01 * Compute_PWM_B.pid_error_k +
      Compute_PWM_B.Memory1;

    /* Saturate: '<S8>/Saturation' */
    if (Compute_PWM_B.pid_integ > 166.7) {
      lastTime = 166.7;
    } else if (Compute_PWM_B.pid_integ < -166.7) {
      lastTime = -166.7;
    } else {
      lastTime = Compute_PWM_B.pid_integ;
    }

    /* End of Saturate: '<S8>/Saturation' */

    /* Sum: '<S8>/Sum5' incorporates:
     *  Gain: '<S8>/1//dt'
     *  Gain: '<S8>/Kd'
     *  Gain: '<S8>/Ki'
     *  Gain: '<S8>/Kp'
     *  Sum: '<S8>/Sum2'
     */
    lastTime = (Compute_PWM_B.pid_error_k - Compute_PWM_B.pid_prevError) * 0.01 *
      0.0 + (3.0 * Compute_PWM_B.pid_error_k + 0.0 * lastTime);

    /* Saturate: '<S1>/Saturation' */
    if (lastTime > 200.0) {
      lastTime = 200.0;
    } else {
      if (lastTime < -200.0) {
        lastTime = -200.0;
      }
    }

    /* End of Saturate: '<S1>/Saturation' */

    /* Sum: '<S9>/Sum6' incorporates:
     *  Gain: '<S1>/Gain7'
     *  Inport: '<Root>/States'
     *  SignalConversion: '<Root>/SigConversion_InsertedFor_States_MyStates_BusSel_at_outport_9'
     */
    Compute_PWM_B.pid_error_g = lastTime - 57.295779513082323 *
      Compute_PWM_U.States.dyaw;
    if (rtmIsMajorTimeStep(Compute_PWM_M)) {
      /* Memory: '<S9>/Memory1' */
      Compute_PWM_B.Memory1_j = Compute_PWM_DW.Memory1_PreviousInput_b;

      /* Memory: '<S9>/Memory' */
      Compute_PWM_B.pid_prevError_p = Compute_PWM_DW.Memory_PreviousInput_k;
    }

    /* Sum: '<S9>/Sum1' incorporates:
     *  Gain: '<S9>/dt'
     */
    Compute_PWM_B.pid_integ_l = 0.002 * Compute_PWM_B.pid_error_g +
      Compute_PWM_B.Memory1_j;

    /* Saturate: '<S9>/Saturation' */
    if (Compute_PWM_B.pid_integ_l > 166.7) {
      lastTime = 166.7;
    } else if (Compute_PWM_B.pid_integ_l < -166.7) {
      lastTime = -166.7;
    } else {
      lastTime = Compute_PWM_B.pid_integ_l;
    }

    /* End of Saturate: '<S9>/Saturation' */

    /* Sum: '<S9>/Sum5' incorporates:
     *  Gain: '<S9>/1//dt'
     *  Gain: '<S9>/Kd'
     *  Gain: '<S9>/Ki'
     *  Gain: '<S9>/Kp'
     *  Sum: '<S9>/Sum2'
     */
    rtb_Sum5_dh = (Compute_PWM_B.pid_error_g - Compute_PWM_B.pid_prevError_p) *
      0.002 * 0.0 + (70.0 * Compute_PWM_B.pid_error_g + 16.7 * lastTime);

    /* Outport: '<Root>/PWM' incorporates:
     *  Constant: '<S2>/Min_thrust '
     *  Sum: '<S16>/Sum1'
     *  Sum: '<S16>/Sum10'
     *  Sum: '<S16>/Sum11'
     *  Sum: '<S16>/Sum12'
     *  Sum: '<S16>/Sum3'
     *  Sum: '<S16>/Sum5'
     *  Sum: '<S16>/Sum7'
     *  Sum: '<S16>/Sum9'
     *  Sum: '<S2>/Sum3'
     */
    Compute_PWM_Y.PWM.pwm1 = (((0.0 - rtb_XError) - rtb_Gain1_p) - rtb_Sum5_dh)
      + (u0 + 44704.629490068641);
    Compute_PWM_Y.PWM.pwm2 = ((rtb_XError - rtb_Gain1_p) + rtb_Sum5_dh) + (u0 +
      44704.629490068641);
    Compute_PWM_Y.PWM.pwm3 = ((rtb_Gain1_p + rtb_XError) - rtb_Sum5_dh) + (u0 +
      44704.629490068641);
    Compute_PWM_Y.PWM.pwm4 = ((rtb_Gain1_p - rtb_XError) + rtb_Sum5_dh) + (u0 +
      44704.629490068641);

    /* End of Outputs for SubSystem: '<Root>/Controller' */
  }

  if (rtmIsMajorTimeStep(Compute_PWM_M)) {
    real_T *lastU;

    /* Update for Atomic SubSystem: '<Root>/Controller' */
    /* Update for Derivative: '<S10>/Derivative' */
    if (Compute_PWM_DW.TimeStampA == (rtInf)) {
      Compute_PWM_DW.TimeStampA = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA;
    } else if (Compute_PWM_DW.TimeStampB == (rtInf)) {
      Compute_PWM_DW.TimeStampB = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB;
    } else if (Compute_PWM_DW.TimeStampA < Compute_PWM_DW.TimeStampB) {
      Compute_PWM_DW.TimeStampA = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA;
    } else {
      Compute_PWM_DW.TimeStampB = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB;
    }

    *lastU = Compute_PWM_B.pid_error;

    /* End of Update for Derivative: '<S10>/Derivative' */

    /* Update for Derivative: '<S17>/Derivative' */
    if (Compute_PWM_DW.TimeStampA_h == (rtInf)) {
      Compute_PWM_DW.TimeStampA_h = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_d;
    } else if (Compute_PWM_DW.TimeStampB_p == (rtInf)) {
      Compute_PWM_DW.TimeStampB_p = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_k;
    } else if (Compute_PWM_DW.TimeStampA_h < Compute_PWM_DW.TimeStampB_p) {
      Compute_PWM_DW.TimeStampA_h = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_d;
    } else {
      Compute_PWM_DW.TimeStampB_p = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_k;
    }

    *lastU = Compute_PWM_B.pid_error_b;

    /* End of Update for Derivative: '<S17>/Derivative' */

    /* Update for Derivative: '<S14>/Derivative' */
    if (Compute_PWM_DW.TimeStampA_m == (rtInf)) {
      Compute_PWM_DW.TimeStampA_m = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_n;
    } else if (Compute_PWM_DW.TimeStampB_h == (rtInf)) {
      Compute_PWM_DW.TimeStampB_h = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_b;
    } else if (Compute_PWM_DW.TimeStampA_m < Compute_PWM_DW.TimeStampB_h) {
      Compute_PWM_DW.TimeStampA_m = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_n;
    } else {
      Compute_PWM_DW.TimeStampB_h = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_b;
    }

    *lastU = Compute_PWM_B.pid_error_n;

    /* End of Update for Derivative: '<S14>/Derivative' */

    /* Update for Derivative: '<S18>/Derivative' */
    if (Compute_PWM_DW.TimeStampA_b == (rtInf)) {
      Compute_PWM_DW.TimeStampA_b = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_e;
    } else if (Compute_PWM_DW.TimeStampB_g == (rtInf)) {
      Compute_PWM_DW.TimeStampB_g = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_a;
    } else if (Compute_PWM_DW.TimeStampA_b < Compute_PWM_DW.TimeStampB_g) {
      Compute_PWM_DW.TimeStampA_b = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_e;
    } else {
      Compute_PWM_DW.TimeStampB_g = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_a;
    }

    *lastU = Compute_PWM_B.pid_error_a;

    /* End of Update for Derivative: '<S18>/Derivative' */

    /* Update for Derivative: '<S13>/Derivative' */
    if (Compute_PWM_DW.TimeStampA_o == (rtInf)) {
      Compute_PWM_DW.TimeStampA_o = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_f;
    } else if (Compute_PWM_DW.TimeStampB_gn == (rtInf)) {
      Compute_PWM_DW.TimeStampB_gn = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_f;
    } else if (Compute_PWM_DW.TimeStampA_o < Compute_PWM_DW.TimeStampB_gn) {
      Compute_PWM_DW.TimeStampA_o = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_f;
    } else {
      Compute_PWM_DW.TimeStampB_gn = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_f;
    }

    *lastU = Compute_PWM_B.pid_error_o;

    /* End of Update for Derivative: '<S13>/Derivative' */

    /* Update for Derivative: '<S24>/Derivative' */
    if (Compute_PWM_DW.TimeStampA_n == (rtInf)) {
      Compute_PWM_DW.TimeStampA_n = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_a;
    } else if (Compute_PWM_DW.TimeStampB_gu == (rtInf)) {
      Compute_PWM_DW.TimeStampB_gu = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_kd;
    } else if (Compute_PWM_DW.TimeStampA_n < Compute_PWM_DW.TimeStampB_gu) {
      Compute_PWM_DW.TimeStampA_n = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_a;
    } else {
      Compute_PWM_DW.TimeStampB_gu = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_kd;
    }

    *lastU = Compute_PWM_B.pid_error_j;

    /* End of Update for Derivative: '<S24>/Derivative' */

    /* Update for Derivative: '<S23>/Derivative' */
    if (Compute_PWM_DW.TimeStampA_c == (rtInf)) {
      Compute_PWM_DW.TimeStampA_c = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_k;
    } else if (Compute_PWM_DW.TimeStampB_ha == (rtInf)) {
      Compute_PWM_DW.TimeStampB_ha = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_fi;
    } else if (Compute_PWM_DW.TimeStampA_c < Compute_PWM_DW.TimeStampB_ha) {
      Compute_PWM_DW.TimeStampA_c = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeA_k;
    } else {
      Compute_PWM_DW.TimeStampB_ha = Compute_PWM_M->Timing.t[0];
      lastU = &Compute_PWM_DW.LastUAtTimeB_fi;
    }

    *lastU = Compute_PWM_B.pid_error_nt;

    /* End of Update for Derivative: '<S23>/Derivative' */
    if (rtmIsMajorTimeStep(Compute_PWM_M)) {
      /* Update for Memory: '<S8>/Memory1' */
      Compute_PWM_DW.Memory1_PreviousInput = Compute_PWM_B.pid_integ;

      /* Update for Memory: '<S8>/Memory' */
      Compute_PWM_DW.Memory_PreviousInput = Compute_PWM_B.pid_error_k;

      /* Update for Memory: '<S9>/Memory1' */
      Compute_PWM_DW.Memory1_PreviousInput_b = Compute_PWM_B.pid_integ_l;

      /* Update for Memory: '<S9>/Memory' */
      Compute_PWM_DW.Memory_PreviousInput_k = Compute_PWM_B.pid_error_g;
    }

    /* End of Update for SubSystem: '<Root>/Controller' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Compute_PWM_M)) {
    rt_ertODEUpdateContinuousStates(&Compute_PWM_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++Compute_PWM_M->Timing.clockTick0;
    Compute_PWM_M->Timing.t[0] = rtsiGetSolverStopTime
      (&Compute_PWM_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.2s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.2, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      Compute_PWM_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Compute_PWM_derivatives(void)
{
  boolean_T lsat;
  boolean_T usat;
  XDot_Compute_PWM_T *_rtXdot;
  _rtXdot = ((XDot_Compute_PWM_T *) Compute_PWM_M->derivs);

  /* Derivatives for Atomic SubSystem: '<Root>/Controller' */
  /* Derivatives for Integrator: '<S10>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE <= -1000.0);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE >= 1000.0);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error > 0.0)) || (usat
       && (Compute_PWM_B.pid_error < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE = Compute_PWM_B.pid_error;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE = 0.0;
  }

  /* End of Derivatives for Integrator: '<S10>/Integrator Limited' */

  /* Derivatives for Integrator: '<S17>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE_i <= -0.1);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE_i >= 0.1);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error_b > 0.0)) ||
      (usat && (Compute_PWM_B.pid_error_b < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE_i = Compute_PWM_B.pid_error_b;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE_i = 0.0;
  }

  /* End of Derivatives for Integrator: '<S17>/Integrator Limited' */

  /* Derivatives for Integrator: '<S14>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE_a <= -20.0);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE_a >= 20.0);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error_n > 0.0)) ||
      (usat && (Compute_PWM_B.pid_error_n < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE_a = Compute_PWM_B.pid_error_n;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE_a = 0.0;
  }

  /* End of Derivatives for Integrator: '<S14>/Integrator Limited' */

  /* Derivatives for Integrator: '<S18>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE_h <= -0.1);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE_h >= 0.1);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error_a > 0.0)) ||
      (usat && (Compute_PWM_B.pid_error_a < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE_h = Compute_PWM_B.pid_error_a;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE_h = 0.0;
  }

  /* End of Derivatives for Integrator: '<S18>/Integrator Limited' */

  /* Derivatives for Integrator: '<S13>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE_al <= -20.0);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE_al >= 20.0);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error_o > 0.0)) ||
      (usat && (Compute_PWM_B.pid_error_o < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE_al = Compute_PWM_B.pid_error_o;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE_al = 0.0;
  }

  /* End of Derivatives for Integrator: '<S13>/Integrator Limited' */

  /* Derivatives for Integrator: '<S24>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE_n <= -1000.0);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE_n >= 1000.0);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error_j > 0.0)) ||
      (usat && (Compute_PWM_B.pid_error_j < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE_n = Compute_PWM_B.pid_error_j;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE_n = 0.0;
  }

  /* End of Derivatives for Integrator: '<S24>/Integrator Limited' */

  /* Derivatives for Integrator: '<S23>/Integrator Limited' */
  lsat = (Compute_PWM_X.IntegratorLimited_CSTATE_n4 <= -1000.0);
  usat = (Compute_PWM_X.IntegratorLimited_CSTATE_n4 >= 1000.0);
  if (((!lsat) && (!usat)) || (lsat && (Compute_PWM_B.pid_error_nt > 0.0)) ||
      (usat && (Compute_PWM_B.pid_error_nt < 0.0))) {
    _rtXdot->IntegratorLimited_CSTATE_n4 = Compute_PWM_B.pid_error_nt;
  } else {
    /* in saturation */
    _rtXdot->IntegratorLimited_CSTATE_n4 = 0.0;
  }

  /* End of Derivatives for Integrator: '<S23>/Integrator Limited' */
  /* End of Derivatives for SubSystem: '<Root>/Controller' */
}

/* Model initialize function */
void Compute_PWM_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Compute_PWM_M, 0,
                sizeof(RT_MODEL_Compute_PWM_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Compute_PWM_M->solverInfo,
                          &Compute_PWM_M->Timing.simTimeStep);
    rtsiSetTPtr(&Compute_PWM_M->solverInfo, &rtmGetTPtr(Compute_PWM_M));
    rtsiSetStepSizePtr(&Compute_PWM_M->solverInfo,
                       &Compute_PWM_M->Timing.stepSize0);
    rtsiSetdXPtr(&Compute_PWM_M->solverInfo, &Compute_PWM_M->derivs);
    rtsiSetContStatesPtr(&Compute_PWM_M->solverInfo, (real_T **)
                         &Compute_PWM_M->contStates);
    rtsiSetNumContStatesPtr(&Compute_PWM_M->solverInfo,
      &Compute_PWM_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Compute_PWM_M->solverInfo,
      &Compute_PWM_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Compute_PWM_M->solverInfo,
      &Compute_PWM_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Compute_PWM_M->solverInfo,
      &Compute_PWM_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Compute_PWM_M->solverInfo, (&rtmGetErrorStatus
      (Compute_PWM_M)));
    rtsiSetRTModelPtr(&Compute_PWM_M->solverInfo, Compute_PWM_M);
  }

  rtsiSetSimTimeStep(&Compute_PWM_M->solverInfo, MAJOR_TIME_STEP);
  Compute_PWM_M->intgData.f[0] = Compute_PWM_M->odeF[0];
  Compute_PWM_M->contStates = ((X_Compute_PWM_T *) &Compute_PWM_X);
  rtsiSetSolverData(&Compute_PWM_M->solverInfo, (void *)&Compute_PWM_M->intgData);
  rtsiSetSolverName(&Compute_PWM_M->solverInfo,"ode1");
  rtmSetTPtr(Compute_PWM_M, &Compute_PWM_M->Timing.tArray[0]);
  Compute_PWM_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) memset(((void *) &Compute_PWM_B), 0,
                sizeof(B_Compute_PWM_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Compute_PWM_X, 0,
                  sizeof(X_Compute_PWM_T));
  }

  /* states (dwork) */
  (void) memset((void *)&Compute_PWM_DW, 0,
                sizeof(DW_Compute_PWM_T));

  /* external inputs */
  (void)memset((void *)&Compute_PWM_U, 0, sizeof(ExtU_Compute_PWM_T));

  /* external outputs */
  Compute_PWM_Y.PWM = Compute_PWM_rtZMyPWM;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Controller' */
  /* InitializeConditions for Derivative: '<S10>/Derivative' */
  Compute_PWM_DW.TimeStampA = (rtInf);
  Compute_PWM_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Integrator: '<S10>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S17>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE_i = 0.0;

  /* InitializeConditions for Derivative: '<S17>/Derivative' */
  Compute_PWM_DW.TimeStampA_h = (rtInf);
  Compute_PWM_DW.TimeStampB_p = (rtInf);

  /* InitializeConditions for Derivative: '<S14>/Derivative' */
  Compute_PWM_DW.TimeStampA_m = (rtInf);
  Compute_PWM_DW.TimeStampB_h = (rtInf);

  /* InitializeConditions for Integrator: '<S14>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE_a = 0.0;

  /* InitializeConditions for Integrator: '<S18>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE_h = 0.0;

  /* InitializeConditions for Derivative: '<S18>/Derivative' */
  Compute_PWM_DW.TimeStampA_b = (rtInf);
  Compute_PWM_DW.TimeStampB_g = (rtInf);

  /* InitializeConditions for Derivative: '<S13>/Derivative' */
  Compute_PWM_DW.TimeStampA_o = (rtInf);
  Compute_PWM_DW.TimeStampB_gn = (rtInf);

  /* InitializeConditions for Integrator: '<S13>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE_al = 0.0;

  /* InitializeConditions for Integrator: '<S24>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE_n = 0.0;

  /* InitializeConditions for Derivative: '<S24>/Derivative' */
  Compute_PWM_DW.TimeStampA_n = (rtInf);
  Compute_PWM_DW.TimeStampB_gu = (rtInf);

  /* InitializeConditions for Integrator: '<S23>/Integrator Limited' */
  Compute_PWM_X.IntegratorLimited_CSTATE_n4 = 0.0;

  /* InitializeConditions for Derivative: '<S23>/Derivative' */
  Compute_PWM_DW.TimeStampA_c = (rtInf);
  Compute_PWM_DW.TimeStampB_ha = (rtInf);

  /* End of SystemInitialize for SubSystem: '<Root>/Controller' */
}

/* Model terminate function */
void Compute_PWM_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
