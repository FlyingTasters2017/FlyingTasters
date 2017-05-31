/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef gcs_POLYORB_INTERFACE
#define gcs_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_gcs_sensordata/vt_gcs_sensordata_polyorb_interface.h"
#include "../../vt_gcs_gui_polling_gcs/vt_gcs_gui_polling_gcs_polyorb_interface.h"
/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff"
------------------------------------------------------ */
void vm_async_gcs_takeoff(void *ref_thrust, size_t ref_thrust_len);
/*----------------------------------------------------
-- Protected Provided Interface "SensorData"
----------------------------------------------------*/
void sync_gcs_SensorData(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_gcs"
----------------------------------------------------*/
void sync_gcs_gui_polling_gcs();

#endif
