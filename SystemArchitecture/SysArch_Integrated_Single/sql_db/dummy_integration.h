#ifndef GENERATED_ASN1SCC_DUMMY_INTEGRATION_H
#define GENERATED_ASN1SCC_DUMMY_INTEGRATION_H
/*
Code automatically generated by asn1scc tool
*/
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef asn1SccSint T_Int32;

#define T_Int32_REQUIRED_BYTES_FOR_ENCODING       4 
#define T_Int32_REQUIRED_BITS_FOR_ENCODING        32
#define T_Int32_REQUIRED_BYTES_FOR_ACN_ENCODING   4 
#define T_Int32_REQUIRED_BITS_FOR_ACN_ENCODING    32
#define T_Int32_REQUIRED_BYTES_FOR_XER_ENCODING   39

void T_Int32_Initialize(T_Int32* pVal);
flag T_Int32_IsConstraintValid(const T_Int32* val, int* pErrCode);
flag T_Int32_Equal(const T_Int32* val1, const T_Int32* val2);

#ifndef ERR_T_Int32 
#define ERR_T_Int32		1001  /*(-2147483648 .. 2147483647)*/
#endif

typedef asn1SccUint T_UInt32;

#define T_UInt32_REQUIRED_BYTES_FOR_ENCODING       4 
#define T_UInt32_REQUIRED_BITS_FOR_ENCODING        32
#define T_UInt32_REQUIRED_BYTES_FOR_ACN_ENCODING   4 
#define T_UInt32_REQUIRED_BITS_FOR_ACN_ENCODING    32
#define T_UInt32_REQUIRED_BYTES_FOR_XER_ENCODING   41

void T_UInt32_Initialize(T_UInt32* pVal);
flag T_UInt32_IsConstraintValid(const T_UInt32* val, int* pErrCode);
flag T_UInt32_Equal(const T_UInt32* val1, const T_UInt32* val2);

#ifndef ERR_T_UInt32 
#define ERR_T_UInt32		1002  /*(0 .. 4294967295)*/
#endif

typedef asn1SccSint T_Int8;

#define T_Int8_REQUIRED_BYTES_FOR_ENCODING       1 
#define T_Int8_REQUIRED_BITS_FOR_ENCODING        8
#define T_Int8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define T_Int8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define T_Int8_REQUIRED_BYTES_FOR_XER_ENCODING   37

void T_Int8_Initialize(T_Int8* pVal);
flag T_Int8_IsConstraintValid(const T_Int8* val, int* pErrCode);
flag T_Int8_Equal(const T_Int8* val1, const T_Int8* val2);

#ifndef ERR_T_Int8 
#define ERR_T_Int8		1003  /*(-128 .. 127)*/
#endif

typedef struct {    
    T_Int8 arr[5];
} ReferenceFormation_nodes;

#define ReferenceFormation_nodes_REQUIRED_BYTES_FOR_ENCODING       5 
#define ReferenceFormation_nodes_REQUIRED_BITS_FOR_ENCODING        40
#define ReferenceFormation_nodes_REQUIRED_BYTES_FOR_ACN_ENCODING   5 
#define ReferenceFormation_nodes_REQUIRED_BITS_FOR_ACN_ENCODING    40
#define ReferenceFormation_nodes_REQUIRED_BYTES_FOR_XER_ENCODING   238

void ReferenceFormation_nodes_Initialize(ReferenceFormation_nodes* pVal);
flag ReferenceFormation_nodes_IsConstraintValid(const ReferenceFormation_nodes* val, int* pErrCode);
flag ReferenceFormation_nodes_Equal(const ReferenceFormation_nodes* val1, const ReferenceFormation_nodes* val2);

#ifndef ERR_ReferenceFormation_nodes 
#define ERR_ReferenceFormation_nodes		1004  /*(SIZE(5))*/
#endif

typedef asn1SccUint T_UInt8;

#define T_UInt8_REQUIRED_BYTES_FOR_ENCODING       1 
#define T_UInt8_REQUIRED_BITS_FOR_ENCODING        8
#define T_UInt8_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define T_UInt8_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define T_UInt8_REQUIRED_BYTES_FOR_XER_ENCODING   39

void T_UInt8_Initialize(T_UInt8* pVal);
flag T_UInt8_IsConstraintValid(const T_UInt8* val, int* pErrCode);
flag T_UInt8_Equal(const T_UInt8* val1, const T_UInt8* val2);

#ifndef ERR_T_UInt8 
#define ERR_T_UInt8		1005  /*(0 .. 255)*/
#endif

typedef T_UInt8 MyInteger;

#define MyInteger_REQUIRED_BYTES_FOR_ENCODING       1 
#define MyInteger_REQUIRED_BITS_FOR_ENCODING        8
#define MyInteger_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define MyInteger_REQUIRED_BITS_FOR_ACN_ENCODING    8
#define MyInteger_REQUIRED_BYTES_FOR_XER_ENCODING   43

