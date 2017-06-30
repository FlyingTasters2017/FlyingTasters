#ifndef __GETSET_H__
#define __GETSET_H__

#include "dummy_integration1.h"

size_t GetStreamCurrentLength(BitStream *pBitStrm);
byte *GetBitstreamBuffer(BitStream *pBitStrm);
byte GetBufferByte(byte *p, size_t off);
void SetBufferByte(byte *p, size_t off, byte b);
void ResetStream(BitStream *pStrm);
BitStream *CreateStream(size_t bufferSize);
void DestroyStream(BitStream *pBitStrm);


/* SEQUENCEOF/SETOF */
long MySeqOf__GetLength(MySeqOf* root);

/* SEQUENCEOF/SETOF */
void MySeqOf__SetLength(MySeqOf* root, long value);

/* ENUMERATED */
int MySeqOf__iDx_Get(MySeqOf* root, int iDx);

/* ENUMERATED */
void MySeqOf__iDx_Set(MySeqOf* root, int iDx, int value);

/* INTEGER */
asn1SccSint PixyData__xPix_Get(PixyData* root);

/* INTEGER */
void PixyData__xPix_Set(PixyData* root, asn1SccSint value);

/* INTEGER */
asn1SccSint PixyData__yPix_Get(PixyData* root);

/* INTEGER */
void PixyData__yPix_Set(PixyData* root, asn1SccSint value);

/* Field nodes selector */
ReferenceFormation_nodes ReferenceFormation__nodes_Get(ReferenceFormation* root);

/* Field nodes selector */
void ReferenceFormation__nodes_Set(ReferenceFormation* root, ReferenceFormation_nodes value);

/* SEQUENCEOF/SETOF */
long ReferenceFormation__nodes_GetLength(ReferenceFormation* root);

/* SEQUENCEOF/SETOF */
void ReferenceFormation__nodes_SetLength(ReferenceFormation* root, long value);

/* INTEGER */
asn1SccSint ReferenceFormation__nodes_iDx_Get(ReferenceFormation* root, int iDx);

/* INTEGER */
void ReferenceFormation__nodes_iDx_Set(ReferenceFormation* root, int iDx, asn1SccSint value);

/* INTEGER */
asn1SccSint ReferenceFormation__anchor_Get(ReferenceFormation* root);

/* INTEGER */
void ReferenceFormation__anchor_Set(ReferenceFormation* root, asn1SccSint value);

/* Field formationAnchorPosition selector */
Position* ReferenceFormation__formationAnchorPosition_Get(ReferenceFormation* root);

/* REAL */
double ReferenceFormation__formationAnchorPosition_x_Get(ReferenceFormation* root);

/* REAL */
void ReferenceFormation__formationAnchorPosition_x_Set(ReferenceFormation* root, double value);

/* REAL */
double ReferenceFormation__formationAnchorPosition_y_Get(ReferenceFormation* root);

/* REAL */
void ReferenceFormation__formationAnchorPosition_y_Set(ReferenceFormation* root, double value);

/* REAL */
double ReferenceFormation__formationAnchorPosition_z_Get(ReferenceFormation* root);

/* REAL */
void ReferenceFormation__formationAnchorPosition_z_Set(ReferenceFormation* root, double value);

/* REAL */
double Trajectory__x_Get(Trajectory* root);

/* REAL */
void Trajectory__x_Set(Trajectory* root, double value);

/* REAL */
double Trajectory__y_Get(Trajectory* root);

/* REAL */
void Trajectory__y_Set(Trajectory* root, double value);

/* REAL */
double Trajectory__z_Get(Trajectory* root);

/* REAL */
void Trajectory__z_Set(Trajectory* root, double value);

/* REAL */
double Trajectory__yaw_Get(Trajectory* root);

/* REAL */
void Trajectory__yaw_Set(Trajectory* root, double value);

/* REAL */
double DroneControllerInput__yawrateRef_Get(DroneControllerInput* root);

/* REAL */
void DroneControllerInput__yawrateRef_Set(DroneControllerInput* root, double value);

