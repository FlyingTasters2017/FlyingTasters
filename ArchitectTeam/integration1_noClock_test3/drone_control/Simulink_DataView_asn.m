MyReal = Simulink.AliasType;
MyReal.BaseType = 'double';
MyReal.Description = 'range is (-1000.0, 100000.0)';

HoverAction_elem01=Simulink.BusElement;
HoverAction_elem01.name='yaw_rate';
HoverAction_elem01.DataType='double';
HoverAction_elem01.dimensions=1;

HoverAction_elem02=Simulink.BusElement;
HoverAction_elem02.name='duration';
HoverAction_elem02.DataType='double';
HoverAction_elem02.dimensions=1;

HoverAction = Simulink.Bus;
HoverAction.Elements = [HoverAction_elem01 HoverAction_elem02 ];

ReferencePath_actions_member_00=Simulink.BusElement;
ReferencePath_actions_member_00.name='element_00';
ReferencePath_actions_member_00.DataType='HoverAction';
ReferencePath_actions_member_00.dimensions=1;

ReferencePath_actions_member_01=Simulink.BusElement;
ReferencePath_actions_member_01.name='element_01';
ReferencePath_actions_member_01.DataType='HoverAction';
ReferencePath_actions_member_01.dimensions=1;

ReferencePath_actions_member_02=Simulink.BusElement;
ReferencePath_actions_member_02.name='element_02';
ReferencePath_actions_member_02.DataType='HoverAction';
ReferencePath_actions_member_02.dimensions=1;

ReferencePath_actions_member_length=Simulink.BusElement;
ReferencePath_actions_member_length.name='length';
ReferencePath_actions_member_length.DataType='int32';
ReferencePath_actions_member_length.dimensions=1;

ReferencePath_actions=Simulink.Bus;
ReferencePath_actions.Elements = [ReferencePath_actions_member_00 ReferencePath_actions_member_01 ReferencePath_actions_member_02 ReferencePath_actions_member_length];

T_Int32 = Simulink.AliasType;
T_Int32.BaseType = 'int32';
T_Int32.Description = 'range is (-2147483648, 2147483647)';

% Values for MyEnum:
MyEnum_value_hello = 0;
MyEnum_value_world = 1;
MyEnum_value_howareyou = 2;
MyEnum = Simulink.AliasType;
MyEnum.BaseType = 'int32';
MyEnum.Description = 'values of ENUMERATED MyEnum';


DroneSensorData_elem01=Simulink.BusElement;
DroneSensorData_elem01.name='yawAct';
DroneSensorData_elem01.DataType='double';
DroneSensorData_elem01.dimensions=1;

DroneSensorData_elem02=Simulink.BusElement;
DroneSensorData_elem02.name='pitchAct';
DroneSensorData_elem02.DataType='double';
DroneSensorData_elem02.dimensions=1;

DroneSensorData_elem03=Simulink.BusElement;
DroneSensorData_elem03.name='rollAct';
DroneSensorData_elem03.DataType='double';
DroneSensorData_elem03.dimensions=1;

DroneSensorData_elem04=Simulink.BusElement;
DroneSensorData_elem04.name='baropAct';
DroneSensorData_elem04.DataType='double';
DroneSensorData_elem04.dimensions=1;

DroneSensorData_elem05=Simulink.BusElement;
DroneSensorData_elem05.name='accxAct';
DroneSensorData_elem05.DataType='double';
DroneSensorData_elem05.dimensions=1;

DroneSensorData_elem06=Simulink.BusElement;
DroneSensorData_elem06.name='accyAct';
DroneSensorData_elem06.DataType='double';
DroneSensorData_elem06.dimensions=1;

DroneSensorData_elem07=Simulink.BusElement;
DroneSensorData_elem07.name='acczAct';
DroneSensorData_elem07.DataType='double';
DroneSensorData_elem07.dimensions=1;

DroneSensorData = Simulink.Bus;
DroneSensorData.Elements = [DroneSensorData_elem01 DroneSensorData_elem02 DroneSensorData_elem03 DroneSensorData_elem04 DroneSensorData_elem05 DroneSensorData_elem06 DroneSensorData_elem07 ];

