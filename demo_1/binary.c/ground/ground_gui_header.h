/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef _ground_GUI_HEADER_H
#define _ground_GUI_HEADER_H


#include <stdlib.h>
#include <stdio.h>

#include "C_ASN1_Types.h"

#include "ground_enums_def.h"


void ground_startup();

typedef struct
{
	asn1SccMyReal h;
} T_Height__data;

typedef struct
{
	T_ground_PI_list	message_identifier;
	T_Height__data	message;
} T_Height_message;


typedef struct
{
	asn1SccMyReal Ref_h;
} T_Takeoff__data;

typedef struct
{
	T_ground_RI_list	message_identifier;
	T_Takeoff__data	message;
} T_Takeoff_message;


void ground_RI_Takeoff(const asn1SccMyReal *);

#define INVOKE_RI_Takeoff(params) ground_RI_Takeoff(&((T_Takeoff__data*)params)->Ref_h);

void ground_PI_gui_polling_ground();

void ground_PI_Height(const asn1SccMyReal* h);



#endif
