/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef ground_POLYORB_INTERFACE
#define ground_POLYORB_INTERFACE
#include <stddef.h>

#include "types.h"
#include "deployment.h"
#include "po_hi_transport.h"
#include "../../vt_ground_thrust_update/vt_ground_thrust_update_polyorb_interface.h"
#include "../../vt_ground_dheight/vt_ground_dheight_polyorb_interface.h"
#include "../../vt_ground_gui_polling_ground/vt_ground_gui_polling_ground_polyorb_interface.h"
/*----------------------------------------------------
-- Protected Provided Interface "Thrust_Update"
----------------------------------------------------*/
void sync_ground_Thrust_Update(void *, size_t);

/* ------------------------------------------------------
--  Asynchronous Required Interface "Start_work"
------------------------------------------------------ */
void vm_async_ground_Start_work(void *Int_F, size_t Int_F_len);
/*----------------------------------------------------
-- Protected Provided Interface "dHeight"
----------------------------------------------------*/
void sync_ground_dHeight(void *, size_t);

/*----------------------------------------------------
-- Protected Provided Interface "gui_polling_ground"
----------------------------------------------------*/
void sync_ground_gui_polling_ground();

#endif
