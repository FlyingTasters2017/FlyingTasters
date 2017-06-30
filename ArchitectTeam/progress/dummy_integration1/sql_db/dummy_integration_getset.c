#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "dummy_integration_getset.h"

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


/* INTEGER */
asn1SccSint Agent__agentID_Get(Agent* root)
{
    return (*root).agentID;
}

/* INTEGER */
void Agent__agentID_Set(Agent* root, asn1SccSint value)
{
    (*root).agentID = value;
}

/* ENUMERATED */
int Agent__agentColor_Get(Agent* root)
{
    return (*root).agentColor;
}

/* ENUMERATED */
void Agent__agentColor_Set(Agent* root, int value)
{
    (*root).agentColor = value;
}

/* Field currentPosition selector */
Position* Agent__currentPosition_Get(Agent* root)
{
    return &(*root).currentPosition;
}

/* REAL */
double Agent__currentPosition_x_Get(Agent* root)
{
    return (*root).currentPosition.x;
}

/* REAL */
void Agent__currentPosition_x_Set(Agent* root, double value)
{
    (*root).currentPosition.x = value;
}

/* REAL */
double Agent__currentPosition_y_Get(Agent* root)
{
    return (*root).currentPosition.y;
}

/* REAL */
void Agent__currentPosition_y_Set(Agent* root, double value)
{
    (*root).currentPosition.y = value;
}

/* REAL */
double Agent__currentPosition_z_Get(Agent* root)
{
    return (*root).currentPosition.z;
}

/* REAL */
void Agent__currentPosition_z_Set(Agent* root, double value)
{
    (*root).currentPosition.z = value;
}

/* Field currentOrientation selector */
Orientation* Agent__currentOrientation_Get(Agent* root)
{
    return &(*root).currentOrientation;
}

/* REAL */
double Agent__currentOrientation_roll_Get(Agent* root)
{
    return (*root).currentOrientation.roll;
}

/* REAL */
void Agent__currentOrientation_roll_Set(Agent* root, double value)
{
    (*root).currentOrientation.roll = value;
}

/* REAL */
double Agent__currentOrientation_pitch_Get(Agent* root)
{
    return (*root).currentOrientation.pitch;
}

/* REAL */
void Agent__currentOrientation_pitch_Set(Agent* root, double value)
{
    (*root).currentOrientation.pitch = value;
}

/* REAL */
double Agent__currentOrientation_yaw_Get(Agent* root)
{
    return (*root).currentOrientation.yaw;
}

/* REAL */
void Agent__currentOrientation_yaw_Set(Agent* root, double value)
{
    (*root).currentOrientation.yaw = value;
}

/* Field currentVelocity selector */
Velocity* Agent__currentVelocity_Get(Agent* root)
{
    return &(*root).currentVelocity;
}

/* REAL */
double Agent__currentVelocity_vX_Get(Agent* root)
{
    return (*root).currentVelocity.vX;
}

/* REAL */
void Agent__currentVelocity_vX_Set(Agent* root, double value)
{
    (*root).currentVelocity.vX = value;
}

/* REAL */
double Agent__currentVelocity_vY_Get(Agent* root)
{
    return (*root).currentVelocity.vY;
}

/* REAL */
void Agent__currentVelocity_vY_Set(Agent* root, double value)
{
    (*root).currentVelocity.vY = value;
}

/* REAL */
double Agent__currentVelocity_vZ_Get(Agent* root)
{
    return (*root).currentVelocity.vZ;
}

/* REAL */
void Agent__currentVelocity_vZ_Set(Agent* root, double value)
{
    (*root).currentVelocity.vZ = value;
}

/* REAL */
double PositionSystemData__xAct_Get(PositionSystemData* root)
{
    return (*root).xAct;
}

/* REAL */
void PositionSystemData__xAct_Set(PositionSystemData* root, double value)
{
    (*root).xAct = value;
}

/* REAL */
double PositionSystemData__yAct_Get(PositionSystemData* root)
{
    return (*root).yAct;
}

/* REAL */
void PositionSystemData__yAct_Set(PositionSystemData* root, double value)
{
    (*root).yAct = value;
}

/* Field flight selector */
WorldData* FeedbackToGUI__flight_Get(FeedbackToGUI* root)
{
    return &(*root).flight;
}