MultiDroneSensorData_data_member_00=Simulink.BusElement;
MultiDroneSensorData_data_member_00.name='element_00';
MultiDroneSensorData_data_member_00.DataType='DroneSensorData';
MultiDroneSensorData_data_member_00.dimensions=1;

MultiDroneSensorData_data_member_01=Simulink.BusElement;
MultiDroneSensorData_data_member_01.name='element_01';
MultiDroneSensorData_data_member_01.DataType='DroneSensorData';
MultiDroneSensorData_data_member_01.dimensions=1;

MultiDroneSensorData_data_member_02=Simulink.BusElement;
MultiDroneSensorData_data_member_02.name='element_02';
MultiDroneSensorData_data_member_02.DataType='DroneSensorData';
MultiDroneSensorData_data_member_02.dimensions=1;

MultiDroneSensorData_data_member_03=Simulink.BusElement;
MultiDroneSensorData_data_member_03.name='element_03';
MultiDroneSensorData_data_member_03.DataType='DroneSensorData';
MultiDroneSensorData_data_member_03.dimensions=1;

MultiDroneSensorData_data_member_04=Simulink.BusElement;
MultiDroneSensorData_data_member_04.name='element_04';
MultiDroneSensorData_data_member_04.DataType='DroneSensorData';
MultiDroneSensorData_data_member_04.dimensions=1;

MultiDroneSensorData_data_member_length=Simulink.BusElement;
MultiDroneSensorData_data_member_length.name='length';
MultiDroneSensorData_data_member_length.DataType='int32';
MultiDroneSensorData_data_member_length.dimensions=1;

MultiDroneSensorData_data=Simulink.Bus;
MultiDroneSensorData_data.Elements = [MultiDroneSensorData_data_member_00 MultiDroneSensorData_data_member_01 MultiDroneSensorData_data_member_02 MultiDroneSensorData_data_member_03 MultiDroneSensorData_data_member_04 MultiDroneSensorData_data_member_length];

MultiDroneSensorData_elem01=Simulink.BusElement;
MultiDroneSensorData_elem01.name='data';
MultiDroneSensorData_elem01.DataType='MultiDroneSensorData_data';
MultiDroneSensorData_elem01.dimensions=1;

MultiDroneSensorData = Simulink.Bus;
MultiDroneSensorData.Elements = MultiDroneSensorData_elem01 ;

DroneControllerInput_elem01=Simulink.BusElement;
DroneControllerInput_elem01.name='yawrateRef';
DroneControllerInput_elem01.DataType='double';
DroneControllerInput_elem01.dimensions=1;

DroneControllerInput_elem02=Simulink.BusElement;
DroneControllerInput_elem02.name='pitchRef';
DroneControllerInput_elem02.DataType='double';
DroneControllerInput_elem02.dimensions=1;

DroneControllerInput_elem03=Simulink.BusElement;
DroneControllerInput_elem03.name='rollRef';
DroneControllerInput_elem03.DataType='double';
DroneControllerInput_elem03.dimensions=1;

DroneControllerInput_elem04=Simulink.BusElement;
DroneControllerInput_elem04.name='heightRef';
DroneControllerInput_elem04.DataType='double';
DroneControllerInput_elem04.dimensions=1;

DroneControllerInput_elem05=Simulink.BusElement;
DroneControllerInput_elem05.name='thrustRef';
DroneControllerInput_elem05.DataType='double';
DroneControllerInput_elem05.dimensions=1;

DroneControllerInput = Simulink.Bus;
DroneControllerInput.Elements = [DroneControllerInput_elem01 DroneControllerInput_elem02 DroneControllerInput_elem03 DroneControllerInput_elem04 DroneControllerInput_elem05 ];

MyOctStr_member_data=Simulink.BusElement;
MyOctStr_member_data.name='element_data';
MyOctStr_member_data.DataType='uint8';
MyOctStr_member_data.dimensions=3;

MyOctStr=Simulink.Bus;
MyOctStr.Elements = [MyOctStr_member_data ];

