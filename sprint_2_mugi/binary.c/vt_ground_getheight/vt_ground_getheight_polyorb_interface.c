#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_ground_getheight_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_GetHeight"
------------------------------------------------------ */
void po_hi_c_vt_ground_getheight_artificial_getheight(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_ground_GetHeight (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "GetHeight"
------------------------------------------------------ */
void vm_vt_ground_getheight_GetHeight(void *Height, size_t Height_len)
{
	sync_ground_GetHeight(Height, Height_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_ground_getheight_Takeoff_vt(void *Trajectory, size_t Trajectory_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_ground_getheight_global_outport_takeoff_vt.vt_ground_getheight_global_outport_takeoff_vt.buffer), Trajectory, Trajectory_len);
	request.vars.vt_ground_getheight_global_outport_takeoff_vt.vt_ground_getheight_global_outport_takeoff_vt.length = Trajectory_len;
	request.port = vt_ground_getheight_global_outport_takeoff_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_ground_getheight_k, vt_ground_getheight_local_outport_takeoff_vt, &request);
	__po_hi_send_output(x86_partition_vt_ground_getheight_k, vt_ground_getheight_global_outport_takeoff_vt);
}

