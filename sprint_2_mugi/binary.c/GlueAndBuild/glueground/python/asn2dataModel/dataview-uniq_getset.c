#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "dataview-uniq_getset.h"

size_t GetStreamCurrentLength(BitStream *pBitStrm) {
    return pBitStrm->currentByte + ((pBitStrm->currentBit+7)/8);
}

byte *GetBitstreamBuffer(BitStream *pBitStrm) {
    return pBitStrm->buf;
}

byte GetBufferByte(byte *p, size_t off) {
    assert(p);
    return p[off];
}

void SetBufferByte(byte *p, size_t off, byte b) {
    assert(p);
    p[off] = b;
}

void ResetStream(BitStream *pStrm) {
    assert(pStrm);
    assert(pStrm->count > 0);
    pStrm->currentByte = 0;
    pStrm->currentBit = 0;
}

BitStream *CreateStream(size_t bufferSize) {
    BitStream *pBitStrm = malloc(sizeof(BitStream));
    assert(pBitStrm);
    pBitStrm->buf = malloc(bufferSize);
    assert(pBitStrm->buf);
    pBitStrm->count = bufferSize;
    memset(pBitStrm->buf, 0x0, bufferSize);
    ResetStream(pBitStrm);
    return pBitStrm;
}

void DestroyStream(BitStream *pBitStrm) {
    assert(pBitStrm);
    assert(pBitStrm->buf);
    free(pBitStrm->buf);
    free(pBitStrm);
}


/* CHOICE selector */
int MyChoice__kind_Get(MyChoice* root)
{
    return (*root).kind;
}

/* CHOICE selector */
void MyChoice__kind_Set(MyChoice* root, int value)
{
    (*root).kind = value;
}

/* BOOLEAN */
flag MyChoice__a_Get(MyChoice* root)
{
    return (*root).u.a;
}

/* BOOLEAN */
void MyChoice__a_Set(MyChoice* root, flag value)
{
    (*root).u.a = value;
}

/* Field b selector */
MySeq* MyChoice__b_Get(MyChoice* root)
{
    return &(*root).u.b;
}

/* INTEGER */
asn1SccSint MyChoice__b_input_data_Get(MyChoice* root)
{
    return (*root).u.b.input_data;
}

/* INTEGER */
void MyChoice__b_input_data_Set(MyChoice* root, asn1SccSint value)
{
    (*root).u.b.input_data = value;
}

/* INTEGER */
asn1SccSint MyChoice__b_output_data_Get(MyChoice* root)
{
    return (*root).u.b.output_data;
}

/* INTEGER */
void MyChoice__b_output_data_Set(MyChoice* root, asn1SccSint value)
{
    (*root).u.b.output_data = value;
}

/* ENUMERATED */
int MyChoice__b_validity_Get(MyChoice* root)
{
    return (*root).u.b.validity;
}

/* ENUMERATED */
void MyChoice__b_validity_Set(MyChoice* root, int value)
{
    (*root).u.b.validity = value;
}

/* INTEGER */
asn1SccSint MyInteger__Get(MyInteger* root)
{
    return (*root);
}

/* INTEGER */
void MyInteger__Set(MyInteger* root, asn1SccSint value)
{
    (*root) = value;
}

/* SEQUENCEOF/SETOF */
long MySeqOf__GetLength(MySeqOf* root)
{
    return 2;
}

/* SEQUENCEOF/SETOF */
void MySeqOf__SetLength(MySeqOf* root, long value)
{
    fprintf(stderr, "WARNING: setting length of fixed-length sequence\n");
}

/* ENUMERATED */
int MySeqOf__iDx_Get(MySeqOf* root, int iDx)
{
    return (*root).arr[iDx];
}

/* ENUMERATED */
void MySeqOf__iDx_Set(MySeqOf* root, int iDx, int value)
{
    (*root).arr[iDx] = value;
}

/* REAL */
double MyPWM__pwm1_Get(MyPWM* root)
{
    return (*root).pwm1;
}

/* REAL */
void MyPWM__pwm1_Set(MyPWM* root, double value)
{
    (*root).pwm1 = value;
}

/* REAL */
double MyPWM__pwm2_Get(MyPWM* root)
{
    return (*root).pwm2;
}

/* REAL */
void MyPWM__pwm2_Set(MyPWM* root, double value)
{
    (*root).pwm2 = value;
}

/* REAL */
double MyPWM__pwm3_Get(MyPWM* root)
{
    return (*root).pwm3;
}

/* REAL */
void MyPWM__pwm3_Set(MyPWM* root, double value)
{
    (*root).pwm3 = value;
}

/* REAL */
double MyPWM__pwm4_Get(MyPWM* root)
{
    return (*root).pwm4;
}

