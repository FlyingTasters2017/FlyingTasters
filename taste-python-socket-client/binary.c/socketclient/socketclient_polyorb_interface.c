/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "socketclient_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "socketclient_vm_if.h"

/* ------------------------------------------------------
-- Asynchronous Provided Interface "readStabilizerSendThrust"
------------------------------------------------------ */
void po_hi_c_socketclient_readstabilizersendthrust(__po_hi_task_id e)
{
	socketclient_readStabilizerSendThrust();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_socketclient_check_queue(void *res, size_t *res_len)
{
	sync_x86_partition_taste_api_socketclient_has_pending_msg(res, res_len);
}

