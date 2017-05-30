#ifndef __SIMULINK_DATAVIEW_UNIQASN_COMPUTE_PWM_SIMULINK_H__
#define __SIMULINK_DATAVIEW_UNIQASN_COMPUTE_PWM_SIMULINK_H__

#include <stdlib.h> /* for size_t */

int Convert_From_native_To_MyTrajectory_In_Compute_PWM_Simulink_Trajectory(void *pBuffer, size_t iBufferSize);
int Convert_From_native_To_MyStates_In_Compute_PWM_Simulink_States(void *pBuffer, size_t iBufferSize);
int Convert_From_MyPWM_To_native_In_Compute_PWM_Simulink_PWM(void *pBuffer, size_t iMaxBufferSize);
void Execute_Compute_PWM_Simulink();
void init_controller();
void controller_Compute_PWM(void *pTrajectory, size_t size_Trajectory, void *pStates, size_t size_States, void *pPWM, size_t *pSize_PWM);

#endif
