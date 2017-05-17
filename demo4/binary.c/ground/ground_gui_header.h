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
	asn1SccMyReal H;
} T_Thrust_Update__data;

typedef struct
{
	T_ground_PI_list	message_identifier;
	T_Thrust_Update__data	message;
} T_Thrust_Update_message;


typedef struct
{
	asn1SccMyReal Int_F;
} T_Start_work__data;

typedef struct
{
	T_ground_RI_list	message_identifier;
	T_Start_work__data	message;
} T_Start_work_message;


void ground_RI_Start_work(const asn1SccMyReal *);

#define INVOKE_RI_Start_work(params) ground_RI_Start_work(&((T_Start_work__data*)params)->Int_F);

typedef struct
{
	asn1SccMyReal dH;
} T_dHeight__data;

typedef struct
{
	T_ground_PI_list	message_identifier;
	T_dHeight__data	message;
} T_dHeight_message;


void ground_PI_gui_polling_ground();

void ground_PI_Thrust_Update(const asn1SccMyReal* H);

void ground_PI_dHeight(const asn1SccMyReal* dH);



#endif
