#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "gcs_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "gcs_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "SensorData"
----------------------------------------------------*/
void sync_gcs_SensorData(void *updated_thrust, size_t updated_thrust_len)
{
	extern process_package__taste_protected_object gcs_protected;
	__po_hi_protected_lock (gcs_protected.protected_id);
	gcs_SensorData(updated_thrust, updated_thrust_len);
	__po_hi_protected_unlock (gcs_protected.protected_id);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff"
------------------------------------------------------ */
void vm_async_gcs_takeoff(void *ref_thrust, size_t ref_thrust_len)
{
	switch(__po_hi_get_task_id()) {
		case x86_partition_vt_gcs_sensordata_k: vm_async_vt_gcs_sensordata_takeoff_vt(ref_thrust, ref_thrust_len); break;
		case x86_partition_vt_gcs_gui_polling_gcs_k: vm_async_vt_gcs_gui_polling_gcs_takeoff_vt(ref_thrust, ref_thrust_len); break;
		default: break;
	}
}

/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gcs"
----------------------------------------------------*/
void sync_gcs_gui_polling_gcs()
{
	extern process_package__taste_protected_object gcs_protected;
	__po_hi_protected_lock (gcs_protected.protected_id);
	gcs_gui_polling_gcs();
	__po_hi_protected_unlock (gcs_protected.protected_id);
}

