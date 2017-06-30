#ifndef GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
#define GENERATED_ASN1SCC_DATAVIEW_UNIQ_H
/*
Code automatically generated by asn1scc tool
*/
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef double asn1SccMyReal;

#define asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING       13 
#define asn1SccMyReal_REQUIRED_BITS_FOR_ENCODING        104
#define asn1SccMyReal_REQUIRED_BYTES_FOR_ACN_ENCODING   13 
#define asn1SccMyReal_REQUIRED_BITS_FOR_ACN_ENCODING    104
#define asn1SccMyReal_REQUIRED_BYTES_FOR_XER_ENCODING   67

void asn1SccMyReal_Initialize(asn1SccMyReal* pVal);
flag asn1SccMyReal_IsConstraintValid(const asn1SccMyReal* val, int* pErrCode);
#ifndef ERR_asn1SccMyReal 
#define ERR_asn1SccMyReal		1001  /*(-1.00000000000000000000E+003 .. 1.00000000000000000000E+005)*/
#endif

typedef struct {
    asn1SccMyReal x0Act;
    asn1SccMyReal y0Act;
    asn1SccMyReal x1Act;
    asn1SccMyReal y1Act;
    asn1SccMyReal x2Act;
    asn1SccMyReal y2Act;
} asn1SccMyPositionData;

#define asn1SccMyPositionData_REQUIRED_BYTES_FOR_ENCODING       78 
#define asn1SccMyPositionData_REQUIRED_BITS_FOR_ENCODING        624
#define asn1SccMyPositionData_REQUIRED_BYTES_FOR_ACN_ENCODING   78 
#define asn1SccMyPositionData_REQUIRED_BITS_FOR_ACN_ENCODING    624
#define asn1SccMyPositionData_REQUIRED_BYTES_FOR_XER_ENCODING   423

void asn1SccMyPositionData_Initialize(asn1SccMyPositionData* pVal);
flag asn1SccMyPositionData_IsConstraintValid(const asn1SccMyPositionData* val, int* pErrCode);


typedef struct {
    asn1SccMyReal xAct;
    asn1SccMyReal yAct;
    asn1SccMyReal zAct;
} asn1SccMyPositionControlData;

#define asn1SccMyPositionControlData_REQUIRED_BYTES_FOR_ENCODING       39 
#define asn1SccMyPositionControlData_REQUIRED_BITS_FOR_ENCODING        312
#define asn1SccMyPositionControlData_REQUIRED_BYTES_FOR_ACN_ENCODING   39 
#define asn1SccMyPositionControlData_REQUIRED_BITS_FOR_ACN_ENCODING    312
#define asn1SccMyPositionControlData_REQUIRED_BYTES_FOR_XER_ENCODING   236

void asn1SccMyPositionControlData_Initialize(asn1SccMyPositionControlData* pVal);
flag asn1SccMyPositionControlData_IsConstraintValid(const asn1SccMyPositionControlData* val, int* pErrCode);


typedef struct {
    asn1SccMyReal yawAct;
    asn1SccMyReal pitchAct;
    asn1SccMyReal rollAct;
    asn1SccMyReal baropAct;
    asn1SccMyReal accxAct;
    asn1SccMyReal accyAct;
    asn1SccMyReal acczAct;
} asn1SccMySensorData;

#define asn1SccMySensorData_REQUIRED_BYTES_FOR_ENCODING       91 
#define asn1SccMySensorData_REQUIRED_BITS_FOR_ENCODING        728
#define asn1SccMySensorData_REQUIRED_BYTES_FOR_ACN_ENCODING   91 
#define asn1SccMySensorData_REQUIRED_BITS_FOR_ACN_ENCODING    728
#define asn1SccMySensorData_REQUIRED_BYTES_FOR_XER_ENCODING   514

void asn1SccMySensorData_Initialize(asn1SccMySensorData* pVal);
flag asn1SccMySensorData_IsConstraintValid(const asn1SccMySensorData* val, int* pErrCode);


typedef struct {
    asn1SccMyReal yawrateRef;
    asn1SccMyReal pitchRef;
    asn1SccMyReal rollRef;
    asn1SccMyReal zRef;
} asn1SccMyDroneData;

