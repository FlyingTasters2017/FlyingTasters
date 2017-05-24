#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "gcs_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "gcs_vm_if.h"

/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff"
------------------------------------------------------ */
void vm_async_gcs_takeoff(void *ref_thrust, size_t ref_thrust_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.gcs_global_outport_takeoff.gcs_global_outport_takeoff.buffer), ref_thrust, ref_thrust_len);
	request.vars.gcs_global_outport_takeoff.gcs_global_outport_takeoff.length = ref_thrust_len;
	request.port = gcs_global_outport_takeoff;
	__po_hi_gqueue_store_out(x86_partition_gcs_k, gcs_local_outport_takeoff, &request);
	__po_hi_send_output(x86_partition_gcs_k, gcs_global_outport_takeoff);
}

/* ------------------------------------------------------
-- Asynchronous Provided Interface "gui_polling_gcs"
------------------------------------------------------ */
void po_hi_c_gcs_gui_polling_gcs(__po_hi_task_id e)
{
	gcs_gui_polling_gcs();
}

