#ifndef __C_DATAVIEW_UNIQ_H__
#define __C_DATAVIEW_UNIQ_H__

#ifdef __unix__
#include <stdlib.h> /* for size_t */
#else
typedef unsigned size_t;
#endif


#include "dataview-uniq.h" // Space certified compiler generated

#include "../../system_config.h" // Choose ASN.1 Types to use

#ifdef __NEED_T_UInt32_UPER
size_t Encode_UPER_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_ACN
size_t Encode_ACN_T_UInt32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_NATIVE
size_t Encode_NATIVE_T_UInt32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt32 *pSrc);
#endif

#ifdef __NEED_T_UInt32_UPER
int Decode_UPER_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_ACN
int Decode_ACN_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt32_NATIVE
int Decode_NATIVE_T_UInt32(asn1SccT_UInt32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyChoice_UPER
size_t Encode_UPER_MyChoice(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyChoice *pSrc);
#endif

#ifdef __NEED_MyChoice_ACN
size_t Encode_ACN_MyChoice(void *pBuffer, size_t iMaxBufferSize, asn1SccMyChoice *pSrc);
#endif

#ifdef __NEED_MyChoice_NATIVE
size_t Encode_NATIVE_MyChoice(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyChoice *pSrc);
#endif

#ifdef __NEED_MyChoice_UPER
int Decode_UPER_MyChoice(asn1SccMyChoice *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyChoice_ACN
int Decode_ACN_MyChoice(asn1SccMyChoice *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyChoice_NATIVE
int Decode_NATIVE_MyChoice(asn1SccMyChoice *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MySeqOf_UPER
size_t Encode_UPER_MySeqOf(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeqOf *pSrc);
#endif

#ifdef __NEED_MySeqOf_ACN
size_t Encode_ACN_MySeqOf(void *pBuffer, size_t iMaxBufferSize, asn1SccMySeqOf *pSrc);
#endif

#ifdef __NEED_MySeqOf_NATIVE
size_t Encode_NATIVE_MySeqOf(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeqOf *pSrc);
#endif

#ifdef __NEED_MySeqOf_UPER
int Decode_UPER_MySeqOf(asn1SccMySeqOf *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MySeqOf_ACN
int Decode_ACN_MySeqOf(asn1SccMySeqOf *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MySeqOf_NATIVE
int Decode_NATIVE_MySeqOf(asn1SccMySeqOf *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyReal_UPER
size_t Encode_UPER_MyReal(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyReal *pSrc);
#endif

#ifdef __NEED_MyReal_ACN
size_t Encode_ACN_MyReal(void *pBuffer, size_t iMaxBufferSize, asn1SccMyReal *pSrc);
#endif

#ifdef __NEED_MyReal_NATIVE
size_t Encode_NATIVE_MyReal(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyReal *pSrc);
#endif

#ifdef __NEED_MyReal_UPER
int Decode_UPER_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyReal_ACN
int Decode_ACN_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyReal_NATIVE
int Decode_NATIVE_MyReal(asn1SccMyReal *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_UPER
size_t Encode_UPER_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_ACN
size_t Encode_ACN_T_Int32(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_NATIVE
size_t Encode_NATIVE_T_Int32(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int32 *pSrc);
#endif

#ifdef __NEED_T_Int32_UPER
int Decode_UPER_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_ACN
int Decode_ACN_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int32_NATIVE
int Decode_NATIVE_T_Int32(asn1SccT_Int32 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_UPER
size_t Encode_UPER_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_ACN
size_t Encode_ACN_T_UInt8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_NATIVE
size_t Encode_NATIVE_T_UInt8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_UInt8 *pSrc);
#endif

#ifdef __NEED_T_UInt8_UPER
int Decode_UPER_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_ACN
int Decode_ACN_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_UInt8_NATIVE
int Decode_NATIVE_T_UInt8(asn1SccT_UInt8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyOctStr_UPER
size_t Encode_UPER_MyOctStr(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyOctStr *pSrc);
#endif

#ifdef __NEED_MyOctStr_ACN
size_t Encode_ACN_MyOctStr(void *pBuffer, size_t iMaxBufferSize, asn1SccMyOctStr *pSrc);
#endif

#ifdef __NEED_MyOctStr_NATIVE
size_t Encode_NATIVE_MyOctStr(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyOctStr *pSrc);
#endif

#ifdef __NEED_MyOctStr_UPER
int Decode_UPER_MyOctStr(asn1SccMyOctStr *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyOctStr_ACN
int Decode_ACN_MyOctStr(asn1SccMyOctStr *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyOctStr_NATIVE
int Decode_NATIVE_MyOctStr(asn1SccMyOctStr *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MySeq_UPER
size_t Encode_UPER_MySeq(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeq *pSrc);
#endif

#ifdef __NEED_MySeq_ACN
size_t Encode_ACN_MySeq(void *pBuffer, size_t iMaxBufferSize, asn1SccMySeq *pSrc);
#endif

#ifdef __NEED_MySeq_NATIVE
size_t Encode_NATIVE_MySeq(void *pBuffer, size_t iMaxBufferSize, const asn1SccMySeq *pSrc);
#endif

#ifdef __NEED_MySeq_UPER
int Decode_UPER_MySeq(asn1SccMySeq *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MySeq_ACN
int Decode_ACN_MySeq(asn1SccMySeq *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MySeq_NATIVE
int Decode_NATIVE_MySeq(asn1SccMySeq *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyInteger_UPER
size_t Encode_UPER_MyInteger(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyInteger *pSrc);
#endif

#ifdef __NEED_MyInteger_ACN
size_t Encode_ACN_MyInteger(void *pBuffer, size_t iMaxBufferSize, asn1SccMyInteger *pSrc);
#endif

#ifdef __NEED_MyInteger_NATIVE
size_t Encode_NATIVE_MyInteger(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyInteger *pSrc);
#endif

#ifdef __NEED_MyInteger_UPER
int Decode_UPER_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyInteger_ACN
int Decode_ACN_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyInteger_NATIVE
int Decode_NATIVE_MyInteger(asn1SccMyInteger *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_UPER
size_t Encode_UPER_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_ACN
size_t Encode_ACN_T_Boolean(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_NATIVE
size_t Encode_NATIVE_T_Boolean(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Boolean *pSrc);
#endif

#ifdef __NEED_T_Boolean_UPER
int Decode_UPER_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_ACN
int Decode_ACN_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Boolean_NATIVE
int Decode_NATIVE_T_Boolean(asn1SccT_Boolean *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyBool_UPER
size_t Encode_UPER_MyBool(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyBool *pSrc);
#endif

#ifdef __NEED_MyBool_ACN
size_t Encode_ACN_MyBool(void *pBuffer, size_t iMaxBufferSize, asn1SccMyBool *pSrc);
#endif

#ifdef __NEED_MyBool_NATIVE
size_t Encode_NATIVE_MyBool(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyBool *pSrc);
#endif

#ifdef __NEED_MyBool_UPER
int Decode_UPER_MyBool(asn1SccMyBool *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyBool_ACN
int Decode_ACN_MyBool(asn1SccMyBool *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyBool_NATIVE
int Decode_NATIVE_MyBool(asn1SccMyBool *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_UPER
size_t Encode_UPER_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_ACN
size_t Encode_ACN_T_Int8(void *pBuffer, size_t iMaxBufferSize, asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_NATIVE
size_t Encode_NATIVE_T_Int8(void *pBuffer, size_t iMaxBufferSize, const asn1SccT_Int8 *pSrc);
#endif

#ifdef __NEED_T_Int8_UPER
int Decode_UPER_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_ACN
int Decode_ACN_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_T_Int8_NATIVE
int Decode_NATIVE_T_Int8(asn1SccT_Int8 *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyEnum_UPER
size_t Encode_UPER_MyEnum(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyEnum *pSrc);
#endif

#ifdef __NEED_MyEnum_ACN
size_t Encode_ACN_MyEnum(void *pBuffer, size_t iMaxBufferSize, asn1SccMyEnum *pSrc);
#endif

#ifdef __NEED_MyEnum_NATIVE
size_t Encode_NATIVE_MyEnum(void *pBuffer, size_t iMaxBufferSize, const asn1SccMyEnum *pSrc);
#endif

#ifdef __NEED_MyEnum_UPER
int Decode_UPER_MyEnum(asn1SccMyEnum *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyEnum_ACN
int Decode_ACN_MyEnum(asn1SccMyEnum *pDst, void *pBuffer, size_t iBufferSize);
#endif

#ifdef __NEED_MyEnum_NATIVE
int Decode_NATIVE_MyEnum(asn1SccMyEnum *pDst, void *pBuffer, size_t iBufferSize);
#endif


#endif
