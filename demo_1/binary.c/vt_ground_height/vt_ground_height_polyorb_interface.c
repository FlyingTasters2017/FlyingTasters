#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_ground_height_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_Height"
------------------------------------------------------ */
void po_hi_c_vt_ground_height_artificial_height(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_ground_Height (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Height"
------------------------------------------------------ */
void vm_vt_ground_height_Height(void *H, size_t H_len)
{
	sync_ground_Height(H, H_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_ground_height_Takeoff_vt(void *Ref_H, size_t Ref_H_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_ground_height_global_outport_takeoff_vt.vt_ground_height_global_outport_takeoff_vt.buffer), Ref_H, Ref_H_len);
	request.vars.vt_ground_height_global_outport_takeoff_vt.vt_ground_height_global_outport_takeoff_vt.length = Ref_H_len;
	request.port = vt_ground_height_global_outport_takeoff_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_ground_height_k, vt_ground_height_local_outport_takeoff_vt, &request);
	__po_hi_send_output(x86_partition_vt_ground_height_k, vt_ground_height_global_outport_takeoff_vt);
}

