/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_socketclient__
#define __USER_CODE_H_socketclient__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void socketclient_startup();

void socketclient_PI_readStabilizerSendThrust(const asn1SccMyDroneData *,
                                              asn1SccMySensorData *);

extern void socketclient_RI_controlAction(const asn1SccMyPositionData *,
                                          const asn1SccMySensorData *,
                                          asn1SccMyDroneData *);

extern void socketclient_RI_getPosition(asn1SccMyPositionData *);

#ifdef __cplusplus
}
#endif


#endif
