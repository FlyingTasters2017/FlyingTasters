/* User code: This file will not be overwritten by TASTE. */

#include <stdio.h>

#include "function1.h"

void function1_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}



void function1_PI_TM_from_CF(const asn1SccTM_T *IN_tm_data)
{
    
    asn1SccTM_T tm_data = *IN_tm_data;
    function1_RI_TM_from_CF(&tm_data);

}


void function1_PI_TC_from_TASTE(const asn1SccTC_T *IN_tc_data){
    
    asn1SccTC_T tc_data = *IN_tc_data;
    function1_RI_TC_from_TASTE(&tc_data);
    
}
