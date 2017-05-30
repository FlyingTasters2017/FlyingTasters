/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "supervisor_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_protected.h"

#include "po_hi_task.h"
#include "supervisor_vm_if.h"

/*----------------------------------------------------
-- Protected Provided Interface "pulse"
----------------------------------------------------*/
void sync_supervisor_pulse()
{
	extern process_package__taste_protected_object supervisor_protected;
	__po_hi_protected_lock (supervisor_protected.protected_id);
	supervisor_pulse();
	__po_hi_protected_unlock (supervisor_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "readStabilizerSendThrust"
------------------------------------------------------ */
void vm_supervisor_readStabilizerSendThrust(void *ref_thrust, size_t ref_thrust_len)
{
	sync_socketclient_readStabilizerSendThrust(ref_thrust, ref_thrust_len);
}

/*----------------------------------------------------
-- Protected Provided Interface "takeoff"
----------------------------------------------------*/
void sync_supervisor_takeoff(void *ref_thrust, size_t ref_thrust_len)
{
	extern process_package__taste_protected_object supervisor_protected;
	__po_hi_protected_lock (supervisor_protected.protected_id);
	supervisor_takeoff(ref_thrust, ref_thrust_len);
	__po_hi_protected_unlock (supervisor_protected.protected_id);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_supervisor_check_queue(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_supervisor_has_pending_msg(res, res_len);
}

