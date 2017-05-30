/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Respond_state.c
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

#include "Respond_state.h"
#include "Respond_state_private.h"

const MyStates Respond_state_rtZMyStates = {
  0.0,                                 /* x */
  0.0,                                 /* y */
  0.0,                                 /* z */
  0.0,                                 /* yaw */
  0.0,                                 /* pitch */
  0.0,                                 /* roll */
  0.0,                                 /* dx */
  0.0,                                 /* dy */
  0.0,                                 /* dz */
  0.0,                                 /* dyaw */
  0.0,                                 /* dpitch */
  0.0                                  /* droll */
} ;                                    /* MyStates ground */

/* Block signals (auto storage) */
B_Respond_state_T Respond_state_B;

/* Continuous states */
X_Respond_state_T Respond_state_X;

/* External inputs (root inport signals with auto storage) */
ExtU_Respond_state_T Respond_state_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Respond_state_T Respond_state_Y;

/* Real-time model */
RT_MODEL_Respond_state_T Respond_state_M_;
RT_MODEL_Respond_state_T *const Respond_state_M = &Respond_state_M_;
const MyPWM Respond_state_rtZMyPWM = { 0.0,/* pwm1 */
  0.0,                                 /* pwm2 */
  0.0,                                 /* pwm3 */
  0.0                                  /* pwm4 */
};

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
  int_T nXc = 12;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  Respond_state_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T tmp;
  real_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = (rtNaN);
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void Respond_state_step(void)
{
  real_T y[3];
  static const real_T a[9] = { 1.395E-5, 0.0, 0.0, 0.0, 1.436E-5, 0.0, 0.0, 0.0,
    2.173E-5 };

  static const real_T b_a[9] = { 71684.587813620077, -0.0, 0.0, -0.0,
    69637.883008356541, -0.0, -0.0, -0.0, 46019.328117809477 };

  real_T rtb_Add;
  real_T rtb_Add1;
  real_T rtb_Add2;
  real_T rtb_Add3;
  real_T tmp[9];
  int32_T i;
  real_T tmp_0[9];
  real_T tmp_1[9];
  real_T tmp_2[3];
  real_T tmp_3[3];
  real_T tmp_4;
  real_T tmp_5;
  if (rtmIsMajorTimeStep(Respond_state_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&Respond_state_M->solverInfo,
                          ((Respond_state_M->Timing.clockTick0+1)*
      Respond_state_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Respond_state_M)) {
    Respond_state_M->Timing.t[0] = rtsiGetT(&Respond_state_M->solverInfo);
  }

  /* Outport: '<Root>/States' incorporates:
   *  Integrator: '<S2>/Integrator1'
   *  Integrator: '<S2>/Integrator2'
   *  Integrator: '<S2>/Integrator3'
   *  Integrator: '<S2>/Integrator4'
   */
  Respond_state_Y.States.x = Respond_state_X.Integrator4_CSTATE[0];
  Respond_state_Y.States.y = Respond_state_X.Integrator4_CSTATE[1];
  Respond_state_Y.States.z = Respond_state_X.Integrator4_CSTATE[2];
  Respond_state_Y.States.yaw = Respond_state_X.Integrator3_CSTATE[2];
  Respond_state_Y.States.pitch = Respond_state_X.Integrator3_CSTATE[1];
  Respond_state_Y.States.roll = Respond_state_X.Integrator3_CSTATE[0];
  Respond_state_Y.States.dx = Respond_state_X.Integrator1_CSTATE[0];
  Respond_state_Y.States.dy = Respond_state_X.Integrator1_CSTATE[1];
  Respond_state_Y.States.dz = Respond_state_X.Integrator1_CSTATE[2];
  Respond_state_Y.States.dyaw = Respond_state_X.Integrator2_CSTATE[2];
  Respond_state_Y.States.dpitch = Respond_state_X.Integrator2_CSTATE[1];
  Respond_state_Y.States.droll = Respond_state_X.Integrator2_CSTATE[0];

  /* Fcn: '<S2>/Fcn1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/PWM'
   *  Sum: '<S1>/Add'
   */
  rtb_Add = rt_powd_snf(0.2685 * Respond_state_U.PWM.pwm1 + 4070.3, 2.0);

  /* Fcn: '<S2>/Fcn2' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Gain: '<S1>/Gain2'
   *  Inport: '<Root>/PWM'
   *  Sum: '<S1>/Add1'
   */
  rtb_Add1 = rt_powd_snf(0.2685 * Respond_state_U.PWM.pwm2 + 4070.3, 2.0);

  /* Fcn: '<S2>/Fcn3' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Gain: '<S1>/Gain3'
   *  Inport: '<Root>/PWM'
   *  Sum: '<S1>/Add2'
   */
  rtb_Add2 = rt_powd_snf(0.2685 * Respond_state_U.PWM.pwm3 + 4070.3, 2.0);

  /* Fcn: '<S2>/Fcn4' incorporates:
   *  Constant: '<S1>/Constant3'
   *  Gain: '<S1>/Gain5'
   *  Inport: '<Root>/PWM'
   *  Sum: '<S1>/Add3'
   */
  rtb_Add3 = rt_powd_snf(0.2685 * Respond_state_U.PWM.pwm4 + 4070.3, 2.0);

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Integrator: '<S2>/Integrator3'
   */
  /* MATLAB Function 'Quad_Model_X/MATLAB Function': '<S3>:1' */
  /* '<S3>:1:2' xyz_dot = zeros(3,1); */
  /* '<S3>:1:3' phi = angles(1); */
  /* *pi/180; */
  /* '<S3>:1:4' theta = angles(2); */
  /* *pi/180; */
  /* '<S3>:1:5' psi = angles(3); */
  /* *pi/180; */
  /* BBF > Inertial rotation matrix */
  /* '<S3>:1:6' Tb_o = [cos(theta)*cos(psi)                                cos(theta)*sin(psi)                             -sin(theta)  ;   %BBF > Inertial rotation matrix */
  /* '<S3>:1:7'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)    sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)  sin(phi)*cos(theta) ; */
  /* '<S3>:1:8'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)    cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)   cos(phi)*cos(theta)]; */
  /* '<S3>:1:10' xyz_dot = (Tb_o')*uvw; */
  tmp[0] = cos(Respond_state_X.Integrator3_CSTATE[1]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp[1] = cos(Respond_state_X.Integrator3_CSTATE[1]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp[2] = -sin(Respond_state_X.Integrator3_CSTATE[1]);
  tmp[3] = sin(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]) - cos
    (Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp[4] = sin(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]) + cos
    (Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp[5] = sin(Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[1]);
  tmp[6] = cos(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]) + sin
    (Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp[7] = cos(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]) - sin
    (Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp[8] = cos(Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[1]);

  /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
   *  Integrator: '<S2>/Integrator3'
   */
  /* MATLAB Function 'Quad_Model_X/MATLAB Function1': '<S4>:1' */
  /* '<S4>:1:2' angles_dot = zeros(3,1); */
  /* '<S4>:1:3' phi = angles(1); */
  /* *pi/180; */
  /* '<S4>:1:4' theta = angles(2); */
  /* *pi/180; */
  /* '<S4>:1:6' H = [1    sin(phi)*tan(theta)     cos(phi)*tan(theta) */
  /* '<S4>:1:7'      0       cos(phi)                 -sin(phi)    */
  /* '<S4>:1:8'      0       sin(phi)/cos(theta)    cos(phi)/cos(theta)]; */
  /* '<S4>:1:9' angles_dot = H*pqr; */
  tmp_0[0] = 1.0;
  tmp_0[3] = sin(Respond_state_X.Integrator3_CSTATE[0]) * tan
    (Respond_state_X.Integrator3_CSTATE[1]);
  tmp_0[6] = cos(Respond_state_X.Integrator3_CSTATE[0]) * tan
    (Respond_state_X.Integrator3_CSTATE[1]);
  tmp_0[1] = 0.0;
  tmp_0[4] = cos(Respond_state_X.Integrator3_CSTATE[0]);
  tmp_0[7] = -sin(Respond_state_X.Integrator3_CSTATE[0]);
  tmp_0[2] = 0.0;
  tmp_0[5] = sin(Respond_state_X.Integrator3_CSTATE[0]) / cos
    (Respond_state_X.Integrator3_CSTATE[1]);
  tmp_0[8] = cos(Respond_state_X.Integrator3_CSTATE[0]) / cos
    (Respond_state_X.Integrator3_CSTATE[1]);

  /* MATLAB Function: '<S2>/MATLAB Function2' incorporates:
   *  Fcn: '<S2>/Fcn1'
   *  Fcn: '<S2>/Fcn2'
   *  Fcn: '<S2>/Fcn3'
   *  Fcn: '<S2>/Fcn4'
   *  Gain: '<S2>/Gain'
   *  Gain: '<S2>/Gain1'
   *  Integrator: '<S2>/Integrator1'
   *  Integrator: '<S2>/Integrator2'
   *  Integrator: '<S2>/Integrator3'
   *  Sum: '<S2>/Add'
   */
  /* MATLAB Function 'Quad_Model_X/MATLAB Function2': '<S5>:1' */
  /* '<S5>:1:2' uvw_dot = zeros(3,1); */
  /* '<S5>:1:3' Force = [0;0;F]; */
  /* '<S5>:1:4' g_o = [0;0;-9.81]; */
  /* '<S5>:1:5' phi = angles(1); */
  /* *pi/180; */
  /* '<S5>:1:6' theta = angles(2); */
  /* *pi/180; */
  /* '<S5>:1:7' psi = angles(3); */
  /* *pi/180; */
  /* BBF > Inertial rotation matrix */
  /* '<S5>:1:8' Tb_o = [cos(theta)*cos(psi)                                cos(theta)*sin(psi)                             -sin(theta)  ;   %BBF > Inertial rotation matrix */
  /* '<S5>:1:9'         sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi)    sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi)  sin(phi)*cos(theta) ; */
  /* '<S5>:1:10'         cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)    cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)   cos(phi)*cos(theta)]; */
  /* '<S5>:1:12' uvw_dot = Force + Tb_o*g_o - cross(pqr,uvw); */
  tmp_1[0] = cos(Respond_state_X.Integrator3_CSTATE[1]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp_1[3] = cos(Respond_state_X.Integrator3_CSTATE[1]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp_1[6] = -sin(Respond_state_X.Integrator3_CSTATE[1]);
  tmp_1[1] = sin(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]) - cos
    (Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp_1[4] = sin(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]) + cos
    (Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp_1[7] = sin(Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[1]);
  tmp_1[2] = cos(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]) + sin
    (Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp_1[5] = cos(Respond_state_X.Integrator3_CSTATE[0]) * sin
    (Respond_state_X.Integrator3_CSTATE[1]) * sin
    (Respond_state_X.Integrator3_CSTATE[2]) - sin
    (Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[2]);
  tmp_1[8] = cos(Respond_state_X.Integrator3_CSTATE[0]) * cos
    (Respond_state_X.Integrator3_CSTATE[1]);
  tmp_2[0] = 0.0;
  tmp_2[1] = 0.0;
  tmp_2[2] = (((rtb_Add + rtb_Add1) + rtb_Add2) + rtb_Add3) *
    3.1582120417189883E-10 * 30.057108506161708;
  tmp_3[0] = Respond_state_X.Integrator2_CSTATE[1] *
    Respond_state_X.Integrator1_CSTATE[2] - Respond_state_X.Integrator2_CSTATE[2]
    * Respond_state_X.Integrator1_CSTATE[1];
  tmp_3[1] = Respond_state_X.Integrator2_CSTATE[2] *
    Respond_state_X.Integrator1_CSTATE[0] - Respond_state_X.Integrator2_CSTATE[0]
    * Respond_state_X.Integrator1_CSTATE[2];
  tmp_3[2] = Respond_state_X.Integrator2_CSTATE[0] *
    Respond_state_X.Integrator1_CSTATE[1] - Respond_state_X.Integrator2_CSTATE[1]
    * Respond_state_X.Integrator1_CSTATE[0];

  /* MATLAB Function 'Quad_Model_X/MATLAB Function3': '<S6>:1' */
  /* '<S6>:1:2' pqr_dot = zeros(3,1); */
  /* '<S6>:1:3' Ixx =  1.395e-05; */
  /* 2.3951e-5; %1.39e-05; %2.51943e-5; % % % */
  /* '<S6>:1:4' Iyy = 1.436e-05; */
  /* 2.3951e-5; %1.436e-05; % 2.54379e-5; % %         % */
  /* '<S6>:1:5' Izz =  2.173e-05; */
  /* 3.2347e-5; %2.173e-05 ; %4.51407e-5; % %         %;%0.160; */
  /* '<S6>:1:6' J = diag([Ixx Iyy Izz]); */
  /*    I  Flyer rotational inertia matrix     3x3 */
  /* '<S6>:1:7' pqr_dot = inv(J)*(M-cross(pqr,J*pqr)); */
  for (i = 0; i < 3; i++) {
    /* MATLAB Function: '<S2>/MATLAB Function' */
    Respond_state_B.xyz_dot[i] = 0.0;

    /* MATLAB Function: '<S2>/MATLAB Function1' */
    Respond_state_B.angles_dot[i] = 0.0;

    /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
     *  Integrator: '<S2>/Integrator1'
     */
    Respond_state_B.xyz_dot[i] += tmp[i] * Respond_state_X.Integrator1_CSTATE[0];

    /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
     *  Integrator: '<S2>/Integrator2'
     */
    Respond_state_B.angles_dot[i] += tmp_0[i] *
      Respond_state_X.Integrator2_CSTATE[0];

    /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
     *  Integrator: '<S2>/Integrator1'
     */
    Respond_state_B.xyz_dot[i] += tmp[i + 3] *
      Respond_state_X.Integrator1_CSTATE[1];

    /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
     *  Integrator: '<S2>/Integrator2'
     */
    Respond_state_B.angles_dot[i] += tmp_0[i + 3] *
      Respond_state_X.Integrator2_CSTATE[1];

    /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
     *  Integrator: '<S2>/Integrator1'
     */
    Respond_state_B.xyz_dot[i] += tmp[i + 6] *
      Respond_state_X.Integrator1_CSTATE[2];

    /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
     *  Integrator: '<S2>/Integrator2'
     */
    Respond_state_B.angles_dot[i] += tmp_0[i + 6] *
      Respond_state_X.Integrator2_CSTATE[2];

    /* MATLAB Function: '<S2>/MATLAB Function2' */
    Respond_state_B.uvw_dot[i] = (tmp_2[i] + (tmp_1[i + 6] * -9.81 + (tmp_1[i +
      3] * 0.0 + tmp_1[i] * 0.0))) - tmp_3[i];

    /* MATLAB Function: '<S2>/MATLAB Function3' incorporates:
     *  Integrator: '<S2>/Integrator2'
     */
    y[i] = a[i + 6] * Respond_state_X.Integrator2_CSTATE[2] + (a[i + 3] *
      Respond_state_X.Integrator2_CSTATE[1] + a[i] *
      Respond_state_X.Integrator2_CSTATE[0]);
  }

  /* MATLAB Function: '<S2>/MATLAB Function3' incorporates:
   *  Fcn: '<S2>/Fcn1'
   *  Fcn: '<S2>/Fcn2'
   *  Fcn: '<S2>/Fcn3'
   *  Fcn: '<S2>/Fcn4'
   *  Gain: '<S2>/Gain2'
   *  Gain: '<S2>/Gain3'
   *  Gain: '<S2>/Gain4'
   *  Integrator: '<S2>/Integrator2'
   *  Sum: '<S2>/Add1'
   *  Sum: '<S2>/Add2'
   *  Sum: '<S2>/Add3'
   */
  tmp_4 = (((rtb_Add2 - rtb_Add) - rtb_Add1) + rtb_Add3) * 8.87247638941767E-12
    - (Respond_state_X.Integrator2_CSTATE[1] * y[2] -
       Respond_state_X.Integrator2_CSTATE[2] * y[1]);
  tmp_5 = (((rtb_Add1 - rtb_Add) + rtb_Add2) - rtb_Add3) * 8.87247638941767E-12
    - (Respond_state_X.Integrator2_CSTATE[2] * y[0] -
       Respond_state_X.Integrator2_CSTATE[0] * y[2]);
  rtb_Add = (((rtb_Add1 - rtb_Add) - rtb_Add2) + rtb_Add3) *
    7.9378828974850863E-12 - (Respond_state_X.Integrator2_CSTATE[0] * y[1] -
    Respond_state_X.Integrator2_CSTATE[1] * y[0]);
  for (i = 0; i < 3; i++) {
    Respond_state_B.pqr_dot[i] = 0.0;
    Respond_state_B.pqr_dot[i] += b_a[i] * tmp_4;
    Respond_state_B.pqr_dot[i] += b_a[i + 3] * tmp_5;
    Respond_state_B.pqr_dot[i] += b_a[i + 6] * rtb_Add;
  }

  if (rtmIsMajorTimeStep(Respond_state_M)) {
    rt_ertODEUpdateContinuousStates(&Respond_state_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++Respond_state_M->Timing.clockTick0;
    Respond_state_M->Timing.t[0] = rtsiGetSolverStopTime
      (&Respond_state_M->solverInfo);
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Respond_state_derivatives(void)
{
  XDot_Respond_state_T *_rtXdot;
  _rtXdot = ((XDot_Respond_state_T *) Respond_state_M->derivs);

  /* Derivatives for Integrator: '<S2>/Integrator4' */
  _rtXdot->Integrator4_CSTATE[0] = Respond_state_B.xyz_dot[0];

  /* Derivatives for Integrator: '<S2>/Integrator3' */
  _rtXdot->Integrator3_CSTATE[0] = Respond_state_B.angles_dot[0];

  /* Derivatives for Integrator: '<S2>/Integrator1' */
  _rtXdot->Integrator1_CSTATE[0] = Respond_state_B.uvw_dot[0];

  /* Derivatives for Integrator: '<S2>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[0] = Respond_state_B.pqr_dot[0];

  /* Derivatives for Integrator: '<S2>/Integrator4' */
  _rtXdot->Integrator4_CSTATE[1] = Respond_state_B.xyz_dot[1];

  /* Derivatives for Integrator: '<S2>/Integrator3' */
  _rtXdot->Integrator3_CSTATE[1] = Respond_state_B.angles_dot[1];

  /* Derivatives for Integrator: '<S2>/Integrator1' */
  _rtXdot->Integrator1_CSTATE[1] = Respond_state_B.uvw_dot[1];

  /* Derivatives for Integrator: '<S2>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[1] = Respond_state_B.pqr_dot[1];

  /* Derivatives for Integrator: '<S2>/Integrator4' */
  _rtXdot->Integrator4_CSTATE[2] = Respond_state_B.xyz_dot[2];

  /* Derivatives for Integrator: '<S2>/Integrator3' */
  _rtXdot->Integrator3_CSTATE[2] = Respond_state_B.angles_dot[2];

  /* Derivatives for Integrator: '<S2>/Integrator1' */
  _rtXdot->Integrator1_CSTATE[2] = Respond_state_B.uvw_dot[2];

  /* Derivatives for Integrator: '<S2>/Integrator2' */
  _rtXdot->Integrator2_CSTATE[2] = Respond_state_B.pqr_dot[2];
}

/* Model initialize function */
void Respond_state_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Respond_state_M, 0,
                sizeof(RT_MODEL_Respond_state_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Respond_state_M->solverInfo,
                          &Respond_state_M->Timing.simTimeStep);
    rtsiSetTPtr(&Respond_state_M->solverInfo, &rtmGetTPtr(Respond_state_M));
    rtsiSetStepSizePtr(&Respond_state_M->solverInfo,
                       &Respond_state_M->Timing.stepSize0);
    rtsiSetdXPtr(&Respond_state_M->solverInfo, &Respond_state_M->derivs);
    rtsiSetContStatesPtr(&Respond_state_M->solverInfo, (real_T **)
                         &Respond_state_M->contStates);
    rtsiSetNumContStatesPtr(&Respond_state_M->solverInfo,
      &Respond_state_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Respond_state_M->solverInfo,
      &Respond_state_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Respond_state_M->solverInfo,
      &Respond_state_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Respond_state_M->solverInfo,
      &Respond_state_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&Respond_state_M->solverInfo, (&rtmGetErrorStatus
      (Respond_state_M)));
    rtsiSetRTModelPtr(&Respond_state_M->solverInfo, Respond_state_M);
  }

  rtsiSetSimTimeStep(&Respond_state_M->solverInfo, MAJOR_TIME_STEP);
  Respond_state_M->intgData.f[0] = Respond_state_M->odeF[0];
  Respond_state_M->contStates = ((X_Respond_state_T *) &Respond_state_X);
  rtsiSetSolverData(&Respond_state_M->solverInfo, (void *)
                    &Respond_state_M->intgData);
  rtsiSetSolverName(&Respond_state_M->solverInfo,"ode1");
  rtmSetTPtr(Respond_state_M, &Respond_state_M->Timing.tArray[0]);
  Respond_state_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) memset(((void *) &Respond_state_B), 0,
                sizeof(B_Respond_state_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Respond_state_X, 0,
                  sizeof(X_Respond_state_T));
  }

  /* external inputs */
  Respond_state_U.PWM = Respond_state_rtZMyPWM;

  /* external outputs */
  Respond_state_Y.States = Respond_state_rtZMyStates;

  /* InitializeConditions for Integrator: '<S2>/Integrator4' */
  Respond_state_X.Integrator4_CSTATE[0] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator3' */
  Respond_state_X.Integrator3_CSTATE[0] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator1' */
  Respond_state_X.Integrator1_CSTATE[0] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator2' */
  Respond_state_X.Integrator2_CSTATE[0] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator4' */
  Respond_state_X.Integrator4_CSTATE[1] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator3' */
  Respond_state_X.Integrator3_CSTATE[1] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator1' */
  Respond_state_X.Integrator1_CSTATE[1] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator2' */
  Respond_state_X.Integrator2_CSTATE[1] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator4' */
  Respond_state_X.Integrator4_CSTATE[2] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator3' */
  Respond_state_X.Integrator3_CSTATE[2] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator1' */
  Respond_state_X.Integrator1_CSTATE[2] = 0.0;

  /* InitializeConditions for Integrator: '<S2>/Integrator2' */
  Respond_state_X.Integrator2_CSTATE[2] = 0.0;
}

/* Model terminate function */
void Respond_state_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