/* REAL */
double DroneControllerInput__pitchRef_Get(DroneControllerInput* root);

/* REAL */
void DroneControllerInput__pitchRef_Set(DroneControllerInput* root, double value);

/* REAL */
double DroneControllerInput__rollRef_Get(DroneControllerInput* root);

/* REAL */
void DroneControllerInput__rollRef_Set(DroneControllerInput* root, double value);

/* REAL */
double DroneControllerInput__thrustRef_Get(DroneControllerInput* root);

/* REAL */
void DroneControllerInput__thrustRef_Set(DroneControllerInput* root, double value);

/* REAL */
double Acceleration__aX_Get(Acceleration* root);

/* REAL */
void Acceleration__aX_Set(Acceleration* root, double value);

/* REAL */
double Acceleration__aY_Get(Acceleration* root);

/* REAL */
void Acceleration__aY_Set(Acceleration* root, double value);

/* REAL */
double Acceleration__aZ_Get(Acceleration* root);

/* REAL */
void Acceleration__aZ_Set(Acceleration* root, double value);

/* REAL */
double Acceleration__aRoll_Get(Acceleration* root);

/* REAL */
void Acceleration__aRoll_Set(Acceleration* root, double value);

/* REAL */
double Acceleration__aPitch_Get(Acceleration* root);

/* REAL */
void Acceleration__aPitch_Set(Acceleration* root, double value);

/* REAL */
double Acceleration__aYaw_Get(Acceleration* root);

/* REAL */
void Acceleration__aYaw_Set(Acceleration* root, double value);

/* REAL */
double Velocity__vX_Get(Velocity* root);

/* REAL */
void Velocity__vX_Set(Velocity* root, double value);

/* REAL */
double Velocity__vY_Get(Velocity* root);

/* REAL */
void Velocity__vY_Set(Velocity* root, double value);

/* REAL */
double Velocity__vZ_Get(Velocity* root);

/* REAL */
void Velocity__vZ_Set(Velocity* root, double value);

/* REAL */
double Velocity__vRoll_Get(Velocity* root);

/* REAL */
void Velocity__vRoll_Set(Velocity* root, double value);

/* REAL */
double Velocity__vPitch_Get(Velocity* root);

/* REAL */
void Velocity__vPitch_Set(Velocity* root, double value);

/* REAL */
double Velocity__vYaw_Get(Velocity* root);

/* REAL */
void Velocity__vYaw_Set(Velocity* root, double value);

/* INTEGER */
asn1SccSint T_UInt8__Get(T_UInt8* root);

/* INTEGER */
void T_UInt8__Set(T_UInt8* root, asn1SccSint value);

/* REAL */
double MyReal__Get(MyReal* root);

/* REAL */
void MyReal__Set(MyReal* root, double value);

/* REAL */
double Position__x_Get(Position* root);

/* REAL */
void Position__x_Set(Position* root, double value);

/* REAL */
double Position__y_Get(Position* root);

/* REAL */
void Position__y_Set(Position* root, double value);

/* REAL */
double Position__z_Get(Position* root);

/* REAL */
void Position__z_Set(Position* root, double value);

/* Field flight selector */
WorldData* FeedbackToGUI__flight_Get(FeedbackToGUI* root);

/* Field agentData selector */
Agent* FeedbackToGUI__flight_agentData_Get(FeedbackToGUI* root);

/* INTEGER */
asn1SccSint FeedbackToGUI__flight_agentData_agentID_Get(FeedbackToGUI* root);

/* INTEGER */
void FeedbackToGUI__flight_agentData_agentID_Set(FeedbackToGUI* root, asn1SccSint value);

/* ENUMERATED */
int FeedbackToGUI__flight_agentData_agentColor_Get(FeedbackToGUI* root);

/* ENUMERATED */
void FeedbackToGUI__flight_agentData_agentColor_Set(FeedbackToGUI* root, int value);

/* Field currentPosition selector */
Position* FeedbackToGUI__flight_agentData_currentPosition_Get(FeedbackToGUI* root);

