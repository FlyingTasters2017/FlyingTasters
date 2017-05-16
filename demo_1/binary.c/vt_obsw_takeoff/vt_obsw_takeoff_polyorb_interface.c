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
void vm_vt_obsw_takeoff_Takeoff(void *Ref_h, size_t Ref_h_len)
{
	sync_obsw_Takeoff(Ref_h, Ref_h_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Height_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_takeoff_Height_vt(void *h, size_t h_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_obsw_takeoff_global_outport_height_vt.vt_obsw_takeoff_global_outport_height_vt.buffer), h, h_len);
	request.vars.vt_obsw_takeoff_global_outport_height_vt.vt_obsw_takeoff_global_outport_height_vt.length = h_len;
	request.port = vt_obsw_takeoff_global_outport_height_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_obsw_takeoff_k, vt_obsw_takeoff_local_outport_height_vt, &request);
	__po_hi_send_output(x86_partition_vt_obsw_takeoff_k, vt_obsw_takeoff_global_outport_height_vt);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Input_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Compute_Input_vt(void *Ref_h, size_t Ref_h_len, void *dh, size_t dh_len, void *h, size_t h_len, void *F, size_t *F_len)
{
	sync_controller_Compute_Input(Ref_h, Ref_h_len, dh, dh_len, h, h_len, F, F_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "Response_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Response_vt(void *F, size_t F_len, void *dh, size_t *dh_len, void *h, size_t *h_len)
{
	sync_drone_model_Response(F, F_len, dh, dh_len, h, h_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_check_queue_vt(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_obsw_has_pending_msg(res, res_len);
}