/* Field rawASD selector */
DroneSensorData* FeedbackToGUI__flight_rawASD_Get(FeedbackToGUI* root)
{
    return &(*root).flight.rawASD;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_yawAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.yawAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_yawAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.yawAct = value;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_pitchAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.pitchAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_pitchAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.pitchAct = value;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_rollAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.rollAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_rollAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.rollAct = value;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_baropAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.baropAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_baropAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.baropAct = value;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_accxAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.accxAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_accxAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.accxAct = value;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_accyAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.accyAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_accyAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.accyAct = value;
}

/* REAL */
double FeedbackToGUI__flight_rawASD_acczAct_Get(FeedbackToGUI* root)
{
    return (*root).flight.rawASD.acczAct;
}

/* REAL */
void FeedbackToGUI__flight_rawASD_acczAct_Set(FeedbackToGUI* root, double value)
{
    (*root).flight.rawASD.acczAct = value;
}

/* ENUMERATED */
int FeedbackToGUI__notification_Get(FeedbackToGUI* root)
{
    return (*root).notification;
}

/* ENUMERATED */
void FeedbackToGUI__notification_Set(FeedbackToGUI* root, int value)
{
    (*root).notification = value;
}

/* REAL */
double DroneControllerInput__yawrateRef_Get(DroneControllerInput* root)
{
    return (*root).yawrateRef;
}

/* REAL */
void DroneControllerInput__yawrateRef_Set(DroneControllerInput* root, double value)
{
    (*root).yawrateRef = value;
}

/* REAL */
double DroneControllerInput__pitchRef_Get(DroneControllerInput* root)
{
    return (*root).pitchRef;
}

/* REAL */
void DroneControllerInput__pitchRef_Set(DroneControllerInput* root, double value)
{
    (*root).pitchRef = value;
}

/* REAL */
double DroneControllerInput__rollRef_Get(DroneControllerInput* root)
{
    return (*root).rollRef;
}

/* REAL */
void DroneControllerInput__rollRef_Set(DroneControllerInput* root, double value)
{
    (*root).rollRef = value;
}

/* REAL */
double DroneControllerInput__thrustRef_Get(DroneControllerInput* root)
{
    return (*root).thrustRef;
}

