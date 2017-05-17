/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "controller_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "controller_vm_if.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "Compute_Force"
----------------------------------------------------*/
void sync_controller_Compute_Force(void *ReferenceHeight, size_t ReferenceHeight_len, void *HeightVelocity, size_t HeightVelocity_len, void *Height, size_t Height_len, void *Force, size_t *Force_len)
{
	controller_Compute_Force(ReferenceHeight, ReferenceHeight_len, HeightVelocity, HeightVelocity_len, Height, Height_len, Force, Force_len);
}

