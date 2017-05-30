/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "drone_model_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "Respond_state_Simulink.Simulink.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "Respond_state"
----------------------------------------------------*/
void sync_drone_model_Respond_state(void *PWM, size_t PWM_len, void *States, size_t *States_len)
{
	drone_model_Respond_state(PWM, PWM_len, States, States_len);
}

