-- Code automatically generated by asn1scc tool
WITH adaasn1rtl;
USE adaasn1rtl;
use type adaasn1rtl.OctetBuffer;
use type adaasn1rtl.BitArray;
use type adaasn1rtl.Asn1UInt;
use type adaasn1rtl.Asn1Int;
use type adaasn1rtl.BIT;
WITH System;
WITH TASTE_BasicTypes;
--# inherit adaasn1rtl,TASTE_BasicTypes;


PACKAGE TASTE_Dataview
IS


-----------------------------------------------------------asn1SccMyInteger-------------------------------------------------------------
SUBTYPE asn1SccMyInteger IS TASTE_BasicTypes.asn1SccT_UInt8;

asn1SccMyInteger_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyInteger_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 8;
asn1SccMyInteger_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyInteger_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 8;
asn1SccMyInteger_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMyInteger_Init return asn1SccMyInteger;
---# derives val from;
FUNCTION asn1SccMyInteger_IsConstraintValid(val : in asn1SccMyInteger) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMyInteger_Equal(val1, val2: in asn1SccMyInteger) return Boolean;




-----------------------------------------------------------asn1SccMyReal-------------------------------------------------------------
SUBTYPE asn1SccMyReal IS adaasn1rtl.Asn1Real;

asn1SccMyReal_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 13;
asn1SccMyReal_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 104;
asn1SccMyReal_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 13;
asn1SccMyReal_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 104;
asn1SccMyReal_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMyReal_Init return asn1SccMyReal;
---# derives val from;
FUNCTION asn1SccMyReal_IsConstraintValid(val : in asn1SccMyReal) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMyReal_Equal(val1, val2: in asn1SccMyReal) return Boolean;



ERR_asn1SccMyReal:CONSTANT INTEGER := 1005; -- (-1.00000000000000000000E+003 .. 1.00000000000000000000E+003)

-----------------------------------------------------------asn1SccMyBool-------------------------------------------------------------
SUBTYPE asn1SccMyBool IS adaasn1rtl.Asn1Boolean;

asn1SccMyBool_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyBool_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyBool_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyBool_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyBool_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMyBool_Init return asn1SccMyBool;
---# derives val from;
FUNCTION asn1SccMyBool_Equal(val1, val2: in asn1SccMyBool) return Boolean;




-----------------------------------------------------------asn1SccMyEnum-------------------------------------------------------------
SUBTYPE asn1SccMyEnum_index_range is integer range 0..2;
TYPE asn1SccMyEnum IS (asn1Scchello, asn1Sccworld, asn1Scchowareyou);
for asn1SccMyEnum use
    (asn1Scchello => 0, asn1Sccworld => 1, asn1Scchowareyou => 2);
for asn1SccMyEnum'Size use 32;

asn1SccMyEnum_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyEnum_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 2;
asn1SccMyEnum_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMyEnum_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 2;
asn1SccMyEnum_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMyEnum_Init return asn1SccMyEnum;
---# derives val from;
FUNCTION asn1SccMyEnum_IsConstraintValid(val : in asn1SccMyEnum) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMyEnum_Equal(val1, val2: in asn1SccMyEnum) return Boolean;



ERR_asn1SccMyEnum_unknown_enumeration_value:CONSTANT INTEGER := 1007; -- 
ERR_asn1SccMyEnum:CONSTANT INTEGER := 1006; -- 

-----------------------------------------------------------asn1SccMySeqOf-------------------------------------------------------------
SUBTYPE asn1SccMySeqOf_index is integer range 1..2;
TYPE asn1SccMySeqOf_array IS ARRAY (asn1SccMySeqOf_index) OF asn1SccMyEnum;
TYPE asn1SccMySeqOf IS  RECORD
    Data  : asn1SccMySeqOf_array;
END RECORD;

asn1SccMySeqOf_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMySeqOf_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 4;
asn1SccMySeqOf_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMySeqOf_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 4;
asn1SccMySeqOf_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMySeqOf_Init return asn1SccMySeqOf;
---# derives val from;
FUNCTION asn1SccMySeqOf_IsConstraintValid(val : in asn1SccMySeqOf) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMySeqOf_Equal(val1, val2: in asn1SccMySeqOf) return Boolean;

FUNCTION "=" (val1, val2: in asn1SccMySeqOf) return Boolean renames asn1SccMySeqOf_Equal;

ERR_asn1SccMySeqOf:CONSTANT INTEGER := 1008; -- (SIZE(2))

-----------------------------------------------------------asn1SccMyOctStr-------------------------------------------------------------
SUBTYPE asn1SccMyOctStr_index is integer range 1..3;
SUBTYPE asn1SccMyOctStr_array IS adaasn1rtl.OctetBuffer(asn1SccMyOctStr_index);
TYPE asn1SccMyOctStr IS  RECORD
    Data  : asn1SccMyOctStr_array;
END RECORD;

asn1SccMyOctStr_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 3;
asn1SccMyOctStr_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 24;
asn1SccMyOctStr_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 3;
asn1SccMyOctStr_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 24;
asn1SccMyOctStr_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMyOctStr_Init return asn1SccMyOctStr;
---# derives val from;
FUNCTION asn1SccMyOctStr_Equal(val1, val2: in asn1SccMyOctStr) return Boolean;

FUNCTION "=" (val1, val2: in asn1SccMyOctStr) return Boolean renames asn1SccMyOctStr_Equal;