void MyInteger_Initialize(MyInteger* pVal);
flag MyInteger_IsConstraintValid(const MyInteger* val, int* pErrCode);
flag MyInteger_Equal(const MyInteger* val1, const MyInteger* val2);



typedef flag T_Boolean;

#define T_Boolean_REQUIRED_BYTES_FOR_ENCODING       1 
#define T_Boolean_REQUIRED_BITS_FOR_ENCODING        1
#define T_Boolean_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define T_Boolean_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define T_Boolean_REQUIRED_BYTES_FOR_XER_ENCODING   36

void T_Boolean_Initialize(T_Boolean* pVal);
flag T_Boolean_IsConstraintValid(const T_Boolean* val, int* pErrCode);
flag T_Boolean_Equal(const T_Boolean* val1, const T_Boolean* val2);



typedef double MyReal;

#define MyReal_REQUIRED_BYTES_FOR_ENCODING       13 
#define MyReal_REQUIRED_BITS_FOR_ENCODING        104
#define MyReal_REQUIRED_BYTES_FOR_ACN_ENCODING   13 
#define MyReal_REQUIRED_BITS_FOR_ACN_ENCODING    104
#define MyReal_REQUIRED_BYTES_FOR_XER_ENCODING   67

void MyReal_Initialize(MyReal* pVal);
flag MyReal_IsConstraintValid(const MyReal* val, int* pErrCode);
flag MyReal_Equal(const MyReal* val1, const MyReal* val2);

#ifndef ERR_MyReal 
#define ERR_MyReal		1006  /*(-1.00000000000000000000E+003 .. 1.00000000000000000000E+005)*/
#endif

typedef struct {
    MyReal xAct;
    MyReal yAct;
} PositionSystemData;

#define PositionSystemData_REQUIRED_BYTES_FOR_ENCODING       26 
#define PositionSystemData_REQUIRED_BITS_FOR_ENCODING        208
#define PositionSystemData_REQUIRED_BYTES_FOR_ACN_ENCODING   26 
#define PositionSystemData_REQUIRED_BITS_FOR_ACN_ENCODING    208
#define PositionSystemData_REQUIRED_BYTES_FOR_XER_ENCODING   167

void PositionSystemData_Initialize(PositionSystemData* pVal);
flag PositionSystemData_IsConstraintValid(const PositionSystemData* val, int* pErrCode);
flag PositionSystemData_Equal(const PositionSystemData* val1, const PositionSystemData* val2);



typedef struct {
    MyReal yawAct;
    MyReal pitchAct;
    MyReal rollAct;
    MyReal baropAct;
    MyReal accxAct;
    MyReal accyAct;
    MyReal acczAct;
} DroneSensorData;

#define DroneSensorData_REQUIRED_BYTES_FOR_ENCODING       91 
#define DroneSensorData_REQUIRED_BITS_FOR_ENCODING        728
#define DroneSensorData_REQUIRED_BYTES_FOR_ACN_ENCODING   91 
#define DroneSensorData_REQUIRED_BITS_FOR_ACN_ENCODING    728
#define DroneSensorData_REQUIRED_BYTES_FOR_XER_ENCODING   520

void DroneSensorData_Initialize(DroneSensorData* pVal);
flag DroneSensorData_IsConstraintValid(const DroneSensorData* val, int* pErrCode);
flag DroneSensorData_Equal(const DroneSensorData* val1, const DroneSensorData* val2);



typedef struct {
    DroneSensorData rawASD;
} WorldData;

#define WorldData_REQUIRED_BYTES_FOR_ENCODING       91 
#define WorldData_REQUIRED_BITS_FOR_ENCODING        728
#define WorldData_REQUIRED_BYTES_FOR_ACN_ENCODING   91 
#define WorldData_REQUIRED_BITS_FOR_ACN_ENCODING    728
#define WorldData_REQUIRED_BYTES_FOR_XER_ENCODING   525

void WorldData_Initialize(WorldData* pVal);
flag WorldData_IsConstraintValid(const WorldData* val, int* pErrCode);
flag WorldData_Equal(const WorldData* val1, const WorldData* val2);



typedef struct {
    MyReal yawrateRef;
    MyReal pitchRef;
    MyReal rollRef;
    MyReal thrustRef;
} DroneControllerInput;

#define DroneControllerInput_REQUIRED_BYTES_FOR_ENCODING       52 
#define DroneControllerInput_REQUIRED_BITS_FOR_ENCODING        416
#define DroneControllerInput_REQUIRED_BYTES_FOR_ACN_ENCODING   52 
#define DroneControllerInput_REQUIRED_BITS_FOR_ACN_ENCODING    416
#define DroneControllerInput_REQUIRED_BYTES_FOR_XER_ENCODING   333

void DroneControllerInput_Initialize(DroneControllerInput* pVal);
flag DroneControllerInput_IsConstraintValid(const DroneControllerInput* val, int* pErrCode);
flag DroneControllerInput_Equal(const DroneControllerInput* val1, const DroneControllerInput* val2);



