#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "ground_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "ground_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "Height"
----------------------------------------------------*/
void sync_ground_Height(void *h, size_t h_len)
{
	extern process_package__taste_protected_object ground_protected;
	__po_hi_protected_lock (ground_protected.protected_id);
	ground_Height(h, h_len);
	__po_hi_protected_unlock (ground_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff"
------------------------------------------------------ */
void vm_async_ground_Takeoff(void *Ref_h, size_t Ref_h_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_ground_height_k: vm_async_vt_ground_height_Takeoff_vt(Ref_h, Ref_h_len); break;
		case x86_partition_vt_ground_gui_polling_ground_k: vm_async_vt_ground_gui_polling_ground_Takeoff_vt(Ref_h, Ref_h_len); break;
		default: break;
	}
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

