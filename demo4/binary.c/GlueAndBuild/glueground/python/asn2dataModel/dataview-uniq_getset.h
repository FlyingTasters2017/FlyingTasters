#ifndef __GETSET_H__
#define __GETSET_H__

#include "dataview-uniq.h"

size_t GetStreamCurrentLength(BitStream *pBitStrm);
byte *GetBitstreamBuffer(BitStream *pBitStrm);
byte GetBufferByte(byte *p, size_t off);
void SetBufferByte(byte *p, size_t off, byte b);
void ResetStream(BitStream *pStrm);
BitStream *CreateStream(size_t bufferSize);
void DestroyStream(BitStream *pBitStrm);


/* INTEGER */
asn1SccSint T_UInt8__Get(T_UInt8* root);

/* INTEGER */
void T_UInt8__Set(T_UInt8* root, asn1SccSint value);

/* ENUMERATED */
int MyEnum__Get(MyEnum* root);

/* ENUMERATED */
void MyEnum__Set(MyEnum* root, int value);

/* BOOLEAN */
flag MyBool__Get(MyBool* root);

/* BOOLEAN */
void MyBool__Set(MyBool* root, flag value);

/* BOOLEAN */
flag T_Boolean__Get(T_Boolean* root);

/* BOOLEAN */
void T_Boolean__Set(T_Boolean* root, flag value);

/* INTEGER */
asn1SccSint MyInteger__Get(MyInteger* root);

