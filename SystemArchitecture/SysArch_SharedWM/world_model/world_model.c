/* User code: This file will not be overwritten by TASTE. */

#include "world_model.h"

asn1SccMyInteger latest_asd_estimate;
asn1SccMyInteger latest_msd_estimate;
asn1SccMyInteger latest_control_input;

void world_model_startup()
{
    latest_asd_estimate     =   0;
    latest_msd_estimate     =   0;
    latest_control_input    =   0;
}


void world_model_PI_store_MSD(const asn1SccMyInteger *IN_processed_msd)
{
    latest_msd_estimate     =   *IN_processed_msd;
}

void world_model_PI_store_ASD(const asn1SccMyInteger *IN_processed_asd)
{
    latest_asd_estimate     =   *IN_processed_asd;
}

void world_model_PI_store_control_data(const asn1SccMyInteger *IN_control_input)
{
    latest_control_input     =   *IN_control_input;
}

void world_model_PI_update_world_data(asn1SccMyInteger *OUT_processed_world_data)
{
    *OUT_processed_world_data   =   latest_asd_estimate+latest_msd_estimate+latest_control_input;
}
