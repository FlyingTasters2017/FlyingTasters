/* User code: This file will not be overwritten by TASTE. */

#include "asd_storage.h"
#include <stdio.h>

asn1SccMyInteger internalData;

void asd_storage_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
    
    internalData = 0;
}

void asd_storage_PI_get_ASD_storage(asn1SccMyInteger *OUT_asd_storage_data)
{
    //pthread_mutex_lock(&lock);
    
    *OUT_asd_storage_data = internalData;
    internalData = 0;
    
    //pthread_mutex_unlock(&lock);
}

void asd_storage_PI_store_ASD(const asn1SccMyInteger *IN_asd_data)
{
    //pthread_mutex_lock(&lock);
    
    printf("previous value ASD storage = %d\n",internalData);
    
    internalData = internalData + *IN_asd_data;     
    
    //pthread_mutex_unlock(&lock);
    
    printf("new value stored ASD storage = %d\n",internalData);
}




