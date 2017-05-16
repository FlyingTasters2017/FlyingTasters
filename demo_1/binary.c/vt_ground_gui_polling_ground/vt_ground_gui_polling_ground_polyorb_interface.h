/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_ground_gui_polling_ground_POLYORB_INTERFACE
#define vt_ground_gui_polling_ground_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../ground/ground_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_gui_polling_ground"
----------------------------------------------------*/
void po_hi_c_vt_ground_gui_polling_ground_artificial_gui_polling_ground(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "gui_polling_ground"
------------------------------------------------------ */
void vm_vt_ground_gui_polling_ground_gui_polling_ground();
/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_ground_gui_polling_ground_Takeoff_vt(void *Ref_h, size_t Ref_h_len);
#endif