typedef struct {
    MyReal x;
    MyReal y;
    MyReal z;
} Position;

#define Position_REQUIRED_BYTES_FOR_ENCODING       39 
#define Position_REQUIRED_BITS_FOR_ENCODING        312
#define Position_REQUIRED_BYTES_FOR_ACN_ENCODING   39 
#define Position_REQUIRED_BITS_FOR_ACN_ENCODING    312
#define Position_REQUIRED_BYTES_FOR_XER_ENCODING   192

void Position_Initialize(Position* pVal);
flag Position_IsConstraintValid(const Position* val, int* pErrCode);
flag Position_Equal(const Position* val1, const Position* val2);



typedef struct {
    T_Int8 height;
    T_Int8 width;
    T_Int8 depth;
    Position refLocation;
} Area;

#define Area_REQUIRED_BYTES_FOR_ENCODING       42 
#define Area_REQUIRED_BITS_FOR_ENCODING        336
#define Area_REQUIRED_BYTES_FOR_ACN_ENCODING   42 
#define Area_REQUIRED_BITS_FOR_ACN_ENCODING    336
#define Area_REQUIRED_BYTES_FOR_XER_ENCODING   318

void Area_Initialize(Area* pVal);
flag Area_IsConstraintValid(const Area* val, int* pErrCode);
flag Area_Equal(const Area* val1, const Area* val2);



typedef struct {
    ReferenceFormation_nodes nodes;
    T_Int8 anchor;
    Position formationAnchorPosition;
} ReferenceFormation;

#define ReferenceFormation_REQUIRED_BYTES_FOR_ENCODING       45 
#define ReferenceFormation_REQUIRED_BITS_FOR_ENCODING        360
#define ReferenceFormation_REQUIRED_BYTES_FOR_ACN_ENCODING   45 
#define ReferenceFormation_REQUIRED_BITS_FOR_ACN_ENCODING    360
#define ReferenceFormation_REQUIRED_BYTES_FOR_XER_ENCODING   500

void ReferenceFormation_Initialize(ReferenceFormation* pVal);
flag ReferenceFormation_IsConstraintValid(const ReferenceFormation* val, int* pErrCode);
flag ReferenceFormation_Equal(const ReferenceFormation* val1, const ReferenceFormation* val2);



typedef struct {    
    Position arr[3];
} ReferencePath_locations;

#define ReferencePath_locations_REQUIRED_BYTES_FOR_ENCODING       117 
#define ReferencePath_locations_REQUIRED_BITS_FOR_ENCODING        936
#define ReferencePath_locations_REQUIRED_BYTES_FOR_ACN_ENCODING   117 
#define ReferencePath_locations_REQUIRED_BITS_FOR_ACN_ENCODING    936
#define ReferencePath_locations_REQUIRED_BYTES_FOR_XER_ENCODING   627

void ReferencePath_locations_Initialize(ReferencePath_locations* pVal);
flag ReferencePath_locations_IsConstraintValid(const ReferencePath_locations* val, int* pErrCode);
flag ReferencePath_locations_Equal(const ReferencePath_locations* val1, const ReferencePath_locations* val2);

#ifndef ERR_ReferencePath_locations 
#define ERR_ReferencePath_locations		1007  /*(SIZE(3))*/
#endif

typedef struct {
    MyReal roll;
    MyReal pitch;
    MyReal yaw;
} Orientation;

#define Orientation_REQUIRED_BYTES_FOR_ENCODING       39 
#define Orientation_REQUIRED_BITS_FOR_ENCODING        312
#define Orientation_REQUIRED_BYTES_FOR_ACN_ENCODING   39 
#define Orientation_REQUIRED_BITS_FOR_ACN_ENCODING    312
#define Orientation_REQUIRED_BYTES_FOR_XER_ENCODING   216

void Orientation_Initialize(Orientation* pVal);
flag Orientation_IsConstraintValid(const Orientation* val, int* pErrCode);
flag Orientation_Equal(const Orientation* val1, const Orientation* val2);



typedef struct {
    MyReal x;
    MyReal y;
    MyReal z;
    MyReal yaw;
} Trajectory;

#define Trajectory_REQUIRED_BYTES_FOR_ENCODING       52 
#define Trajectory_REQUIRED_BITS_FOR_ENCODING        416
#define Trajectory_REQUIRED_BYTES_FOR_ACN_ENCODING   52 
#define Trajectory_REQUIRED_BITS_FOR_ACN_ENCODING    416
#define Trajectory_REQUIRED_BYTES_FOR_XER_ENCODING   257

void Trajectory_Initialize(Trajectory* pVal);
flag Trajectory_IsConstraintValid(const Trajectory* val, int* pErrCode);
flag Trajectory_Equal(const Trajectory* val1, const Trajectory* val2);



typedef struct {
    MyReal vX;
    MyReal vY;
    MyReal vZ;
} Velocity;

