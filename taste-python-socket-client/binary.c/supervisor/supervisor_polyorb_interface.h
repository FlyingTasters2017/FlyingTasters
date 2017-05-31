/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef supervisor_POLYORB_INTERFACE
#define supervisor_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../socketclient/socketclient_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
#include "../../vt_supervisor_pulse/vt_supervisor_pulse_polyorb_interface.h"
#include "../../vt_supervisor_takeoff/vt_supervisor_takeoff_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "pulse"
----------------------------------------------------*/
void sync_supervisor_pulse();

/*----------------------------------------------------
-- Protected Provided Interface "takeoff"
----------------------------------------------------*/
void sync_supervisor_takeoff(void *, size_t);

/* ------------------------------------------------------
--  Synchronous Required Interface "readStabilizerSendThrust"
------------------------------------------------------ */
void vm_supervisor_readStabilizerSendThrust(void *ref_thrust, size_t ref_thrust_len, void *, size_t *);
/* ------------------------------------------------------
--  Asynchronous Required Interface "SensorData"
------------------------------------------------------ */
void vm_async_supervisor_SensorData(void *updated_thrust, size_t updated_thrust_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_supervisor_check_queue(void *, size_t *);
#endif
