/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_obsw_takeoff_POLYORB_INTERFACE
#define vt_obsw_takeoff_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../obsw/obsw_polyorb_interface.h"
#include "../../controller/controller_polyorb_interface.h"
#include "../../drone_model/drone_model_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_Takeoff"
----------------------------------------------------*/
void po_hi_c_vt_obsw_takeoff_artificial_takeoff(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "Takeoff"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Takeoff(void *Ref_H, size_t Ref_H_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "Height_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_takeoff_Height_vt(void *H, size_t H_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Input_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Compute_Input_vt(void *Ref_h, size_t Ref_h_len, void *dh, size_t dh_len, void *h, size_t h_len, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "Response_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Response_vt(void *F, size_t F_len, void *, size_t *, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_check_queue_vt(void *, size_t *);
#endif
