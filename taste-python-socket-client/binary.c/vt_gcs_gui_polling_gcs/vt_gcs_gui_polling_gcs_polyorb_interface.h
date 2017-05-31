/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gcs_gui_polling_gcs_POLYORB_INTERFACE
#define vt_gcs_gui_polling_gcs_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gcs/gcs_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_gui_polling_gcs"
----------------------------------------------------*/
void po_hi_c_vt_gcs_gui_polling_gcs_artificial_gui_polling_gcs(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "gui_polling_gcs"
------------------------------------------------------ */
void vm_vt_gcs_gui_polling_gcs_gui_polling_gcs();
/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_gcs_gui_polling_gcs_takeoff_vt(void *ref_thrust, size_t ref_thrust_len);
#endif
