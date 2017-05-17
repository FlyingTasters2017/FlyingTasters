#include "po_hi_gqueue.h"
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_ground_dheight_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_dHeight"
------------------------------------------------------ */
void po_hi_c_vt_ground_dheight_artificial_dheight(__po_hi_task_id e, dataview__myreal_buffer_impl buf)
{
	sync_ground_dHeight (buf.buffer, buf.length);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "dHeight"
------------------------------------------------------ */
void vm_vt_ground_dheight_dHeight(void *dH, size_t dH_len)
{
	sync_ground_dHeight(dH, dH_len);
}

/* ------------------------------------------------------
--  Asynchronous Required Interface "Start_work_vt"
------------------------------------------------------ */
void vm_async_vt_ground_dheight_Start_work_vt(void *Int_F, size_t Int_F_len)
{
	__po_hi_request_t request;

	__po_hi_copy_array(&(request.vars.vt_ground_dheight_global_outport_start_work_vt.vt_ground_dheight_global_outport_start_work_vt.buffer), Int_F, Int_F_len);
	request.vars.vt_ground_dheight_global_outport_start_work_vt.vt_ground_dheight_global_outport_start_work_vt.length = Int_F_len;
	request.port = vt_ground_dheight_global_outport_start_work_vt;
	__po_hi_gqueue_store_out(x86_partition_vt_ground_dheight_k, vt_ground_dheight_local_outport_start_work_vt, &request);
	__po_hi_send_output(x86_partition_vt_ground_dheight_k, vt_ground_dheight_global_outport_start_work_vt);
}

