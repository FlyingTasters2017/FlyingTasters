T_UInt8 = Simulink.AliasType;
T_UInt8.BaseType = 'uint8';
T_UInt8.Description = 'range is (0, 255)';

MyInteger = Simulink.AliasType;
MyInteger.BaseType = 'uint8';
MyInteger.Description = 'range is (0, 255)';

% Values for MySeq-validity:
MySeq_validity_value_valid = 0;
MySeq_validity_value_invalid = 1;
MySeq_validity = Simulink.AliasType;
MySeq_validity.BaseType = 'int32';
MySeq_validity.Description = 'values of ENUMERATED MySeq-validity';


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

MyOctStr_member_data=Simulink.BusElement;
MyOctStr_member_data.name='element_data';
MyOctStr_member_data.DataType='uint8';
MyOctStr_member_data.dimensions=3;

MyOctStr=Simulink.Bus;
MyOctStr.Elements = [MyOctStr_member_data ];

T_UInt32 = Simulink.AliasType;
T_UInt32.BaseType = 'uint32';
T_UInt32.Description = 'range is (0, 4294967295)';

% Values for MyEnum:
MyEnum_value_hello = 0;
MyEnum_value_world = 1;
MyEnum_value_howareyou = 2;
MyEnum = Simulink.AliasType;
MyEnum.BaseType = 'int32';
MyEnum.Description = 'values of ENUMERATED MyEnum';


T_Boolean = Simulink.AliasType;
T_Boolean.BaseType = 'boolean';
T_Boolean.Description = 'A simple BOOLEAN';

MyReal = Simulink.AliasType;
MyReal.BaseType = 'double';
MyReal.Description = 'range is (0.0, 1000.0)';

MyPWM_elem01=Simulink.BusElement;
MyPWM_elem01.name='pwm1';
MyPWM_elem01.DataType='double';
MyPWM_elem01.dimensions=1;

MyPWM_elem02=Simulink.BusElement;
MyPWM_elem02.name='pwm2';
MyPWM_elem02.DataType='double';
MyPWM_elem02.dimensions=1;

MyPWM_elem03=Simulink.BusElement;
MyPWM_elem03.name='pwm3';
MyPWM_elem03.DataType='double';
MyPWM_elem03.dimensions=1;

MyPWM_elem04=Simulink.BusElement;
MyPWM_elem04.name='pwm4';
MyPWM_elem04.DataType='double';
MyPWM_elem04.dimensions=1;

MyPWM = Simulink.Bus;
MyPWM.Elements = [MyPWM_elem01 MyPWM_elem02 MyPWM_elem03 MyPWM_elem04 ];

MyTrajectory_elem01=Simulink.BusElement;
MyTrajectory_elem01.name='x';
MyTrajectory_elem01.DataType='double';
MyTrajectory_elem01.dimensions=1;

MyTrajectory_elem02=Simulink.BusElement;
MyTrajectory_elem02.name='y';
MyTrajectory_elem02.DataType='double';
MyTrajectory_elem02.dimensions=1;

MyTrajectory_elem03=Simulink.BusElement;
MyTrajectory_elem03.name='z';
MyTrajectory_elem03.DataType='double';
MyTrajectory_elem03.dimensions=1;

MyTrajectory_elem04=Simulink.BusElement;
MyTrajectory_elem04.name='yaw';
MyTrajectory_elem04.DataType='double';
MyTrajectory_elem04.dimensions=1;

MyTrajectory = Simulink.Bus;
MyTrajectory.Elements = [MyTrajectory_elem01 MyTrajectory_elem02 MyTrajectory_elem03 MyTrajectory_elem04 ];

T_Int8 = Simulink.AliasType;
T_Int8.BaseType = 'int8';
T_Int8.Description = 'range is (-128, 127)';

MyStates_elem01=Simulink.BusElement;
MyStates_elem01.name='x';
MyStates_elem01.DataType='double';
MyStates_elem01.dimensions=1;

MyStates_elem02=Simulink.BusElement;
MyStates_elem02.name='y';
MyStates_elem02.DataType='double';
MyStates_elem02.dimensions=1;

MyStates_elem03=Simulink.BusElement;
MyStates_elem03.name='z';
MyStates_elem03.DataType='double';
MyStates_elem03.dimensions=1;

MyStates_elem04=Simulink.BusElement;
MyStates_elem04.name='yaw';
MyStates_elem04.DataType='double';
MyStates_elem04.dimensions=1;

MyStates_elem05=Simulink.BusElement;
MyStates_elem05.name='pitch';
MyStates_elem05.DataType='double';
MyStates_elem05.dimensions=1;

MyStates_elem06=Simulink.BusElement;
MyStates_elem06.name='roll';
MyStates_elem06.DataType='double';
MyStates_elem06.dimensions=1;

MyStates_elem07=Simulink.BusElement;
MyStates_elem07.name='dx';
MyStates_elem07.DataType='double';
MyStates_elem07.dimensions=1;

MyStates_elem08=Simulink.BusElement;
MyStates_elem08.name='dy';
MyStates_elem08.DataType='double';
MyStates_elem08.dimensions=1;

MyStates_elem09=Simulink.BusElement;
MyStates_elem09.name='dz';
MyStates_elem09.DataType='double';
MyStates_elem09.dimensions=1;

MyStates_elem10=Simulink.BusElement;
MyStates_elem10.name='dyaw';
MyStates_elem10.DataType='double';
MyStates_elem10.dimensions=1;

MyStates_elem11=Simulink.BusElement;
MyStates_elem11.name='dpitch';
MyStates_elem11.DataType='double';
MyStates_elem11.dimensions=1;

MyStates_elem12=Simulink.BusElement;
MyStates_elem12.name='droll';
MyStates_elem12.DataType='double';
MyStates_elem12.dimensions=1;

MyStates = Simulink.Bus;
MyStates.Elements = [MyStates_elem01 MyStates_elem02 MyStates_elem03 MyStates_elem04 MyStates_elem05 MyStates_elem06 MyStates_elem07 MyStates_elem08 MyStates_elem09 MyStates_elem10 MyStates_elem11 MyStates_elem12 ];

MySeqOf_member_data=Simulink.BusElement;
MySeqOf_member_data.name='element_data';
MySeqOf_member_data.DataType='int32';
MySeqOf_member_data.dimensions=2;

MySeqOf=Simulink.Bus;
MySeqOf.Elements = [MySeqOf_member_data ];

MyBool = Simulink.AliasType;
MyBool.BaseType = 'boolean';
MyBool.Description = 'A simple BOOLEAN';

T_Int32 = Simulink.AliasType;
T_Int32.BaseType = 'int32';
T_Int32.Description = 'range is (-2147483648, 2147483647)';

