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
    asn1SccMyReal aX;
    asn1SccMyReal aY;
    asn1SccMyReal aZ;
    asn1SccMyReal aRoll;
    asn1SccMyReal aPitch;
    asn1SccMyReal aYaw;
} asn1SccAcceleration;

#define asn1SccAcceleration_REQUIRED_BYTES_FOR_ENCODING       78 
#define asn1SccAcceleration_REQUIRED_BITS_FOR_ENCODING        624
#define asn1SccAcceleration_REQUIRED_BYTES_FOR_ACN_ENCODING   78 
#define asn1SccAcceleration_REQUIRED_BITS_FOR_ACN_ENCODING    624
#define asn1SccAcceleration_REQUIRED_BYTES_FOR_XER_ENCODING   401

void asn1SccAcceleration_Initialize(asn1SccAcceleration* pVal);
flag asn1SccAcceleration_IsConstraintValid(const asn1SccAcceleration* val, int* pErrCode);


typedef struct {
    asn1SccMyReal yawrateRef;
    asn1SccMyReal pitchRef;
    asn1SccMyReal rollRef;
    asn1SccMyReal heightRef;
    asn1SccMyReal thrustRef;
} asn1SccDroneControllerInput;

#define asn1SccDroneControllerInput_REQUIRED_BYTES_FOR_ENCODING       65 
#define asn1SccDroneControllerInput_REQUIRED_BITS_FOR_ENCODING        520
#define asn1SccDroneControllerInput_REQUIRED_BYTES_FOR_ACN_ENCODING   65 
#define asn1SccDroneControllerInput_REQUIRED_BITS_FOR_ACN_ENCODING    520
#define asn1SccDroneControllerInput_REQUIRED_BYTES_FOR_XER_ENCODING   406

void asn1SccDroneControllerInput_Initialize(asn1SccDroneControllerInput* pVal);
flag asn1SccDroneControllerInput_IsConstraintValid(const asn1SccDroneControllerInput* val, int* pErrCode);


typedef struct {    
    asn1SccDroneControllerInput arr[5];
} asn1SccMultiDroneControllerInput_controllerInput;

#define asn1SccMultiDroneControllerInput_controllerInput_REQUIRED_BYTES_FOR_ENCODING       325 
#define asn1SccMultiDroneControllerInput_controllerInput_REQUIRED_BITS_FOR_ENCODING        2600
#define asn1SccMultiDroneControllerInput_controllerInput_REQUIRED_BYTES_FOR_ACN_ENCODING   325 
#define asn1SccMultiDroneControllerInput_controllerInput_REQUIRED_BITS_FOR_ACN_ENCODING    2600
#define asn1SccMultiDroneControllerInput_controllerInput_REQUIRED_BYTES_FOR_XER_ENCODING   2117

void asn1SccMultiDroneControllerInput_controllerInput_Initialize(asn1SccMultiDroneControllerInput_controllerInput* pVal);
flag asn1SccMultiDroneControllerInput_controllerInput_IsConstraintValid(const asn1SccMultiDroneControllerInput_controllerInput* val, int* pErrCode);
#ifndef ERR_asn1SccMultiDroneControllerInput_controllerInput 
#define ERR_asn1SccMultiDroneControllerInput_controllerInput		1002  /*(SIZE(5))*/
#endif

typedef struct {
    asn1SccMultiDroneControllerInput_controllerInput controllerInput;
} asn1SccMultiDroneControllerInput;

#define asn1SccMultiDroneControllerInput_REQUIRED_BYTES_FOR_ENCODING       325 
#define asn1SccMultiDroneControllerInput_REQUIRED_BITS_FOR_ENCODING        2600
#define asn1SccMultiDroneControllerInput_REQUIRED_BYTES_FOR_ACN_ENCODING   325 
#define asn1SccMultiDroneControllerInput_REQUIRED_BITS_FOR_ACN_ENCODING    2600
#define asn1SccMultiDroneControllerInput_REQUIRED_BYTES_FOR_XER_ENCODING   2120

void asn1SccMultiDroneControllerInput_Initialize(asn1SccMultiDroneControllerInput* pVal);
flag asn1SccMultiDroneControllerInput_IsConstraintValid(const asn1SccMultiDroneControllerInput* val, int* pErrCode);


