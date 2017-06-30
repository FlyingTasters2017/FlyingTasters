/* User code: This file will not be overwritten by TASTE. */

#include "asd_processing.h"

void asd_processing_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void asd_processing_PI_process_MSD(const asn1SccMyInteger *IN_raw_ASD,
                                   asn1SccMyInteger *OUT_processed_ASD)
{
    *OUT_processed_ASD   =   *IN_raw_ASD+1;
}

