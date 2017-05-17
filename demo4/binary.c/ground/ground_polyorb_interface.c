#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "ground_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "ground_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "Thrust_Update"
----------------------------------------------------*/
void sync_ground_Thrust_Update(void *H, size_t H_len)
{
	extern process_package__taste_protected_object ground_protected;
	__po_hi_protected_lock (ground_protected.protected_id);
	ground_Thrust_Update(H, H_len);
	__po_hi_protected_unlock (ground_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Start_work"
------------------------------------------------------ */
void vm_async_ground_Start_work(void *Int_F, size_t Int_F_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_ground_thrust_update_k: vm_async_vt_ground_thrust_update_Start_work_vt(Int_F, Int_F_len); break;
		case x86_partition_vt_ground_dheight_k: vm_async_vt_ground_dheight_Start_work_vt(Int_F, Int_F_len); break;
		case x86_partition_vt_ground_gui_polling_ground_k: vm_async_vt_ground_gui_polling_ground_Start_work_vt(Int_F, Int_F_len); break;
		default: break;
	}
}

/*----------------------------------------------------
-- Protected Provided Interface "dHeight"
----------------------------------------------------*/
void sync_ground_dHeight(void *dH, size_t dH_len)
{
	extern process_package__taste_protected_object ground_protected;
	__po_hi_protected_lock (ground_protected.protected_id);
	ground_dHeight(dH, dH_len);
	__po_hi_protected_unlock (ground_protected.protected_id);
}

/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_ground"
----------------------------------------------------*/
void sync_ground_gui_polling_ground()
{
	extern process_package__taste_protected_object ground_protected;
	__po_hi_protected_lock (ground_protected.protected_id);
	ground_gui_polling_ground();
	__po_hi_protected_unlock (ground_protected.protected_id);
}

