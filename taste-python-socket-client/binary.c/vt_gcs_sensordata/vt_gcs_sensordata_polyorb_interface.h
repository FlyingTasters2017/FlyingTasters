/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_gcs_sensordata_POLYORB_INTERFACE
#define vt_gcs_sensordata_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../gcs/gcs_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_SensorData"
----------------------------------------------------*/
void po_hi_c_vt_gcs_sensordata_artificial_sensordata(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "SensorData"
------------------------------------------------------ */
void vm_vt_gcs_sensordata_SensorData(void *updated_thrust, size_t updated_thrust_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "takeoff_vt"
------------------------------------------------------ */
void vm_async_vt_gcs_sensordata_takeoff_vt(void *ref_thrust, size_t ref_thrust_len);
#endif
