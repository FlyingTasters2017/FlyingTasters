/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_obsw_pulse_POLYORB_INTERFACE
#define vt_obsw_pulse_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../obsw/obsw_polyorb_interface.h"
#include "../../model_1dof/model_1dof_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_Pulse"
----------------------------------------------------*/
void po_hi_c_vt_obsw_pulse_artificial_pulse(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "Pulse"
------------------------------------------------------ */
void vm_vt_obsw_pulse_Pulse();
/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Thrust_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_Compute_Thrust_vt(void *F, size_t F_len, void *, size_t *, void *, size_t *);
/* ------------------------------------------------------
--  Asynchronous Required Interface "Thrust_Update_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_pulse_Thrust_Update_vt(void *H, size_t H_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "dHeight_vt"
------------------------------------------------------ */
void vm_async_vt_obsw_pulse_dHeight_vt(void *dH, size_t dH_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_obsw_pulse_check_queue_vt(void *, size_t *);
#endif
