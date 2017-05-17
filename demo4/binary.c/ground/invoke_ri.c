/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "ground_polyorb_interface.h"

void ground_RI_Start_work(const asn1SccMyReal *IN_Int_F)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Start_work::MyReal::Int_F", IN_Int_F);
        }
        printf ("\nINNER: ground,obsw,Start_work,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_Int_F[asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING] = {0};
    int size_IN_buf_Int_F=0;

    /* Encode each input parameter */
    size_IN_buf_Int_F = Encode_UPER_MyReal(IN_buf_Int_F, asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING, IN_Int_F);
    if (-1 == size_IN_buf_Int_F) {
#ifdef __unix__
        printf ("** Encoding error in ground_RI_Start_work!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_ground_Start_work(void *, size_t);

    vm_async_ground_Start_work(IN_buf_Int_F, size_IN_buf_Int_F);

}

