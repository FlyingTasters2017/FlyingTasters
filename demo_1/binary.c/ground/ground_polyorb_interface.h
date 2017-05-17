/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef ground_POLYORB_INTERFACE
#define ground_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_ground_height/vt_ground_height_polyorb_interface.h"
#include "../../vt_ground_gui_polling_ground/vt_ground_gui_polling_ground_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "Height"
----------------------------------------------------*/
void sync_ground_Height(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "Takeoff"
------------------------------------------------------ */
void vm_async_ground_Takeoff(void *Ref_H, size_t Ref_H_len);
/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_ground"
----------------------------------------------------*/
void sync_ground_gui_polling_ground();

#endif