typedef struct {
    asn1SccMyReal yawAct;
    asn1SccMyReal pitchAct;
    asn1SccMyReal rollAct;
    asn1SccMyReal baropAct;
    asn1SccMyReal accxAct;
    asn1SccMyReal accyAct;
    asn1SccMyReal acczAct;
} asn1SccDroneSensorData;

#define asn1SccDroneSensorData_REQUIRED_BYTES_FOR_ENCODING       91 
#define asn1SccDroneSensorData_REQUIRED_BITS_FOR_ENCODING        728
#define asn1SccDroneSensorData_REQUIRED_BYTES_FOR_ACN_ENCODING   91 
#define asn1SccDroneSensorData_REQUIRED_BITS_FOR_ACN_ENCODING    728
#define asn1SccDroneSensorData_REQUIRED_BYTES_FOR_XER_ENCODING   520

void asn1SccDroneSensorData_Initialize(asn1SccDroneSensorData* pVal);
flag asn1SccDroneSensorData_IsConstraintValid(const asn1SccDroneSensorData* val, int* pErrCode);


typedef struct {    
    asn1SccDroneSensorData arr[5];
} asn1SccMultiDroneSensorData_data;

#define asn1SccMultiDroneSensorData_data_REQUIRED_BYTES_FOR_ENCODING       455 
#define asn1SccMultiDroneSensorData_data_REQUIRED_BITS_FOR_ENCODING        3640
#define asn1SccMultiDroneSensorData_data_REQUIRED_BYTES_FOR_ACN_ENCODING   455 
#define asn1SccMultiDroneSensorData_data_REQUIRED_BITS_FOR_ACN_ENCODING    3640
#define asn1SccMultiDroneSensorData_data_REQUIRED_BYTES_FOR_XER_ENCODING   2655

void asn1SccMultiDroneSensorData_data_Initialize(asn1SccMultiDroneSensorData_data* pVal);
flag asn1SccMultiDroneSensorData_data_IsConstraintValid(const asn1SccMultiDroneSensorData_data* val, int* pErrCode);
#ifndef ERR_asn1SccMultiDroneSensorData_data 
#define ERR_asn1SccMultiDroneSensorData_data		1003  /*(SIZE(5))*/
#endif

typedef struct {
    asn1SccMultiDroneSensorData_data data;
} asn1SccMultiDroneSensorData;

#define asn1SccMultiDroneSensorData_REQUIRED_BYTES_FOR_ENCODING       455 
#define asn1SccMultiDroneSensorData_REQUIRED_BITS_FOR_ENCODING        3640
#define asn1SccMultiDroneSensorData_REQUIRED_BYTES_FOR_ACN_ENCODING   455 
#define asn1SccMultiDroneSensorData_REQUIRED_BITS_FOR_ACN_ENCODING    3640
#define asn1SccMultiDroneSensorData_REQUIRED_BYTES_FOR_XER_ENCODING   2658

void asn1SccMultiDroneSensorData_Initialize(asn1SccMultiDroneSensorData* pVal);
flag asn1SccMultiDroneSensorData_IsConstraintValid(const asn1SccMultiDroneSensorData* val, int* pErrCode);


typedef struct {
    asn1SccMyReal yaw_rate;
    asn1SccMyReal duration;
} asn1SccHoverAction;

#define asn1SccHoverAction_REQUIRED_BYTES_FOR_ENCODING       26 
#define asn1SccHoverAction_REQUIRED_BITS_FOR_ENCODING        208
#define asn1SccHoverAction_REQUIRED_BYTES_FOR_ACN_ENCODING   26 
#define asn1SccHoverAction_REQUIRED_BITS_FOR_ACN_ENCODING    208
#define asn1SccHoverAction_REQUIRED_BYTES_FOR_XER_ENCODING   169

void asn1SccHoverAction_Initialize(asn1SccHoverAction* pVal);
flag asn1SccHoverAction_IsConstraintValid(const asn1SccHoverAction* val, int* pErrCode);


typedef struct {    
    asn1SccHoverAction arr[3];
} asn1SccReferencePath_actions;

#define asn1SccReferencePath_actions_REQUIRED_BYTES_FOR_ENCODING       78 
#define asn1SccReferencePath_actions_REQUIRED_BITS_FOR_ENCODING        624
#define asn1SccReferencePath_actions_REQUIRED_BYTES_FOR_ACN_ENCODING   78 
#define asn1SccReferencePath_actions_REQUIRED_BITS_FOR_ACN_ENCODING    624
#define asn1SccReferencePath_actions_REQUIRED_BYTES_FOR_XER_ENCODING   554

