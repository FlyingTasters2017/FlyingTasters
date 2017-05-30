/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "controller_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "Compute_PWM_Simulink.Simulink.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "Compute_PWM"
----------------------------------------------------*/
void sync_controller_Compute_PWM(void *Trajectory, size_t Trajectory_len, void *States, size_t States_len, void *PWM, size_t *PWM_len)
{
	controller_Compute_PWM(Trajectory, Trajectory_len, States, States_len, PWM, PWM_len);
}

