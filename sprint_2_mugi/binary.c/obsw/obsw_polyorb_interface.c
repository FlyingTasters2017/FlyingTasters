#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "obsw_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "obsw_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "Takeoff"
----------------------------------------------------*/
void sync_obsw_Takeoff(void *Trajectory, size_t Trajectory_len)
{
	extern process_package__taste_protected_object obsw_protected;
	__po_hi_protected_lock (obsw_protected.protected_id);
	obsw_Takeoff(Trajectory, Trajectory_len);
	__po_hi_protected_unlock (obsw_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "Pulse"
----------------------------------------------------*/
void sync_obsw_Pulse()
{
	extern process_package__taste_protected_object obsw_protected;
	__po_hi_protected_lock (obsw_protected.protected_id);
	obsw_Pulse();
	__po_hi_protected_unlock (obsw_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_PWM"
------------------------------------------------------ */
void vm_obsw_Compute_PWM(void *Trajectory, size_t Trajectory_len, void *States, size_t States_len, void *PWM, size_t *PWM_len)
{
	sync_controller_Compute_PWM(Trajectory, Trajectory_len, States, States_len, PWM, PWM_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Respond_state"
------------------------------------------------------ */
void vm_obsw_Respond_state(void *PWM, size_t PWM_len, void *States, size_t *States_len)
{
	sync_drone_model_Respond_state(PWM, PWM_len, States, States_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "GetHeight"
------------------------------------------------------ */
void vm_async_obsw_GetHeight(void *Height, size_t Height_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_obsw_takeoff_k: vm_async_vt_obsw_takeoff_GetHeight_vt(Height, Height_len); break;
		case x86_partition_vt_obsw_pulse_k: vm_async_vt_obsw_pulse_GetHeight_vt(Height, Height_len); break;
		default: break;
	}
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_obsw_check_queue(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