/* REAL */
double FeedbackToGUI__flight_agentData_currentPosition_x_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentPosition_x_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentPosition_y_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentPosition_y_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentPosition_z_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentPosition_z_Set(FeedbackToGUI* root, double value);

/* Field currentOrientation selector */
Orientation* FeedbackToGUI__flight_agentData_currentOrientation_Get(FeedbackToGUI* root);

/* REAL */
double FeedbackToGUI__flight_agentData_currentOrientation_roll_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentOrientation_roll_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentOrientation_pitch_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentOrientation_pitch_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentOrientation_yaw_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentOrientation_yaw_Set(FeedbackToGUI* root, double value);

/* Field currentVelocity selector */
Velocity* FeedbackToGUI__flight_agentData_currentVelocity_Get(FeedbackToGUI* root);

/* REAL */
double FeedbackToGUI__flight_agentData_currentVelocity_vX_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentVelocity_vX_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentVelocity_vY_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentVelocity_vY_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentVelocity_vZ_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentVelocity_vZ_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentVelocity_vRoll_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentVelocity_vRoll_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentVelocity_vPitch_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentVelocity_vPitch_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentVelocity_vYaw_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentVelocity_vYaw_Set(FeedbackToGUI* root, double value);

/* Field currentAcceleration selector */
Acceleration* FeedbackToGUI__flight_agentData_currentAcceleration_Get(FeedbackToGUI* root);

/* REAL */
double FeedbackToGUI__flight_agentData_currentAcceleration_aX_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentAcceleration_aX_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentAcceleration_aY_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentAcceleration_aY_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentAcceleration_aZ_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentAcceleration_aZ_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentAcceleration_aRoll_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentAcceleration_aRoll_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentAcceleration_aPitch_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentAcceleration_aPitch_Set(FeedbackToGUI* root, double value);

/* REAL */
double FeedbackToGUI__flight_agentData_currentAcceleration_aYaw_Get(FeedbackToGUI* root);

/* REAL */
void FeedbackToGUI__flight_agentData_currentAcceleration_aYaw_Set(FeedbackToGUI* root, double value);

/* ENUMERATED */
int FeedbackToGUI__notification_Get(FeedbackToGUI* root);

/* ENUMERATED */
void FeedbackToGUI__notification_Set(FeedbackToGUI* root, int value);

/* ENUMERATED */
int UserCommand__Get(UserCommand* root);

/* ENUMERATED */
void UserCommand__Set(UserCommand* root, int value);

/* Field agentData selector */
Agent* WorldData__agentData_Get(WorldData* root);

/* INTEGER */
asn1SccSint WorldData__agentData_agentID_Get(WorldData* root);

/* INTEGER */
void WorldData__agentData_agentID_Set(WorldData* root, asn1SccSint value);

/* ENUMERATED */
int WorldData__agentData_agentColor_Get(WorldData* root);

/* ENUMERATED */
void WorldData__agentData_agentColor_Set(WorldData* root, int value);

/* Field currentPosition selector */
Position* WorldData__agentData_currentPosition_Get(WorldData* root);

/* REAL */
double WorldData__agentData_currentPosition_x_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentPosition_x_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentPosition_y_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentPosition_y_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentPosition_z_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentPosition_z_Set(WorldData* root, double value);

/* Field currentOrientation selector */
Orientation* WorldData__agentData_currentOrientation_Get(WorldData* root);

/* REAL */
double WorldData__agentData_currentOrientation_roll_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentOrientation_roll_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentOrientation_pitch_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentOrientation_pitch_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentOrientation_yaw_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentOrientation_yaw_Set(WorldData* root, double value);

/* Field currentVelocity selector */
Velocity* WorldData__agentData_currentVelocity_Get(WorldData* root);

/* REAL */
double WorldData__agentData_currentVelocity_vX_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentVelocity_vX_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentVelocity_vY_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentVelocity_vY_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentVelocity_vZ_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentVelocity_vZ_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentVelocity_vRoll_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentVelocity_vRoll_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentVelocity_vPitch_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentVelocity_vPitch_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentVelocity_vYaw_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentVelocity_vYaw_Set(WorldData* root, double value);

