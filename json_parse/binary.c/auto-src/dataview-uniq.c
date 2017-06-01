/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "dataview-uniq.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_Int32_Initialize(asn1SccT_Int32* pVal)
{
    *pVal = (asn1SccT_Int32) -2147483648LL;
}
#endif

 
flag asn1SccT_Int32_IsConstraintValid(const asn1SccT_Int32* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (-2147483648LL <= *pVal && *pVal <= 2147483647LL);
	*pErrCode = ret ? 0 : ERR_asn1SccT_Int32;

	return ret;
}

flag asn1SccT_Int32_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -2147483648LL, 2147483647LL);
    }

	return ret;
}

flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : 268435457;

	return ret;
}

flag asn1SccT_Int32_ACN_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -2147483648LL, 2147483647LL);
    }

	return ret;
}

flag asn1SccT_Int32_ACN_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
    *pErrCode = ret ? 0 : 268435458;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_UInt32_Initialize(asn1SccT_UInt32* pVal)
{
    *pVal = (asn1SccT_UInt32) 0;
}
#endif

 
flag asn1SccT_UInt32_IsConstraintValid(const asn1SccT_UInt32* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (*pVal <= 4294967295LL);
	*pErrCode = ret ? 0 : ERR_asn1SccT_UInt32;

	return ret;
}

flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 4294967295LL);
    }

	return ret;
}

flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : 268435459;

	return ret;
}

flag asn1SccT_UInt32_ACN_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 4294967295LL);
    }

	return ret;
}

flag asn1SccT_UInt32_ACN_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
    *pErrCode = ret ? 0 : 268435460;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal)
{
    *pVal = (asn1SccT_Int8) -128;
}
#endif

 
flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (-128 <= *pVal && *pVal <= 127);
	*pErrCode = ret ? 0 : ERR_asn1SccT_Int8;

	return ret;
}

flag asn1SccT_Int8_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -128, 127);
    }

	return ret;
}

flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : 268435461;

	return ret;
}

flag asn1SccT_Int8_ACN_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -128, 127);
    }

	return ret;
}

flag asn1SccT_Int8_ACN_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
    *pErrCode = ret ? 0 : 268435462;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal)
{
    *pVal = (asn1SccT_UInt8) 0;
}
#endif

 
flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (*pVal <= 255);
	*pErrCode = ret ? 0 : ERR_asn1SccT_UInt8;

	return ret;
}

flag asn1SccT_UInt8_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 255);
    }

	return ret;
}

flag asn1SccT_UInt8_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : 268435463;

	return ret;
}

flag asn1SccT_UInt8_ACN_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 255);
    }

	return ret;
}

flag asn1SccT_UInt8_ACN_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
    *pErrCode = ret ? 0 : 268435464;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMyInteger_Initialize(asn1SccMyInteger* pVal)
{
    *pVal = (asn1SccMyInteger) 0;
}
#endif

 
flag asn1SccMyInteger_IsConstraintValid(const asn1SccMyInteger* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode);

	return ret;
}

flag asn1SccMyInteger_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMyInteger_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccT_UInt8_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccMyInteger_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = asn1SccT_UInt8_Decode(pVal, pBitStrm, pErrCode);

	return ret;
}

flag asn1SccMyInteger_ACN_Encode(const asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccMyInteger_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccT_UInt8_ACN_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccMyInteger_ACN_Decode(asn1SccMyInteger* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = asn1SccT_UInt8_ACN_Decode(pVal, pBitStrm, pErrCode);
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_Boolean_Initialize(asn1SccT_Boolean* pVal)
{
    *pVal = (asn1SccT_Boolean) FALSE;
}
#endif

 
flag asn1SccT_Boolean_IsConstraintValid(const asn1SccT_Boolean* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = TRUE; *pErrCode = 0;

	return ret;
}

flag asn1SccT_Boolean_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_AppendBit(pBitStrm,*pVal);
    }

	return ret;
}

flag asn1SccT_Boolean_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : 268435465;

	return ret;
}

flag asn1SccT_Boolean_ACN_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    {
	    	static byte true_data[] = {0x80};
	    	static byte false_data[] = {0x7F};
	        byte* tmp = *pVal ? true_data : false_data; 
	        BitStream_AppendBits(pBitStrm, tmp, 1);
	    }
    }

	return ret;
}

