/* User code: This file will not be overwritten by TASTE. */

#include "msd_storage.h"
#include <stdio.h>

asn1SccMyInteger internalData;

void msd_storage_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    
    internalData = 0;
}

void msd_storage_PI_get_MSD_storage(asn1SccMyInteger *OUT_msd_storage_data)
{
    //pthread_mutex_lock(&lock);
    
    *OUT_msd_storage_data = internalData;
    internalData = 0;
    
    //pthread_mutex_unlock(&lock);
}

void msd_storage_PI_store_MSD(const asn1SccMyInteger *IN_msd_data)
{
    //pthread_mutex_lock(&lock);
    
    printf("previous value %d\n",internalData);
    
    internalData = internalData + *IN_msd_data;     
    
    //pthread_mutex_unlock(&lock);
    
    printf("new value stored %d\n",internalData);
}