T_UInt8 = Simulink.AliasType;
T_UInt8.BaseType = 'uint8';
T_UInt8.Description = 'range is (0, 255)';

MyInteger = Simulink.AliasType;
MyInteger.BaseType = 'uint8';
MyInteger.Description = 'range is (0, 255)';

MultiDroneControllerInput_controllerInput_member_00=Simulink.BusElement;
MultiDroneControllerInput_controllerInput_member_00.name='element_00';
MultiDroneControllerInput_controllerInput_member_00.DataType='DroneControllerInput';
MultiDroneControllerInput_controllerInput_member_00.dimensions=1;

MultiDroneControllerInput_controllerInput_member_01=Simulink.BusElement;
MultiDroneControllerInput_controllerInput_member_01.name='element_01';
MultiDroneControllerInput_controllerInput_member_01.DataType='DroneControllerInput';
MultiDroneControllerInput_controllerInput_member_01.dimensions=1;

MultiDroneControllerInput_controllerInput_member_02=Simulink.BusElement;
MultiDroneControllerInput_controllerInput_member_02.name='element_02';
MultiDroneControllerInput_controllerInput_member_02.DataType='DroneControllerInput';
MultiDroneControllerInput_controllerInput_member_02.dimensions=1;

MultiDroneControllerInput_controllerInput_member_03=Simulink.BusElement;
MultiDroneControllerInput_controllerInput_member_03.name='element_03';
MultiDroneControllerInput_controllerInput_member_03.DataType='DroneControllerInput';
MultiDroneControllerInput_controllerInput_member_03.dimensions=1;

MultiDroneControllerInput_controllerInput_member_04=Simulink.BusElement;
MultiDroneControllerInput_controllerInput_member_04.name='element_04';
MultiDroneControllerInput_controllerInput_member_04.DataType='DroneControllerInput';
MultiDroneControllerInput_controllerInput_member_04.dimensions=1;

MultiDroneControllerInput_controllerInput_member_length=Simulink.BusElement;
MultiDroneControllerInput_controllerInput_member_length.name='length';
MultiDroneControllerInput_controllerInput_member_length.DataType='int32';
MultiDroneControllerInput_controllerInput_member_length.dimensions=1;

MultiDroneControllerInput_controllerInput=Simulink.Bus;
MultiDroneControllerInput_controllerInput.Elements = [MultiDroneControllerInput_controllerInput_member_00 MultiDroneControllerInput_controllerInput_member_01 MultiDroneControllerInput_controllerInput_member_02 MultiDroneControllerInput_controllerInput_member_03 MultiDroneControllerInput_controllerInput_member_04 MultiDroneControllerInput_controllerInput_member_length];

MultiDroneControllerInput_elem01=Simulink.BusElement;
MultiDroneControllerInput_elem01.name='controllerInput';
MultiDroneControllerInput_elem01.DataType='MultiDroneControllerInput_controllerInput';
MultiDroneControllerInput_elem01.dimensions=1;

MultiDroneControllerInput = Simulink.Bus;
MultiDroneControllerInput.Elements = MultiDroneControllerInput_elem01 ;

T_Int8 = Simulink.AliasType;
T_Int8.BaseType = 'int8';
T_Int8.Description = 'range is (-128, 127)';

% Values for Color:
Color_value_black = 0;
Color_value_pink = 1;
Color_value_red = 2;
Color = Simulink.AliasType;
Color.BaseType = 'int32';
Color.Description = 'values of ENUMERATED Color';


Position_elem01=Simulink.BusElement;
Position_elem01.name='x';
Position_elem01.DataType='double';
Position_elem01.dimensions=1;

Position_elem02=Simulink.BusElement;
Position_elem02.name='y';
Position_elem02.DataType='double';
Position_elem02.dimensions=1;

Position_elem03=Simulink.BusElement;
Position_elem03.name='z';
Position_elem03.DataType='double';
Position_elem03.dimensions=1;

Position = Simulink.Bus;
Position.Elements = [Position_elem01 Position_elem02 Position_elem03 ];

Orientation_elem01=Simulink.BusElement;
Orientation_elem01.name='roll';
Orientation_elem01.DataType='double';
Orientation_elem01.dimensions=1;

