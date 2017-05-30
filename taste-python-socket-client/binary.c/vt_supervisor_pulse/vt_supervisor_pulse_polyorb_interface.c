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
void vm_vt_supervisor_pulse_readStabilizerSendThrust_vt(void *ref_thrust, size_t ref_thrust_len)
{
	sync_socketclient_readStabilizerSendThrust(ref_thrust, ref_thrust_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_supervisor_pulse_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_supervisor_has_pending_msg(res, res_len);
}