void asn1SccReferencePath_actions_Initialize(asn1SccReferencePath_actions* pVal);
flag asn1SccReferencePath_actions_IsConstraintValid(const asn1SccReferencePath_actions* val, int* pErrCode);
#ifndef ERR_asn1SccReferencePath_actions 
#define ERR_asn1SccReferencePath_actions		1004  /*(SIZE(3))*/
#endif

typedef struct {
    asn1SccMyReal roll;
    asn1SccMyReal pitch;
    asn1SccMyReal yaw;
} asn1SccOrientation;

#define asn1SccOrientation_REQUIRED_BYTES_FOR_ENCODING       39 
#define asn1SccOrientation_REQUIRED_BITS_FOR_ENCODING        312
#define asn1SccOrientation_REQUIRED_BYTES_FOR_ACN_ENCODING   39 
#define asn1SccOrientation_REQUIRED_BITS_FOR_ACN_ENCODING    312
#define asn1SccOrientation_REQUIRED_BYTES_FOR_XER_ENCODING   216

void asn1SccOrientation_Initialize(asn1SccOrientation* pVal);
flag asn1SccOrientation_IsConstraintValid(const asn1SccOrientation* val, int* pErrCode);


typedef struct {
    asn1SccMyReal x;
    asn1SccMyReal y;
    asn1SccMyReal z;
} asn1SccPosition;

#define asn1SccPosition_REQUIRED_BYTES_FOR_ENCODING       39 
#define asn1SccPosition_REQUIRED_BITS_FOR_ENCODING        312
#define asn1SccPosition_REQUIRED_BYTES_FOR_ACN_ENCODING   39 
#define asn1SccPosition_REQUIRED_BITS_FOR_ACN_ENCODING    312
#define asn1SccPosition_REQUIRED_BYTES_FOR_XER_ENCODING   192

void asn1SccPosition_Initialize(asn1SccPosition* pVal);
flag asn1SccPosition_IsConstraintValid(const asn1SccPosition* val, int* pErrCode);


typedef struct {    
    asn1SccPosition arr[3];
} asn1SccReferencePath_locations;

#define asn1SccReferencePath_locations_REQUIRED_BYTES_FOR_ENCODING       117 
#define asn1SccReferencePath_locations_REQUIRED_BITS_FOR_ENCODING        936
#define asn1SccReferencePath_locations_REQUIRED_BYTES_FOR_ACN_ENCODING   117 
#define asn1SccReferencePath_locations_REQUIRED_BITS_FOR_ACN_ENCODING    936
#define asn1SccReferencePath_locations_REQUIRED_BYTES_FOR_XER_ENCODING   627

void asn1SccReferencePath_locations_Initialize(asn1SccReferencePath_locations* pVal);
flag asn1SccReferencePath_locations_IsConstraintValid(const asn1SccReferencePath_locations* val, int* pErrCode);
#ifndef ERR_asn1SccReferencePath_locations 
#define ERR_asn1SccReferencePath_locations		1005  /*(SIZE(3))*/
#endif

typedef struct {
    asn1SccReferencePath_locations locations;
    asn1SccReferencePath_actions actions;
} asn1SccReferencePath;

#define asn1SccReferencePath_REQUIRED_BYTES_FOR_ENCODING       195 
#define asn1SccReferencePath_REQUIRED_BITS_FOR_ENCODING        1560
#define asn1SccReferencePath_REQUIRED_BYTES_FOR_ACN_ENCODING   195 
#define asn1SccReferencePath_REQUIRED_BITS_FOR_ACN_ENCODING    1560
#define asn1SccReferencePath_REQUIRED_BYTES_FOR_XER_ENCODING   1156

void asn1SccReferencePath_Initialize(asn1SccReferencePath* pVal);
flag asn1SccReferencePath_IsConstraintValid(const asn1SccReferencePath* val, int* pErrCode);


typedef struct {
    asn1SccMyReal xAct;
    asn1SccMyReal yAct;
} asn1SccPositionSystemData;

#define asn1SccPositionSystemData_REQUIRED_BYTES_FOR_ENCODING       26 
#define asn1SccPositionSystemData_REQUIRED_BITS_FOR_ENCODING        208
#define asn1SccPositionSystemData_REQUIRED_BYTES_FOR_ACN_ENCODING   26 
#define asn1SccPositionSystemData_REQUIRED_BITS_FOR_ACN_ENCODING    208
#define asn1SccPositionSystemData_REQUIRED_BYTES_FOR_XER_ENCODING   167

