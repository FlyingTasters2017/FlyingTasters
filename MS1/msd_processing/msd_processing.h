/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_msd_processing__
#define __USER_CODE_H_msd_processing__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void msd_processing_startup();

void msd_processing_PI_process_MSD(const asn1SccT_UInt32 *,
                                   const asn1SccT_UInt32 *,
                                   const asn1SccMyInteger *);

extern void msd_processing_RI_display(const asn1SccMyReal *);

#ifdef __cplusplus
}
#endif


#endif
