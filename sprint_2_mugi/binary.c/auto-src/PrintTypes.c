#ifdef __unix__
#include <stdio.h>
#endif
#include "PrintTypes.h"

#ifdef __linux__
#include <pthread.h>

static pthread_mutex_t g_printing_mutex = PTHREAD_MUTEX_INITIALIZER;

#endif

void PrintT_UInt32(const char *paramName, const asn1SccT_UInt32 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyEnum(const char *paramName, const asn1SccMyEnum *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyChoice(const char *paramName, const asn1SccMyChoice *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    if ((*pData).kind == a_PRESENT) {
        printf("%s::a %d\n", paramName, (int)(*pData).u.a);
    }
    else if ((*pData).kind == b_PRESENT) {
        #if WORD_SIZE==8
        printf("%s::b::input_data %lld\n", paramName, (*pData).u.b.input_data);
        #else
        printf("%s::b::input_data %d\n", paramName, (*pData).u.b.input_data);
        #endif
        #if WORD_SIZE==8
        printf("%s::b::output_data %lld\n", paramName, (*pData).u.b.output_data);
        #else
        printf("%s::b::output_data %d\n", paramName, (*pData).u.b.output_data);
        #endif
        printf("%s::b::validity %d\n", paramName, (int)(*pData).u.b.validity);
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyStates(const char *paramName, const asn1SccMyStates *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::x %f\n", paramName, (*pData).x);
    printf("%s::y %f\n", paramName, (*pData).y);
    printf("%s::z %f\n", paramName, (*pData).z);
    printf("%s::yaw %f\n", paramName, (*pData).yaw);
    printf("%s::pitch %f\n", paramName, (*pData).pitch);
    printf("%s::roll %f\n", paramName, (*pData).roll);
    printf("%s::dx %f\n", paramName, (*pData).dx);
    printf("%s::dy %f\n", paramName, (*pData).dy);
    printf("%s::dz %f\n", paramName, (*pData).dz);
    printf("%s::dyaw %f\n", paramName, (*pData).dyaw);
    printf("%s::dpitch %f\n", paramName, (*pData).dpitch);
    printf("%s::droll %f\n", paramName, (*pData).droll);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Boolean(const char *paramName, const asn1SccT_Boolean *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyReal(const char *paramName, const asn1SccMyReal *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %f\n", paramName, (*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyBool(const char *paramName, const asn1SccMyBool *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s %d\n", paramName, (int)(*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyTrajectory(const char *paramName, const asn1SccMyTrajectory *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::x %f\n", paramName, (*pData).x);
    printf("%s::y %f\n", paramName, (*pData).y);
    printf("%s::z %f\n", paramName, (*pData).z);
    printf("%s::yaw %f\n", paramName, (*pData).yaw);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyOctStr(const char *paramName, const asn1SccMyOctStr *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i;
        printf("%s ", paramName);
        for(i=0; i<3; i++)
            printf("%c", (*pData).arr[i]);
        printf("\n");
    }

#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Int32(const char *paramName, const asn1SccT_Int32 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMySeqOf(const char *paramName, const asn1SccMySeqOf *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    {
        int i1;
        for(i1=0; i1<2; i1++) {
            printf("%s::Elem %d\n", paramName, (int)(*pData).arr[i1]);
        }
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyPWM(const char *paramName, const asn1SccMyPWM *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    printf("%s::pwm1 %f\n", paramName, (*pData).pwm1);
    printf("%s::pwm2 %f\n", paramName, (*pData).pwm2);
    printf("%s::pwm3 %f\n", paramName, (*pData).pwm3);
    printf("%s::pwm4 %f\n", paramName, (*pData).pwm4);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_Int8(const char *paramName, const asn1SccT_Int8 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMyInteger(const char *paramName, const asn1SccMyInteger *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintT_UInt8(const char *paramName, const asn1SccT_UInt8 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s %lld\n", paramName, (*pData));
    #else
    printf("%s %d\n", paramName, (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintMySeq(const char *paramName, const asn1SccMySeq *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    #if WORD_SIZE==8
    printf("%s::input_data %lld\n", paramName, (*pData).input_data);
    #else
    printf("%s::input_data %d\n", paramName, (*pData).input_data);
    #endif
    #if WORD_SIZE==8
    printf("%s::output_data %lld\n", paramName, (*pData).output_data);
    #else
    printf("%s::output_data %d\n", paramName, (*pData).output_data);
    #endif
    printf("%s::validity %d\n", paramName, (int)(*pData).validity);
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

