/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "obsw_polyorb_interface.h"

void obsw_RI_Compute_PWM(const asn1SccMyTrajectory *IN_Trajectory, const asn1SccMyStates *IN_States, asn1SccMyPWM *OUT_PWM)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyTrajectory ("INNERDATA: Compute_PWM::MyTrajectory::Trajectory", IN_Trajectory);
        }
        {
            PrintASN1MyStates ("INNERDATA: Compute_PWM::MyStates::States", IN_States);
        }
        printf ("\nINNER: obsw,controller,Compute_PWM,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_Trajectory[sizeof(asn1SccMyTrajectory)] = {0};
    int size_IN_buf_Trajectory=0;
    static char IN_buf_States[sizeof(asn1SccMyStates)] = {0};
    int size_IN_buf_States=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_PWM[sizeof(asn1SccMyPWM)];
    int size_OUT_buf_PWM=0;

    /* Encode each input parameter */
    size_IN_buf_Trajectory = Encode_NATIVE_MyTrajectory(IN_buf_Trajectory, sizeof(asn1SccMyTrajectory), IN_Trajectory);
    if (-1 == size_IN_buf_Trajectory) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_PWM!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }
    size_IN_buf_States = Encode_NATIVE_MyStates(IN_buf_States, sizeof(asn1SccMyStates), IN_States);
    if (-1 == size_IN_buf_States) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Compute_PWM!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_obsw_Compute_PWM(void *, size_t, void *, size_t, void *, size_t *);

    vm_obsw_Compute_PWM(IN_buf_Trajectory, size_IN_buf_Trajectory, IN_buf_States, size_IN_buf_States, OUT_buf_PWM, &size_OUT_buf_PWM);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyPWM(OUT_PWM, OUT_buf_PWM, size_OUT_buf_PWM)) {
#ifdef __unix__
        printf("\nError Decoding MyPWM\n");
#endif
        return;
    }

}

void obsw_RI_Respond_state(const asn1SccMyPWM *IN_PWM, asn1SccMyStates *OUT_States)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyPWM ("INNERDATA: Respond_state::MyPWM::PWM", IN_PWM);
        }
        printf ("\nINNER: obsw,drone_model,Respond_state,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_PWM[sizeof(asn1SccMyPWM)] = {0};
    int size_IN_buf_PWM=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_States[sizeof(asn1SccMyStates)];
    int size_OUT_buf_States=0;

    /* Encode each input parameter */
    size_IN_buf_PWM = Encode_NATIVE_MyPWM(IN_buf_PWM, sizeof(asn1SccMyPWM), IN_PWM);
    if (-1 == size_IN_buf_PWM) {
#ifdef __unix__
        printf ("** Encoding error in obsw_RI_Respond_state!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_obsw_Respond_state(void *, size_t, void *, size_t *);

    vm_obsw_Respond_state(IN_buf_PWM, size_IN_buf_PWM, OUT_buf_States, &size_OUT_buf_States);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyStates(OUT_States, OUT_buf_States, size_OUT_buf_States)) {
#ifdef __unix__
        printf("\nError Decoding MyStates\n");
#endif
        return;
    }

}

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
    static char IN_buf_Height[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_Height=0;

    /* Encode each input parameter */
    size_IN_buf_Height = Encode_NATIVE_MyReal(IN_buf_Height, sizeof(asn1SccMyReal), IN_Height);
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