void asn1SccPositionSystemData_Initialize(asn1SccPositionSystemData* pVal);
flag asn1SccPositionSystemData_IsConstraintValid(const asn1SccPositionSystemData* val, int* pErrCode);


typedef struct {
    asn1SccMyReal x;
    asn1SccMyReal y;
    asn1SccMyReal z;
    asn1SccMyReal yaw;
} asn1SccTrajectory;

#define asn1SccTrajectory_REQUIRED_BYTES_FOR_ENCODING       52 
#define asn1SccTrajectory_REQUIRED_BITS_FOR_ENCODING        416
#define asn1SccTrajectory_REQUIRED_BYTES_FOR_ACN_ENCODING   52 
#define asn1SccTrajectory_REQUIRED_BITS_FOR_ACN_ENCODING    416
#define asn1SccTrajectory_REQUIRED_BYTES_FOR_XER_ENCODING   257

void asn1SccTrajectory_Initialize(asn1SccTrajectory* pVal);
flag asn1SccTrajectory_IsConstraintValid(const asn1SccTrajectory* val, int* pErrCode);


typedef struct {
    asn1SccMyReal vX;
    asn1SccMyReal vY;
    asn1SccMyReal vZ;
    asn1SccMyReal vRoll;
    asn1SccMyReal vPitch;
    asn1SccMyReal vYaw;
} asn1SccVelocity;

#define asn1SccVelocity_REQUIRED_BYTES_FOR_ENCODING       78 
#define asn1SccVelocity_REQUIRED_BITS_FOR_ENCODING        624
#define asn1SccVelocity_REQUIRED_BYTES_FOR_ACN_ENCODING   78 
#define asn1SccVelocity_REQUIRED_BITS_FOR_ACN_ENCODING    624
#define asn1SccVelocity_REQUIRED_BYTES_FOR_XER_ENCODING   393

void asn1SccVelocity_Initialize(asn1SccVelocity* pVal);
flag asn1SccVelocity_IsConstraintValid(const asn1SccVelocity* val, int* pErrCode);


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
#define ERR_asn1SccMyEnum_unknown_enumeration_value		1007  /**/
#endif
#ifndef ERR_asn1SccMyEnum 
#define ERR_asn1SccMyEnum		1006  /**/
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
#define ERR_asn1SccMySeqOf		1008  /*(SIZE(2))*/
#endif

typedef enum {
    asn1Sccblack = 0,
    asn1Sccpink = 1,
    asn1Sccred = 2
} asn1SccColor;

#define asn1SccColor_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccColor_REQUIRED_BITS_FOR_ENCODING        2
#define asn1SccColor_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccColor_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define asn1SccColor_REQUIRED_BYTES_FOR_XER_ENCODING   24

void asn1SccColor_Initialize(asn1SccColor* pVal);
flag asn1SccColor_IsConstraintValid(const asn1SccColor* val, int* pErrCode);
#ifndef ERR_asn1SccColor_unknown_enumeration_value 
#define ERR_asn1SccColor_unknown_enumeration_value		1010  /**/
#endif
#ifndef ERR_asn1SccColor 
#define ERR_asn1SccColor		1009  /**/
#endif

typedef enum {
    asn1Sccsafe = 0,
    asn1Scccollision = 1,
    asn1SccwallColl = 2,
    asn1SccceilColl = 3
} asn1SccSafetyEvent;

#define asn1SccSafetyEvent_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccSafetyEvent_REQUIRED_BITS_FOR_ENCODING        2
#define asn1SccSafetyEvent_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccSafetyEvent_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define asn1SccSafetyEvent_REQUIRED_BYTES_FOR_XER_ENCODING   46

void asn1SccSafetyEvent_Initialize(asn1SccSafetyEvent* pVal);
flag asn1SccSafetyEvent_IsConstraintValid(const asn1SccSafetyEvent* val, int* pErrCode);
#ifndef ERR_asn1SccSafetyEvent_unknown_enumeration_value 
#define ERR_asn1SccSafetyEvent_unknown_enumeration_value		1012  /**/
#endif
#ifndef ERR_asn1SccSafetyEvent 
#define ERR_asn1SccSafetyEvent		1011  /**/
#endif

