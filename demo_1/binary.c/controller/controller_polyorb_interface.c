/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "controller_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "controller_vm_if.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "Compute_Input"
----------------------------------------------------*/
void sync_controller_Compute_Input(void *Ref_h, size_t Ref_h_len, void *dh, size_t dh_len, void *h, size_t h_len, void *F, size_t *F_len)
{
	controller_Compute_Input(Ref_h, Ref_h_len, dh, dh_len, h, h_len, F, F_len);
}

