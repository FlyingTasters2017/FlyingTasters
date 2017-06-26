/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_pixycam__
#define __USER_CODE_H_pixycam__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void pixycam_startup();

void pixycam_PI_pulse();

extern void pixycam_RI_readStabilizerSendThrust(const asn1SccMyDroneData *,
                                                const asn1SccMyPositionData *,
                                                asn1SccMySensorData *);

extern void pixycam_RI_takeoff(asn1SccMyDroneData *);

extern void pixycam_RI_printTime();

extern void pixycam_RI_processData(const asn1SccMyPositionData *,
                                   asn1SccMyPositionData *);

#ifdef __cplusplus
}
#endif


#endif
