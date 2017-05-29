#ifndef __SIMULINK_DATAVIEW_UNIQASN_RESPOND_STATE_SIMULINK_H__
#define __SIMULINK_DATAVIEW_UNIQASN_RESPOND_STATE_SIMULINK_H__

#include <stdlib.h> /* for size_t */

int Convert_From_native_To_MyPWM_In_Respond_state_Simulink_PWM(void *pBuffer, size_t iBufferSize);
int Convert_From_MyStates_To_native_In_Respond_state_Simulink_States(void *pBuffer, size_t iMaxBufferSize);
void Execute_Respond_state_Simulink();
void init_drone_model();
void drone_model_Respond_state(void *pPWM, size_t size_PWM, void *pStates, size_t *pSize_States);

#endif