typedef enum {
    asn1Sccidle = 0,
    asn1Sccinitializing = 1,
    asn1SccrunningOk = 2,
    asn1SccemergencyLand = 3,
    asn1SccsafeReturn = 4
} asn1SccSystemState;

#define asn1SccSystemState_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccSystemState_REQUIRED_BITS_FOR_ENCODING        3
#define asn1SccSystemState_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccSystemState_REQUIRED_BITS_FOR_ACN_ENCODING    3
#define asn1SccSystemState_REQUIRED_BYTES_FOR_XER_ENCODING   50

void asn1SccSystemState_Initialize(asn1SccSystemState* pVal);
flag asn1SccSystemState_IsConstraintValid(const asn1SccSystemState* val, int* pErrCode);
#ifndef ERR_asn1SccSystemState_unknown_enumeration_value 
#define ERR_asn1SccSystemState_unknown_enumeration_value		1014  /**/
#endif
#ifndef ERR_asn1SccSystemState 
#define ERR_asn1SccSystemState		1013  /**/
#endif

typedef enum {
    asn1SccsysStart = 0,
    asn1SccsysPause = 1,
    asn1SccsysStop = 2
} asn1SccUserCommand;

#define asn1SccUserCommand_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccUserCommand_REQUIRED_BITS_FOR_ENCODING        2
#define asn1SccUserCommand_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccUserCommand_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define asn1SccUserCommand_REQUIRED_BYTES_FOR_XER_ENCODING   44

void asn1SccUserCommand_Initialize(asn1SccUserCommand* pVal);
flag asn1SccUserCommand_IsConstraintValid(const asn1SccUserCommand* val, int* pErrCode);
#ifndef ERR_asn1SccUserCommand_unknown_enumeration_value 
#define ERR_asn1SccUserCommand_unknown_enumeration_value		1016  /**/
#endif
#ifndef ERR_asn1SccUserCommand 
#define ERR_asn1SccUserCommand		1015  /**/
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
#define ERR_asn1SccMyOctStr		1017  /*(SIZE(3))*/
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
#define ERR_asn1SccMySeq_validity_unknown_enumeration_value		1019  /**/
#endif
#ifndef ERR_asn1SccMySeq_validity 
#define ERR_asn1SccMySeq_validity		1018  /**/
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
#define ERR_asn1SccT_Int32		1020  /*(-2147483648 .. 2147483647)*/
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
#define ERR_asn1SccT_UInt32		1021  /*(0 .. 4294967295)*/
#endif

typedef struct {
    asn1SccT_UInt32 xPix;
    asn1SccT_UInt32 yPix;
} asn1SccPixyData;

#define asn1SccPixyData_REQUIRED_BYTES_FOR_ENCODING       8 
#define asn1SccPixyData_REQUIRED_BITS_FOR_ENCODING        64
#define asn1SccPixyData_REQUIRED_BYTES_FOR_ACN_ENCODING   8 
#define asn1SccPixyData_REQUIRED_BITS_FOR_ACN_ENCODING    64
#define asn1SccPixyData_REQUIRED_BYTES_FOR_XER_ENCODING   87

void asn1SccPixyData_Initialize(asn1SccPixyData* pVal);
flag asn1SccPixyData_IsConstraintValid(const asn1SccPixyData* val, int* pErrCode);


typedef asn1SccSint asn1SccT_Int8;

#define asn1SccT_Int8_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_Int8_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccT_Int8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_Int8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccT_Int8_REQUIRED_BYTES_FOR_XER_ENCODING   37

void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal);
flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* val, int* pErrCode);
#ifndef ERR_asn1SccT_Int8 
#define ERR_asn1SccT_Int8		1022  /*(-128 .. 127)*/
#endif

typedef struct {
    asn1SccT_Int8 agentID;
    asn1SccColor agentColor;
    asn1SccPosition currentPosition;
    asn1SccOrientation currentOrientation;
    asn1SccVelocity currentVelocity;
    asn1SccAcceleration currentAcceleration;
} asn1SccAgent;

#define asn1SccAgent_REQUIRED_BYTES_FOR_ENCODING       236 
#define asn1SccAgent_REQUIRED_BITS_FOR_ENCODING        1882
#define asn1SccAgent_REQUIRED_BYTES_FOR_ACN_ENCODING   236 
#define asn1SccAgent_REQUIRED_BITS_FOR_ACN_ENCODING    1882
#define asn1SccAgent_REQUIRED_BYTES_FOR_XER_ENCODING   1346