Orientation_elem02=Simulink.BusElement;
Orientation_elem02.name='pitch';
Orientation_elem02.DataType='double';
Orientation_elem02.dimensions=1;

Orientation_elem03=Simulink.BusElement;
Orientation_elem03.name='yaw';
Orientation_elem03.DataType='double';
Orientation_elem03.dimensions=1;

Orientation = Simulink.Bus;
Orientation.Elements = [Orientation_elem01 Orientation_elem02 Orientation_elem03 ];

Velocity_elem01=Simulink.BusElement;
Velocity_elem01.name='vX';
Velocity_elem01.DataType='double';
Velocity_elem01.dimensions=1;

Velocity_elem02=Simulink.BusElement;
Velocity_elem02.name='vY';
Velocity_elem02.DataType='double';
Velocity_elem02.dimensions=1;

Velocity_elem03=Simulink.BusElement;
Velocity_elem03.name='vZ';
Velocity_elem03.DataType='double';
Velocity_elem03.dimensions=1;

Velocity_elem04=Simulink.BusElement;
Velocity_elem04.name='vRoll';
Velocity_elem04.DataType='double';
Velocity_elem04.dimensions=1;

Velocity_elem05=Simulink.BusElement;
Velocity_elem05.name='vPitch';
Velocity_elem05.DataType='double';
Velocity_elem05.dimensions=1;

Velocity_elem06=Simulink.BusElement;
Velocity_elem06.name='vYaw';
Velocity_elem06.DataType='double';
Velocity_elem06.dimensions=1;

Velocity = Simulink.Bus;
Velocity.Elements = [Velocity_elem01 Velocity_elem02 Velocity_elem03 Velocity_elem04 Velocity_elem05 Velocity_elem06 ];

Acceleration_elem01=Simulink.BusElement;
Acceleration_elem01.name='aX';
Acceleration_elem01.DataType='double';
Acceleration_elem01.dimensions=1;

Acceleration_elem02=Simulink.BusElement;
Acceleration_elem02.name='aY';
Acceleration_elem02.DataType='double';
Acceleration_elem02.dimensions=1;

Acceleration_elem03=Simulink.BusElement;
Acceleration_elem03.name='aZ';
Acceleration_elem03.DataType='double';
Acceleration_elem03.dimensions=1;

Acceleration_elem04=Simulink.BusElement;
Acceleration_elem04.name='aRoll';
Acceleration_elem04.DataType='double';
Acceleration_elem04.dimensions=1;

Acceleration_elem05=Simulink.BusElement;
Acceleration_elem05.name='aPitch';
Acceleration_elem05.DataType='double';
Acceleration_elem05.dimensions=1;

Acceleration_elem06=Simulink.BusElement;
Acceleration_elem06.name='aYaw';
Acceleration_elem06.DataType='double';
Acceleration_elem06.dimensions=1;

Acceleration = Simulink.Bus;
Acceleration.Elements = [Acceleration_elem01 Acceleration_elem02 Acceleration_elem03 Acceleration_elem04 Acceleration_elem05 Acceleration_elem06 ];

Agent_elem01=Simulink.BusElement;
Agent_elem01.name='agentID';
Agent_elem01.DataType='int8';
Agent_elem01.dimensions=1;

Agent_elem02=Simulink.BusElement;
Agent_elem02.name='agentColor';
Agent_elem02.DataType='int32';
Agent_elem02.dimensions=1;

Agent_elem03=Simulink.BusElement;
Agent_elem03.name='currentPosition';
Agent_elem03.DataType='Position';
Agent_elem03.dimensions=1;

Agent_elem04=Simulink.BusElement;
Agent_elem04.name='currentOrientation';
Agent_elem04.DataType='Orientation';
Agent_elem04.dimensions=1;

Agent_elem05=Simulink.BusElement;
Agent_elem05.name='currentVelocity';
Agent_elem05.DataType='Velocity';
Agent_elem05.dimensions=1;

Agent_elem06=Simulink.BusElement;
Agent_elem06.name='currentAcceleration';
Agent_elem06.DataType='Acceleration';
Agent_elem06.dimensions=1;

