#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "ground_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "ground_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "GetHeight"
----------------------------------------------------*/
void sync_ground_GetHeight(void *Height, size_t Height_len)
{
	extern process_package__taste_protected_object ground_protected;
	__po_hi_protected_lock (ground_protected.protected_id);
	ground_GetHeight(Height, Height_len);
	__po_hi_protected_unlock (ground_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff"
------------------------------------------------------ */
void vm_async_ground_Takeoff(void *ReferenceHeight, size_t ReferenceHeight_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_ground_getheight_k: vm_async_vt_ground_getheight_Takeoff_vt(ReferenceHeight, ReferenceHeight_len); break;
		case x86_partition_vt_ground_gui_polling_ground_k: vm_async_vt_ground_gui_polling_ground_Takeoff_vt(ReferenceHeight, ReferenceHeight_len); break;
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