ERR_asn1SccMyOctStr:CONSTANT INTEGER := 1009; -- (SIZE(3))

-----------------------------------------------------------asn1SccMySeq_validity-------------------------------------------------------------
SUBTYPE asn1SccMySeq_validity_index_range is integer range 0..1;
TYPE asn1SccMySeq_validity IS (asn1Sccvalid, asn1Sccinvalid);
for asn1SccMySeq_validity use
    (asn1Sccvalid => 0, asn1Sccinvalid => 1);
for asn1SccMySeq_validity'Size use 32;

asn1SccMySeq_validity_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMySeq_validity_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 1;
asn1SccMySeq_validity_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMySeq_validity_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 1;
asn1SccMySeq_validity_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMySeq_validity_Init return asn1SccMySeq_validity;
---# derives val from;
FUNCTION asn1SccMySeq_validity_IsConstraintValid(val : in asn1SccMySeq_validity) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMySeq_validity_Equal(val1, val2: in asn1SccMySeq_validity) return Boolean;



ERR_asn1SccMySeq_validity_unknown_enumeration_value:CONSTANT INTEGER := 1011; -- 
ERR_asn1SccMySeq_validity:CONSTANT INTEGER := 1010; -- 

-----------------------------------------------------------asn1SccMySeq-------------------------------------------------------------
TYPE asn1SccMySeq IS RECORD 
    input_data : asn1SccMyInteger;
    output_data : asn1SccMyInteger;
    validity : asn1SccMySeq_validity;
END RECORD;

asn1SccMySeq_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 3;
asn1SccMySeq_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 17;
asn1SccMySeq_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 3;
asn1SccMySeq_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 17;
asn1SccMySeq_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMySeq_Init return asn1SccMySeq;
---# derives val from;
FUNCTION asn1SccMySeq_IsConstraintValid(val : in asn1SccMySeq) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMySeq_Equal(val1, val2: in asn1SccMySeq) return Boolean;

FUNCTION "=" (val1, val2: in asn1SccMySeq) return Boolean renames asn1SccMySeq_Equal;


-----------------------------------------------------------asn1SccMyChoice-------------------------------------------------------------
TYPE asn1SccMyChoice IS PRIVATE;
SUBTYPE asn1SccMyChoice_index_range is integer range 0..1;

TYPE asn1SccMyChoice_selection IS (a_PRESENT, b_PRESENT);
for asn1SccMyChoice_selection use
    (a_PRESENT => 1, b_PRESENT => 2);
for asn1SccMyChoice_selection'Size use 32;


-- getters and setters
FUNCTION asn1SccMyChoice_kind(val:asn1SccMyChoice) RETURN asn1SccMyChoice_selection;
FUNCTION asn1SccMyChoice_a_get(val:asn1SccMyChoice) RETURN adaasn1rtl.Asn1Boolean;
--# pre asn1SccMyChoice_kind(val) = a_PRESENT;
FUNCTION asn1SccMyChoice_a_set(itm:adaasn1rtl.Asn1Boolean) RETURN asn1SccMyChoice;
FUNCTION asn1SccMyChoice_b_get(val:asn1SccMyChoice) RETURN asn1SccMySeq;
--# pre asn1SccMyChoice_kind(val) = b_PRESENT;
FUNCTION asn1SccMyChoice_b_set(itm:asn1SccMySeq) RETURN asn1SccMyChoice;

asn1SccMyChoice_REQUIRED_BYTES_FOR_ENCODING:CONSTANT INTEGER := 3;
asn1SccMyChoice_REQUIRED_BITS_FOR_ENCODING:CONSTANT INTEGER := 19;
asn1SccMyChoice_REQUIRED_BYTES_FOR_ACN_ENCODING:CONSTANT INTEGER := 3;
asn1SccMyChoice_REQUIRED_BITS_FOR_ACN_ENCODING:CONSTANT INTEGER := 19;
asn1SccMyChoice_REQUIRED_BYTES_FOR_XER_ENCODING:CONSTANT INTEGER :=  0;

FUNCTION asn1SccMyChoice_Init return asn1SccMyChoice;
---# derives val from;
FUNCTION asn1SccMyChoice_IsConstraintValid(val : in asn1SccMyChoice) return adaasn1rtl.ASN1_RESULT;
---# derives result from val;
FUNCTION asn1SccMyChoice_Equal(val1, val2: in asn1SccMyChoice) return Boolean;

FUNCTION "=" (val1, val2: in asn1SccMyChoice) return Boolean renames asn1SccMyChoice_Equal;

ERR_asn1SccMyChoice_unknown_choice_index:CONSTANT INTEGER := 1012; -- 


myVar : CONSTANT asn1SccMySeqOf:= asn1SccMySeqOf'(Data => asn1SccMySeqOf_array'(1=>asn1Scchello, 2=>asn1Sccworld, others => asn1Scchello)); 

private
   --# hide TASTE_Dataview;

   TYPE asn1SccMyChoice(kind : asn1SccMyChoice_selection:= a_PRESENT) IS 
   RECORD
       case kind is
       when a_PRESENT =>
               a: adaasn1rtl.Asn1Boolean;
       when b_PRESENT =>
               b: asn1SccMySeq;
       end case;
   END RECORD;

   FOR asn1SccMyChoice USE 
   RECORD
       kind AT 0 RANGE 0..31;
   END RECORD;

END TASTE_Dataview;