/* Field currentAcceleration selector */
Acceleration* WorldData__agentData_currentAcceleration_Get(WorldData* root);

/* REAL */
double WorldData__agentData_currentAcceleration_aX_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentAcceleration_aX_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentAcceleration_aY_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentAcceleration_aY_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentAcceleration_aZ_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentAcceleration_aZ_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentAcceleration_aRoll_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentAcceleration_aRoll_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentAcceleration_aPitch_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentAcceleration_aPitch_Set(WorldData* root, double value);

/* REAL */
double WorldData__agentData_currentAcceleration_aYaw_Get(WorldData* root);

/* REAL */
void WorldData__agentData_currentAcceleration_aYaw_Set(WorldData* root, double value);

/* OCTETSTRING */
long MyOctStr__GetLength(MyOctStr* root);

/* OCTETSTRING */
void MyOctStr__SetLength(MyOctStr* root, long value);

/* OCTETSTRING_bytes */
byte MyOctStr__iDx_Get(MyOctStr* root, int iDx);

/* OCTETSTRING_bytes */
void MyOctStr__iDx_Set(MyOctStr* root, int iDx, byte value);

/* BOOLEAN */
flag T_Boolean__Get(T_Boolean* root);

/* BOOLEAN */
void T_Boolean__Set(T_Boolean* root, flag value);

/* ENUMERATED */
int Color__Get(Color* root);

/* ENUMERATED */
void Color__Set(Color* root, int value);

/* BOOLEAN */
flag MyBool__Get(MyBool* root);

/* BOOLEAN */
void MyBool__Set(MyBool* root, flag value);

/* INTEGER */
asn1SccSint T_Int8__Get(T_Int8* root);

/* INTEGER */
void T_Int8__Set(T_Int8* root, asn1SccSint value);

/* INTEGER */
asn1SccSint T_UInt32__Get(T_UInt32* root);

/* INTEGER */
void T_UInt32__Set(T_UInt32* root, asn1SccSint value);

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

/* ENUMERATED */
int SafetyEvent__Get(SafetyEvent* root);

/* ENUMERATED */
void SafetyEvent__Set(SafetyEvent* root, int value);

/* INTEGER */
asn1SccSint T_Int32__Get(T_Int32* root);

/* INTEGER */
void T_Int32__Set(T_Int32* root, asn1SccSint value);

/* Field locations selector */
ReferencePath_locations ReferencePath__locations_Get(ReferencePath* root);

/* Field locations selector */
void ReferencePath__locations_Set(ReferencePath* root, ReferencePath_locations value);

/* SEQUENCEOF/SETOF */
long ReferencePath__locations_GetLength(ReferencePath* root);

/* SEQUENCEOF/SETOF */
void ReferencePath__locations_SetLength(ReferencePath* root, long value);

/* REAL */
double ReferencePath__locations_iDx_x_Get(ReferencePath* root, int iDx);

/* REAL */
void ReferencePath__locations_iDx_x_Set(ReferencePath* root, int iDx, double value);

/* REAL */
double ReferencePath__locations_iDx_y_Get(ReferencePath* root, int iDx);

/* REAL */
void ReferencePath__locations_iDx_y_Set(ReferencePath* root, int iDx, double value);

/* REAL */
double ReferencePath__locations_iDx_z_Get(ReferencePath* root, int iDx);

/* REAL */
void ReferencePath__locations_iDx_z_Set(ReferencePath* root, int iDx, double value);

/* Field actions selector */
ReferencePath_actions ReferencePath__actions_Get(ReferencePath* root);

/* Field actions selector */
void ReferencePath__actions_Set(ReferencePath* root, ReferencePath_actions value);

/* SEQUENCEOF/SETOF */
long ReferencePath__actions_GetLength(ReferencePath* root);

/* SEQUENCEOF/SETOF */
void ReferencePath__actions_SetLength(ReferencePath* root, long value);

