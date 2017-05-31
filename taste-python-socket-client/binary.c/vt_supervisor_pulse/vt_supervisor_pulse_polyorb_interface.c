#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_supervisor_pulse_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_pulse"
------------------------------------------------------ */
void po_hi_c_vt_supervisor_pulse_artificial_pulse(__po_hi_task_id e)
{
	sync_supervisor_pulse ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "pulse"
------------------------------------------------------ */
void vm_vt_supervisor_pulse_pulse()
{
	sync_supervisor_pulse();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "readStabilizerSendThrust_vt"
------------------------------------------------------ */
void vm_vt_supervisor_pulse_readStabilizerSendThrust_vt(void *ref_thrust, size_t ref_thrust_len, void *updated_thrust, size_t *updated_thrust_len)
{
	sync_socketclient_readStabilizerSendThrust(ref_thrust, ref_thrust_len, updated_thrust, updated_thrust_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "SensorData_vt"
------------------------------------------------------ */
void vm_async_vt_supervisor_pulse_SensorData_vt(void *updated_thrust, size_t updated_thrust_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_supervisor_pulse_global_outport_sensordata_vt.vt_supervisor_pulse_global_outport_sensordata_vt.buffer), updated_thrust, updated_thrust_len);
	request.vars.vt_supervisor_pulse_global_outport_sensordata_vt.vt_supervisor_pulse_global_outport_sensordata_vt.length = updated_thrust_len;
	request.port = vt_supervisor_pulse_global_outport_sensordata_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_supervisor_pulse_k, vt_supervisor_pulse_local_outport_sensordata_vt, &request);
	__po_hi_send_output(x86_partition_vt_supervisor_pulse_k, vt_supervisor_pulse_global_outport_sensordata_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_supervisor_pulse_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_supervisor_has_pending_msg(res, res_len);
}

