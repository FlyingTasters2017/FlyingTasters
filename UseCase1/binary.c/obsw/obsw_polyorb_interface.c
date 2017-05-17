#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "obsw_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "obsw_vm_if.h"

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

/*----------------------------------------------------
-- Protected Provided Interface "Takeoff"
----------------------------------------------------*/
void sync_obsw_Takeoff(void *ReferenceHeight, size_t ReferenceHeight_len)
{
	extern process_package__taste_protected_object obsw_protected;
	__po_hi_protected_lock (obsw_protected.protected_id);
	obsw_Takeoff(ReferenceHeight, ReferenceHeight_len);
	__po_hi_protected_unlock (obsw_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "GetHeight"
------------------------------------------------------ */
void vm_async_obsw_GetHeight(void *Height, size_t Height_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_obsw_pulse_k: vm_async_vt_obsw_pulse_GetHeight_vt(Height, Height_len); break;
		case x86_partition_vt_obsw_takeoff_k: vm_async_vt_obsw_takeoff_GetHeight_vt(Height, Height_len); break;
		default: break;
	}
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Force"
------------------------------------------------------ */
void vm_obsw_Compute_Force(void *ReferenceHeight, size_t ReferenceHeight_len, void *HeightVelocity, size_t HeightVelocity_len, void *Height, size_t Height_len, void *Force, size_t *Force_len)
{
	sync_controller_Compute_Force(ReferenceHeight, ReferenceHeight_len, HeightVelocity, HeightVelocity_len, Height, Height_len, Force, Force_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Response"
------------------------------------------------------ */
void vm_obsw_Response(void *Force, size_t Force_len, void *HeightVelocity, size_t *HeightVelocity_len, void *Height, size_t *Height_len)
{
	sync_drone_model_Response(Force, Force_len, HeightVelocity, HeightVelocity_len, Height, Height_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_obsw_check_queue(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