#define asn1SccMyDroneData_REQUIRED_BYTES_FOR_ENCODING       52 
#define asn1SccMyDroneData_REQUIRED_BITS_FOR_ENCODING        416
#define asn1SccMyDroneData_REQUIRED_BYTES_FOR_ACN_ENCODING   52 
#define asn1SccMyDroneData_REQUIRED_BITS_FOR_ACN_ENCODING    416
#define asn1SccMyDroneData_REQUIRED_BYTES_FOR_XER_ENCODING   305

void asn1SccMyDroneData_Initialize(asn1SccMyDroneData* pVal);
flag asn1SccMyDroneData_IsConstraintValid(const asn1SccMyDroneData* val, int* pErrCode);


typedef flag asn1SccMyBool;

#define asn1SccMyBool_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccMyBool_REQUIRED_BITS_FOR_ENCODING        1
#define asn1SccMyBool_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccMyBool_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define asn1SccMyBool_REQUIRED_BYTES_FOR_XER_ENCODING   30

void asn1SccMyBool_Initialize(asn1SccMyBool* pVal);
flag asn1SccMyBool_IsConstraintValid(const asn1SccMyBool* val, int* pErrCode);


typedef enum {
    asn1Scchello = 0,
    asn1Sccworld = 1,
    asn1Scchowareyou = 2
} asn1SccMyEnum;

#define asn1SccMyEnum_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccMyEnum_REQUIRED_BITS_FOR_ENCODING        2
#define asn1SccMyEnum_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccMyEnum_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define asn1SccMyEnum_REQUIRED_BYTES_FOR_XER_ENCODING   30

void asn1SccMyEnum_Initialize(asn1SccMyEnum* pVal);
flag asn1SccMyEnum_IsConstraintValid(const asn1SccMyEnum* val, int* pErrCode);
#ifndef ERR_asn1SccMyEnum_unknown_enumeration_value 
#define ERR_asn1SccMyEnum_unknown_enumeration_value		1003  /**/
#endif
#ifndef ERR_asn1SccMyEnum 
#define ERR_asn1SccMyEnum		1002  /**/
#endif

typedef struct {    
    asn1SccMyEnum arr[2];
} asn1SccMySeqOf;

#define asn1SccMySeqOf_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccMySeqOf_REQUIRED_BITS_FOR_ENCODING        4
#define asn1SccMySeqOf_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccMySeqOf_REQUIRED_BITS_FOR_ACN_ENCODING    4
#define asn1SccMySeqOf_REQUIRED_BYTES_FOR_XER_ENCODING   55

void asn1SccMySeqOf_Initialize(asn1SccMySeqOf* pVal);
flag asn1SccMySeqOf_IsConstraintValid(const asn1SccMySeqOf* val, int* pErrCode);
#ifndef ERR_asn1SccMySeqOf 
#define ERR_asn1SccMySeqOf		1004  /*(SIZE(2))*/
#endif

typedef struct {    
    byte arr[3];
} asn1SccMyOctStr;

#define asn1SccMyOctStr_REQUIRED_BYTES_FOR_ENCODING       3 
#define asn1SccMyOctStr_REQUIRED_BITS_FOR_ENCODING        24
#define asn1SccMyOctStr_REQUIRED_BYTES_FOR_ACN_ENCODING   3 
#define asn1SccMyOctStr_REQUIRED_BITS_FOR_ACN_ENCODING    24
#define asn1SccMyOctStr_REQUIRED_BYTES_FOR_XER_ENCODING   27

void asn1SccMyOctStr_Initialize(asn1SccMyOctStr* pVal);
flag asn1SccMyOctStr_IsConstraintValid(const asn1SccMyOctStr* val, int* pErrCode);
#ifndef ERR_asn1SccMyOctStr 
#define ERR_asn1SccMyOctStr		1005  /*(SIZE(3))*/
#endif

typedef enum {
    asn1Sccvalid = 0,
    asn1Sccinvalid = 1
} asn1SccMySeq_validity;

#define asn1SccMySeq_validity_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccMySeq_validity_REQUIRED_BITS_FOR_ENCODING        1
#define asn1SccMySeq_validity_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccMySeq_validity_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define asn1SccMySeq_validity_REQUIRED_BYTES_FOR_XER_ENCODING   46

