/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "supervisor_polyorb_interface.h"

void supervisor_RI_readStabilizerSendThrust(const asn1SccMyReal *IN_ref_thrust, asn1SccMyReal *OUT_updated_thrust)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: readStabilizerSendThrust::MyReal::ref_thrust", IN_ref_thrust);
        }
        printf ("\nINNER: supervisor,socketclient,readStabilizerSendThrust,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_ref_thrust[sizeof(asn1SccMyReal)] = {0};
    int size_IN_buf_ref_thrust=0;

    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_updated_thrust[sizeof(asn1SccMyReal)];
    int size_OUT_buf_updated_thrust=0;

    /* Encode each input parameter */
    size_IN_buf_ref_thrust = Encode_NATIVE_MyReal(IN_buf_ref_thrust, sizeof(asn1SccMyReal), IN_ref_thrust);
    if (-1 == size_IN_buf_ref_thrust) {
#ifdef __unix__
        printf ("** Encoding error in supervisor_RI_readStabilizerSendThrust!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_supervisor_readStabilizerSendThrust(void *, size_t, void *, size_t *);

    vm_supervisor_readStabilizerSendThrust(IN_buf_ref_thrust, size_IN_buf_ref_thrust, OUT_buf_updated_thrust, &size_OUT_buf_updated_thrust);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_MyReal(OUT_updated_thrust, OUT_buf_updated_thrust, size_OUT_buf_updated_thrust)) {
#ifdef __unix__
        printf("\nError Decoding MyReal\n");
#endif
        return;
    }

}

void supervisor_RI_SensorData(const asn1SccMyReal *IN_updated_thrust)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1MyReal ("INNERDATA: SensorData::MyReal::updated_thrust", IN_updated_thrust);
        }
        printf ("\nINNER: supervisor,gcs,SensorData,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_updated_thrust[asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING] = {0};
    int size_IN_buf_updated_thrust=0;

    /* Encode each input parameter */
    size_IN_buf_updated_thrust = Encode_UPER_MyReal(IN_buf_updated_thrust, asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING, IN_updated_thrust);
    if (-1 == size_IN_buf_updated_thrust) {
#ifdef __unix__
        printf ("** Encoding error in supervisor_RI_SensorData!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_async_supervisor_SensorData(void *, size_t);

    vm_async_supervisor_SensorData(IN_buf_updated_thrust, size_IN_buf_updated_thrust);

}

void supervisor_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: supervisor,x86_partition_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    int size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_supervisor_check_queue(void *, size_t *);

    vm_supervisor_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