Agent = Simulink.Bus;
Agent.Elements = [Agent_elem01 Agent_elem02 Agent_elem03 Agent_elem04 Agent_elem05 Agent_elem06 ];

MultiAgents_agents_member_00=Simulink.BusElement;
MultiAgents_agents_member_00.name='element_00';
MultiAgents_agents_member_00.DataType='Agent';
MultiAgents_agents_member_00.dimensions=1;

MultiAgents_agents_member_01=Simulink.BusElement;
MultiAgents_agents_member_01.name='element_01';
MultiAgents_agents_member_01.DataType='Agent';
MultiAgents_agents_member_01.dimensions=1;

MultiAgents_agents_member_02=Simulink.BusElement;
MultiAgents_agents_member_02.name='element_02';
MultiAgents_agents_member_02.DataType='Agent';
MultiAgents_agents_member_02.dimensions=1;

MultiAgents_agents_member_03=Simulink.BusElement;
MultiAgents_agents_member_03.name='element_03';
MultiAgents_agents_member_03.DataType='Agent';
MultiAgents_agents_member_03.dimensions=1;

MultiAgents_agents_member_04=Simulink.BusElement;
MultiAgents_agents_member_04.name='element_04';
MultiAgents_agents_member_04.DataType='Agent';
MultiAgents_agents_member_04.dimensions=1;

MultiAgents_agents_member_length=Simulink.BusElement;
MultiAgents_agents_member_length.name='length';
MultiAgents_agents_member_length.DataType='int32';
MultiAgents_agents_member_length.dimensions=1;

MultiAgents_agents=Simulink.Bus;
MultiAgents_agents.Elements = [MultiAgents_agents_member_00 MultiAgents_agents_member_01 MultiAgents_agents_member_02 MultiAgents_agents_member_03 MultiAgents_agents_member_04 MultiAgents_agents_member_length];

MultiAgents_elem01=Simulink.BusElement;
MultiAgents_elem01.name='agents';
MultiAgents_elem01.DataType='MultiAgents_agents';
MultiAgents_elem01.dimensions=1;

MultiAgents = Simulink.Bus;
MultiAgents.Elements = MultiAgents_elem01 ;

% Values for MySeq-validity:
MySeq_validity_value_valid = 0;
MySeq_validity_value_invalid = 1;
MySeq_validity = Simulink.AliasType;
MySeq_validity.BaseType = 'int32';
MySeq_validity.Description = 'values of ENUMERATED MySeq-validity';


% Values for SystemState:
SystemState_value_idle = 0;
SystemState_value_initializing = 1;
SystemState_value_runningOk = 2;
SystemState_value_emergencyLand = 3;
SystemState_value_safeReturn = 4;
SystemState = Simulink.AliasType;
SystemState.BaseType = 'int32';
SystemState.Description = 'values of ENUMERATED SystemState';


MySeqOf_member_data=Simulink.BusElement;
MySeqOf_member_data.name='element_data';
MySeqOf_member_data.DataType='int32';
MySeqOf_member_data.dimensions=2;

MySeqOf=Simulink.Bus;
MySeqOf.Elements = [MySeqOf_member_data ];

ReferencePath_locations_member_00=Simulink.BusElement;
ReferencePath_locations_member_00.name='element_00';
ReferencePath_locations_member_00.DataType='Position';
ReferencePath_locations_member_00.dimensions=1;

ReferencePath_locations_member_01=Simulink.BusElement;
ReferencePath_locations_member_01.name='element_01';
ReferencePath_locations_member_01.DataType='Position';
ReferencePath_locations_member_01.dimensions=1;

ReferencePath_locations_member_02=Simulink.BusElement;
ReferencePath_locations_member_02.name='element_02';
ReferencePath_locations_member_02.DataType='Position';
ReferencePath_locations_member_02.dimensions=1;

ReferencePath_locations_member_length=Simulink.BusElement;
ReferencePath_locations_member_length.name='length';
ReferencePath_locations_member_length.DataType='int32';
ReferencePath_locations_member_length.dimensions=1;

