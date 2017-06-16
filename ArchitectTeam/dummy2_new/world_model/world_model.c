/* User code: This file will not be overwritten by TASTE. */

#include "world_model.h"

void world_model_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void world_model_PI_process_world_data(const asn1SccMyInteger *IN_raw_world_data,
                                       asn1SccMyInteger *OUT_processed_world_data)
{
    *OUT_processed_world_data    =   *IN_raw_world_data + 2;
}