flag asn1SccT_Boolean_ACN_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    {
    	static byte tmp[] = {0x80};
    	ret = BitStream_ReadBitPattern(pBitStrm, tmp, 1, pVal);
        *pErrCode = ret ? 0 : 268435466;
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMyReal_Initialize(asn1SccMyReal* pVal)
{
    *pVal = (asn1SccMyReal) 0.00000000000000000000E+000;
}
#endif

 
flag asn1SccMyReal_IsConstraintValid(const asn1SccMyReal* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (0.00000000000000000000E+000 <= *pVal && *pVal <= 1.00000000000000000000E+003);
	*pErrCode = ret ? 0 : ERR_asn1SccMyReal;

	return ret;
}

flag asn1SccMyReal_Encode(const asn1SccMyReal* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMyReal_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeReal(pBitStrm, *pVal);
    }

	return ret;
}

flag asn1SccMyReal_Decode(asn1SccMyReal* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	BitStream_DecodeReal(pBitStrm, pVal);
	*pErrCode = ret ? 0 : 268435467;

	return ret;
}

flag asn1SccMyReal_ACN_Encode(const asn1SccMyReal* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccMyReal_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeReal(pBitStrm, *pVal);
    }

	return ret;
}

flag asn1SccMyReal_ACN_Decode(asn1SccMyReal* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    BitStream_DecodeReal(pBitStrm, pVal);
    *pErrCode = ret ? 0 : 268435468;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMyBool_Initialize(asn1SccMyBool* pVal)
{
    *pVal = (asn1SccMyBool) FALSE;
}
#endif

 
flag asn1SccMyBool_IsConstraintValid(const asn1SccMyBool* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = TRUE; *pErrCode = 0;

	return ret;
}

flag asn1SccMyBool_Encode(const asn1SccMyBool* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMyBool_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_AppendBit(pBitStrm,*pVal);
    }

	return ret;
}

flag asn1SccMyBool_Decode(asn1SccMyBool* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : 268435469;

	return ret;
}

flag asn1SccMyBool_ACN_Encode(const asn1SccMyBool* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccMyBool_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    {
	    	static byte true_data[] = {0x80};
	    	static byte false_data[] = {0x7F};
	        byte* tmp = *pVal ? true_data : false_data; 
	        BitStream_AppendBits(pBitStrm, tmp, 1);
	    }
    }

	return ret;
}

flag asn1SccMyBool_ACN_Decode(asn1SccMyBool* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    {
    	static byte tmp[] = {0x80};
    	ret = BitStream_ReadBitPattern(pBitStrm, tmp, 1, pVal);
        *pErrCode = ret ? 0 : 268435470;
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMyEnum_Initialize(asn1SccMyEnum* pVal)
{
    *pVal = (asn1SccMyEnum) asn1Scchello;
}
#endif

 
flag asn1SccMyEnum_IsConstraintValid(const asn1SccMyEnum* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (((*pVal == asn1Scchello) || (*pVal == asn1Sccworld)) || (*pVal == asn1Scchowareyou));
	*pErrCode = ret ? 0 : ERR_asn1SccMyEnum;

	return ret;
}

flag asn1SccMyEnum_Encode(const asn1SccMyEnum* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMyEnum_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) 
	    {
	        case asn1Scchello:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 2);
	        	break;
	        case asn1Sccworld:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 2);
	        	break;
	        case asn1Scchowareyou:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 2, 0, 2);
	        	break;
	        default:
	    	    *pErrCode = 1073741825; //COVERAGE_IGNORE
	    	    ret = FALSE;            //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccMyEnum_Decode(asn1SccMyEnum* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint enumIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &enumIndex, 0, 2);
	*pErrCode = ret ? 0 : 268435471;
	if (ret) {
	    switch(enumIndex) 
	    {
	        case 0: 
	            *pVal = asn1Scchello;
	            break;
	        case 1: 
	            *pVal = asn1Sccworld;
	            break;
	        case 2: 
	            *pVal = asn1Scchowareyou;
	            break;
	        default:
		        *pErrCode = 1073741826;     //COVERAGE_IGNORE
		        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccMyEnum_ACN_Encode(const asn1SccMyEnum* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;

    ret = bCheckConstraints ? asn1SccMyEnum_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) { 
	        case asn1Scchello:
	            intVal = 0;
	            break;
	        case asn1Sccworld:
	            intVal = 1;
	            break;
	        case asn1Scchowareyou:
	            intVal = 2;
	            break;
	        default:
	            ret = FALSE;                            //COVERAGE_IGNORE
	            *pErrCode = 1073741827;      //COVERAGE_IGNORE
	    }
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, intVal, 0, 2);
    }

	return ret;
}