ReferencePath_locations=Simulink.Bus;
ReferencePath_locations.Elements = [ReferencePath_locations_member_00 ReferencePath_locations_member_01 ReferencePath_locations_member_02 ReferencePath_locations_member_length];

T_UInt32 = Simulink.AliasType;
T_UInt32.BaseType = 'uint32';
T_UInt32.Description = 'range is (0, 4294967295)';

PixyData_elem01=Simulink.BusElement;
PixyData_elem01.name='xPix';
PixyData_elem01.DataType='uint32';
PixyData_elem01.dimensions=1;

PixyData_elem02=Simulink.BusElement;
PixyData_elem02.name='yPix';
PixyData_elem02.DataType='uint32';
PixyData_elem02.dimensions=1;

PixyData = Simulink.Bus;
PixyData.Elements = [PixyData_elem01 PixyData_elem02 ];

% Values for SafetyEvent:
SafetyEvent_value_safe = 0;
SafetyEvent_value_collision = 1;
SafetyEvent_value_wallColl = 2;
SafetyEvent_value_ceilColl = 3;
SafetyEvent = Simulink.AliasType;
SafetyEvent.BaseType = 'int32';
SafetyEvent.Description = 'values of ENUMERATED SafetyEvent';


WorldData_elem01=Simulink.BusElement;
WorldData_elem01.name='agentData';
WorldData_elem01.DataType='Agent';
WorldData_elem01.dimensions=1;

WorldData = Simulink.Bus;
WorldData.Elements = WorldData_elem01 ;

PositionSystemData_elem01=Simulink.BusElement;
PositionSystemData_elem01.name='xAct';
PositionSystemData_elem01.DataType='double';
PositionSystemData_elem01.dimensions=1;

PositionSystemData_elem02=Simulink.BusElement;
PositionSystemData_elem02.name='yAct';
PositionSystemData_elem02.DataType='double';
PositionSystemData_elem02.dimensions=1;

PositionSystemData = Simulink.Bus;
PositionSystemData.Elements = [PositionSystemData_elem01 PositionSystemData_elem02 ];

Area_elem01=Simulink.BusElement;
Area_elem01.name='height';
Area_elem01.DataType='int8';
Area_elem01.dimensions=1;

Area_elem02=Simulink.BusElement;
Area_elem02.name='width';
Area_elem02.DataType='int8';
Area_elem02.dimensions=1;

Area_elem03=Simulink.BusElement;
Area_elem03.name='depth';
Area_elem03.DataType='int8';
Area_elem03.dimensions=1;

Area_elem04=Simulink.BusElement;
Area_elem04.name='refLocation';
Area_elem04.DataType='Position';
Area_elem04.dimensions=1;

Area = Simulink.Bus;
Area.Elements = [Area_elem01 Area_elem02 Area_elem03 Area_elem04 ];

FeedbackToGUI_elem01=Simulink.BusElement;
FeedbackToGUI_elem01.name='flight';
FeedbackToGUI_elem01.DataType='WorldData';
FeedbackToGUI_elem01.dimensions=1;

FeedbackToGUI_elem02=Simulink.BusElement;
FeedbackToGUI_elem02.name='notification';
FeedbackToGUI_elem02.DataType='int32';
FeedbackToGUI_elem02.dimensions=1;

FeedbackToGUI = Simulink.Bus;
FeedbackToGUI.Elements = [FeedbackToGUI_elem01 FeedbackToGUI_elem02 ];

ReferenceFormation_nodes_member_data=Simulink.BusElement;
ReferenceFormation_nodes_member_data.name='element_data';
ReferenceFormation_nodes_member_data.DataType='int8';
ReferenceFormation_nodes_member_data.dimensions=5;

ReferenceFormation_nodes=Simulink.Bus;
ReferenceFormation_nodes.Elements = [ReferenceFormation_nodes_member_data ];

MyBool = Simulink.AliasType;
MyBool.BaseType = 'boolean';
MyBool.Description = 'A simple BOOLEAN';

