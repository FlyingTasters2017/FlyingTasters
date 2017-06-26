/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_pixycam__
#define __USER_CODE_H_pixycam__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void pixycam_startup();

void pixycam_PI_pulse(const asn1SccMyInteger *);

void pixycam_PI_startStop(const asn1SccMyInteger *);

extern void pixycam_RI_readStabilizerSendThrust(const asn1SccMyDroneData *,
                                                asn1SccMySensorData *);

extern void pixycam_RI_takeoff(asn1SccMyDroneData *);

extern void pixycam_RI_printTime();

extern void pixycam_RI_processData(const asn1SccT_UInt32 *,
                                   const asn1SccT_UInt32 *);

#ifdef __cplusplus
}
#endif


#endif