/* REAL */
void MyPWM__pwm4_Set(MyPWM* root, double value)
{
    (*root).pwm4 = value;
}

/* INTEGER */
asn1SccSint T_Int32__Get(T_Int32* root)
{
    return (*root);
}

/* INTEGER */
void T_Int32__Set(T_Int32* root, asn1SccSint value)
{
    (*root) = value;
}

/* OCTETSTRING */
long MyOctStr__GetLength(MyOctStr* root)
{
    return 3;
}

/* OCTETSTRING */
void MyOctStr__SetLength(MyOctStr* root, long value)
{
    fprintf(stderr, "WARNING: setting length of fixed-length sequence\n");
}

/* OCTETSTRING_bytes */
byte MyOctStr__iDx_Get(MyOctStr* root, int iDx)
{
    return (*root).arr[iDx];
}

/* OCTETSTRING_bytes */
void MyOctStr__iDx_Set(MyOctStr* root, int iDx, byte value)
{
    (*root).arr[iDx] = value;
}

/* INTEGER */
asn1SccSint MySeq__input_data_Get(MySeq* root)
{
    return (*root).input_data;
}

/* INTEGER */
void MySeq__input_data_Set(MySeq* root, asn1SccSint value)
{
    (*root).input_data = value;
}

/* INTEGER */
asn1SccSint MySeq__output_data_Get(MySeq* root)
{
    return (*root).output_data;
}

/* INTEGER */
void MySeq__output_data_Set(MySeq* root, asn1SccSint value)
{
    (*root).output_data = value;
}

/* ENUMERATED */
int MySeq__validity_Get(MySeq* root)
{
    return (*root).validity;
}

/* ENUMERATED */
void MySeq__validity_Set(MySeq* root, int value)
{
    (*root).validity = value;
}

/* INTEGER */
asn1SccSint T_UInt8__Get(T_UInt8* root)
{
    return (*root);
}

/* INTEGER */
void T_UInt8__Set(T_UInt8* root, asn1SccSint value)
{
    (*root) = value;
}

/* INTEGER */
asn1SccSint T_Int8__Get(T_Int8* root)
{
    return (*root);
}

/* INTEGER */
void T_Int8__Set(T_Int8* root, asn1SccSint value)
{
    (*root) = value;
}

/* REAL */
double MyTrajectory__x_Get(MyTrajectory* root)
{
    return (*root).x;
}

/* REAL */
void MyTrajectory__x_Set(MyTrajectory* root, double value)
{
    (*root).x = value;
}

/* REAL */
double MyTrajectory__y_Get(MyTrajectory* root)
{
    return (*root).y;
}

/* REAL */
void MyTrajectory__y_Set(MyTrajectory* root, double value)
{
    (*root).y = value;
}

/* REAL */
double MyTrajectory__z_Get(MyTrajectory* root)
{
    return (*root).z;
}

/* REAL */
void MyTrajectory__z_Set(MyTrajectory* root, double value)
{
    (*root).z = value;
}

/* REAL */
double MyTrajectory__yaw_Get(MyTrajectory* root)
{
    return (*root).yaw;
}

/* REAL */
void MyTrajectory__yaw_Set(MyTrajectory* root, double value)
{
    (*root).yaw = value;
}

/* BOOLEAN */
flag MyBool__Get(MyBool* root)
{
    return (*root);
}

/* BOOLEAN */
void MyBool__Set(MyBool* root, flag value)
{
    (*root) = value;
}

/* REAL */
double MyReal__Get(MyReal* root)
{
    return (*root);
}

/* REAL */
void MyReal__Set(MyReal* root, double value)
{
    (*root) = value;
}

/* ENUMERATED */
int MyEnum__Get(MyEnum* root)
{
    return (*root);
}

/* ENUMERATED */
void MyEnum__Set(MyEnum* root, int value)
{
    (*root) = value;
}

/* BOOLEAN */
flag T_Boolean__Get(T_Boolean* root)
{
    return (*root);
}

/* BOOLEAN */
void T_Boolean__Set(T_Boolean* root, flag value)
{
    (*root) = value;
}

/* REAL */
double MyStates__x_Get(MyStates* root)
{
    return (*root).x;
}

/* REAL */
void MyStates__x_Set(MyStates* root, double value)
{
    (*root).x = value;
}

/* REAL */
double MyStates__y_Get(MyStates* root)
{
    return (*root).y;
}

/* REAL */
void MyStates__y_Set(MyStates* root, double value)
{
    (*root).y = value;
}

/* REAL */
double MyStates__z_Get(MyStates* root)
{
    return (*root).z;
}