Trajectory_elem01=Simulink.BusElement;
Trajectory_elem01.name='x';
Trajectory_elem01.DataType='double';
Trajectory_elem01.dimensions=1;

Trajectory_elem02=Simulink.BusElement;
Trajectory_elem02.name='y';
Trajectory_elem02.DataType='double';
Trajectory_elem02.dimensions=1;

Trajectory_elem03=Simulink.BusElement;
Trajectory_elem03.name='z';
Trajectory_elem03.DataType='double';
Trajectory_elem03.dimensions=1;

Trajectory_elem04=Simulink.BusElement;
Trajectory_elem04.name='yaw';
Trajectory_elem04.DataType='double';
Trajectory_elem04.dimensions=1;

Trajectory = Simulink.Bus;
Trajectory.Elements = [Trajectory_elem01 Trajectory_elem02 Trajectory_elem03 Trajectory_elem04 ];

T_Boolean = Simulink.AliasType;
T_Boolean.BaseType = 'boolean';
T_Boolean.Description = 'A simple BOOLEAN';

MySeq_elem01=Simulink.BusElement;
MySeq_elem01.name='input_data';
MySeq_elem01.DataType='uint8';
MySeq_elem01.dimensions=1;

MySeq_elem02=Simulink.BusElement;
MySeq_elem02.name='output_data';
MySeq_elem02.DataType='uint8';
MySeq_elem02.dimensions=1;

MySeq_elem03=Simulink.BusElement;
MySeq_elem03.name='validity';
MySeq_elem03.DataType='int32';
MySeq_elem03.dimensions=1;

MySeq = Simulink.Bus;
MySeq.Elements = [MySeq_elem01 MySeq_elem02 MySeq_elem03 ];

% Values for UserCommand:
UserCommand_value_sysStart = 0;
UserCommand_value_sysPause = 1;
UserCommand_value_sysStop = 2;
UserCommand = Simulink.AliasType;
UserCommand.BaseType = 'int32';
UserCommand.Description = 'values of ENUMERATED UserCommand';


MyChoice_elem01=Simulink.BusElement;
MyChoice_elem01.name='choiceIdx';
MyChoice_elem01.DataType='uint8';
MyChoice_elem01.dimensions=1;

MyChoice_elem02=Simulink.BusElement;
MyChoice_elem02.name='a';
MyChoice_elem02.DataType='boolean';
MyChoice_elem02.dimensions=1;

MyChoice_elem03=Simulink.BusElement;
MyChoice_elem03.name='b';
MyChoice_elem03.DataType='MySeq';
MyChoice_elem03.dimensions=1;

MyChoice = Simulink.Bus;
MyChoice.Elements = [MyChoice_elem01 MyChoice_elem02 MyChoice_elem03 ];

ReferencePath_elem01=Simulink.BusElement;
ReferencePath_elem01.name='locations';
ReferencePath_elem01.DataType='ReferencePath_locations';
ReferencePath_elem01.dimensions=1;

ReferencePath_elem02=Simulink.BusElement;
ReferencePath_elem02.name='actions';
ReferencePath_elem02.DataType='ReferencePath_actions';
ReferencePath_elem02.dimensions=1;

ReferencePath = Simulink.Bus;
ReferencePath.Elements = [ReferencePath_elem01 ReferencePath_elem02 ];

ReferenceFormation_elem01=Simulink.BusElement;
ReferenceFormation_elem01.name='nodes';
ReferenceFormation_elem01.DataType='ReferenceFormation_nodes';
ReferenceFormation_elem01.dimensions=1;

ReferenceFormation_elem02=Simulink.BusElement;
ReferenceFormation_elem02.name='anchor';
ReferenceFormation_elem02.DataType='int8';
ReferenceFormation_elem02.dimensions=1;

ReferenceFormation_elem03=Simulink.BusElement;
ReferenceFormation_elem03.name='formationAnchorPosition';
ReferenceFormation_elem03.DataType='Position';
ReferenceFormation_elem03.dimensions=1;

ReferenceFormation = Simulink.Bus;
ReferenceFormation.Elements = [ReferenceFormation_elem01 ReferenceFormation_elem02 ReferenceFormation_elem03 ];

