/* TASTE API */
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <deployment.h>

#include "x86_partition_taste_api.h"

extern int __po_hi_gqueue_get_count(int, int);

#ifdef __unix__
    #include <stdio.h>
#endif

void x86_partition_taste_api_startup()
{
    /* TASTE API start up */
    #ifdef __unix__
        debugCheckQ = getenv("CHECKQ_DEBUG");
    #endif
}

void x86_partition_taste_api_PI_obsw_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    *res = 0;
    if (__po_hi_gqueue_get_count(x86_partition_vt_obsw_start_work_k, vt_obsw_start_work_local_inport_artificial_start_work)) {
        *res = 1;
        #ifdef __unix__
            if (debugCheckQ) {
                printf ("[DEBUG] Pending message Start_work in function obsw\n");
            }
        #endif
    }
}