#define Velocity_REQUIRED_BYTES_FOR_ENCODING       39 
#define Velocity_REQUIRED_BITS_FOR_ENCODING        312
#define Velocity_REQUIRED_BYTES_FOR_ACN_ENCODING   39 
#define Velocity_REQUIRED_BITS_FOR_ACN_ENCODING    312
#define Velocity_REQUIRED_BYTES_FOR_XER_ENCODING   198

void Velocity_Initialize(Velocity* pVal);
flag Velocity_IsConstraintValid(const Velocity* val, int* pErrCode);
flag Velocity_Equal(const Velocity* val1, const Velocity* val2);



typedef struct {
    MyReal yaw_rate;
    MyReal duration;
} HoverAction;

#define HoverAction_REQUIRED_BYTES_FOR_ENCODING       26 
#define HoverAction_REQUIRED_BITS_FOR_ENCODING        208
#define HoverAction_REQUIRED_BYTES_FOR_ACN_ENCODING   26 
#define HoverAction_REQUIRED_BITS_FOR_ACN_ENCODING    208
#define HoverAction_REQUIRED_BYTES_FOR_XER_ENCODING   169

void HoverAction_Initialize(HoverAction* pVal);
flag HoverAction_IsConstraintValid(const HoverAction* val, int* pErrCode);
flag HoverAction_Equal(const HoverAction* val1, const HoverAction* val2);



typedef struct {    
    HoverAction arr[3];
} ReferencePath_actions;

#define ReferencePath_actions_REQUIRED_BYTES_FOR_ENCODING       78 
#define ReferencePath_actions_REQUIRED_BITS_FOR_ENCODING        624
#define ReferencePath_actions_REQUIRED_BYTES_FOR_ACN_ENCODING   78 
#define ReferencePath_actions_REQUIRED_BITS_FOR_ACN_ENCODING    624
#define ReferencePath_actions_REQUIRED_BYTES_FOR_XER_ENCODING   554

void ReferencePath_actions_Initialize(ReferencePath_actions* pVal);
flag ReferencePath_actions_IsConstraintValid(const ReferencePath_actions* val, int* pErrCode);
flag ReferencePath_actions_Equal(const ReferencePath_actions* val1, const ReferencePath_actions* val2);

#ifndef ERR_ReferencePath_actions 
#define ERR_ReferencePath_actions		1008  /*(SIZE(3))*/
#endif

typedef struct {
    ReferencePath_locations locations;
    ReferencePath_actions actions;
} ReferencePath;

#define ReferencePath_REQUIRED_BYTES_FOR_ENCODING       195 
#define ReferencePath_REQUIRED_BITS_FOR_ENCODING        1560
#define ReferencePath_REQUIRED_BYTES_FOR_ACN_ENCODING   195 
#define ReferencePath_REQUIRED_BITS_FOR_ACN_ENCODING    1560
#define ReferencePath_REQUIRED_BYTES_FOR_XER_ENCODING   1156

void ReferencePath_Initialize(ReferencePath* pVal);
flag ReferencePath_IsConstraintValid(const ReferencePath* val, int* pErrCode);
flag ReferencePath_Equal(const ReferencePath* val1, const ReferencePath* val2);



typedef flag MyBool;

#define MyBool_REQUIRED_BYTES_FOR_ENCODING       1 
#define MyBool_REQUIRED_BITS_FOR_ENCODING        1
#define MyBool_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define MyBool_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define MyBool_REQUIRED_BYTES_FOR_XER_ENCODING   30

void MyBool_Initialize(MyBool* pVal);
flag MyBool_IsConstraintValid(const MyBool* val, int* pErrCode);
flag MyBool_Equal(const MyBool* val1, const MyBool* val2);



typedef enum {
    hello = 0,
    world = 1,
    howareyou = 2
} MyEnum;

#define MyEnum_REQUIRED_BYTES_FOR_ENCODING       1 
#define MyEnum_REQUIRED_BITS_FOR_ENCODING        2
#define MyEnum_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define MyEnum_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define MyEnum_REQUIRED_BYTES_FOR_XER_ENCODING   30

void MyEnum_Initialize(MyEnum* pVal);
flag MyEnum_IsConstraintValid(const MyEnum* val, int* pErrCode);
flag MyEnum_Equal(const MyEnum* val1, const MyEnum* val2);

#ifndef ERR_MyEnum_unknown_enumeration_value 
#define ERR_MyEnum_unknown_enumeration_value		1010  /**/
#endif
#ifndef ERR_MyEnum 
#define ERR_MyEnum		1009  /**/
#endif

typedef struct {    
    MyEnum arr[2];
} MySeqOf;

#define MySeqOf_REQUIRED_BYTES_FOR_ENCODING       1 
#define MySeqOf_REQUIRED_BITS_FOR_ENCODING        4
#define MySeqOf_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define MySeqOf_REQUIRED_BITS_FOR_ACN_ENCODING    4
#define MySeqOf_REQUIRED_BYTES_FOR_XER_ENCODING   55

