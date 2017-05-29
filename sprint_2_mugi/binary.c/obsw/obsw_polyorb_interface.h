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
#include "../../vt_obsw_takeoff/vt_obsw_takeoff_polyorb_interface.h"
#include "../../vt_obsw_pulse/vt_obsw_pulse_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "Takeoff"
----------------------------------------------------*/
void sync_obsw_Takeoff(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "Pulse"
----------------------------------------------------*/
void sync_obsw_Pulse();

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_PWM"
------------------------------------------------------ */
void vm_obsw_Compute_PWM(void *Trajectory, size_t Trajectory_len, void *States, size_t States_len, void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "Respond_state"
------------------------------------------------------ */
void vm_obsw_Respond_state(void *PWM, size_t PWM_len, void *, size_t *);
/* ------------------------------------------------------
--  Asynchronous Required Interface "GetHeight"
------------------------------------------------------ */
void vm_async_obsw_GetHeight(void *Height, size_t Height_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_obsw_check_queue(void *, size_t *);
#endif