void asn1SccMySeq_validity_Initialize(asn1SccMySeq_validity* pVal);
flag asn1SccMySeq_validity_IsConstraintValid(const asn1SccMySeq_validity* val, int* pErrCode);
#ifndef ERR_asn1SccMySeq_validity_unknown_enumeration_value 
#define ERR_asn1SccMySeq_validity_unknown_enumeration_value		1007  /**/
#endif
#ifndef ERR_asn1SccMySeq_validity 
#define ERR_asn1SccMySeq_validity		1006  /**/
#endif

typedef asn1SccSint asn1SccT_Int32;

#define asn1SccT_Int32_REQUIRED_BYTES_FOR_ENCODING       4 
#define asn1SccT_Int32_REQUIRED_BITS_FOR_ENCODING        32
#define asn1SccT_Int32_REQUIRED_BYTES_FOR_ACN_ENCODING   4 
#define asn1SccT_Int32_REQUIRED_BITS_FOR_ACN_ENCODING    32
#define asn1SccT_Int32_REQUIRED_BYTES_FOR_XER_ENCODING   39

void asn1SccT_Int32_Initialize(asn1SccT_Int32* pVal);
flag asn1SccT_Int32_IsConstraintValid(const asn1SccT_Int32* val, int* pErrCode);
#ifndef ERR_asn1SccT_Int32 
#define ERR_asn1SccT_Int32		1008  /*(-2147483648 .. 2147483647)*/
#endif

typedef asn1SccUint asn1SccT_UInt32;

#define asn1SccT_UInt32_REQUIRED_BYTES_FOR_ENCODING       4 
#define asn1SccT_UInt32_REQUIRED_BITS_FOR_ENCODING        32
#define asn1SccT_UInt32_REQUIRED_BYTES_FOR_ACN_ENCODING   4 
#define asn1SccT_UInt32_REQUIRED_BITS_FOR_ACN_ENCODING    32
#define asn1SccT_UInt32_REQUIRED_BYTES_FOR_XER_ENCODING   41

void asn1SccT_UInt32_Initialize(asn1SccT_UInt32* pVal);
flag asn1SccT_UInt32_IsConstraintValid(const asn1SccT_UInt32* val, int* pErrCode);
#ifndef ERR_asn1SccT_UInt32 
#define ERR_asn1SccT_UInt32		1009  /*(0 .. 4294967295)*/
#endif

typedef asn1SccSint asn1SccT_Int8;

#define asn1SccT_Int8_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_Int8_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccT_Int8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_Int8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccT_Int8_REQUIRED_BYTES_FOR_XER_ENCODING   37

void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal);
flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* val, int* pErrCode);
#ifndef ERR_asn1SccT_Int8 
#define ERR_asn1SccT_Int8		1010  /*(-128 .. 127)*/
#endif

typedef asn1SccUint asn1SccT_UInt8;

#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_UInt8_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_UInt8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_XER_ENCODING   39

void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal);
flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* val, int* pErrCode);
#ifndef ERR_asn1SccT_UInt8 
#define ERR_asn1SccT_UInt8		1011  /*(0 .. 255)*/
#endif

typedef asn1SccT_UInt8 asn1SccMyInteger;

#define asn1SccMyInteger_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccMyInteger_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccMyInteger_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccMyInteger_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccMyInteger_REQUIRED_BYTES_FOR_XER_ENCODING   43

void asn1SccMyInteger_Initialize(asn1SccMyInteger* pVal);
flag asn1SccMyInteger_IsConstraintValid(const asn1SccMyInteger* val, int* pErrCode);


typedef struct {
    asn1SccMyInteger input_data;
    asn1SccMyInteger output_data;
    asn1SccMySeq_validity validity;
} asn1SccMySeq;

#define asn1SccMySeq_REQUIRED_BYTES_FOR_ENCODING       3 
#define asn1SccMySeq_REQUIRED_BITS_FOR_ENCODING        17
#define asn1SccMySeq_REQUIRED_BYTES_FOR_ACN_ENCODING   3 
#define asn1SccMySeq_REQUIRED_BITS_FOR_ACN_ENCODING    17
#define asn1SccMySeq_REQUIRED_BYTES_FOR_XER_ENCODING   141

