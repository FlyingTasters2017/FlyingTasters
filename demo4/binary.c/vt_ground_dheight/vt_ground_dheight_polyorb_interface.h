/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_ground_dheight_POLYORB_INTERFACE
#define vt_ground_dheight_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../ground/ground_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_dHeight"
----------------------------------------------------*/
void po_hi_c_vt_ground_dheight_artificial_dheight(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "dHeight"
------------------------------------------------------ */
void vm_vt_ground_dheight_dHeight(void *dH, size_t dH_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "Start_work_vt"
------------------------------------------------------ */
void vm_async_vt_ground_dheight_Start_work_vt(void *Int_F, size_t Int_F_len);
#endif
