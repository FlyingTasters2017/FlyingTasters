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
void sync_obsw_Takeoff(void *Ref_H, size_t Ref_H_len)
{
	extern process_package__taste_protected_object obsw_protected;
	__po_hi_protected_lock (obsw_protected.protected_id);
	obsw_Takeoff(Ref_H, Ref_H_len);
	__po_hi_protected_unlock (obsw_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Height"
------------------------------------------------------ */
void vm_async_obsw_Height(void *H, size_t H_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_obsw_pulse_k: vm_async_vt_obsw_pulse_Height_vt(H, H_len); break;
		case x86_partition_vt_obsw_takeoff_k: vm_async_vt_obsw_takeoff_Height_vt(H, H_len); break;
		default: break;
	}
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Input"
------------------------------------------------------ */
void vm_obsw_Compute_Input(void *Ref_h, size_t Ref_h_len, void *dh, size_t dh_len, void *h, size_t h_len, void *F, size_t *F_len)
{
	sync_controller_Compute_Input(Ref_h, Ref_h_len, dh, dh_len, h, h_len, F, F_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Response"
------------------------------------------------------ */
void vm_obsw_Response(void *F, size_t F_len, void *dh, size_t *dh_len, void *h, size_t *h_len)
{
	sync_drone_model_Response(F, F_len, dh, dh_len, h, h_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_obsw_check_queue(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