void asn1SccAgent_Initialize(asn1SccAgent* pVal);
flag asn1SccAgent_IsConstraintValid(const asn1SccAgent* val, int* pErrCode);


typedef struct {
    asn1SccAgent agentData;
} asn1SccWorldData;

#define asn1SccWorldData_REQUIRED_BYTES_FOR_ENCODING       236 
#define asn1SccWorldData_REQUIRED_BITS_FOR_ENCODING        1882
#define asn1SccWorldData_REQUIRED_BYTES_FOR_ACN_ENCODING   236 
#define asn1SccWorldData_REQUIRED_BITS_FOR_ACN_ENCODING    1882
#define asn1SccWorldData_REQUIRED_BYTES_FOR_XER_ENCODING   1377

void asn1SccWorldData_Initialize(asn1SccWorldData* pVal);
flag asn1SccWorldData_IsConstraintValid(const asn1SccWorldData* val, int* pErrCode);


typedef struct {
    asn1SccWorldData flight;
    asn1SccSystemState notification;
} asn1SccFeedbackToGUI;

#define asn1SccFeedbackToGUI_REQUIRED_BYTES_FOR_ENCODING       236 
#define asn1SccFeedbackToGUI_REQUIRED_BITS_FOR_ENCODING        1885
#define asn1SccFeedbackToGUI_REQUIRED_BYTES_FOR_ACN_ENCODING   236 
#define asn1SccFeedbackToGUI_REQUIRED_BITS_FOR_ACN_ENCODING    1885
#define asn1SccFeedbackToGUI_REQUIRED_BYTES_FOR_XER_ENCODING   1454

void asn1SccFeedbackToGUI_Initialize(asn1SccFeedbackToGUI* pVal);
flag asn1SccFeedbackToGUI_IsConstraintValid(const asn1SccFeedbackToGUI* val, int* pErrCode);


typedef struct {    
    asn1SccAgent arr[5];
} asn1SccMultiAgents_agents;

#define asn1SccMultiAgents_agents_REQUIRED_BYTES_FOR_ENCODING       1177 
#define asn1SccMultiAgents_agents_REQUIRED_BITS_FOR_ENCODING        9410
#define asn1SccMultiAgents_agents_REQUIRED_BYTES_FOR_ACN_ENCODING   1177 
#define asn1SccMultiAgents_agents_REQUIRED_BITS_FOR_ACN_ENCODING    9410
#define asn1SccMultiAgents_agents_REQUIRED_BYTES_FOR_XER_ENCODING   6771

void asn1SccMultiAgents_agents_Initialize(asn1SccMultiAgents_agents* pVal);
flag asn1SccMultiAgents_agents_IsConstraintValid(const asn1SccMultiAgents_agents* val, int* pErrCode);
#ifndef ERR_asn1SccMultiAgents_agents 
#define ERR_asn1SccMultiAgents_agents		1023  /*(SIZE(5))*/
#endif

typedef struct {
    asn1SccMultiAgents_agents agents;
} asn1SccMultiAgents;

#define asn1SccMultiAgents_REQUIRED_BYTES_FOR_ENCODING       1177 
#define asn1SccMultiAgents_REQUIRED_BITS_FOR_ENCODING        9410
#define asn1SccMultiAgents_REQUIRED_BYTES_FOR_ACN_ENCODING   1177 
#define asn1SccMultiAgents_REQUIRED_BITS_FOR_ACN_ENCODING    9410
#define asn1SccMultiAgents_REQUIRED_BYTES_FOR_XER_ENCODING   6774

void asn1SccMultiAgents_Initialize(asn1SccMultiAgents* pVal);
flag asn1SccMultiAgents_IsConstraintValid(const asn1SccMultiAgents* val, int* pErrCode);


typedef struct {
    asn1SccT_Int8 height;
    asn1SccT_Int8 width;
    asn1SccT_Int8 depth;
    asn1SccPosition refLocation;
} asn1SccArea;

#define asn1SccArea_REQUIRED_BYTES_FOR_ENCODING       42 
#define asn1SccArea_REQUIRED_BITS_FOR_ENCODING        336
#define asn1SccArea_REQUIRED_BYTES_FOR_ACN_ENCODING   42 
#define asn1SccArea_REQUIRED_BITS_FOR_ACN_ENCODING    336
#define asn1SccArea_REQUIRED_BYTES_FOR_XER_ENCODING   318

