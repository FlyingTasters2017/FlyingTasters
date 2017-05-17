/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef obsw_POLYORB_INTERFACE
#define obsw_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../model_1dof/model_1dof_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
#include "../../vt_obsw_pulse/vt_obsw_pulse_polyorb_interface.h"
#include "../../vt_obsw_start_work/vt_obsw_start_work_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "Pulse"
----------------------------------------------------*/
void sync_obsw_Pulse();

/*----------------------------------------------------
-- Protected Provided Interface "Start_work"
----------------------------------------------------*/
void sync_obsw_Start_work(void *, size_t);

/* ------------------------------------------------------
--  Synchronous Required Interface "Compute_Thrust"
------------------------------------------------------ */
void vm_obsw_Compute_Thrust(void *F, size_t F_len, void *, size_t *, void *, size_t *);
/* ------------------------------------------------------
--  Asynchronous Required Interface "Thrust_Update"
------------------------------------------------------ */
void vm_async_obsw_Thrust_Update(void *H, size_t H_len);
/* ------------------------------------------------------
--  Asynchronous Required Interface "dHeight"
------------------------------------------------------ */
void vm_async_obsw_dHeight(void *dH, size_t dH_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_obsw_check_queue(void *, size_t *);
#endif
