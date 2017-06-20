/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_ms_communication__
#define __USER_CODE_H_ms_communication__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void ms_communication_startup();

void ms_communication_PI_get_raw_MSD();

extern void ms_communication_RI_process_MSD(const asn1SccT_UInt32 *,
                                            const asn1SccT_UInt32 *,
                                            const asn1SccMyInteger *);

#ifdef __cplusplus
}
#endif


#endif