void asn1SccArea_Initialize(asn1SccArea* pVal);
flag asn1SccArea_IsConstraintValid(const asn1SccArea* val, int* pErrCode);


typedef struct {    
    asn1SccT_Int8 arr[5];
} asn1SccReferenceFormation_nodes;

#define asn1SccReferenceFormation_nodes_REQUIRED_BYTES_FOR_ENCODING       5 
#define asn1SccReferenceFormation_nodes_REQUIRED_BITS_FOR_ENCODING        40
#define asn1SccReferenceFormation_nodes_REQUIRED_BYTES_FOR_ACN_ENCODING   5 
#define asn1SccReferenceFormation_nodes_REQUIRED_BITS_FOR_ACN_ENCODING    40
#define asn1SccReferenceFormation_nodes_REQUIRED_BYTES_FOR_XER_ENCODING   238

void asn1SccReferenceFormation_nodes_Initialize(asn1SccReferenceFormation_nodes* pVal);
flag asn1SccReferenceFormation_nodes_IsConstraintValid(const asn1SccReferenceFormation_nodes* val, int* pErrCode);
#ifndef ERR_asn1SccReferenceFormation_nodes 
#define ERR_asn1SccReferenceFormation_nodes		1024  /*(SIZE(5))*/
#endif

typedef struct {
    asn1SccReferenceFormation_nodes nodes;
    asn1SccT_Int8 anchor;
    asn1SccPosition formationAnchorPosition;
} asn1SccReferenceFormation;

#define asn1SccReferenceFormation_REQUIRED_BYTES_FOR_ENCODING       45 
#define asn1SccReferenceFormation_REQUIRED_BITS_FOR_ENCODING        360
#define asn1SccReferenceFormation_REQUIRED_BYTES_FOR_ACN_ENCODING   45 
#define asn1SccReferenceFormation_REQUIRED_BITS_FOR_ACN_ENCODING    360
#define asn1SccReferenceFormation_REQUIRED_BYTES_FOR_XER_ENCODING   500

void asn1SccReferenceFormation_Initialize(asn1SccReferenceFormation* pVal);
flag asn1SccReferenceFormation_IsConstraintValid(const asn1SccReferenceFormation* val, int* pErrCode);


typedef asn1SccUint asn1SccT_UInt8;

#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccT_UInt8_REQUIRED_BITS_FOR_ENCODING        8
#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccT_UInt8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define asn1SccT_UInt8_REQUIRED_BYTES_FOR_XER_ENCODING   39