void MySeqOf_Initialize(MySeqOf* pVal);
flag MySeqOf_IsConstraintValid(const MySeqOf* val, int* pErrCode);
flag MySeqOf_Equal(const MySeqOf* val1, const MySeqOf* val2);

#ifndef ERR_MySeqOf 
#define ERR_MySeqOf		1011  /*(SIZE(2))*/
#endif

typedef enum {
    sysStart = 0,
    sysPause = 1,
    sysStop = 2
} UserCommand;

#define UserCommand_REQUIRED_BYTES_FOR_ENCODING       1 
#define UserCommand_REQUIRED_BITS_FOR_ENCODING        2
#define UserCommand_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define UserCommand_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define UserCommand_REQUIRED_BYTES_FOR_XER_ENCODING   44

void UserCommand_Initialize(UserCommand* pVal);
flag UserCommand_IsConstraintValid(const UserCommand* val, int* pErrCode);
flag UserCommand_Equal(const UserCommand* val1, const UserCommand* val2);

#ifndef ERR_UserCommand_unknown_enumeration_value 
#define ERR_UserCommand_unknown_enumeration_value		1013  /**/
#endif
#ifndef ERR_UserCommand 
#define ERR_UserCommand		1012  /**/
#endif

typedef enum {
    black = 0,
    pink = 1,
    red = 2
} Color;

#define Color_REQUIRED_BYTES_FOR_ENCODING       1 
#define Color_REQUIRED_BITS_FOR_ENCODING        2
#define Color_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define Color_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define Color_REQUIRED_BYTES_FOR_XER_ENCODING   24

void Color_Initialize(Color* pVal);
flag Color_IsConstraintValid(const Color* val, int* pErrCode);
flag Color_Equal(const Color* val1, const Color* val2);

#ifndef ERR_Color_unknown_enumeration_value 
#define ERR_Color_unknown_enumeration_value		1015  /**/
#endif
#ifndef ERR_Color 
#define ERR_Color		1014  /**/
#endif

typedef struct {
    T_Int8 agentID;
    Color agentColor;
    Position currentPosition;
    Orientation currentOrientation;
    Velocity currentVelocity;
} Agent;

#define Agent_REQUIRED_BYTES_FOR_ENCODING       119 
#define Agent_REQUIRED_BITS_FOR_ENCODING        946
#define Agent_REQUIRED_BYTES_FOR_ACN_ENCODING   119 
#define Agent_REQUIRED_BITS_FOR_ACN_ENCODING    946
#define Agent_REQUIRED_BYTES_FOR_XER_ENCODING   736

void Agent_Initialize(Agent* pVal);
flag Agent_IsConstraintValid(const Agent* val, int* pErrCode);
flag Agent_Equal(const Agent* val1, const Agent* val2);



typedef enum {
    idle = 0,
    initializing = 1,
    runningOk = 2,
    emergencyLand = 3,
    safeReturn = 4
} SystemState;

#define SystemState_REQUIRED_BYTES_FOR_ENCODING       1 
#define SystemState_REQUIRED_BITS_FOR_ENCODING        3
#define SystemState_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define SystemState_REQUIRED_BITS_FOR_ACN_ENCODING    3
#define SystemState_REQUIRED_BYTES_FOR_XER_ENCODING   50

void SystemState_Initialize(SystemState* pVal);
flag SystemState_IsConstraintValid(const SystemState* val, int* pErrCode);
flag SystemState_Equal(const SystemState* val1, const SystemState* val2);

#ifndef ERR_SystemState_unknown_enumeration_value 
#define ERR_SystemState_unknown_enumeration_value		1017  /**/
#endif
#ifndef ERR_SystemState 
#define ERR_SystemState		1016  /**/
#endif

typedef struct {
    WorldData flight;
    SystemState notification;
} FeedbackToGUI;

#define FeedbackToGUI_REQUIRED_BYTES_FOR_ENCODING       92 
#define FeedbackToGUI_REQUIRED_BITS_FOR_ENCODING        731
#define FeedbackToGUI_REQUIRED_BYTES_FOR_ACN_ENCODING   92 
#define FeedbackToGUI_REQUIRED_BITS_FOR_ACN_ENCODING    731
#define FeedbackToGUI_REQUIRED_BYTES_FOR_XER_ENCODING   602

void FeedbackToGUI_Initialize(FeedbackToGUI* pVal);
flag FeedbackToGUI_IsConstraintValid(const FeedbackToGUI* val, int* pErrCode);
flag FeedbackToGUI_Equal(const FeedbackToGUI* val1, const FeedbackToGUI* val2);



typedef enum {
    safe = 0,
    collision = 1,
    wallColl = 2,
    ceilColl = 3
} SafetyEvent;

#define SafetyEvent_REQUIRED_BYTES_FOR_ENCODING       1 
#define SafetyEvent_REQUIRED_BITS_FOR_ENCODING        2
#define SafetyEvent_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define SafetyEvent_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define SafetyEvent_REQUIRED_BYTES_FOR_XER_ENCODING   46

