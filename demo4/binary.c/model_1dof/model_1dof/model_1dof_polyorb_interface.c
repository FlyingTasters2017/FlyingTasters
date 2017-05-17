/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "model_1dof_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "model_1dof_vm_if.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "Compute_Thrust"
----------------------------------------------------*/
void sync_model_1dof_Compute_Thrust(void *F, size_t F_len, void *h, size_t *h_len, void *dh, size_t *dh_len)
{
	model_1dof_Compute_Thrust(F, F_len, h, h_len, dh, dh_len);
}

