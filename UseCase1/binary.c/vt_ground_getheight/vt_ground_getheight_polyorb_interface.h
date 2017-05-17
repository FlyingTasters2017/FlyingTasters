/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_ground_getheight_POLYORB_INTERFACE
#define vt_ground_getheight_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../ground/ground_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_GetHeight"
----------------------------------------------------*/
void po_hi_c_vt_ground_getheight_artificial_getheight(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "GetHeight"
------------------------------------------------------ */
void vm_vt_ground_getheight_GetHeight(void *Height, size_t Height_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_ground_getheight_Takeoff_vt(void *ReferenceHeight, size_t ReferenceHeight_len);
#endif