void SafetyEvent_Initialize(SafetyEvent* pVal);
flag SafetyEvent_IsConstraintValid(const SafetyEvent* val, int* pErrCode);
flag SafetyEvent_Equal(const SafetyEvent* val1, const SafetyEvent* val2);

#ifndef ERR_SafetyEvent_unknown_enumeration_value 
#define ERR_SafetyEvent_unknown_enumeration_value		1019  /**/
#endif
#ifndef ERR_SafetyEvent 
#define ERR_SafetyEvent		1018  /**/
#endif

typedef struct {    
    byte arr[3];
} MyOctStr;

#define MyOctStr_REQUIRED_BYTES_FOR_ENCODING       3 
#define MyOctStr_REQUIRED_BITS_FOR_ENCODING        24
#define MyOctStr_REQUIRED_BYTES_FOR_ACN_ENCODING   3 
#define MyOctStr_REQUIRED_BITS_FOR_ACN_ENCODING    24
#define MyOctStr_REQUIRED_BYTES_FOR_XER_ENCODING   27

void MyOctStr_Initialize(MyOctStr* pVal);
flag MyOctStr_IsConstraintValid(const MyOctStr* val, int* pErrCode);
flag MyOctStr_Equal(const MyOctStr* val1, const MyOctStr* val2);

#ifndef ERR_MyOctStr 
#define ERR_MyOctStr		1020  /*(SIZE(3))*/
#endif

typedef enum {
    valid = 0,
    invalid = 1
} MySeq_validity;

#define MySeq_validity_REQUIRED_BYTES_FOR_ENCODING       1 
#define MySeq_validity_REQUIRED_BITS_FOR_ENCODING        1
#define MySeq_validity_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define MySeq_validity_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define MySeq_validity_REQUIRED_BYTES_FOR_XER_ENCODING   46

void MySeq_validity_Initialize(MySeq_validity* pVal);
flag MySeq_validity_IsConstraintValid(const MySeq_validity* val, int* pErrCode);
flag MySeq_validity_Equal(const MySeq_validity* val1, const MySeq_validity* val2);

#ifndef ERR_MySeq_validity_unknown_enumeration_value 
#define ERR_MySeq_validity_unknown_enumeration_value		1022  /**/
#endif
#ifndef ERR_MySeq_validity 
#define ERR_MySeq_validity		1021  /**/
#endif

typedef struct {
    MyInteger input_data;
    MyInteger output_data;
    MySeq_validity validity;
} MySeq;

#define MySeq_REQUIRED_BYTES_FOR_ENCODING       3 
#define MySeq_REQUIRED_BITS_FOR_ENCODING        17
#define MySeq_REQUIRED_BYTES_FOR_ACN_ENCODING   3 
#define MySeq_REQUIRED_BITS_FOR_ACN_ENCODING    17
#define MySeq_REQUIRED_BYTES_FOR_XER_ENCODING   141

void MySeq_Initialize(MySeq* pVal);
flag MySeq_IsConstraintValid(const MySeq* val, int* pErrCode);
flag MySeq_Equal(const MySeq* val1, const MySeq* val2);



typedef struct {
    enum {
        MyChoice_NONE,
        a_PRESENT,
        b_PRESENT 
    } kind;
    union {
        flag a;
        MySeq b;
    } u; 
} MyChoice;

#define MyChoice_REQUIRED_BYTES_FOR_ENCODING       3 
#define MyChoice_REQUIRED_BITS_FOR_ENCODING        19
#define MyChoice_REQUIRED_BYTES_FOR_ACN_ENCODING   3 
#define MyChoice_REQUIRED_BITS_FOR_ACN_ENCODING    19
#define MyChoice_REQUIRED_BYTES_FOR_XER_ENCODING   154

void MyChoice_Initialize(MyChoice* pVal);
flag MyChoice_IsConstraintValid(const MyChoice* val, int* pErrCode);
flag MyChoice_Equal(const MyChoice* val1, const MyChoice* val2);

#ifndef ERR_MyChoice_unknown_choice_index 
#define ERR_MyChoice_unknown_choice_index		1023  /**/
#endif

