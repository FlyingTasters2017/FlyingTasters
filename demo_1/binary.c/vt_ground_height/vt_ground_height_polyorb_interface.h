/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_ground_height_POLYORB_INTERFACE
#define vt_ground_height_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../ground/ground_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_Height"
----------------------------------------------------*/
void po_hi_c_vt_ground_height_artificial_height(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "Height"
------------------------------------------------------ */
void vm_vt_ground_height_Height(void *H, size_t H_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_ground_height_Takeoff_vt(void *Ref_H, size_t Ref_H_len);
#endif
