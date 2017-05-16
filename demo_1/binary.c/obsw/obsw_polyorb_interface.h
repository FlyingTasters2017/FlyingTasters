/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef obsw_POLYORB_INTERFACE
#define obsw_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../controller/controller_polyorb_interface.h"
#include "../../drone_model/drone_model_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
#include "../../vt_obsw_pulse/vt_obsw_pulse_polyorb_interface.h"
#include "../../vt_obsw_takeoff/vt_obsw_takeoff_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "Pulse"
----------------------------------------------------*/
void sync_obsw_Pulse();

/*----------------------------------------------------
-- Protected Provided Interface "Takeoff"
----------------------------------------------------*/
void sync_obsw_Takeoff(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "Height"
------------------------------------------------------ */
void vm_async_obsw_Height(void *h, size_t h_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Input"
------------------------------------------------------ */
void vm_obsw_Compute_Input(void *Ref_h, size_t Ref_h_len, void *dh, size_t dh_len, void *h, size_t h_len, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "Response"
------------------------------------------------------ */
void vm_obsw_Response(void *F, size_t F_len, void *, size_t *, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_obsw_check_queue(void *, size_t *);
#endif
