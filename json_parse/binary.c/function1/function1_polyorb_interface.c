/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "function1_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "function1_vm_if.h"

/* ------------------------------------------------------
-- Asynchronous Provided Interface "pulse"
------------------------------------------------------ */
void po_hi_c_function1_pulse(__po_hi_task_id e)
{
	function1_pulse();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_function1_check_queue(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_function1_has_pending_msg(res, res_len);
}