void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal);
flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* val, int* pErrCode);
#ifndef ERR_asn1SccT_UInt8 
#define ERR_asn1SccT_UInt8		1025  /*(0 .. 255)*/
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
#define ERR_asn1SccMyChoice_unknown_choice_index		1026  /**/
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
flag asn1SccAcceleration_Encode(const asn1SccAcceleration* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccAcceleration_Decode(asn1SccAcceleration* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDroneControllerInput_Encode(const asn1SccDroneControllerInput* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDroneControllerInput_Decode(asn1SccDroneControllerInput* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMultiDroneControllerInput_controllerInput_Encode(const asn1SccMultiDroneControllerInput_controllerInput* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMultiDroneControllerInput_controllerInput_Decode(asn1SccMultiDroneControllerInput_controllerInput* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMultiDroneControllerInput_Encode(const asn1SccMultiDroneControllerInput* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMultiDroneControllerInput_Decode(asn1SccMultiDroneControllerInput* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDroneSensorData_Encode(const asn1SccDroneSensorData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDroneSensorData_Decode(asn1SccDroneSensorData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMultiDroneSensorData_data_Encode(const asn1SccMultiDroneSensorData_data* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMultiDroneSensorData_data_Decode(asn1SccMultiDroneSensorData_data* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMultiDroneSensorData_Encode(const asn1SccMultiDroneSensorData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMultiDroneSensorData_Decode(asn1SccMultiDroneSensorData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccHoverAction_Encode(const asn1SccHoverAction* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccHoverAction_Decode(asn1SccHoverAction* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccReferencePath_actions_Encode(const asn1SccReferencePath_actions* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccReferencePath_actions_Decode(asn1SccReferencePath_actions* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccOrientation_Encode(const asn1SccOrientation* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccOrientation_Decode(asn1SccOrientation* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPosition_Encode(const asn1SccPosition* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPosition_Decode(asn1SccPosition* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccReferencePath_locations_Encode(const asn1SccReferencePath_locations* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccReferencePath_locations_Decode(asn1SccReferencePath_locations* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccReferencePath_Encode(const asn1SccReferencePath* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccReferencePath_Decode(asn1SccReferencePath* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPositionSystemData_Encode(const asn1SccPositionSystemData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPositionSystemData_Decode(asn1SccPositionSystemData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccTrajectory_Encode(const asn1SccTrajectory* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccTrajectory_Decode(asn1SccTrajectory* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccVelocity_Encode(const asn1SccVelocity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccVelocity_Decode(asn1SccVelocity* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyBool_Encode(const asn1SccMyBool* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyBool_Decode(asn1SccMyBool* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyEnum_Encode(const asn1SccMyEnum* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyEnum_Decode(asn1SccMyEnum* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMySeqOf_Encode(const asn1SccMySeqOf* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMySeqOf_Decode(asn1SccMySeqOf* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccColor_Encode(const asn1SccColor* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccColor_Decode(asn1SccColor* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSafetyEvent_Encode(const asn1SccSafetyEvent* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSafetyEvent_Decode(asn1SccSafetyEvent* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSystemState_Encode(const asn1SccSystemState* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSystemState_Decode(asn1SccSystemState* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccUserCommand_Encode(const asn1SccUserCommand* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccUserCommand_Decode(asn1SccUserCommand* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMyOctStr_Encode(const asn1SccMyOctStr* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMyOctStr_Decode(asn1SccMyOctStr* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMySeq_validity_Encode(const asn1SccMySeq_validity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMySeq_validity_Decode(asn1SccMySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int32_Encode(const asn1SccT_Int32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPixyData_Encode(const asn1SccPixyData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPixyData_Decode(asn1SccPixyData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccT_Int8_Encode(const asn1SccT_Int8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccAgent_Encode(const asn1SccAgent* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccAgent_Decode(asn1SccAgent* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccWorldData_Encode(const asn1SccWorldData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccWorldData_Decode(asn1SccWorldData* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccFeedbackToGUI_Encode(const asn1SccFeedbackToGUI* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccFeedbackToGUI_Decode(asn1SccFeedbackToGUI* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMultiAgents_agents_Encode(const asn1SccMultiAgents_agents* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMultiAgents_agents_Decode(asn1SccMultiAgents_agents* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccMultiAgents_Encode(const asn1SccMultiAgents* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccMultiAgents_Decode(asn1SccMultiAgents* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccArea_Encode(const asn1SccArea* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArea_Decode(asn1SccArea* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccReferenceFormation_nodes_Encode(const asn1SccReferenceFormation_nodes* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccReferenceFormation_nodes_Decode(asn1SccReferenceFormation_nodes* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccReferenceFormation_Encode(const asn1SccReferenceFormation* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccReferenceFormation_Decode(asn1SccReferenceFormation* pVal, BitStream* pBitStrm, int* pErrCode);
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
#define ENUM_asn1Sccblack	asn1Sccblack
#define ENUM_asn1Sccpink	asn1Sccpink
#define ENUM_asn1Sccred	asn1Sccred
#define ENUM_asn1Sccsafe	asn1Sccsafe
#define ENUM_asn1Scccollision	asn1Scccollision
#define ENUM_asn1SccwallColl	asn1SccwallColl
#define ENUM_asn1SccceilColl	asn1SccceilColl
#define ENUM_asn1Sccidle	asn1Sccidle
#define ENUM_asn1Sccinitializing	asn1Sccinitializing
#define ENUM_asn1SccrunningOk	asn1SccrunningOk
#define ENUM_asn1SccemergencyLand	asn1SccemergencyLand
#define ENUM_asn1SccsafeReturn	asn1SccsafeReturn
#define ENUM_asn1SccsysStart	asn1SccsysStart
#define ENUM_asn1SccsysPause	asn1SccsysPause
#define ENUM_asn1SccsysStop	asn1SccsysStop
#define ENUM_asn1Sccvalid	asn1Sccvalid
#define ENUM_asn1Sccinvalid	asn1Sccinvalid
#define CHOICE_a_PRESENT	asn1SccMyChoice::a_PRESENT
#define CHOICE_b_PRESENT	asn1SccMyChoice::b_PRESENT

#endif

#endif
