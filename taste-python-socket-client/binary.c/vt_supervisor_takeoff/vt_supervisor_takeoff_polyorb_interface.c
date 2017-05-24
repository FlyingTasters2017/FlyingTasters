#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_supervisor_takeoff_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_takeoff"
------------------------------------------------------ */
void po_hi_c_vt_supervisor_takeoff_artificial_takeoff(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_supervisor_takeoff (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "takeoff"
------------------------------------------------------ */
void vm_vt_supervisor_takeoff_takeoff(void *ref_thrust, size_t ref_thrust_len)
{
	sync_supervisor_takeoff(ref_thrust, ref_thrust_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "readStabilizerSendThrust_vt"
------------------------------------------------------ */
void vm_vt_supervisor_takeoff_readStabilizerSendThrust_vt(void *ref_thrust, size_t ref_thrust_len)
{
	sync_socketclient_readStabilizerSendThrust(ref_thrust, ref_thrust_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_supervisor_takeoff_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_supervisor_has_pending_msg(res, res_len);
}

