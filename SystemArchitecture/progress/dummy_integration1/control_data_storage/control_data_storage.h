/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_control_data_storage__
#define __USER_CODE_H_control_data_storage__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void control_data_storage_startup();

void control_data_storage_PI_get_control_data(asn1SccDroneControllerInput *);

void control_data_storage_PI_calculate_control_input(const asn1SccTrajectory *,
                                                     const asn1SccWorldData *);

extern void control_data_storage_RI_calculate_and_store_control_input(const asn1SccTrajectory *,
                                                                      const asn1SccWorldData *,
                                                                      asn1SccDroneControllerInput *);

#ifdef __cplusplus
}
#endif


#endif