extern const MySeqOf myVar; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag T_Int32_Encode(const T_Int32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_Int32_Decode(T_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_Int32_ACN_Encode(const T_Int32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_Int32_ACN_Decode(T_Int32* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_UInt32_Encode(const T_UInt32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_UInt32_Decode(T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_UInt32_ACN_Encode(const T_UInt32* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_UInt32_ACN_Decode(T_UInt32* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_Int8_Encode(const T_Int8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_Int8_Decode(T_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_Int8_ACN_Encode(const T_Int8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_Int8_ACN_Decode(T_Int8* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferenceFormation_nodes_Encode(const ReferenceFormation_nodes* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferenceFormation_nodes_Decode(ReferenceFormation_nodes* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferenceFormation_nodes_ACN_Encode(const ReferenceFormation_nodes* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferenceFormation_nodes_ACN_Decode(ReferenceFormation_nodes* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_UInt8_Encode(const T_UInt8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_UInt8_Decode(T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_UInt8_ACN_Encode(const T_UInt8* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_UInt8_ACN_Decode(T_UInt8* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyInteger_Encode(const MyInteger* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyInteger_Decode(MyInteger* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyInteger_ACN_Encode(const MyInteger* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyInteger_ACN_Decode(MyInteger* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_Boolean_Encode(const T_Boolean* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_Boolean_Decode(T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode);
flag T_Boolean_ACN_Encode(const T_Boolean* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag T_Boolean_ACN_Decode(T_Boolean* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyReal_Encode(const MyReal* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyReal_Decode(MyReal* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyReal_ACN_Encode(const MyReal* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyReal_ACN_Decode(MyReal* pVal, BitStream* pBitStrm, int* pErrCode);
flag PositionSystemData_Encode(const PositionSystemData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag PositionSystemData_Decode(PositionSystemData* pVal, BitStream* pBitStrm, int* pErrCode);
flag PositionSystemData_ACN_Encode(const PositionSystemData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag PositionSystemData_ACN_Decode(PositionSystemData* pVal, BitStream* pBitStrm, int* pErrCode);
flag DroneSensorData_Encode(const DroneSensorData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag DroneSensorData_Decode(DroneSensorData* pVal, BitStream* pBitStrm, int* pErrCode);
flag DroneSensorData_ACN_Encode(const DroneSensorData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag DroneSensorData_ACN_Decode(DroneSensorData* pVal, BitStream* pBitStrm, int* pErrCode);
flag WorldData_Encode(const WorldData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag WorldData_Decode(WorldData* pVal, BitStream* pBitStrm, int* pErrCode);
flag WorldData_ACN_Encode(const WorldData* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag WorldData_ACN_Decode(WorldData* pVal, BitStream* pBitStrm, int* pErrCode);
flag DroneControllerInput_Encode(const DroneControllerInput* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag DroneControllerInput_Decode(DroneControllerInput* pVal, BitStream* pBitStrm, int* pErrCode);
flag DroneControllerInput_ACN_Encode(const DroneControllerInput* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag DroneControllerInput_ACN_Decode(DroneControllerInput* pVal, BitStream* pBitStrm, int* pErrCode);
flag Position_Encode(const Position* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Position_Decode(Position* pVal, BitStream* pBitStrm, int* pErrCode);
flag Position_ACN_Encode(const Position* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Position_ACN_Decode(Position* pVal, BitStream* pBitStrm, int* pErrCode);
flag Area_Encode(const Area* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Area_Decode(Area* pVal, BitStream* pBitStrm, int* pErrCode);
flag Area_ACN_Encode(const Area* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Area_ACN_Decode(Area* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferenceFormation_Encode(const ReferenceFormation* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferenceFormation_Decode(ReferenceFormation* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferenceFormation_ACN_Encode(const ReferenceFormation* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferenceFormation_ACN_Decode(ReferenceFormation* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferencePath_locations_Encode(const ReferencePath_locations* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferencePath_locations_Decode(ReferencePath_locations* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferencePath_locations_ACN_Encode(const ReferencePath_locations* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferencePath_locations_ACN_Decode(ReferencePath_locations* pVal, BitStream* pBitStrm, int* pErrCode);
flag Orientation_Encode(const Orientation* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Orientation_Decode(Orientation* pVal, BitStream* pBitStrm, int* pErrCode);
flag Orientation_ACN_Encode(const Orientation* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Orientation_ACN_Decode(Orientation* pVal, BitStream* pBitStrm, int* pErrCode);
flag Trajectory_Encode(const Trajectory* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Trajectory_Decode(Trajectory* pVal, BitStream* pBitStrm, int* pErrCode);
flag Trajectory_ACN_Encode(const Trajectory* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Trajectory_ACN_Decode(Trajectory* pVal, BitStream* pBitStrm, int* pErrCode);
flag Velocity_Encode(const Velocity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Velocity_Decode(Velocity* pVal, BitStream* pBitStrm, int* pErrCode);
flag Velocity_ACN_Encode(const Velocity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Velocity_ACN_Decode(Velocity* pVal, BitStream* pBitStrm, int* pErrCode);
flag HoverAction_Encode(const HoverAction* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag HoverAction_Decode(HoverAction* pVal, BitStream* pBitStrm, int* pErrCode);
flag HoverAction_ACN_Encode(const HoverAction* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag HoverAction_ACN_Decode(HoverAction* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferencePath_actions_Encode(const ReferencePath_actions* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferencePath_actions_Decode(ReferencePath_actions* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferencePath_actions_ACN_Encode(const ReferencePath_actions* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferencePath_actions_ACN_Decode(ReferencePath_actions* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferencePath_Encode(const ReferencePath* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferencePath_Decode(ReferencePath* pVal, BitStream* pBitStrm, int* pErrCode);
flag ReferencePath_ACN_Encode(const ReferencePath* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag ReferencePath_ACN_Decode(ReferencePath* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyBool_Encode(const MyBool* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyBool_Decode(MyBool* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyBool_ACN_Encode(const MyBool* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyBool_ACN_Decode(MyBool* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyEnum_Encode(const MyEnum* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyEnum_Decode(MyEnum* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyEnum_ACN_Encode(const MyEnum* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyEnum_ACN_Decode(MyEnum* pVal, BitStream* pBitStrm, int* pErrCode);
flag MySeqOf_Encode(const MySeqOf* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MySeqOf_Decode(MySeqOf* pVal, BitStream* pBitStrm, int* pErrCode);
flag MySeqOf_ACN_Encode(const MySeqOf* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MySeqOf_ACN_Decode(MySeqOf* pVal, BitStream* pBitStrm, int* pErrCode);
flag UserCommand_Encode(const UserCommand* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag UserCommand_Decode(UserCommand* pVal, BitStream* pBitStrm, int* pErrCode);
flag UserCommand_ACN_Encode(const UserCommand* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag UserCommand_ACN_Decode(UserCommand* pVal, BitStream* pBitStrm, int* pErrCode);
flag Color_Encode(const Color* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Color_Decode(Color* pVal, BitStream* pBitStrm, int* pErrCode);
flag Color_ACN_Encode(const Color* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Color_ACN_Decode(Color* pVal, BitStream* pBitStrm, int* pErrCode);
flag Agent_Encode(const Agent* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Agent_Decode(Agent* pVal, BitStream* pBitStrm, int* pErrCode);
flag Agent_ACN_Encode(const Agent* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag Agent_ACN_Decode(Agent* pVal, BitStream* pBitStrm, int* pErrCode);
flag SystemState_Encode(const SystemState* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag SystemState_Decode(SystemState* pVal, BitStream* pBitStrm, int* pErrCode);
flag SystemState_ACN_Encode(const SystemState* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag SystemState_ACN_Decode(SystemState* pVal, BitStream* pBitStrm, int* pErrCode);
flag FeedbackToGUI_Encode(const FeedbackToGUI* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag FeedbackToGUI_Decode(FeedbackToGUI* pVal, BitStream* pBitStrm, int* pErrCode);
flag FeedbackToGUI_ACN_Encode(const FeedbackToGUI* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag FeedbackToGUI_ACN_Decode(FeedbackToGUI* pVal, BitStream* pBitStrm, int* pErrCode);
flag SafetyEvent_Encode(const SafetyEvent* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag SafetyEvent_Decode(SafetyEvent* pVal, BitStream* pBitStrm, int* pErrCode);
flag SafetyEvent_ACN_Encode(const SafetyEvent* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag SafetyEvent_ACN_Decode(SafetyEvent* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyOctStr_Encode(const MyOctStr* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyOctStr_Decode(MyOctStr* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyOctStr_ACN_Encode(const MyOctStr* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyOctStr_ACN_Decode(MyOctStr* pVal, BitStream* pBitStrm, int* pErrCode);
flag MySeq_validity_Encode(const MySeq_validity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MySeq_validity_Decode(MySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode);
flag MySeq_validity_ACN_Encode(const MySeq_validity* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MySeq_validity_ACN_Decode(MySeq_validity* pVal, BitStream* pBitStrm, int* pErrCode);
flag MySeq_Encode(const MySeq* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MySeq_Decode(MySeq* pVal, BitStream* pBitStrm, int* pErrCode);
flag MySeq_ACN_Encode(const MySeq* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MySeq_ACN_Decode(MySeq* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyChoice_Encode(const MyChoice* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyChoice_Decode(MyChoice* pVal, BitStream* pBitStrm, int* pErrCode);
flag MyChoice_ACN_Encode(const MyChoice* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag MyChoice_ACN_Decode(MyChoice* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}
#define ENUM_hello	hello
#define ENUM_world	world
#define ENUM_howareyou	howareyou
#define ENUM_sysStart	sysStart
#define ENUM_sysPause	sysPause
#define ENUM_sysStop	sysStop
#define ENUM_black	black
#define ENUM_pink	pink
#define ENUM_red	red
#define ENUM_idle	idle
#define ENUM_initializing	initializing
#define ENUM_runningOk	runningOk
#define ENUM_emergencyLand	emergencyLand
#define ENUM_safeReturn	safeReturn
#define ENUM_safe	safe
#define ENUM_collision	collision
#define ENUM_wallColl	wallColl
#define ENUM_ceilColl	ceilColl
#define ENUM_valid	valid
#define ENUM_invalid	invalid
#define CHOICE_a_PRESENT	MyChoice::a_PRESENT
#define CHOICE_b_PRESENT	MyChoice::b_PRESENT

#endif

#endif
