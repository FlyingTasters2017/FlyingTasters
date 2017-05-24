/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef gcs_POLYORB_INTERFACE
#define gcs_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff"
------------------------------------------------------ */
void vm_async_gcs_takeoff(void *ref_thrust, size_t ref_thrust_len);
/*----------------------------------------------------
-- Asynchronous Provided Interface "gui_polling_gcs"
----------------------------------------------------*/
void po_hi_c_gcs_gui_polling_gcs(__po_hi_task_id);

#endif
