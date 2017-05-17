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
void vm_vt_obsw_takeoff_Takeoff(void *ReferenceHeight, size_t ReferenceHeight_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "GetHeight_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_takeoff_GetHeight_vt(void *Height, size_t Height_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Force_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Compute_Force_vt(void *ReferenceHeight, size_t ReferenceHeight_len, void *HeightVelocity, size_t HeightVelocity_len, void *Height, size_t Height_len, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "Response_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_Response_vt(void *Force, size_t Force_len, void *, size_t *, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_takeoff_check_queue_vt(void *, size_t *);
#endif