/* REAL */
double ReferencePath__actions_iDx_yaw_rate_Get(ReferencePath* root, int iDx);

/* REAL */
void ReferencePath__actions_iDx_yaw_rate_Set(ReferencePath* root, int iDx, double value);

/* REAL */
double ReferencePath__actions_iDx_duration_Get(ReferencePath* root, int iDx);

/* REAL */
void ReferencePath__actions_iDx_duration_Set(ReferencePath* root, int iDx, double value);

/* INTEGER */
asn1SccSint MyInteger__Get(MyInteger* root);

/* INTEGER */
void MyInteger__Set(MyInteger* root, asn1SccSint value);

/* REAL */
double DroneSensorData__yawAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__yawAct_Set(DroneSensorData* root, double value);

/* REAL */
double DroneSensorData__pitchAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__pitchAct_Set(DroneSensorData* root, double value);

/* REAL */
double DroneSensorData__rollAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__rollAct_Set(DroneSensorData* root, double value);

/* REAL */
double DroneSensorData__baropAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__baropAct_Set(DroneSensorData* root, double value);

/* REAL */
double DroneSensorData__accxAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__accxAct_Set(DroneSensorData* root, double value);

/* REAL */
double DroneSensorData__accyAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__accyAct_Set(DroneSensorData* root, double value);

/* REAL */
double DroneSensorData__acczAct_Get(DroneSensorData* root);

/* REAL */
void DroneSensorData__acczAct_Set(DroneSensorData* root, double value);

/* REAL */
double HoverAction__yaw_rate_Get(HoverAction* root);

/* REAL */
void HoverAction__yaw_rate_Set(HoverAction* root, double value);

/* REAL */
double HoverAction__duration_Get(HoverAction* root);

/* REAL */
void HoverAction__duration_Set(HoverAction* root, double value);

/* REAL */
double PositionSystemData__xAct_Get(PositionSystemData* root);

/* REAL */
void PositionSystemData__xAct_Set(PositionSystemData* root, double value);

/* REAL */
double PositionSystemData__yAct_Get(PositionSystemData* root);

/* REAL */
void PositionSystemData__yAct_Set(PositionSystemData* root, double value);

/* INTEGER */
asn1SccSint Area__height_Get(Area* root);

/* INTEGER */
void Area__height_Set(Area* root, asn1SccSint value);

/* INTEGER */
asn1SccSint Area__width_Get(Area* root);

/* INTEGER */
void Area__width_Set(Area* root, asn1SccSint value);

/* INTEGER */
asn1SccSint Area__depth_Get(Area* root);

/* INTEGER */
void Area__depth_Set(Area* root, asn1SccSint value);

/* Field refLocation selector */
Position* Area__refLocation_Get(Area* root);

/* REAL */
double Area__refLocation_x_Get(Area* root);

/* REAL */
void Area__refLocation_x_Set(Area* root, double value);

/* REAL */
double Area__refLocation_y_Get(Area* root);

/* REAL */
void Area__refLocation_y_Set(Area* root, double value);

/* REAL */
double Area__refLocation_z_Get(Area* root);

/* REAL */
void Area__refLocation_z_Set(Area* root, double value);

/* REAL */
double Orientation__roll_Get(Orientation* root);

/* REAL */
void Orientation__roll_Set(Orientation* root, double value);

/* REAL */
double Orientation__pitch_Get(Orientation* root);

/* REAL */
void Orientation__pitch_Set(Orientation* root, double value);

/* REAL */
double Orientation__yaw_Get(Orientation* root);

/* REAL */
void Orientation__yaw_Set(Orientation* root, double value);

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
asn1SccSint Agent__agentID_Get(Agent* root);

/* INTEGER */
void Agent__agentID_Set(Agent* root, asn1SccSint value);

/* ENUMERATED */
int Agent__agentColor_Get(Agent* root);

/* ENUMERATED */
void Agent__agentColor_Set(Agent* root, int value);

/* Field currentPosition selector */
Position* Agent__currentPosition_Get(Agent* root);

