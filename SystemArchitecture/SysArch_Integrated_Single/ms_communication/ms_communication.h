/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_ms_communication__
#define __USER_CODE_H_ms_communication__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void ms_communication_startup();

void ms_communication_PI_enable_pixy_pass(const asn1SccMyInteger *);

extern void ms_communication_RI_put_raw_MSD(const asn1SccPixyData *);

#ifdef __cplusplus
}
#endif


#endif