/* REAL */
void MyStates__z_Set(MyStates* root, double value)
{
    (*root).z = value;
}

/* REAL */
double MyStates__yaw_Get(MyStates* root)
{
    return (*root).yaw;
}

/* REAL */
void MyStates__yaw_Set(MyStates* root, double value)
{
    (*root).yaw = value;
}

/* REAL */
double MyStates__pitch_Get(MyStates* root)
{
    return (*root).pitch;
}

/* REAL */
void MyStates__pitch_Set(MyStates* root, double value)
{
    (*root).pitch = value;
}

/* REAL */
double MyStates__roll_Get(MyStates* root)
{
    return (*root).roll;
}

/* REAL */
void MyStates__roll_Set(MyStates* root, double value)
{
    (*root).roll = value;
}

/* REAL */
double MyStates__dx_Get(MyStates* root)
{
    return (*root).dx;
}

/* REAL */
void MyStates__dx_Set(MyStates* root, double value)
{
    (*root).dx = value;
}

/* REAL */
double MyStates__dy_Get(MyStates* root)
{
    return (*root).dy;
}

/* REAL */
void MyStates__dy_Set(MyStates* root, double value)
{
    (*root).dy = value;
}

/* REAL */
double MyStates__dz_Get(MyStates* root)
{
    return (*root).dz;
}

/* REAL */
void MyStates__dz_Set(MyStates* root, double value)
{
    (*root).dz = value;
}

/* REAL */
double MyStates__dyaw_Get(MyStates* root)
{
    return (*root).dyaw;
}

/* REAL */
void MyStates__dyaw_Set(MyStates* root, double value)
{
    (*root).dyaw = value;
}

/* REAL */
double MyStates__dpitch_Get(MyStates* root)
{
    return (*root).dpitch;
}

/* REAL */
void MyStates__dpitch_Set(MyStates* root, double value)
{
    (*root).dpitch = value;
}

/* REAL */
double MyStates__droll_Get(MyStates* root)
{
    return (*root).droll;
}

/* REAL */
void MyStates__droll_Set(MyStates* root, double value)
{
    (*root).droll = value;
}

/* INTEGER */
asn1SccSint T_UInt32__Get(T_UInt32* root)
{
    return (*root);
}

/* INTEGER */
void T_UInt32__Set(T_UInt32* root, asn1SccSint value)
{
    (*root) = value;
}

/* Helper functions for NATIVE encodings */

void SetDataFor_MyChoice(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyChoice));
}

byte* MovePtrBySizeOf_MyChoice(byte *pData)
{
    return pData + sizeof(MyChoice);
}

byte* CreateInstanceOf_MyChoice() {
    MyChoice *p = (MyChoice*)malloc(sizeof(MyChoice));
    MyChoice_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyChoice(byte *pData) {
    free(pData);
}

void SetDataFor_MyInteger(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyInteger));
}

byte* MovePtrBySizeOf_MyInteger(byte *pData)
{
    return pData + sizeof(MyInteger);
}

byte* CreateInstanceOf_MyInteger() {
    MyInteger *p = (MyInteger*)malloc(sizeof(MyInteger));
    MyInteger_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyInteger(byte *pData) {
    free(pData);
}

void SetDataFor_MySeqOf(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MySeqOf));
}

byte* MovePtrBySizeOf_MySeqOf(byte *pData)
{
    return pData + sizeof(MySeqOf);
}

byte* CreateInstanceOf_MySeqOf() {
    MySeqOf *p = (MySeqOf*)malloc(sizeof(MySeqOf));
    MySeqOf_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MySeqOf(byte *pData) {
    free(pData);
}

void SetDataFor_MyPWM(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyPWM));
}

byte* MovePtrBySizeOf_MyPWM(byte *pData)
{
    return pData + sizeof(MyPWM);
}

byte* CreateInstanceOf_MyPWM() {
    MyPWM *p = (MyPWM*)malloc(sizeof(MyPWM));
    MyPWM_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyPWM(byte *pData) {
    free(pData);
}

void SetDataFor_T_Int32(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Int32));
}

byte* MovePtrBySizeOf_T_Int32(byte *pData)
{
    return pData + sizeof(T_Int32);
}

byte* CreateInstanceOf_T_Int32() {
    T_Int32 *p = (T_Int32*)malloc(sizeof(T_Int32));
    T_Int32_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Int32(byte *pData) {
    free(pData);
}

void SetDataFor_MyOctStr(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyOctStr));
}

byte* MovePtrBySizeOf_MyOctStr(byte *pData)
{
    return pData + sizeof(MyOctStr);
}

