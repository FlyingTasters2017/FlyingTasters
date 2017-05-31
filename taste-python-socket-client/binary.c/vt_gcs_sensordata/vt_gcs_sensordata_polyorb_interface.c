#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_gcs_sensordata_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_SensorData"
------------------------------------------------------ */
void po_hi_c_vt_gcs_sensordata_artificial_sensordata(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_gcs_SensorData (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "SensorData"
------------------------------------------------------ */
void vm_vt_gcs_sensordata_SensorData(void *updated_thrust, size_t updated_thrust_len)
{
	sync_gcs_SensorData(updated_thrust, updated_thrust_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_gcs_sensordata_takeoff_vt(void *ref_thrust, size_t ref_thrust_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_gcs_sensordata_global_outport_takeoff_vt.vt_gcs_sensordata_global_outport_takeoff_vt.buffer), ref_thrust, ref_thrust_len);
	request.vars.vt_gcs_sensordata_global_outport_takeoff_vt.vt_gcs_sensordata_global_outport_takeoff_vt.length = ref_thrust_len;
	request.port = vt_gcs_sensordata_global_outport_takeoff_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_gcs_sensordata_k, vt_gcs_sensordata_local_outport_takeoff_vt, &request);
	__po_hi_send_output(x86_partition_vt_gcs_sensordata_k, vt_gcs_sensordata_global_outport_takeoff_vt);
}