flag asn1SccMyEnum_ACN_Decode(asn1SccMyEnum* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, &intVal, 0, 2);
    *pErrCode = ret ? 0 : 268435472;
    if (ret) {
        switch (intVal) {
            case 0:
                *pVal = asn1Scchello;
                break;
            case 1:
                *pVal = asn1Sccworld;
                break;
            case 2:
                *pVal = asn1Scchowareyou;
                break;
        default:
            ret = FALSE;                            //COVERAGE_IGNORE
            *pErrCode = 1073741828;      //COVERAGE_IGNORE
        };
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMySeqOf_Initialize(asn1SccMySeqOf* pVal)
{
    *pVal = (asn1SccMySeqOf) {    .arr = 
    {
        asn1Scchello        
    }
};
}
#endif

 
flag asn1SccMySeqOf_IsConstraintValid(const asn1SccMySeqOf* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = TRUE; *pErrCode = 0;
	i1 = 0;
	while (ret && (i1< 2)) {
	    ret = asn1SccMyEnum_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccMySeqOf_Encode(const asn1SccMySeqOf* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccMySeqOf_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    	
	    for(i1=0; (i1 < (int)2) && ret; i1++) 
	    {
	    	ret = asn1SccMyEnum_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccMySeqOf_Decode(asn1SccMySeqOf* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	int i1=0;

		
	for(i1=0; (i1 < (int)2) && ret; i1++) 
	{
		ret = asn1SccMyEnum_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccMySeqOf_ACN_Encode(const asn1SccMySeqOf* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccMySeqOf_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    	
	    for(i1=0; (i1 < (int)2) && ret; i1++) 
	    {
	    	ret = asn1SccMyEnum_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccMySeqOf_ACN_Decode(asn1SccMySeqOf* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    	
    for(i1=0; (i1 < (int)2) && ret; i1++) 
    {
    	ret = asn1SccMyEnum_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMyOctStr_Initialize(asn1SccMyOctStr* pVal)
{
    *pVal = (asn1SccMyOctStr) {
    {
        0x00
    }
};
}
#endif

 
flag asn1SccMyOctStr_IsConstraintValid(const asn1SccMyOctStr* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (3 == 3);
	*pErrCode = ret ? 0 : ERR_asn1SccMyOctStr;

	return ret;
}

flag asn1SccMyOctStr_Encode(const asn1SccMyOctStr* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccMyOctStr_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    	
	    for(i1=0; (i1 < (int)3) && ret; i1++) 
	    {
	    	BitStream_AppendByte0(pBitStrm, pVal->arr[i1]);
	    }
    }

	return ret;
}

flag asn1SccMyOctStr_Decode(asn1SccMyOctStr* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	int i1=0;

		
	for(i1=0; (i1 < (int)3) && ret; i1++) 
	{
		ret = BitStream_ReadByte(pBitStrm, &pVal->arr[i1]); 
		*pErrCode = ret ? 0 : 268435473;
	}

	return ret;
}

flag asn1SccMyOctStr_ACN_Encode(const asn1SccMyOctStr* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccMyOctStr_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    	
	    for(i1=0; (i1 < (int)3) && ret; i1++) 
	    {
	    	BitStream_AppendByte0(pBitStrm, pVal->arr[i1]);
	    }
    }

	return ret;
}

flag asn1SccMyOctStr_ACN_Decode(asn1SccMyOctStr* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    	
    for(i1=0; (i1 < (int)3) && ret; i1++) 
    {
    	ret = BitStream_ReadByte(pBitStrm, &pVal->arr[i1]); 
    	*pErrCode = ret ? 0 : 268435474;
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMySeq_validity_Initialize(asn1SccMySeq_validity* pVal)
{
    *pVal = (asn1SccMySeq_validity) asn1Sccvalid;
}
#endif

 
flag asn1SccMySeq_validity_IsConstraintValid(const asn1SccMySeq_validity* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = ((*pVal == asn1Sccvalid) || (*pVal == asn1Sccinvalid));
	*pErrCode = ret ? 0 : ERR_asn1SccMySeq_validity;

	return ret;
}

flag asn1SccMySeq_validity_Encode(const asn1SccMySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMySeq_validity_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) 
	    {
	        case asn1Sccvalid:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	        	break;
	        case asn1Sccinvalid:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	        	break;
	        default:
	    	    *pErrCode = 1073741829; //COVERAGE_IGNORE
	    	    ret = FALSE;            //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccMySeq_validity_Decode(asn1SccMySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint enumIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &enumIndex, 0, 1);
	*pErrCode = ret ? 0 : 268435475;
	if (ret) {
	    switch(enumIndex) 
	    {
	        case 0: 
	            *pVal = asn1Sccvalid;
	            break;
	        case 1: 
	            *pVal = asn1Sccinvalid;
	            break;
	        default:
		        *pErrCode = 1073741830;     //COVERAGE_IGNORE
		        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccMySeq_validity_ACN_Encode(const asn1SccMySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;

    ret = bCheckConstraints ? asn1SccMySeq_validity_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) { 
	        case asn1Sccvalid:
	            intVal = 0;
	            break;
	        case asn1Sccinvalid:
	            intVal = 1;
	            break;
	        default:
	            ret = FALSE;                            //COVERAGE_IGNORE
	            *pErrCode = 1073741831;      //COVERAGE_IGNORE
	    }
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, intVal, 0, 1);
    }

	return ret;
}

flag asn1SccMySeq_validity_ACN_Decode(asn1SccMySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, &intVal, 0, 1);
    *pErrCode = ret ? 0 : 268435476;
    if (ret) {
        switch (intVal) {
            case 0:
                *pVal = asn1Sccvalid;
                break;
            case 1:
                *pVal = asn1Sccinvalid;
                break;
        default:
            ret = FALSE;                            //COVERAGE_IGNORE
            *pErrCode = 1073741832;      //COVERAGE_IGNORE
        };
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMySeq_Initialize(asn1SccMySeq* pVal)
{
    *pVal = (asn1SccMySeq) {
    .input_data = 0,
    .output_data = 0,
    .validity = asn1Sccvalid
};
}
#endif

 
flag asn1SccMySeq_IsConstraintValid(const asn1SccMySeq* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccMyInteger_IsConstraintValid(&pVal->input_data, pErrCode);
	if (ret) {
	    ret = asn1SccMyInteger_IsConstraintValid(&pVal->output_data, pErrCode);
	    if (ret) {
	        ret = asn1SccMySeq_validity_IsConstraintValid(&pVal->validity, pErrCode);
	    
	    }
	}

	return ret;
}

flag asn1SccMySeq_Encode(const asn1SccMySeq* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMySeq_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode input_data */
	    ret = asn1SccMyInteger_Encode(&pVal->input_data, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode output_data */
	        ret = asn1SccMyInteger_Encode(&pVal->output_data, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode validity */
	            ret = asn1SccMySeq_validity_Encode(&pVal->validity, pBitStrm, pErrCode, FALSE);
	        
	        }
	    }
    }

	return ret;
}

flag asn1SccMySeq_Decode(asn1SccMySeq* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode input_data */
	ret = asn1SccMyInteger_Decode(&pVal->input_data, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode output_data */
	    ret = asn1SccMyInteger_Decode(&pVal->output_data, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode validity */
	        ret = asn1SccMySeq_validity_Decode(&pVal->validity, pBitStrm, pErrCode);
	    
	    }
	}


	return ret;
}

flag asn1SccMySeq_ACN_Encode(const asn1SccMySeq* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccMySeq_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode input_data */
	    ret = asn1SccMyInteger_ACN_Encode(&pVal->input_data, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode output_data */
	        ret = asn1SccMyInteger_ACN_Encode(&pVal->output_data, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode validity */
	            ret = asn1SccMySeq_validity_ACN_Encode(&pVal->validity, pBitStrm, pErrCode, FALSE);

	        }

	    }

    }

	return ret;
}

flag asn1SccMySeq_ACN_Decode(asn1SccMySeq* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode input_data */
    ret = asn1SccMyInteger_ACN_Decode(&pVal->input_data, pBitStrm, pErrCode);
    if (ret) {
        /*Decode output_data */
        ret = asn1SccMyInteger_ACN_Decode(&pVal->output_data, pBitStrm, pErrCode);
        if (ret) {
            /*Decode validity */
            ret = asn1SccMySeq_validity_ACN_Decode(&pVal->validity, pBitStrm, pErrCode);

        }

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccMyChoice_Initialize(asn1SccMyChoice* pVal)
{
    *pVal = (asn1SccMyChoice) {
    .kind = a_PRESENT,
    .u = { .a = FALSE}
};
}
#endif

 
flag asn1SccMyChoice_IsConstraintValid(const asn1SccMyChoice* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	switch (pVal->kind) {
	    case a_PRESENT :
	        ret = TRUE; *pErrCode = 0;
	        break;
	    case b_PRESENT :
	        ret = asn1SccMySeq_IsConstraintValid(&pVal->u.b, pErrCode);
	        break;
	    default:
		    *pErrCode = 805306369;   //COVERAGE_IGNORE
		    ret = FALSE;                    //COVERAGE_IGNORE
	}

	return ret;
}

flag asn1SccMyChoice_Encode(const asn1SccMyChoice* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccMyChoice_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(pVal->kind) 
	    {
	    case a_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	    	BitStream_AppendBit(pBitStrm,pVal->u.a);
	    	break;
	    case b_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	    	ret = asn1SccMySeq_Encode(&pVal->u.b, pBitStrm, pErrCode, FALSE);
	    	break;
	    default:
	        *pErrCode = 805306370;         //COVERAGE_IGNORE
	        ret = FALSE;                    //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccMyChoice_Decode(asn1SccMyChoice* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nChoiceIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nChoiceIndex, 0, 1);
	*pErrCode = ret ? 0 : 268435477;
	if (ret) {
	    switch(nChoiceIndex) 
	    {
	    case 0:
	    	pVal->kind = a_PRESENT;
	    	ret = BitStream_ReadBit(pBitStrm, &pVal->u.a);
	    	*pErrCode = ret ? 0 : 268435478;
	    	break;
	    case 1:
	    	pVal->kind = b_PRESENT;
	    	ret = asn1SccMySeq_Decode(&pVal->u.b, pBitStrm, pErrCode);
	    	break;
	    default:
	        *pErrCode = 805306371;     //COVERAGE_IGNORE
	        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccMyChoice_ACN_Encode(const asn1SccMyChoice* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccMyChoice_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(pVal->kind) 
	    {
	    case a_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	    	{
	    		static byte true_data[] = {0x80};
	    		static byte false_data[] = {0x7F};
	    	    byte* tmp = pVal->u.a ? true_data : false_data; 
	    	    BitStream_AppendBits(pBitStrm, tmp, 1);
	    	}
	    	break;
	    case b_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	    	ret = asn1SccMySeq_ACN_Encode(&pVal->u.b, pBitStrm, pErrCode, FALSE);
	    	break;
	    default:
	        *pErrCode = 805306372;         //COVERAGE_IGNORE
	        ret = FALSE;                    //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccMyChoice_ACN_Decode(asn1SccMyChoice* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccSint nChoiceIndex;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nChoiceIndex, 0, 1);
    *pErrCode = ret ? 0 : 268435479;
    if (ret) {
        switch(nChoiceIndex) 
        {
        case 0:
        	pVal->kind = a_PRESENT;
        	{
        		static byte tmp[] = {0x80};
        		ret = BitStream_ReadBitPattern(pBitStrm, tmp, 1, &pVal->u.a);
        	    *pErrCode = ret ? 0 : 268435480;
        	}
        	break;
        case 1:
        	pVal->kind = b_PRESENT;
        	ret = asn1SccMySeq_ACN_Decode(&pVal->u.b, pBitStrm, pErrCode);
        	break;
        default:
            *pErrCode = 805306373;     //COVERAGE_IGNORE
            ret = FALSE;                //COVERAGE_IGNORE
        }
    }
    return ret;
}

const asn1SccMySeqOf myVar = {    .arr = 
    {
        asn1Scchello,
        asn1Sccworld        
    }
};