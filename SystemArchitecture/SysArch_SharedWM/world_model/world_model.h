/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_world_model__
#define __USER_CODE_H_world_model__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void world_model_startup();

void world_model_PI_update_world_data(asn1SccMyInteger *);

void world_model_PI_store_MSD(const asn1SccMyInteger *);

void world_model_PI_store_ASD(const asn1SccMyInteger *);

void world_model_PI_store_control_data(const asn1SccMyInteger *);

#ifdef __cplusplus
}
#endif


#endif