/* INTEGER */
void MyInteger__Set(MyInteger* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_Int8__Get(T_Int8* root);

/* INTEGER */
void T_Int8__Set(T_Int8* root, asn1SccSint value);

/* CHOICE selector */
int MyChoice__kind_Get(MyChoice* root);

/* CHOICE selector */
void MyChoice__kind_Set(MyChoice* root, int value);

/* BOOLEAN */
flag MyChoice__a_Get(MyChoice* root);

/* BOOLEAN */
void MyChoice__a_Set(MyChoice* root, flag value);

/* Field b selector */
MySeq* MyChoice__b_Get(MyChoice* root);

/* INTEGER */
asn1SccSint MyChoice__b_input_data_Get(MyChoice* root);

/* INTEGER */
void MyChoice__b_input_data_Set(MyChoice* root, asn1SccSint value);

/* INTEGER */
asn1SccSint MyChoice__b_output_data_Get(MyChoice* root);

/* INTEGER */
void MyChoice__b_output_data_Set(MyChoice* root, asn1SccSint value);

/* ENUMERATED */
int MyChoice__b_validity_Get(MyChoice* root);

/* ENUMERATED */
void MyChoice__b_validity_Set(MyChoice* root, int value);

/* INTEGER */
asn1SccSint T_Int32__Get(T_Int32* root);

/* INTEGER */
void T_Int32__Set(T_Int32* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_UInt32__Get(T_UInt32* root);

/* INTEGER */
void T_UInt32__Set(T_UInt32* root, asn1SccSint value);

/* SEQUENCEOF/SETOF */
long MySeqOf__GetLength(MySeqOf* root);

/* SEQUENCEOF/SETOF */
void MySeqOf__SetLength(MySeqOf* root, long value);

/* ENUMERATED */
int MySeqOf__iDx_Get(MySeqOf* root, int iDx);

/* ENUMERATED */
void MySeqOf__iDx_Set(MySeqOf* root, int iDx, int value);

/* INTEGER */
asn1SccSint MySeq__input_data_Get(MySeq* root);

/* INTEGER */
void MySeq__input_data_Set(MySeq* root, asn1SccSint value);

/* INTEGER */
asn1SccSint MySeq__output_data_Get(MySeq* root);

/* INTEGER */
void MySeq__output_data_Set(MySeq* root, asn1SccSint value);

/* ENUMERATED */
int MySeq__validity_Get(MySeq* root);

/* ENUMERATED */
void MySeq__validity_Set(MySeq* root, int value);

/* REAL */
double MyReal__Get(MyReal* root);

/* REAL */
void MyReal__Set(MyReal* root, double value);

/* OCTETSTRING */
long MyOctStr__GetLength(MyOctStr* root);

/* OCTETSTRING */
void MyOctStr__SetLength(MyOctStr* root, long value);

/* OCTETSTRING_bytes */
byte MyOctStr__iDx_Get(MyOctStr* root, int iDx);

/* OCTETSTRING_bytes */
void MyOctStr__iDx_Set(MyOctStr* root, int iDx, byte value);

/* Helper functions for NATIVE encodings */

void SetDataFor_T_UInt8(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt8(byte *pData);
byte* CreateInstanceOf_T_UInt8(void);
void DestroyInstanceOf_T_UInt8(byte *pData);

void SetDataFor_MyEnum(void *dest, void *src);
byte* MovePtrBySizeOf_MyEnum(byte *pData);
byte* CreateInstanceOf_MyEnum(void);
void DestroyInstanceOf_MyEnum(byte *pData);

void SetDataFor_MyBool(void *dest, void *src);
byte* MovePtrBySizeOf_MyBool(byte *pData);
byte* CreateInstanceOf_MyBool(void);
void DestroyInstanceOf_MyBool(byte *pData);

void SetDataFor_T_Boolean(void *dest, void *src);
byte* MovePtrBySizeOf_T_Boolean(byte *pData);
byte* CreateInstanceOf_T_Boolean(void);
void DestroyInstanceOf_T_Boolean(byte *pData);

void SetDataFor_MyInteger(void *dest, void *src);
byte* MovePtrBySizeOf_MyInteger(byte *pData);
byte* CreateInstanceOf_MyInteger(void);
void DestroyInstanceOf_MyInteger(byte *pData);

void SetDataFor_T_Int8(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int8(byte *pData);
byte* CreateInstanceOf_T_Int8(void);
void DestroyInstanceOf_T_Int8(byte *pData);

void SetDataFor_MyChoice(void *dest, void *src);
byte* MovePtrBySizeOf_MyChoice(byte *pData);
byte* CreateInstanceOf_MyChoice(void);
void DestroyInstanceOf_MyChoice(byte *pData);

void SetDataFor_T_Int32(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int32(byte *pData);
byte* CreateInstanceOf_T_Int32(void);
void DestroyInstanceOf_T_Int32(byte *pData);

void SetDataFor_T_UInt32(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt32(byte *pData);
byte* CreateInstanceOf_T_UInt32(void);
void DestroyInstanceOf_T_UInt32(byte *pData);

void SetDataFor_MySeqOf(void *dest, void *src);
byte* MovePtrBySizeOf_MySeqOf(byte *pData);
byte* CreateInstanceOf_MySeqOf(void);
void DestroyInstanceOf_MySeqOf(byte *pData);

void SetDataFor_MySeq(void *dest, void *src);
byte* MovePtrBySizeOf_MySeq(byte *pData);
byte* CreateInstanceOf_MySeq(void);
void DestroyInstanceOf_MySeq(byte *pData);

void SetDataFor_MyReal(void *dest, void *src);
byte* MovePtrBySizeOf_MyReal(byte *pData);
byte* CreateInstanceOf_MyReal(void);
void DestroyInstanceOf_MyReal(byte *pData);

void SetDataFor_MyOctStr(void *dest, void *src);
byte* MovePtrBySizeOf_MyOctStr(byte *pData);
byte* CreateInstanceOf_MyOctStr(void);
void DestroyInstanceOf_MyOctStr(byte *pData);

void SetDataFor_int(void *dest, void *src);
byte* MovePtrBySizeOf_int(byte *pData);
byte* CreateInstanceOf_int(void);
void DestroyInstanceOf_int(byte *pData);


#endif
