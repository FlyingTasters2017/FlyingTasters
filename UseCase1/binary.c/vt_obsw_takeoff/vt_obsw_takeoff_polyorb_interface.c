#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_obsw_takeoff_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_Takeoff"
------------------------------------------------------ */
void po_hi_c_vt_obsw_takeoff_artificial_takeoff(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_obsw_Takeoff (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Takeoff"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Takeoff(void *ReferenceHeight, size_t ReferenceHeight_len)
{
	sync_obsw_Takeoff(ReferenceHeight, ReferenceHeight_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "GetHeight_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_takeoff_GetHeight_vt(void *Height, size_t Height_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_obsw_takeoff_global_outport_getheight_vt.vt_obsw_takeoff_global_outport_getheight_vt.buffer), Height, Height_len);
	request.vars.vt_obsw_takeoff_global_outport_getheight_vt.vt_obsw_takeoff_global_outport_getheight_vt.length = Height_len;
	request.port = vt_obsw_takeoff_global_outport_getheight_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_obsw_takeoff_k, vt_obsw_takeoff_local_outport_getheight_vt, &request);
	__po_hi_send_output(x86_partition_vt_obsw_takeoff_k, vt_obsw_takeoff_global_outport_getheight_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Force_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Compute_Force_vt(void *ReferenceHeight, size_t ReferenceHeight_len, void *HeightVelocity, size_t HeightVelocity_len, void *Height, size_t Height_len, void *Force, size_t *Force_len)
{
	sync_controller_Compute_Force(ReferenceHeight, ReferenceHeight_len, HeightVelocity, HeightVelocity_len, Height, Height_len, Force, Force_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Response_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Response_vt(void *Force, size_t Force_len, void *HeightVelocity, size_t *HeightVelocity_len, void *Height, size_t *Height_len)
{
	sync_drone_model_Response(Force, Force_len, HeightVelocity, HeightVelocity_len, Height, Height_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

