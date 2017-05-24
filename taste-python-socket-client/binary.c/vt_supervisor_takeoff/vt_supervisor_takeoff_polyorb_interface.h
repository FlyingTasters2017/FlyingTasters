/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_supervisor_takeoff_POLYORB_INTERFACE
#define vt_supervisor_takeoff_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../supervisor/supervisor_polyorb_interface.h"
#include "../../socketclient/socketclient_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_takeoff"
----------------------------------------------------*/
void po_hi_c_vt_supervisor_takeoff_artificial_takeoff(__po_hi_task_id, dataview__myreal_buffer_impl);

/* ------------------------------------------------------
--  Synchronous Required Interface "takeoff"
------------------------------------------------------ */
void vm_vt_supervisor_takeoff_takeoff(void *ref_thrust, size_t ref_thrust_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "readStabilizerSendThrust_vt"
------------------------------------------------------ */
void vm_vt_supervisor_takeoff_readStabilizerSendThrust_vt(void *ref_thrust, size_t ref_thrust_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_supervisor_takeoff_check_queue_vt(void *, size_t *);
#endif
