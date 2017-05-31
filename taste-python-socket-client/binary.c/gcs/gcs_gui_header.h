/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef _gcs_GUI_HEADER_H
#define _gcs_GUI_HEADER_H


#include <stdlib.h>
#include <stdio.h>

#include "C_ASN1_Types.h"

#include "gcs_enums_def.h"


void gcs_startup();

typedef struct
{
	asn1SccMyReal updated_thrust;
} T_SensorData__data;

typedef struct
{
	T_gcs_PI_list	message_identifier;
	T_SensorData__data	message;
} T_SensorData_message;


typedef struct
{
	asn1SccMyReal ref_thrust;
} T_takeoff__data;

typedef struct
{
	T_gcs_RI_list	message_identifier;
	T_takeoff__data	message;
} T_takeoff_message;


void gcs_RI_takeoff(const asn1SccMyReal *);

#define INVOKE_RI_takeoff(params) gcs_RI_takeoff(&((T_takeoff__data*)params)->ref_thrust);

void gcs_PI_gui_polling_gcs();

void gcs_PI_SensorData(const asn1SccMyReal* updated_thrust);



#endif
