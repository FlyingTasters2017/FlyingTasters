/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "obsw_vm_if.h"

#include "C_ASN1_Types.h"

void init_obsw()
{
    static int init = 0;

    if (!init) {
        init = 1;
        extern void init_controller();
        init_controller();
        extern void init_drone_model();
        init_drone_model();
        extern void init_x86_partition_taste_api();
        init_x86_partition_taste_api();
    }
    /* Calling Ada initialization code */
    adainit();
}

void obsw_Takeoff (void *pmy_Trajectory, size_t size_my_Trajectory)
{
    /* Decoded input variable(s): developer can use them */
    static asn1SccMyTrajectory IN_Trajectory;

#ifdef __unix__
    asn1SccMyTrajectory_Initialize(&IN_Trajectory);
#endif

    /* Decode each input parameter */
    if (0 != Decode_UPER_MyTrajectory (&IN_Trajectory, pmy_Trajectory, size_my_Trajectory)) {
        #ifdef __unix__
            printf("\nError Decoding MyTrajectory\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    obsw_PI_Takeoff (&IN_Trajectory);

}
void obsw_Pulse ()
{
    /* Call to User-defined function */
    obsw_PI_Pulse ();

}
