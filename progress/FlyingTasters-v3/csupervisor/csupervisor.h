/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_csupervisor__
#define __USER_CODE_H_csupervisor__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void csupervisor_startup();

extern void csupervisor_RI_takeoff(asn1SccMyDroneData *);

extern void csupervisor_RI_printTime();

extern void csupervisor_RI_rawdata();

extern void csupervisor_RI_readStabilizerSendThrust(const asn1SccMyDroneData *,
                                                    asn1SccMySensorData *);

void csupervisor_PI_pulse();

#ifdef __cplusplus
}
#endif


#endif
