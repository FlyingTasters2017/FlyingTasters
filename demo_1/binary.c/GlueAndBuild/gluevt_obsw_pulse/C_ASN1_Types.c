#include <stdio.h>
#include <string.h>

#include <assert.h>

#include "C_ASN1_Types.h"

#ifdef __NEED_T_UInt8_UPER
size_t Encode_UPER_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt8_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-UInt8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt8_ACN
size_t Encode_ACN_T_UInt8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt8 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt8_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-UInt8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt8_NATIVE
size_t Encode_NATIVE_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_UInt8) );
    return sizeof(asn1SccT_UInt8);
}
#endif

#ifdef __NEED_T_UInt8_UPER
int Decode_UPER_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt8_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-UInt8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt8_ACN
int Decode_ACN_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt8_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-UInt8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Decode_NATIVE_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccT_UInt8 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Boolean_UPER
size_t Encode_UPER_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Boolean_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-Boolean (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Boolean_ACN
size_t Encode_ACN_T_Boolean(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Boolean *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Boolean_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-Boolean (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Boolean_NATIVE
size_t Encode_NATIVE_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Boolean) );
    return sizeof(asn1SccT_Boolean);
}
#endif

#ifdef __NEED_T_Boolean_UPER
int Decode_UPER_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Boolean_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-Boolean (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_Boolean_ACN
int Decode_ACN_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Boolean_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-Boolean (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Decode_NATIVE_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccT_Boolean *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MySeqOf_UPER
size_t Encode_UPER_MySeqOf(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeqOf *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMySeqOf_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MySeqOf (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MySeqOf_ACN
size_t Encode_ACN_MySeqOf(void *pBuffer, size_t iMaxBufferSize, asn1SccMySeqOf *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMySeqOf_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MySeqOf (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MySeqOf_NATIVE
size_t Encode_NATIVE_MySeqOf(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeqOf *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMySeqOf) );
    return sizeof(asn1SccMySeqOf);
}
#endif

#ifdef __NEED_MySeqOf_UPER
int Decode_UPER_MySeqOf(asn1SccMySeqOf *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMySeqOf_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MySeqOf (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MySeqOf_ACN
int Decode_ACN_MySeqOf(asn1SccMySeqOf *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMySeqOf_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MySeqOf (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MySeqOf_NATIVE
int Decode_NATIVE_MySeqOf(asn1SccMySeqOf *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMySeqOf *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Int8_UPER
size_t Encode_UPER_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int8_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-Int8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int8_ACN
size_t Encode_ACN_T_Int8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int8 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int8_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-Int8 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int8_NATIVE
size_t Encode_NATIVE_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Int8) );
    return sizeof(asn1SccT_Int8);
}
#endif

#ifdef __NEED_T_Int8_UPER
int Decode_UPER_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int8_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-Int8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int8_ACN
int Decode_ACN_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int8_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-Int8 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int8_NATIVE
int Decode_NATIVE_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccT_Int8 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MyBool_UPER
size_t Encode_UPER_MyBool(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyBool *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyBool_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyBool (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyBool_ACN
size_t Encode_ACN_MyBool(void *pBuffer, size_t iMaxBufferSize, asn1SccMyBool *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyBool_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyBool (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyBool_NATIVE
size_t Encode_NATIVE_MyBool(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyBool *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMyBool) );
    return sizeof(asn1SccMyBool);
}
#endif

#ifdef __NEED_MyBool_UPER
int Decode_UPER_MyBool(asn1SccMyBool *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyBool_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyBool (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyBool_ACN
int Decode_ACN_MyBool(asn1SccMyBool *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyBool_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyBool (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyBool_NATIVE
int Decode_NATIVE_MyBool(asn1SccMyBool *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMyBool *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MyEnum_UPER
size_t Encode_UPER_MyEnum(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyEnum *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyEnum_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyEnum (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyEnum_ACN
size_t Encode_ACN_MyEnum(void *pBuffer, size_t iMaxBufferSize, asn1SccMyEnum *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyEnum_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyEnum (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyEnum_NATIVE
size_t Encode_NATIVE_MyEnum(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyEnum *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMyEnum) );
    return sizeof(asn1SccMyEnum);
}
#endif

#ifdef __NEED_MyEnum_UPER
int Decode_UPER_MyEnum(asn1SccMyEnum *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyEnum_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyEnum (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyEnum_ACN
int Decode_ACN_MyEnum(asn1SccMyEnum *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyEnum_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyEnum (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyEnum_NATIVE
int Decode_NATIVE_MyEnum(asn1SccMyEnum *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMyEnum *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MySeq_UPER
size_t Encode_UPER_MySeq(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeq *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMySeq_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MySeq (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MySeq_ACN
size_t Encode_ACN_MySeq(void *pBuffer, size_t iMaxBufferSize, asn1SccMySeq *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMySeq_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MySeq (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MySeq_NATIVE
size_t Encode_NATIVE_MySeq(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeq *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMySeq) );
    return sizeof(asn1SccMySeq);
}
#endif

#ifdef __NEED_MySeq_UPER
int Decode_UPER_MySeq(asn1SccMySeq *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMySeq_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MySeq (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MySeq_ACN
int Decode_ACN_MySeq(asn1SccMySeq *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMySeq_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MySeq (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MySeq_NATIVE
int Decode_NATIVE_MySeq(asn1SccMySeq *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMySeq *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_UInt32_UPER
size_t Encode_UPER_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt32_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-UInt32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt32_ACN
size_t Encode_ACN_T_UInt32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt32 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_UInt32_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-UInt32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_UInt32_NATIVE
size_t Encode_NATIVE_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_UInt32) );
    return sizeof(asn1SccT_UInt32);
}
#endif

#ifdef __NEED_T_UInt32_UPER
int Decode_UPER_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt32_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-UInt32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt32_ACN
int Decode_ACN_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_UInt32_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-UInt32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Decode_NATIVE_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccT_UInt32 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MyChoice_UPER
size_t Encode_UPER_MyChoice(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyChoice *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyChoice_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyChoice (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyChoice_ACN
size_t Encode_ACN_MyChoice(void *pBuffer, size_t iMaxBufferSize, asn1SccMyChoice *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyChoice_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyChoice (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyChoice_NATIVE
size_t Encode_NATIVE_MyChoice(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyChoice *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMyChoice) );
    return sizeof(asn1SccMyChoice);
}
#endif

#ifdef __NEED_MyChoice_UPER
int Decode_UPER_MyChoice(asn1SccMyChoice *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyChoice_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyChoice (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyChoice_ACN
int Decode_ACN_MyChoice(asn1SccMyChoice *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyChoice_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyChoice (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyChoice_NATIVE
int Decode_NATIVE_MyChoice(asn1SccMyChoice *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMyChoice *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_T_Int32_UPER
size_t Encode_UPER_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int32_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-Int32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int32_ACN
size_t Encode_ACN_T_Int32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int32 *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccT_Int32_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode T-Int32 (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_T_Int32_NATIVE
size_t Encode_NATIVE_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccT_Int32) );
    return sizeof(asn1SccT_Int32);
}
#endif

#ifdef __NEED_T_Int32_UPER
int Decode_UPER_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int32_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-Int32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int32_ACN
int Decode_ACN_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccT_Int32_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode T-Int32 (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_T_Int32_NATIVE
int Decode_NATIVE_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccT_Int32 *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MyOctStr_UPER
size_t Encode_UPER_MyOctStr(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyOctStr *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyOctStr_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyOctStr (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyOctStr_ACN
size_t Encode_ACN_MyOctStr(void *pBuffer, size_t iMaxBufferSize, asn1SccMyOctStr *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyOctStr_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyOctStr (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyOctStr_NATIVE
size_t Encode_NATIVE_MyOctStr(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyOctStr *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMyOctStr) );
    return sizeof(asn1SccMyOctStr);
}
#endif

#ifdef __NEED_MyOctStr_UPER
int Decode_UPER_MyOctStr(asn1SccMyOctStr *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyOctStr_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyOctStr (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyOctStr_ACN
int Decode_ACN_MyOctStr(asn1SccMyOctStr *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyOctStr_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyOctStr (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyOctStr_NATIVE
int Decode_NATIVE_MyOctStr(asn1SccMyOctStr *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMyOctStr *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MyInteger_UPER
size_t Encode_UPER_MyInteger(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyInteger *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyInteger_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyInteger (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyInteger_ACN
size_t Encode_ACN_MyInteger(void *pBuffer, size_t iMaxBufferSize, asn1SccMyInteger *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyInteger_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyInteger (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyInteger_NATIVE
size_t Encode_NATIVE_MyInteger(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyInteger *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMyInteger) );
    return sizeof(asn1SccMyInteger);
}
#endif

#ifdef __NEED_MyInteger_UPER
int Decode_UPER_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyInteger_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyInteger (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyInteger_ACN
int Decode_ACN_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyInteger_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyInteger (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyInteger_NATIVE
int Decode_NATIVE_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMyInteger *) pBuffer;
    {
        return 0;
    }
}
#endif

#ifdef __NEED_MyReal_UPER
size_t Encode_UPER_MyReal(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyReal *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyReal_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyReal (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyReal_ACN
size_t Encode_ACN_MyReal(void *pBuffer, size_t iMaxBufferSize, asn1SccMyReal *pSrc)
{
    int errorCode;
    STATIC BitStream strm;

    BitStream_Init(&strm, pBuffer, iMaxBufferSize);
    if (asn1SccMyReal_ACN_Encode(pSrc, &strm, &errorCode, TRUE) == FALSE) {
	fprintf(stderr, "Could not encode MyReal (at %s, %d), errorCode was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    } else {
        return BitStream_GetLength(&strm);
    }
}
#endif

#ifdef __NEED_MyReal_NATIVE
size_t Encode_NATIVE_MyReal(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyReal *pSrc)
{
    memcpy(pBuffer, pSrc, sizeof(asn1SccMyReal) );
    return sizeof(asn1SccMyReal);
}
#endif

#ifdef __NEED_MyReal_UPER
int Decode_UPER_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyReal_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyReal (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyReal_ACN
int Decode_ACN_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize)
{
    int errorCode;

    STATIC BitStream strm;

    BitStream_AttachBuffer(&strm, pBuffer, iBufferSize);

    if (asn1SccMyReal_ACN_Decode(pDst, &strm, &errorCode)) {
        /* Decoding succeeded */
        return 0;
    } else {
	fprintf(stderr, "Could not decode MyReal (at %s, %d), error code was %d\n", __FILE__, __LINE__, errorCode);
        return -1;
    }
}
#endif

#ifdef __NEED_MyReal_NATIVE
int Decode_NATIVE_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize)
{
    *pDst = *(asn1SccMyReal *) pBuffer;
    {
        return 0;
    }
}
#endif

