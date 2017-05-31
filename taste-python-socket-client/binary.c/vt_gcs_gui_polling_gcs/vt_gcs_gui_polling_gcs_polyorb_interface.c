#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gcs_gui_polling_gcs_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_gui_polling_gcs"
------------------------------------------------------ */
void po_hi_c_vt_gcs_gui_polling_gcs_artificial_gui_polling_gcs(__po_hi_task_id e)
{
	sync_gcs_gui_polling_gcs ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "gui_polling_gcs"
------------------------------------------------------ */
void vm_vt_gcs_gui_polling_gcs_gui_polling_gcs()
{
	sync_gcs_gui_polling_gcs();
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_gcs_gui_polling_gcs_takeoff_vt(void *ref_thrust, size_t ref_thrust_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_gcs_gui_polling_gcs_global_outport_takeoff_vt.vt_gcs_gui_polling_gcs_global_outport_takeoff_vt.buffer), ref_thrust, ref_thrust_len);
	request.vars.vt_gcs_gui_polling_gcs_global_outport_takeoff_vt.vt_gcs_gui_polling_gcs_global_outport_takeoff_vt.length = ref_thrust_len;
	request.port = vt_gcs_gui_polling_gcs_global_outport_takeoff_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_gcs_gui_polling_gcs_k, vt_gcs_gui_polling_gcs_local_outport_takeoff_vt, &request);
	__po_hi_send_output(x86_partition_vt_gcs_gui_polling_gcs_k, vt_gcs_gui_polling_gcs_global_outport_takeoff_vt);
}