byte* CreateInstanceOf_MyOctStr() {
    MyOctStr *p = (MyOctStr*)malloc(sizeof(MyOctStr));
    MyOctStr_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyOctStr(byte *pData) {
    free(pData);
}

void SetDataFor_MySeq(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MySeq));
}

byte* MovePtrBySizeOf_MySeq(byte *pData)
{
    return pData + sizeof(MySeq);
}

byte* CreateInstanceOf_MySeq() {
    MySeq *p = (MySeq*)malloc(sizeof(MySeq));
    MySeq_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MySeq(byte *pData) {
    free(pData);
}

void SetDataFor_T_UInt8(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_UInt8));
}

byte* MovePtrBySizeOf_T_UInt8(byte *pData)
{
    return pData + sizeof(T_UInt8);
}

byte* CreateInstanceOf_T_UInt8() {
    T_UInt8 *p = (T_UInt8*)malloc(sizeof(T_UInt8));
    T_UInt8_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_UInt8(byte *pData) {
    free(pData);
}

void SetDataFor_T_Int8(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Int8));
}

byte* MovePtrBySizeOf_T_Int8(byte *pData)
{
    return pData + sizeof(T_Int8);
}

byte* CreateInstanceOf_T_Int8() {
    T_Int8 *p = (T_Int8*)malloc(sizeof(T_Int8));
    T_Int8_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Int8(byte *pData) {
    free(pData);
}

void SetDataFor_MyTrajectory(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyTrajectory));
}

byte* MovePtrBySizeOf_MyTrajectory(byte *pData)
{
    return pData + sizeof(MyTrajectory);
}

byte* CreateInstanceOf_MyTrajectory() {
    MyTrajectory *p = (MyTrajectory*)malloc(sizeof(MyTrajectory));
    MyTrajectory_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyTrajectory(byte *pData) {
    free(pData);
}

void SetDataFor_MyBool(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyBool));
}

byte* MovePtrBySizeOf_MyBool(byte *pData)
{
    return pData + sizeof(MyBool);
}

byte* CreateInstanceOf_MyBool() {
    MyBool *p = (MyBool*)malloc(sizeof(MyBool));
    MyBool_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyBool(byte *pData) {
    free(pData);
}

void SetDataFor_MyReal(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyReal));
}

byte* MovePtrBySizeOf_MyReal(byte *pData)
{
    return pData + sizeof(MyReal);
}

byte* CreateInstanceOf_MyReal() {
    MyReal *p = (MyReal*)malloc(sizeof(MyReal));
    MyReal_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyReal(byte *pData) {
    free(pData);
}

void SetDataFor_MyEnum(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyEnum));
}

byte* MovePtrBySizeOf_MyEnum(byte *pData)
{
    return pData + sizeof(MyEnum);
}

byte* CreateInstanceOf_MyEnum() {
    MyEnum *p = (MyEnum*)malloc(sizeof(MyEnum));
    MyEnum_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyEnum(byte *pData) {
    free(pData);
}

void SetDataFor_T_Boolean(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_Boolean));
}

byte* MovePtrBySizeOf_T_Boolean(byte *pData)
{
    return pData + sizeof(T_Boolean);
}

byte* CreateInstanceOf_T_Boolean() {
    T_Boolean *p = (T_Boolean*)malloc(sizeof(T_Boolean));
    T_Boolean_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_Boolean(byte *pData) {
    free(pData);
}

void SetDataFor_MyStates(void *dest, void *src)
{
    memcpy(dest, src, sizeof(MyStates));
}

byte* MovePtrBySizeOf_MyStates(byte *pData)
{
    return pData + sizeof(MyStates);
}

byte* CreateInstanceOf_MyStates() {
    MyStates *p = (MyStates*)malloc(sizeof(MyStates));
    MyStates_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_MyStates(byte *pData) {
    free(pData);
}

void SetDataFor_T_UInt32(void *dest, void *src)
{
    memcpy(dest, src, sizeof(T_UInt32));
}

byte* MovePtrBySizeOf_T_UInt32(byte *pData)
{
    return pData + sizeof(T_UInt32);
}

byte* CreateInstanceOf_T_UInt32() {
    T_UInt32 *p = (T_UInt32*)malloc(sizeof(T_UInt32));
    T_UInt32_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_T_UInt32(byte *pData) {
    free(pData);
}

void SetDataFor_int(void *dest, void *src)
{
    memcpy(dest, src, sizeof(int));
}

byte* MovePtrBySizeOf_int(byte *pData)
{
    return pData + sizeof(int);
}

byte* CreateInstanceOf_int() {
    int *p = (int*)malloc(sizeof(int));
    *p = 0;
    return (byte*)p;
}

void DestroyInstanceOf_int(byte *pData) {
    free(pData);
}