/* REAL */
double Agent__currentPosition_x_Get(Agent* root);

/* REAL */
void Agent__currentPosition_x_Set(Agent* root, double value);

/* REAL */
double Agent__currentPosition_y_Get(Agent* root);

/* REAL */
void Agent__currentPosition_y_Set(Agent* root, double value);

/* REAL */
double Agent__currentPosition_z_Get(Agent* root);

/* REAL */
void Agent__currentPosition_z_Set(Agent* root, double value);

/* Field currentOrientation selector */
Orientation* Agent__currentOrientation_Get(Agent* root);

/* REAL */
double Agent__currentOrientation_roll_Get(Agent* root);

/* REAL */
void Agent__currentOrientation_roll_Set(Agent* root, double value);

/* REAL */
double Agent__currentOrientation_pitch_Get(Agent* root);

/* REAL */
void Agent__currentOrientation_pitch_Set(Agent* root, double value);

/* REAL */
double Agent__currentOrientation_yaw_Get(Agent* root);

/* REAL */
void Agent__currentOrientation_yaw_Set(Agent* root, double value);

/* Field currentVelocity selector */
Velocity* Agent__currentVelocity_Get(Agent* root);

/* REAL */
double Agent__currentVelocity_vX_Get(Agent* root);

/* REAL */
void Agent__currentVelocity_vX_Set(Agent* root, double value);

/* REAL */
double Agent__currentVelocity_vY_Get(Agent* root);

/* REAL */
void Agent__currentVelocity_vY_Set(Agent* root, double value);

/* REAL */
double Agent__currentVelocity_vZ_Get(Agent* root);

/* REAL */
void Agent__currentVelocity_vZ_Set(Agent* root, double value);

/* REAL */
double Agent__currentVelocity_vRoll_Get(Agent* root);

/* REAL */
void Agent__currentVelocity_vRoll_Set(Agent* root, double value);

/* REAL */
double Agent__currentVelocity_vPitch_Get(Agent* root);

/* REAL */
void Agent__currentVelocity_vPitch_Set(Agent* root, double value);

/* REAL */
double Agent__currentVelocity_vYaw_Get(Agent* root);

/* REAL */
void Agent__currentVelocity_vYaw_Set(Agent* root, double value);

/* Field currentAcceleration selector */
Acceleration* Agent__currentAcceleration_Get(Agent* root);

/* REAL */
double Agent__currentAcceleration_aX_Get(Agent* root);

/* REAL */
void Agent__currentAcceleration_aX_Set(Agent* root, double value);

/* REAL */
double Agent__currentAcceleration_aY_Get(Agent* root);

/* REAL */
void Agent__currentAcceleration_aY_Set(Agent* root, double value);

/* REAL */
double Agent__currentAcceleration_aZ_Get(Agent* root);

/* REAL */
void Agent__currentAcceleration_aZ_Set(Agent* root, double value);

/* REAL */
double Agent__currentAcceleration_aRoll_Get(Agent* root);

/* REAL */
void Agent__currentAcceleration_aRoll_Set(Agent* root, double value);

/* REAL */
double Agent__currentAcceleration_aPitch_Get(Agent* root);

/* REAL */
void Agent__currentAcceleration_aPitch_Set(Agent* root, double value);

/* REAL */
double Agent__currentAcceleration_aYaw_Get(Agent* root);

/* REAL */
void Agent__currentAcceleration_aYaw_Set(Agent* root, double value);

/* ENUMERATED */
int SystemState__Get(SystemState* root);

/* ENUMERATED */
void SystemState__Set(SystemState* root, int value);

/* ENUMERATED */
int MyEnum__Get(MyEnum* root);

/* ENUMERATED */
void MyEnum__Set(MyEnum* root, int value);

/* Helper functions for NATIVE encodings */

void SetDataFor_MySeqOf(void *dest, void *src);
byte* MovePtrBySizeOf_MySeqOf(byte *pData);
byte* CreateInstanceOf_MySeqOf(void);
void DestroyInstanceOf_MySeqOf(byte *pData);

