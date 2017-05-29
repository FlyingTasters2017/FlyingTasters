/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef ground_POLYORB_INTERFACE
#define ground_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_ground_getheight/vt_ground_getheight_polyorb_interface.h"
#include "../../vt_ground_gui_polling_ground/vt_ground_gui_polling_ground_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "GetHeight"
----------------------------------------------------*/
void sync_ground_GetHeight(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff"
------------------------------------------------------ */
void vm_async_ground_Takeoff(void *Trajectory, size_t Trajectory_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_ground"
----------------------------------------------------*/
void sync_ground_gui_polling_ground();

#endif
