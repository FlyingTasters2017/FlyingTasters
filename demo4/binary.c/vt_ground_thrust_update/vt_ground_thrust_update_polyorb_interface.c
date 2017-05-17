#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_ground_thrust_update_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_Thrust_Update"
------------------------------------------------------ */
void po_hi_c_vt_ground_thrust_update_artificial_thrust_update(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_ground_Thrust_Update (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Thrust_Update"
------------------------------------------------------ */
void vm_vt_ground_thrust_update_Thrust_Update(void *H, size_t H_len)
{
	sync_ground_Thrust_Update(H, H_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Start_work_vt"
------------------------------------------------------ */
void vm_async_vt_ground_thrust_update_Start_work_vt(void *Int_F, size_t Int_F_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_ground_thrust_update_global_outport_start_work_vt.vt_ground_thrust_update_global_outport_start_work_vt.buffer), Int_F, Int_F_len);
	request.vars.vt_ground_thrust_update_global_outport_start_work_vt.vt_ground_thrust_update_global_outport_start_work_vt.length = Int_F_len;
	request.port = vt_ground_thrust_update_global_outport_start_work_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_ground_thrust_update_k, vt_ground_thrust_update_local_outport_start_work_vt, &request);
	__po_hi_send_output(x86_partition_vt_ground_thrust_update_k, vt_ground_thrust_update_global_outport_start_work_vt);
}

