/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef socketclient_POLYORB_INTERFACE
#define socketclient_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "readStabilizerSendThrust"
----------------------------------------------------*/
void po_hi_c_socketclient_readstabilizersendthrust(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_socketclient_check_queue(void *, size_t *);
#endif
