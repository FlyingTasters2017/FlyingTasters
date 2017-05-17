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
-- Protected Provided Interface "Start_work"
----------------------------------------------------*/
void sync_obsw_Start_work(void *Int_F, size_t Int_F_len)
{
	extern process_package__taste_protected_object obsw_protected;
	__po_hi_protected_lock (obsw_protected.protected_id);
	obsw_Start_work(Int_F, Int_F_len);
	__po_hi_protected_unlock (obsw_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Thrust"
------------------------------------------------------ */
void vm_obsw_Compute_Thrust(void *F, size_t F_len, void *h, size_t *h_len, void *dh, size_t *dh_len)
{
	sync_model_1dof_Compute_Thrust(F, F_len, h, h_len, dh, dh_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Thrust_Update"
------------------------------------------------------ */
void vm_async_obsw_Thrust_Update(void *H, size_t H_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_obsw_pulse_k: vm_async_vt_obsw_pulse_Thrust_Update_vt(H, H_len); break;
		case x86_partition_vt_obsw_start_work_k: vm_async_vt_obsw_start_work_Thrust_Update_vt(H, H_len); break;
		default: break;
	}
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "dHeight"
------------------------------------------------------ */
void vm_async_obsw_dHeight(void *dH, size_t dH_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_obsw_pulse_k: vm_async_vt_obsw_pulse_dHeight_vt(dH, dH_len); break;
		case x86_partition_vt_obsw_start_work_k: vm_async_vt_obsw_start_work_dHeight_vt(dH, dH_len); break;
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

