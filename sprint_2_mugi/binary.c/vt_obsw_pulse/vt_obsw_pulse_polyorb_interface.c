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
--  Synchronous Required Interface "Compute_PWM_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_Compute_PWM_vt(void *Trajectory, size_t Trajectory_len, void *States, size_t States_len, void *PWM, size_t *PWM_len)
{
	sync_controller_Compute_PWM(Trajectory, Trajectory_len, States, States_len, PWM, PWM_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Respond_state_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_Respond_state_vt(void *PWM, size_t PWM_len, void *States, size_t *States_len)
{
	sync_drone_model_Respond_state(PWM, PWM_len, States, States_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "GetHeight_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_pulse_GetHeight_vt(void *Height, size_t Height_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_obsw_pulse_global_outport_getheight_vt.vt_obsw_pulse_global_outport_getheight_vt.buffer), Height, Height_len);
	request.vars.vt_obsw_pulse_global_outport_getheight_vt.vt_obsw_pulse_global_outport_getheight_vt.length = Height_len;
	request.port = vt_obsw_pulse_global_outport_getheight_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_obsw_pulse_k, vt_obsw_pulse_local_outport_getheight_vt, &request);
	__po_hi_send_output(x86_partition_vt_obsw_pulse_k, vt_obsw_pulse_global_outport_getheight_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

