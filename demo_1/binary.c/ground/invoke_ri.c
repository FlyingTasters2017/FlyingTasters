/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "ground_polyorb_interface.h"

void ground_RI_Takeoff(const asn1SccMyReal *IN_Ref_H)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Takeoff::MyReal::Ref_H", IN_Ref_H);
        }
        printf ("\nINNER: ground,obsw,Takeoff,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_Ref_H[asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING] = {0};
    int size_IN_buf_Ref_H=0;

    /* Encode each input parameter */
    size_IN_buf_Ref_H = Encode_UPER_MyReal(IN_buf_Ref_H, asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING, IN_Ref_H);
    if (-1 == size_IN_buf_Ref_H) {
#ifdef __unix__
        printf ("** Encoding error in ground_RI_Takeoff!!\n");
#endif
        /* Major error, we must stop the application and let the FDIR/Watchdogs recover */
        exit (-1);
    }

    /* Call to VM callback function */
    extern void vm_async_ground_Takeoff(void *, size_t);

    vm_async_ground_Takeoff(IN_buf_Ref_H, size_IN_buf_Ref_H);

}