void asn1SccMySeq_Initialize(asn1SccMySeq* pVal);
flag asn1SccMySeq_IsConstraintValid(const asn1SccMySeq* val, int* pErrCode);


typedef struct {
    enum {
        MyChoice_NONE,
        a_PRESENT,
        b_PRESENT 
    } kind;
    union {
        flag a;
        asn1SccMySeq b;
    } u; 
} asn1SccMyChoice;

#define asn1SccMyChoice_REQUIRED_BYTES_FOR_ENCODING       3 
#define asn1SccMyChoice_REQUIRED_BITS_FOR_ENCODING        19
#define asn1SccMyChoice_REQUIRED_BYTES_FOR_ACN_ENCODING   3 
#define asn1SccMyChoice_REQUIRED_BITS_FOR_ACN_ENCODING    19
#define asn1SccMyChoice_REQUIRED_BYTES_FOR_XER_ENCODING   154

void asn1SccMyChoice_Initialize(asn1SccMyChoice* pVal);
flag asn1SccMyChoice_IsConstraintValid(const asn1SccMyChoice* val, int* pErrCode);
#ifndef ERR_asn1SccMyChoice_unknown_choice_index 
#define ERR_asn1SccMyChoice_unknown_choice_index		1012  /**/
#endif

typedef flag asn1SccT_Boolean;

#define asn1SccT_Boolean_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_Boolean_REQUIRED_BITS_FOR_ENCODING        1
#define asn1SccT_Boolean_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_Boolean_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define asn1SccT_Boolean_REQUIRED_BYTES_FOR_XER_ENCODING   36

void asn1SccT_Boolean_Initialize(asn1SccT_Boolean* pVal);
flag asn1SccT_Boolean_IsConstraintValid(const asn1SccT_Boolean* val, int* pErrCode);


extern const asn1SccMySeqOf myVar; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccMyReal_Encode(const asn1SccMyReal* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyReal_Decode(asn1SccMyReal* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyPositionData_Encode(const asn1SccMyPositionData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyPositionData_Decode(asn1SccMyPositionData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyPositionControlData_Encode(const asn1SccMyPositionControlData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyPositionControlData_Decode(asn1SccMyPositionControlData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMySensorData_Encode(const asn1SccMySensorData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMySensorData_Decode(asn1SccMySensorData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyDroneData_Encode(const asn1SccMyDroneData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyDroneData_Decode(asn1SccMyDroneData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyBool_Encode(const asn1SccMyBool* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyBool_Decode(asn1SccMyBool* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyEnum_Encode(const asn1SccMyEnum* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyEnum_Decode(asn1SccMyEnum* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMySeqOf_Encode(const asn1SccMySeqOf* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMySeqOf_Decode(asn1SccMySeqOf* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyOctStr_Encode(const asn1SccMyOctStr* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyOctStr_Decode(asn1SccMyOctStr* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMySeq_validity_Encode(const asn1SccMySeq_validity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMySeq_validity_Decode(asn1SccMySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int32_Encode(const asn1SccT_Int32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int8_Encode(const asn1SccT_Int8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt8_Encode(const asn1SccT_UInt8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt8_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyInteger_Encode(const asn1SccMyInteger* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyInteger_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMySeq_Encode(const asn1SccMySeq* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMySeq_Decode(asn1SccMySeq* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyChoice_Encode(const asn1SccMyChoice* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyChoice_Decode(asn1SccMyChoice* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Boolean_Encode(const asn1SccT_Boolean* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Boolean_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}
#define ENUM_asn1Scchello	asn1Scchello
#define ENUM_asn1Sccworld	asn1Sccworld
#define ENUM_asn1Scchowareyou	asn1Scchowareyou
#define ENUM_asn1Sccvalid	asn1Sccvalid
#define ENUM_asn1Sccinvalid	asn1Sccinvalid
#define CHOICE_a_PRESENT	asn1SccMyChoice::a_PRESENT
#define CHOICE_b_PRESENT	asn1SccMyChoice::b_PRESENT

#endif

#endif
