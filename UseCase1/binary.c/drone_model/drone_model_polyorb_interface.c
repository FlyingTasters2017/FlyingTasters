/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "drone_model_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "drone_model_vm_if.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "Response"
----------------------------------------------------*/
void sync_drone_model_Response(void *Force, size_t Force_len, void *HeightVelocity, size_t *HeightVelocity_len, void *Height, size_t *Height_len)
{
	drone_model_Response(Force, Force_len, HeightVelocity, HeightVelocity_len, Height, Height_len);
}

