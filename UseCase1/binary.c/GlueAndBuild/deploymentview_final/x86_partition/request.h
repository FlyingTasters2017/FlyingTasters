#ifndef __OCARINA_GENERATED_REQUEST_H_
#define __OCARINA_GENERATED_REQUEST_H_ 
#include <types.h>
#include <deployment.h>
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

/*  Enumeration type for all the operations in the distributed application.*/

typedef struct
{
  __po_hi_port_t port;

  union
  {
    struct
    {
      dataview__myreal_buffer_impl vt_obsw_pulse_global_outport_getheight_vt;

    } vt_obsw_pulse_global_outport_getheight_vt;

    struct
    {
      dataview__myreal_buffer_impl vt_obsw_takeoff_global_inport_artificial_takeoff;

    } vt_obsw_takeoff_global_inport_artificial_takeoff;

    struct
    {
      dataview__myreal_buffer_impl vt_obsw_takeoff_global_outport_getheight_vt;

    } vt_obsw_takeoff_global_outport_getheight_vt;

    struct
    {
      dataview__myreal_buffer_impl vt_ground_getheight_global_inport_artificial_getheight;

    } vt_ground_getheight_global_inport_artificial_getheight;

    struct
    {
      dataview__myreal_buffer_impl vt_ground_getheight_global_outport_takeoff_vt;

    } vt_ground_getheight_global_outport_takeoff_vt;

    struct
    {
      dataview__myreal_buffer_impl vt_ground_gui_polling_ground_global_outport_takeoff_vt;

    } vt_ground_gui_polling_ground_global_outport_takeoff_vt;

  } vars;

} __po_hi_request_t;

#define __PO_HI_NB_OPERATIONS 0

#endif
