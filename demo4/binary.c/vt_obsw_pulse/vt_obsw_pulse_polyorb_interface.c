#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_obsw_pulse_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_Pulse"
------------------------------------------------------ */
void po_hi_c_vt_obsw_pulse_artificial_pulse(__po_hi_task_id e)
{
	sync_obsw_Pulse ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Pulse"
------------------------------------------------------ */
void vm_vt_obsw_pulse_Pulse()
{
	sync_obsw_Pulse();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Thrust_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_Compute_Thrust_vt(void *F, size_t F_len, void *h, size_t *h_len, void *dh, size_t *dh_len)
{
	sync_model_1dof_Compute_Thrust(F, F_len, h, h_len, dh, dh_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Thrust_Update_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_pulse_Thrust_Update_vt(void *H, size_t H_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_obsw_pulse_global_outport_thrust_update_vt.vt_obsw_pulse_global_outport_thrust_update_vt.buffer), H, H_len);
	request.vars.vt_obsw_pulse_global_outport_thrust_update_vt.vt_obsw_pulse_global_outport_thrust_update_vt.length = H_len;
	request.port = vt_obsw_pulse_global_outport_thrust_update_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_obsw_pulse_k, vt_obsw_pulse_local_outport_thrust_update_vt, &request);
	__po_hi_send_output(x86_partition_vt_obsw_pulse_k, vt_obsw_pulse_global_outport_thrust_update_vt);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "dHeight_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_pulse_dHeight_vt(void *dH, size_t dH_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_obsw_pulse_global_outport_dheight_vt.vt_obsw_pulse_global_outport_dheight_vt.buffer), dH, dH_len);
	request.vars.vt_obsw_pulse_global_outport_dheight_vt.vt_obsw_pulse_global_outport_dheight_vt.length = dH_len;
	request.port = vt_obsw_pulse_global_outport_dheight_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_obsw_pulse_k, vt_obsw_pulse_local_outport_dheight_vt, &request);
	__po_hi_send_output(x86_partition_vt_obsw_pulse_k, vt_obsw_pulse_global_outport_dheight_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

