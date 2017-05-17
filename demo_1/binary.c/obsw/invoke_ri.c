/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "obsw_polyorb_interface.h"

void obsw_RI_Height(const asn1SccMyReal *IN_H)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Height::MyReal::H", IN_H);
        }
        printf ("\nINNER: obsw,ground,Height,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_H[asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING] = {0};
    int size_IN_buf_H=0;

    /* Encode each input parameter */
    size_IN_buf_H = Encode_UPER_MyReal(IN_buf_H, asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING, IN_H);
    if (-1 == size_IN_buf_H) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Height!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_obsw_Height(void *, size_t);

    vm_async_obsw_Height(IN_buf_H, size_IN_buf_H);

}

void obsw_RI_Compute_Input(const asn1SccMyReal *IN_Ref_h, const asn1SccMyReal *IN_dh, const asn1SccMyReal *IN_h, asn1SccMyReal *OUT_F)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Compute_Input::MyReal::Ref_h", IN_Ref_h);
        }
        {
            PrintASN1MyReal ("INNERDATA: Compute_Input::MyReal::dh", IN_dh);
        }
        {
            PrintASN1MyReal ("INNERDATA: Compute_Input::MyReal::h", IN_h);
        }
        printf ("\nINNER: obsw,controller,Compute_Input,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_Ref_h[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_Ref_h=0;
    static char IN_buf_dh[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_dh=0;
    static char IN_buf_h[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_h=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_F[sizeof(asn1SccMyReal)];
    int size_OUT_buf_F=0;

    /* Encode each input parameter */
    size_IN_buf_Ref_h = Encode_NATIVE_MyReal(IN_buf_Ref_h, sizeof(asn1SccMyReal), IN_Ref_h);
    if (-1 == size_IN_buf_Ref_h) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_Input!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }
    size_IN_buf_dh = Encode_NATIVE_MyReal(IN_buf_dh, sizeof(asn1SccMyReal), IN_dh);
    if (-1 == size_IN_buf_dh) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_Input!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }
    size_IN_buf_h = Encode_NATIVE_MyReal(IN_buf_h, sizeof(asn1SccMyReal), IN_h);
    if (-1 == size_IN_buf_h) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_Input!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_obsw_Compute_Input(void *, size_t, void *, size_t, void *, size_t, void *, size_t *);

    vm_obsw_Compute_Input(IN_buf_Ref_h, size_IN_buf_Ref_h, IN_buf_dh, size_IN_buf_dh, IN_buf_h, size_IN_buf_h, OUT_buf_F, &size_OUT_buf_F);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyReal(OUT_F, OUT_buf_F, size_OUT_buf_F)) {
#ifdef __unix__
        printf("\nError Decoding MyReal\n");
#endif
        return;
    }

}

void obsw_RI_Response(const asn1SccMyReal *IN_F, asn1SccMyReal *OUT_dh, asn1SccMyReal *OUT_h)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: Response::MyReal::F", IN_F);
        }
        printf ("\nINNER: obsw,drone_model,Response,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_F[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_F=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_dh[sizeof(asn1SccMyReal)];
    int size_OUT_buf_dh=0;
    static char OUT_buf_h[sizeof(asn1SccMyReal)];
    int size_OUT_buf_h=0;

    /* Encode each input parameter */
    size_IN_buf_F = Encode_NATIVE_MyReal(IN_buf_F, sizeof(asn1SccMyReal), IN_F);
    if (-1 == size_IN_buf_F) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Response!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_obsw_Response(void *, size_t, void *, size_t *, void *, size_t *);

    vm_obsw_Response(IN_buf_F, size_IN_buf_F, OUT_buf_dh, &size_OUT_buf_dh, OUT_buf_h, &size_OUT_buf_h);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyReal(OUT_dh, OUT_buf_dh, size_OUT_buf_dh)) {
#ifdef __unix__
        printf("\nError Decoding MyReal\n");
#endif
        return;
    }

    if (0 != Decode_NATIVE_MyReal(OUT_h, OUT_buf_h, size_OUT_buf_h)) {
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