void SetDataFor_PixyData(void *dest, void *src);
byte* MovePtrBySizeOf_PixyData(byte *pData);
byte* CreateInstanceOf_PixyData(void);
void DestroyInstanceOf_PixyData(byte *pData);

void SetDataFor_ReferenceFormation(void *dest, void *src);
byte* MovePtrBySizeOf_ReferenceFormation(byte *pData);
byte* CreateInstanceOf_ReferenceFormation(void);
void DestroyInstanceOf_ReferenceFormation(byte *pData);

void SetDataFor_Trajectory(void *dest, void *src);
byte* MovePtrBySizeOf_Trajectory(byte *pData);
byte* CreateInstanceOf_Trajectory(void);
void DestroyInstanceOf_Trajectory(byte *pData);

void SetDataFor_DroneControllerInput(void *dest, void *src);
byte* MovePtrBySizeOf_DroneControllerInput(byte *pData);
byte* CreateInstanceOf_DroneControllerInput(void);
void DestroyInstanceOf_DroneControllerInput(byte *pData);

void SetDataFor_Acceleration(void *dest, void *src);
byte* MovePtrBySizeOf_Acceleration(byte *pData);
byte* CreateInstanceOf_Acceleration(void);
void DestroyInstanceOf_Acceleration(byte *pData);

void SetDataFor_Velocity(void *dest, void *src);
byte* MovePtrBySizeOf_Velocity(byte *pData);
byte* CreateInstanceOf_Velocity(void);
void DestroyInstanceOf_Velocity(byte *pData);

