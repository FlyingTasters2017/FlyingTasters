#include <stdio.h>

#include "PrintTypesAsASN1.h"

#ifdef __linux__
#include <pthread.h>

static pthread_mutex_t g_printing_mutex = PTHREAD_MUTEX_INITIALIZER;

#endif

void PrintASN1MySeq(const char *paramName, const asn1SccMySeq *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MySeq ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("input-data ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).input_data);
    #else
    printf("%d", (*pData).input_data);
    #endif
    printf(", ");
    printf("output-data ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).output_data);
    #else
    printf("%d", (*pData).output_data);
    #endif
    printf(", ");
    printf("validity ");
    switch((*pData).validity) {
    case 0:
        printf("valid");
        break;
    case 1:
        printf("invalid");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).validity)");
    }
    printf("}");
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MyBool(const char *paramName, const asn1SccMyBool *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MyBool ::= ", paramName);
    printf("%s ", paramName);
    printf("%s", (int)(*pData)?"TRUE":"FALSE");
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Boolean(const char *paramName, const asn1SccT_Boolean *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s T-Boolean ::= ", paramName);
    printf("%s ", paramName);
    printf("%s", (int)(*pData)?"TRUE":"FALSE");
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MyOctStr(const char *paramName, const asn1SccMyOctStr *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MyOctStr ::= ", paramName);
    printf("%s ", paramName);
    {
        int i;
        printf("'");
        for(i=0; i<3; i++)
            printf("%02x", (*pData).arr[i]);
        printf("'H");
    }

#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MyChoice(const char *paramName, const asn1SccMyChoice *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MyChoice ::= ", paramName);
    printf("%s ", paramName);
    if ((*pData).kind == a_PRESENT) {
        printf("a:");
        printf("%s", (int)(*pData).u.a?"TRUE":"FALSE");
    }
    else if ((*pData).kind == b_PRESENT) {
        printf("b:");
        printf("{");
        printf("input-data ");
        #if WORD_SIZE==8
        printf("%lld", (*pData).u.b.input_data);
        #else
        printf("%d", (*pData).u.b.input_data);
        #endif
        printf(", ");
        printf("output-data ");
        #if WORD_SIZE==8
        printf("%lld", (*pData).u.b.output_data);
        #else
        printf("%d", (*pData).u.b.output_data);
        #endif
        printf(", ");
        printf("validity ");
        switch((*pData).u.b.validity) {
        case 0:
            printf("valid");
            break;
        case 1:
            printf("invalid");
            break;
        default:
            printf("Invalid value in ENUMERATED ((*pData).u.b.validity)");
        }
        printf("}");
    }
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MySeqOf(const char *paramName, const asn1SccMySeqOf *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MySeqOf ::= ", paramName);
    printf("%s ", paramName);
    {
        int i1;
        printf("{");
        for(i1=0; i1<2; i1++) {
            if (i1) 
                printf(",");
            switch((*pData).arr[i1]) {
            case 0:
                printf("hello");
                break;
            case 1:
                printf("world");
                break;
            case 2:
                printf("howareyou");
                break;
            default:
                printf("Invalid value in ENUMERATED ((*pData).arr[i1])");
            }
        }
        printf("}");
    }
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Int8(const char *paramName, const asn1SccT_Int8 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s T-Int8 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MyReal(const char *paramName, const asn1SccMyReal *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MyReal ::= ", paramName);
    printf("%s ", paramName);
    printf("%f", (*pData));
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MyEnum(const char *paramName, const asn1SccMyEnum *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MyEnum ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("hello");
        break;
    case 1:
        printf("world");
        break;
    case 2:
        printf("howareyou");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Int32(const char *paramName, const asn1SccT_Int32 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s T-Int32 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1MyInteger(const char *paramName, const asn1SccMyInteger *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s MyInteger ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_UInt32(const char *paramName, const asn1SccT_UInt32 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s T-UInt32 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_UInt8(const char *paramName, const asn1SccT_UInt8 *pData)
{
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
    //printf("%s T-UInt8 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

