/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: control_Act_types.h
 *
 * Code generated for Simulink model 'control_Act'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Jun 01 21:55:05 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_control_Act_types_h_
#define RTW_HEADER_control_Act_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_MySensorData_
#define DEFINED_TYPEDEF_FOR_MySensorData_

typedef struct {
  real_T yawAct;
  real_T pitchAct;
  real_T rollAct;
  real_T baropAct;
  real_T accxAct;
  real_T accyAct;
  real_T acczAct;
} MySensorData;

#endif

#ifndef DEFINED_TYPEDEF_FOR_MyDroneData_
#define DEFINED_TYPEDEF_FOR_MyDroneData_

typedef struct {
  real_T yawrateRef;
  real_T pitchRef;
  real_T rollRef;
  real_T thrustRef;
} MyDroneData;

#endif

#ifndef struct_tag_soRa2DTCKrTZwENSwberyBG
#define struct_tag_soRa2DTCKrTZwENSwberyBG

struct tag_soRa2DTCKrTZwENSwberyBG
{
  int32_T isInitialized;
  real_T pCumSum;
  real_T pCumSumRev[9];
  real_T pCumRevIndex;
};

#endif                                 /*struct_tag_soRa2DTCKrTZwENSwberyBG*/

#ifndef typedef_dsp_private_SlidingWindowAver_T
#define typedef_dsp_private_SlidingWindowAver_T

typedef struct tag_soRa2DTCKrTZwENSwberyBG dsp_private_SlidingWindowAver_T;

#endif                                 /*typedef_dsp_private_SlidingWindowAver_T*/

#ifndef typedef_cell_wrap_control_Act_T
#define typedef_cell_wrap_control_Act_T

typedef struct {
  uint32_T f1[8];
} cell_wrap_control_Act_T;

#endif                                 /*typedef_cell_wrap_control_Act_T*/

#ifndef typedef_struct_T_control_Act_T
#define typedef_struct_T_control_Act_T

typedef struct {
  real_T f0[2];
} struct_T_control_Act_T;

#endif                                 /*typedef_struct_T_control_Act_T*/

#ifndef typedef_struct_T_control_Act_h_T
#define typedef_struct_T_control_Act_h_T

typedef struct {
  char_T f0[6];
  char_T f1[6];
} struct_T_control_Act_h_T;

#endif                                 /*typedef_struct_T_control_Act_h_T*/

#ifndef typedef_struct_T_control_Act_hm_T
#define typedef_struct_T_control_Act_hm_T

typedef struct {
  char_T f0[2];
} struct_T_control_Act_hm_T;

#endif                                 /*typedef_struct_T_control_Act_hm_T*/

#ifndef struct_tag_sCDrGH8f0l5w73d8sQHYbPB
#define struct_tag_sCDrGH8f0l5w73d8sQHYbPB

struct tag_sCDrGH8f0l5w73d8sQHYbPB
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_control_Act_T inputVarSize;
  dsp_private_SlidingWindowAver_T *pStatistic;
  real_T NumChannels;
};

#endif                                 /*struct_tag_sCDrGH8f0l5w73d8sQHYbPB*/

#ifndef typedef_dsp_MovingAverage_control_Act_T
#define typedef_dsp_MovingAverage_control_Act_T

typedef struct tag_sCDrGH8f0l5w73d8sQHYbPB dsp_MovingAverage_control_Act_T;

#endif                                 /*typedef_dsp_MovingAverage_control_Act_T*/

/* Forward declaration for rtModel */
typedef struct tag_RTM_control_Act_T RT_MODEL_control_Act_T;

#endif                                 /* RTW_HEADER_control_Act_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