/* REAL */
void DroneControllerInput__thrustRef_Set(DroneControllerInput* root, double value)
{
    (*root).thrustRef = value;
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
int SystemState__Get(SystemState* root)
{
    return (*root);
}

/* ENUMERATED */
void SystemState__Set(SystemState* root, int value)
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

/* Field nodes selector */
ReferenceFormation_nodes ReferenceFormation__nodes_Get(ReferenceFormation* root)
{
    return (*root).nodes;
}

/* Field nodes selector */
void ReferenceFormation__nodes_Set(ReferenceFormation* root, ReferenceFormation_nodes value)
{
    (*root).nodes = value;
}

/* SEQUENCEOF/SETOF */
long ReferenceFormation__nodes_GetLength(ReferenceFormation* root)
{
    return 5;
}

/* SEQUENCEOF/SETOF */
void ReferenceFormation__nodes_SetLength(ReferenceFormation* root, long value)
{
    fprintf(stderr, "WARNING: setting length of fixed-length sequence\n");
}

/* INTEGER */
asn1SccSint ReferenceFormation__nodes_iDx_Get(ReferenceFormation* root, int iDx)
{
    return (*root).nodes.arr[iDx];
}

/* INTEGER */
void ReferenceFormation__nodes_iDx_Set(ReferenceFormation* root, int iDx, asn1SccSint value)
{
    (*root).nodes.arr[iDx] = value;
}

/* INTEGER */
asn1SccSint ReferenceFormation__anchor_Get(ReferenceFormation* root)
{
    return (*root).anchor;
}

/* INTEGER */
void ReferenceFormation__anchor_Set(ReferenceFormation* root, asn1SccSint value)
{
    (*root).anchor = value;
}

/* Field formationAnchorPosition selector */
Position* ReferenceFormation__formationAnchorPosition_Get(ReferenceFormation* root)
{
    return &(*root).formationAnchorPosition;
}

/* REAL */
double ReferenceFormation__formationAnchorPosition_x_Get(ReferenceFormation* root)
{
    return (*root).formationAnchorPosition.x;
}

/* REAL */
void ReferenceFormation__formationAnchorPosition_x_Set(ReferenceFormation* root, double value)
{
    (*root).formationAnchorPosition.x = value;
}

/* REAL */
double ReferenceFormation__formationAnchorPosition_y_Get(ReferenceFormation* root)
{
    return (*root).formationAnchorPosition.y;
}

/* REAL */
void ReferenceFormation__formationAnchorPosition_y_Set(ReferenceFormation* root, double value)
{
    (*root).formationAnchorPosition.y = value;
}

/* REAL */
double ReferenceFormation__formationAnchorPosition_z_Get(ReferenceFormation* root)
{
    return (*root).formationAnchorPosition.z;
}

/* REAL */
void ReferenceFormation__formationAnchorPosition_z_Set(ReferenceFormation* root, double value)
{
    (*root).formationAnchorPosition.z = value;
}

/* REAL */
double Velocity__vX_Get(Velocity* root)
{
    return (*root).vX;
}

/* REAL */
void Velocity__vX_Set(Velocity* root, double value)
{
    (*root).vX = value;
}

/* REAL */
double Velocity__vY_Get(Velocity* root)
{
    return (*root).vY;
}

/* REAL */
void Velocity__vY_Set(Velocity* root, double value)
{
    (*root).vY = value;
}

/* REAL */
double Velocity__vZ_Get(Velocity* root)
{
    return (*root).vZ;
}

/* REAL */
void Velocity__vZ_Set(Velocity* root, double value)
{
    (*root).vZ = value;
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
double Orientation__roll_Get(Orientation* root)
{
    return (*root).roll;
}

/* REAL */
void Orientation__roll_Set(Orientation* root, double value)
{
    (*root).roll = value;
}

/* REAL */
double Orientation__pitch_Get(Orientation* root)
{
    return (*root).pitch;
}

/* REAL */
void Orientation__pitch_Set(Orientation* root, double value)
{
    (*root).pitch = value;
}

/* REAL */
double Orientation__yaw_Get(Orientation* root)
{
    return (*root).yaw;
}

/* REAL */
void Orientation__yaw_Set(Orientation* root, double value)
{
    (*root).yaw = value;
}

/* REAL */
double DroneSensorData__yawAct_Get(DroneSensorData* root)
{
    return (*root).yawAct;
}

/* REAL */
void DroneSensorData__yawAct_Set(DroneSensorData* root, double value)
{
    (*root).yawAct = value;
}

/* REAL */
double DroneSensorData__pitchAct_Get(DroneSensorData* root)
{
    return (*root).pitchAct;
}

/* REAL */
void DroneSensorData__pitchAct_Set(DroneSensorData* root, double value)
{
    (*root).pitchAct = value;
}

/* REAL */
double DroneSensorData__rollAct_Get(DroneSensorData* root)
{
    return (*root).rollAct;
}

/* REAL */
void DroneSensorData__rollAct_Set(DroneSensorData* root, double value)
{
    (*root).rollAct = value;
}

/* REAL */
double DroneSensorData__baropAct_Get(DroneSensorData* root)
{
    return (*root).baropAct;
}

/* REAL */
void DroneSensorData__baropAct_Set(DroneSensorData* root, double value)
{
    (*root).baropAct = value;
}

/* REAL */
double DroneSensorData__accxAct_Get(DroneSensorData* root)
{
    return (*root).accxAct;
}

/* REAL */
void DroneSensorData__accxAct_Set(DroneSensorData* root, double value)
{
    (*root).accxAct = value;
}

/* REAL */
double DroneSensorData__accyAct_Get(DroneSensorData* root)
{
    return (*root).accyAct;
}

/* REAL */
void DroneSensorData__accyAct_Set(DroneSensorData* root, double value)
{
    (*root).accyAct = value;
}

/* REAL */
double DroneSensorData__acczAct_Get(DroneSensorData* root)
{
    return (*root).acczAct;
}

/* REAL */
void DroneSensorData__acczAct_Set(DroneSensorData* root, double value)
{
    (*root).acczAct = value;
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
asn1SccSint MyInteger__Get(MyInteger* root)
{
    return (*root);
}

/* INTEGER */
void MyInteger__Set(MyInteger* root, asn1SccSint value)
{
    (*root) = value;
}

/* REAL */
double HoverAction__yaw_rate_Get(HoverAction* root)
{
    return (*root).yaw_rate;
}

/* REAL */
void HoverAction__yaw_rate_Set(HoverAction* root, double value)
{
    (*root).yaw_rate = value;
}

/* REAL */
double HoverAction__duration_Get(HoverAction* root)
{
    return (*root).duration;
}

/* REAL */
void HoverAction__duration_Set(HoverAction* root, double value)
{
    (*root).duration = value;
}

/* Field rawASD selector */
DroneSensorData* WorldData__rawASD_Get(WorldData* root)
{
    return &(*root).rawASD;
}

/* REAL */
double WorldData__rawASD_yawAct_Get(WorldData* root)
{
    return (*root).rawASD.yawAct;
}

/* REAL */
void WorldData__rawASD_yawAct_Set(WorldData* root, double value)
{
    (*root).rawASD.yawAct = value;
}

/* REAL */
double WorldData__rawASD_pitchAct_Get(WorldData* root)
{
    return (*root).rawASD.pitchAct;
}

/* REAL */
void WorldData__rawASD_pitchAct_Set(WorldData* root, double value)
{
    (*root).rawASD.pitchAct = value;
}

/* REAL */
double WorldData__rawASD_rollAct_Get(WorldData* root)
{
    return (*root).rawASD.rollAct;
}

/* REAL */
void WorldData__rawASD_rollAct_Set(WorldData* root, double value)
{
    (*root).rawASD.rollAct = value;
}

/* REAL */
double WorldData__rawASD_baropAct_Get(WorldData* root)
{
    return (*root).rawASD.baropAct;
}

/* REAL */
void WorldData__rawASD_baropAct_Set(WorldData* root, double value)
{
    (*root).rawASD.baropAct = value;
}

/* REAL */
double WorldData__rawASD_accxAct_Get(WorldData* root)
{
    return (*root).rawASD.accxAct;
}

/* REAL */
void WorldData__rawASD_accxAct_Set(WorldData* root, double value)
{
    (*root).rawASD.accxAct = value;
}

/* REAL */
double WorldData__rawASD_accyAct_Get(WorldData* root)
{
    return (*root).rawASD.accyAct;
}

/* REAL */
void WorldData__rawASD_accyAct_Set(WorldData* root, double value)
{
    (*root).rawASD.accyAct = value;
}

/* REAL */
double WorldData__rawASD_acczAct_Get(WorldData* root)
{
    return (*root).rawASD.acczAct;
}

/* REAL */
void WorldData__rawASD_acczAct_Set(WorldData* root, double value)
{
    (*root).rawASD.acczAct = value;
}

/* ENUMERATED */
int Color__Get(Color* root)
{
    return (*root);
}

/* ENUMERATED */
void Color__Set(Color* root, int value)
{
    (*root) = value;
}

/* ENUMERATED */
int SafetyEvent__Get(SafetyEvent* root)
{
    return (*root);
}

/* ENUMERATED */
void SafetyEvent__Set(SafetyEvent* root, int value)
{
    (*root) = value;
}

/* REAL */
double Trajectory__x_Get(Trajectory* root)
{
    return (*root).x;
}

/* REAL */
void Trajectory__x_Set(Trajectory* root, double value)
{
    (*root).x = value;
}

/* REAL */
double Trajectory__y_Get(Trajectory* root)
{
    return (*root).y;
}

/* REAL */
void Trajectory__y_Set(Trajectory* root, double value)
{
    (*root).y = value;
}

/* REAL */
double Trajectory__z_Get(Trajectory* root)
{
    return (*root).z;
}

/* REAL */
void Trajectory__z_Set(Trajectory* root, double value)
{
    (*root).z = value;
}

/* REAL */
double Trajectory__yaw_Get(Trajectory* root)
{
    return (*root).yaw;
}

/* REAL */
void Trajectory__yaw_Set(Trajectory* root, double value)
{
    (*root).yaw = value;
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

/* REAL */
double Position__x_Get(Position* root)
{
    return (*root).x;
}

/* REAL */
void Position__x_Set(Position* root, double value)
{
    (*root).x = value;
}

/* REAL */
double Position__y_Get(Position* root)
{
    return (*root).y;
}

/* REAL */
void Position__y_Set(Position* root, double value)
{
    (*root).y = value;
}

/* REAL */
double Position__z_Get(Position* root)
{
    return (*root).z;
}

/* REAL */
void Position__z_Set(Position* root, double value)
{
    (*root).z = value;
}

/* ENUMERATED */
int UserCommand__Get(UserCommand* root)
{
    return (*root);
}

/* ENUMERATED */
void UserCommand__Set(UserCommand* root, int value)
{
    (*root) = value;
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

/* INTEGER */
asn1SccSint Area__height_Get(Area* root)
{
    return (*root).height;
}

/* INTEGER */
void Area__height_Set(Area* root, asn1SccSint value)
{
    (*root).height = value;
}

/* INTEGER */
asn1SccSint Area__width_Get(Area* root)
{
    return (*root).width;
}

/* INTEGER */
void Area__width_Set(Area* root, asn1SccSint value)
{
    (*root).width = value;
}

/* INTEGER */
asn1SccSint Area__depth_Get(Area* root)
{
    return (*root).depth;
}

/* INTEGER */
void Area__depth_Set(Area* root, asn1SccSint value)
{
    (*root).depth = value;
}

/* Field refLocation selector */
Position* Area__refLocation_Get(Area* root)
{
    return &(*root).refLocation;
}

/* REAL */
double Area__refLocation_x_Get(Area* root)
{
    return (*root).refLocation.x;
}

/* REAL */
void Area__refLocation_x_Set(Area* root, double value)
{
    (*root).refLocation.x = value;
}

/* REAL */
double Area__refLocation_y_Get(Area* root)
{
    return (*root).refLocation.y;
}

/* REAL */
void Area__refLocation_y_Set(Area* root, double value)
{
    (*root).refLocation.y = value;
}

/* REAL */
double Area__refLocation_z_Get(Area* root)
{
    return (*root).refLocation.z;
}

/* REAL */
void Area__refLocation_z_Set(Area* root, double value)
{
    (*root).refLocation.z = value;
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

/* Field locations selector */
ReferencePath_locations ReferencePath__locations_Get(ReferencePath* root)
{
    return (*root).locations;
}

/* Field locations selector */
void ReferencePath__locations_Set(ReferencePath* root, ReferencePath_locations value)
{
    (*root).locations = value;
}

/* SEQUENCEOF/SETOF */
long ReferencePath__locations_GetLength(ReferencePath* root)
{
    return 3;
}

/* SEQUENCEOF/SETOF */
void ReferencePath__locations_SetLength(ReferencePath* root, long value)
{
    fprintf(stderr, "WARNING: setting length of fixed-length sequence\n");
}

/* REAL */
double ReferencePath__locations_iDx_x_Get(ReferencePath* root, int iDx)
{
    return (*root).locations.arr[iDx].x;
}

/* REAL */
void ReferencePath__locations_iDx_x_Set(ReferencePath* root, int iDx, double value)
{
    (*root).locations.arr[iDx].x = value;
}

/* REAL */
double ReferencePath__locations_iDx_y_Get(ReferencePath* root, int iDx)
{
    return (*root).locations.arr[iDx].y;
}

/* REAL */
void ReferencePath__locations_iDx_y_Set(ReferencePath* root, int iDx, double value)
{
    (*root).locations.arr[iDx].y = value;
}

/* REAL */
double ReferencePath__locations_iDx_z_Get(ReferencePath* root, int iDx)
{
    return (*root).locations.arr[iDx].z;
}

/* REAL */
void ReferencePath__locations_iDx_z_Set(ReferencePath* root, int iDx, double value)
{
    (*root).locations.arr[iDx].z = value;
}

/* Field actions selector */
ReferencePath_actions ReferencePath__actions_Get(ReferencePath* root)
{
    return (*root).actions;
}

/* Field actions selector */
void ReferencePath__actions_Set(ReferencePath* root, ReferencePath_actions value)
{
    (*root).actions = value;
}

/* SEQUENCEOF/SETOF */
long ReferencePath__actions_GetLength(ReferencePath* root)
{
    return 3;
}

/* SEQUENCEOF/SETOF */
void ReferencePath__actions_SetLength(ReferencePath* root, long value)
{
    fprintf(stderr, "WARNING: setting length of fixed-length sequence\n");
}

/* REAL */
double ReferencePath__actions_iDx_yaw_rate_Get(ReferencePath* root, int iDx)
{
    return (*root).actions.arr[iDx].yaw_rate;
}

/* REAL */
void ReferencePath__actions_iDx_yaw_rate_Set(ReferencePath* root, int iDx, double value)
{
    (*root).actions.arr[iDx].yaw_rate = value;
}

/* REAL */
double ReferencePath__actions_iDx_duration_Get(ReferencePath* root, int iDx)
{
    return (*root).actions.arr[iDx].duration;
}

/* REAL */
void ReferencePath__actions_iDx_duration_Set(ReferencePath* root, int iDx, double value)
{
    (*root).actions.arr[iDx].duration = value;
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

/* Helper functions for NATIVE encodings */

void SetDataFor_Agent(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Agent));
}

byte* MovePtrBySizeOf_Agent(byte *pData)
{
    return pData + sizeof(Agent);
}

byte* CreateInstanceOf_Agent() {
    Agent *p = (Agent*)malloc(sizeof(Agent));
    Agent_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Agent(byte *pData) {
    free(pData);
}

void SetDataFor_PositionSystemData(void *dest, void *src)
{
    memcpy(dest, src, sizeof(PositionSystemData));
}

byte* MovePtrBySizeOf_PositionSystemData(byte *pData)
{
    return pData + sizeof(PositionSystemData);
}

byte* CreateInstanceOf_PositionSystemData() {
    PositionSystemData *p = (PositionSystemData*)malloc(sizeof(PositionSystemData));
    PositionSystemData_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_PositionSystemData(byte *pData) {
    free(pData);
}

void SetDataFor_FeedbackToGUI(void *dest, void *src)
{
    memcpy(dest, src, sizeof(FeedbackToGUI));
}

byte* MovePtrBySizeOf_FeedbackToGUI(byte *pData)
{
    return pData + sizeof(FeedbackToGUI);
}

byte* CreateInstanceOf_FeedbackToGUI() {
    FeedbackToGUI *p = (FeedbackToGUI*)malloc(sizeof(FeedbackToGUI));
    FeedbackToGUI_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_FeedbackToGUI(byte *pData) {
    free(pData);
}

void SetDataFor_DroneControllerInput(void *dest, void *src)
{
    memcpy(dest, src, sizeof(DroneControllerInput));
}

byte* MovePtrBySizeOf_DroneControllerInput(byte *pData)
{
    return pData + sizeof(DroneControllerInput);
}

byte* CreateInstanceOf_DroneControllerInput() {
    DroneControllerInput *p = (DroneControllerInput*)malloc(sizeof(DroneControllerInput));
    DroneControllerInput_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_DroneControllerInput(byte *pData) {
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

void SetDataFor_SystemState(void *dest, void *src)
{
    memcpy(dest, src, sizeof(SystemState));
}

byte* MovePtrBySizeOf_SystemState(byte *pData)
{
    return pData + sizeof(SystemState);
}

byte* CreateInstanceOf_SystemState() {
    SystemState *p = (SystemState*)malloc(sizeof(SystemState));
    SystemState_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_SystemState(byte *pData) {
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

void SetDataFor_ReferenceFormation(void *dest, void *src)
{
    memcpy(dest, src, sizeof(ReferenceFormation));
}

byte* MovePtrBySizeOf_ReferenceFormation(byte *pData)
{
    return pData + sizeof(ReferenceFormation);
}

byte* CreateInstanceOf_ReferenceFormation() {
    ReferenceFormation *p = (ReferenceFormation*)malloc(sizeof(ReferenceFormation));
    ReferenceFormation_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_ReferenceFormation(byte *pData) {
    free(pData);
}

void SetDataFor_Velocity(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Velocity));
}

byte* MovePtrBySizeOf_Velocity(byte *pData)
{
    return pData + sizeof(Velocity);
}

byte* CreateInstanceOf_Velocity() {
    Velocity *p = (Velocity*)malloc(sizeof(Velocity));
    Velocity_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Velocity(byte *pData) {
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

void SetDataFor_Orientation(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Orientation));
}

byte* MovePtrBySizeOf_Orientation(byte *pData)
{
    return pData + sizeof(Orientation);
}

byte* CreateInstanceOf_Orientation() {
    Orientation *p = (Orientation*)malloc(sizeof(Orientation));
    Orientation_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Orientation(byte *pData) {
    free(pData);
}

void SetDataFor_DroneSensorData(void *dest, void *src)
{
    memcpy(dest, src, sizeof(DroneSensorData));
}

byte* MovePtrBySizeOf_DroneSensorData(byte *pData)
{
    return pData + sizeof(DroneSensorData);
}

byte* CreateInstanceOf_DroneSensorData() {
    DroneSensorData *p = (DroneSensorData*)malloc(sizeof(DroneSensorData));
    DroneSensorData_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_DroneSensorData(byte *pData) {
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

void SetDataFor_HoverAction(void *dest, void *src)
{
    memcpy(dest, src, sizeof(HoverAction));
}

byte* MovePtrBySizeOf_HoverAction(byte *pData)
{
    return pData + sizeof(HoverAction);
}

byte* CreateInstanceOf_HoverAction() {
    HoverAction *p = (HoverAction*)malloc(sizeof(HoverAction));
    HoverAction_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_HoverAction(byte *pData) {
    free(pData);
}

void SetDataFor_WorldData(void *dest, void *src)
{
    memcpy(dest, src, sizeof(WorldData));
}

byte* MovePtrBySizeOf_WorldData(byte *pData)
{
    return pData + sizeof(WorldData);
}

byte* CreateInstanceOf_WorldData() {
    WorldData *p = (WorldData*)malloc(sizeof(WorldData));
    WorldData_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_WorldData(byte *pData) {
    free(pData);
}

void SetDataFor_Color(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Color));
}

byte* MovePtrBySizeOf_Color(byte *pData)
{
    return pData + sizeof(Color);
}

byte* CreateInstanceOf_Color() {
    Color *p = (Color*)malloc(sizeof(Color));
    Color_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Color(byte *pData) {
    free(pData);
}

void SetDataFor_SafetyEvent(void *dest, void *src)
{
    memcpy(dest, src, sizeof(SafetyEvent));
}

byte* MovePtrBySizeOf_SafetyEvent(byte *pData)
{
    return pData + sizeof(SafetyEvent);
}

byte* CreateInstanceOf_SafetyEvent() {
    SafetyEvent *p = (SafetyEvent*)malloc(sizeof(SafetyEvent));
    SafetyEvent_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_SafetyEvent(byte *pData) {
    free(pData);
}

void SetDataFor_Trajectory(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Trajectory));
}

byte* MovePtrBySizeOf_Trajectory(byte *pData)
{
    return pData + sizeof(Trajectory);
}

byte* CreateInstanceOf_Trajectory() {
    Trajectory *p = (Trajectory*)malloc(sizeof(Trajectory));
    Trajectory_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Trajectory(byte *pData) {
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

void SetDataFor_Position(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Position));
}

byte* MovePtrBySizeOf_Position(byte *pData)
{
    return pData + sizeof(Position);
}

byte* CreateInstanceOf_Position() {
    Position *p = (Position*)malloc(sizeof(Position));
    Position_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Position(byte *pData) {
    free(pData);
}

void SetDataFor_UserCommand(void *dest, void *src)
{
    memcpy(dest, src, sizeof(UserCommand));
}

byte* MovePtrBySizeOf_UserCommand(byte *pData)
{
    return pData + sizeof(UserCommand);
}

byte* CreateInstanceOf_UserCommand() {
    UserCommand *p = (UserCommand*)malloc(sizeof(UserCommand));
    UserCommand_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_UserCommand(byte *pData) {
    free(pData);
}

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

void SetDataFor_Area(void *dest, void *src)
{
    memcpy(dest, src, sizeof(Area));
}

byte* MovePtrBySizeOf_Area(byte *pData)
{
    return pData + sizeof(Area);
}

byte* CreateInstanceOf_Area() {
    Area *p = (Area*)malloc(sizeof(Area));
    Area_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_Area(byte *pData) {
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

void SetDataFor_ReferencePath(void *dest, void *src)
{
    memcpy(dest, src, sizeof(ReferencePath));
}

byte* MovePtrBySizeOf_ReferencePath(byte *pData)
{
    return pData + sizeof(ReferencePath);
}

byte* CreateInstanceOf_ReferencePath() {
    ReferencePath *p = (ReferencePath*)malloc(sizeof(ReferencePath));
    ReferencePath_Initialize(p);
    return (byte*)p;
}

void DestroyInstanceOf_ReferencePath(byte *pData) {
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

