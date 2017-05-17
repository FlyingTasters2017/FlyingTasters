/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "obsw_polyorb_interface.h"

void obsw_RI_GetHeight(const asn1SccMyReal *IN_Height)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: GetHeight::MyReal::Height", IN_Height);
        }
        printf ("\nINNER: obsw,ground,GetHeight,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_Height[asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING] = {0};
    int size_IN_buf_Height=0;

    /* Encode each input parameter */
    size_IN_buf_Height = Encode_UPER_MyReal(IN_buf_Height, asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING, IN_Height);
    if (-1 == size_IN_buf_Height) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_GetHeight!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_obsw_GetHeight(void *, size_t);

    vm_async_obsw_GetHeight(IN_buf_Height, size_IN_buf_Height);

}

void obsw_RI_Compute_Force(const asn1SccMyReal *IN_ReferenceHeight, const asn1SccMyReal *IN_HeightVelocity, const asn1SccMyReal *IN_Height, asn1SccMyReal *OUT_Force)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Compute_Force::MyReal::ReferenceHeight", IN_ReferenceHeight);
        }
        {
            PrintASN1MyReal ("INNERDATA: Compute_Force::MyReal::HeightVelocity", IN_HeightVelocity);
        }
        {
            PrintASN1MyReal ("INNERDATA: Compute_Force::MyReal::Height", IN_Height);
        }
        printf ("\nINNER: obsw,controller,Compute_Force,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_ReferenceHeight[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_ReferenceHeight=0;
    static char IN_buf_HeightVelocity[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_HeightVelocity=0;
    static char IN_buf_Height[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_Height=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_Force[sizeof(asn1SccMyReal)];
    int size_OUT_buf_Force=0;

    /* Encode each input parameter */
    size_IN_buf_ReferenceHeight = Encode_NATIVE_MyReal(IN_buf_ReferenceHeight, sizeof(asn1SccMyReal), IN_ReferenceHeight);
    if (-1 == size_IN_buf_ReferenceHeight) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_Force!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }
    size_IN_buf_HeightVelocity = Encode_NATIVE_MyReal(IN_buf_HeightVelocity, sizeof(asn1SccMyReal), IN_HeightVelocity);
    if (-1 == size_IN_buf_HeightVelocity) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_Force!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }
    size_IN_buf_Height = Encode_NATIVE_MyReal(IN_buf_Height, sizeof(asn1SccMyReal), IN_Height);
    if (-1 == size_IN_buf_Height) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_Force!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_obsw_Compute_Force(void *, size_t, void *, size_t, void *, size_t, void *, size_t *);

    vm_obsw_Compute_Force(IN_buf_ReferenceHeight, size_IN_buf_ReferenceHeight, IN_buf_HeightVelocity, size_IN_buf_HeightVelocity, IN_buf_Height, size_IN_buf_Height, OUT_buf_Force, &size_OUT_buf_Force);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyReal(OUT_Force, OUT_buf_Force, size_OUT_buf_Force)) {
#ifdef __unix__
        printf("\nError Decoding MyReal\n");
#endif
        return;
    }

}

void obsw_RI_Response(const asn1SccMyReal *IN_Force, asn1SccMyReal *OUT_HeightVelocity, asn1SccMyReal *OUT_Height)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Response::MyReal::Force", IN_Force);
        }
        printf ("\nINNER: obsw,drone_model,Response,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_Force[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_Force=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_HeightVelocity[sizeof(asn1SccMyReal)];
    int size_OUT_buf_HeightVelocity=0;
    static char OUT_buf_Height[sizeof(asn1SccMyReal)];
    int size_OUT_buf_Height=0;

    /* Encode each input parameter */
    size_IN_buf_Force = Encode_NATIVE_MyReal(IN_buf_Force, sizeof(asn1SccMyReal), IN_Force);
    if (-1 == size_IN_buf_Force) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Response!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_obsw_Response(void *, size_t, void *, size_t *, void *, size_t *);

    vm_obsw_Response(IN_buf_Force, size_IN_buf_Force, OUT_buf_HeightVelocity, &size_OUT_buf_HeightVelocity, OUT_buf_Height, &size_OUT_buf_Height);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyReal(OUT_HeightVelocity, OUT_buf_HeightVelocity, size_OUT_buf_HeightVelocity)) {
#ifdef __unix__
        printf("\nError Decoding MyReal\n");
#endif
        return;
    }

    if (0 != Decode_NATIVE_MyReal(OUT_Height, OUT_buf_Height, size_OUT_buf_Height)) {
#ifdef __unix__
        printf("\nError Decoding MyReal\n");
#endif
        return;
    }

}

void obsw_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: obsw,x86_partition_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    int size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_obsw_check_queue(void *, size_t *);

    vm_obsw_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

