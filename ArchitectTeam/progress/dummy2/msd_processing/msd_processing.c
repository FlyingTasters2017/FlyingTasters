/* User code: This file will not be overwritten by TASTE. */

#include "msd_processing.h"

void msd_processing_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void msd_processing_PI_process_MSD(const asn1SccMyInteger *IN_raw_MSD,
                                   asn1SccMyInteger *OUT_processed_MSD)
{
    *OUT_processed_MSD   =   *IN_raw_MSD+1;
}