void SetDataFor_T_UInt8(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt8(byte *pData);
byte* CreateInstanceOf_T_UInt8(void);
void DestroyInstanceOf_T_UInt8(byte *pData);

void SetDataFor_MyReal(void *dest, void *src);
byte* MovePtrBySizeOf_MyReal(byte *pData);
byte* CreateInstanceOf_MyReal(void);
void DestroyInstanceOf_MyReal(byte *pData);

void SetDataFor_Position(void *dest, void *src);
byte* MovePtrBySizeOf_Position(byte *pData);
byte* CreateInstanceOf_Position(void);
void DestroyInstanceOf_Position(byte *pData);

void SetDataFor_FeedbackToGUI(void *dest, void *src);
byte* MovePtrBySizeOf_FeedbackToGUI(byte *pData);
byte* CreateInstanceOf_FeedbackToGUI(void);
void DestroyInstanceOf_FeedbackToGUI(byte *pData);

void SetDataFor_UserCommand(void *dest, void *src);
byte* MovePtrBySizeOf_UserCommand(byte *pData);
byte* CreateInstanceOf_UserCommand(void);
void DestroyInstanceOf_UserCommand(byte *pData);

void SetDataFor_WorldData(void *dest, void *src);
byte* MovePtrBySizeOf_WorldData(byte *pData);
byte* CreateInstanceOf_WorldData(void);
void DestroyInstanceOf_WorldData(byte *pData);

void SetDataFor_MyOctStr(void *dest, void *src);
byte* MovePtrBySizeOf_MyOctStr(byte *pData);
byte* CreateInstanceOf_MyOctStr(void);
void DestroyInstanceOf_MyOctStr(byte *pData);

void SetDataFor_T_Boolean(void *dest, void *src);
byte* MovePtrBySizeOf_T_Boolean(byte *pData);
byte* CreateInstanceOf_T_Boolean(void);
void DestroyInstanceOf_T_Boolean(byte *pData);

void SetDataFor_Color(void *dest, void *src);
byte* MovePtrBySizeOf_Color(byte *pData);
byte* CreateInstanceOf_Color(void);
void DestroyInstanceOf_Color(byte *pData);

void SetDataFor_MyBool(void *dest, void *src);
byte* MovePtrBySizeOf_MyBool(byte *pData);
byte* CreateInstanceOf_MyBool(void);
void DestroyInstanceOf_MyBool(byte *pData);

void SetDataFor_T_Int8(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int8(byte *pData);
byte* CreateInstanceOf_T_Int8(void);
void DestroyInstanceOf_T_Int8(byte *pData);

void SetDataFor_T_UInt32(void *dest, void *src);
byte* MovePtrBySizeOf_T_UInt32(byte *pData);
byte* CreateInstanceOf_T_UInt32(void);
void DestroyInstanceOf_T_UInt32(byte *pData);

void SetDataFor_MySeq(void *dest, void *src);
byte* MovePtrBySizeOf_MySeq(byte *pData);
byte* CreateInstanceOf_MySeq(void);
void DestroyInstanceOf_MySeq(byte *pData);

void SetDataFor_SafetyEvent(void *dest, void *src);
byte* MovePtrBySizeOf_SafetyEvent(byte *pData);
byte* CreateInstanceOf_SafetyEvent(void);
void DestroyInstanceOf_SafetyEvent(byte *pData);

void SetDataFor_T_Int32(void *dest, void *src);
byte* MovePtrBySizeOf_T_Int32(byte *pData);
byte* CreateInstanceOf_T_Int32(void);
void DestroyInstanceOf_T_Int32(byte *pData);

void SetDataFor_ReferencePath(void *dest, void *src);
byte* MovePtrBySizeOf_ReferencePath(byte *pData);
byte* CreateInstanceOf_ReferencePath(void);
void DestroyInstanceOf_ReferencePath(byte *pData);

void SetDataFor_MyInteger(void *dest, void *src);
byte* MovePtrBySizeOf_MyInteger(byte *pData);
byte* CreateInstanceOf_MyInteger(void);
void DestroyInstanceOf_MyInteger(byte *pData);

void SetDataFor_DroneSensorData(void *dest, void *src);
byte* MovePtrBySizeOf_DroneSensorData(byte *pData);
byte* CreateInstanceOf_DroneSensorData(void);
void DestroyInstanceOf_DroneSensorData(byte *pData);

void SetDataFor_HoverAction(void *dest, void *src);
byte* MovePtrBySizeOf_HoverAction(byte *pData);
byte* CreateInstanceOf_HoverAction(void);
void DestroyInstanceOf_HoverAction(byte *pData);

void SetDataFor_PositionSystemData(void *dest, void *src);
byte* MovePtrBySizeOf_PositionSystemData(byte *pData);
byte* CreateInstanceOf_PositionSystemData(void);
void DestroyInstanceOf_PositionSystemData(byte *pData);

void SetDataFor_Area(void *dest, void *src);
byte* MovePtrBySizeOf_Area(byte *pData);
byte* CreateInstanceOf_Area(void);
void DestroyInstanceOf_Area(byte *pData);

void SetDataFor_Orientation(void *dest, void *src);
byte* MovePtrBySizeOf_Orientation(byte *pData);
byte* CreateInstanceOf_Orientation(void);
void DestroyInstanceOf_Orientation(byte *pData);

void SetDataFor_MyChoice(void *dest, void *src);
byte* MovePtrBySizeOf_MyChoice(byte *pData);
byte* CreateInstanceOf_MyChoice(void);
void DestroyInstanceOf_MyChoice(byte *pData);

void SetDataFor_Agent(void *dest, void *src);
byte* MovePtrBySizeOf_Agent(byte *pData);
byte* CreateInstanceOf_Agent(void);
void DestroyInstanceOf_Agent(byte *pData);

void SetDataFor_SystemState(void *dest, void *src);
byte* MovePtrBySizeOf_SystemState(byte *pData);
byte* CreateInstanceOf_SystemState(void);
void DestroyInstanceOf_SystemState(byte *pData);

void SetDataFor_MyEnum(void *dest, void *src);
byte* MovePtrBySizeOf_MyEnum(byte *pData);
byte* CreateInstanceOf_MyEnum(void);
void DestroyInstanceOf_MyEnum(byte *pData);

void SetDataFor_int(void *dest, void *src);
byte* MovePtrBySizeOf_int(byte *pData);
byte* CreateInstanceOf_int(void);
void DestroyInstanceOf_int(byte *pData);


#endif
