/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_control_laws__
#define __USER_CODE_H_control_laws__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void control_laws_startup();

void control_laws_PI_Get_IMU_Data(const asn1SccMyGyroVal *,
                                  const asn1SccMyGyroVal *,
                                  const asn1SccMyGyroVal *,
                                  const asn1SccMyAccVal *,
                                  const asn1SccMyAccVal *,
                                  const asn1SccMyAccVal *);

extern void control_laws_RI_Land();

extern void control_laws_RI_Take_Off(const asn1SccT_UInt32 *);

#ifdef __cplusplus
}
#endif


#endif
