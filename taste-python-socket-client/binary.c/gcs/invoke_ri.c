/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "gcs_polyorb_interface.h"

void gcs_RI_takeoff(const asn1SccMyReal *IN_ref_thrust)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: takeoff::MyReal::ref_thrust", IN_ref_thrust);
        }
        printf ("\nINNER: gcs,supervisor,takeoff,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_ref_thrust[asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING] = {0};
    int size_IN_buf_ref_thrust=0;

    /* Encode each input parameter */
    size_IN_buf_ref_thrust = Encode_UPER_MyReal(IN_buf_ref_thrust, asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING, IN_ref_thrust);
    if (-1 == size_IN_buf_ref_thrust) {
#ifdef __unix__
        printf ("** Encoding error in gcs_RI_takeoff!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_gcs_takeoff(void *, size_t);

    vm_async_gcs_takeoff(IN_buf_ref_thrust, size_IN_buf_ref_thrust);

}

