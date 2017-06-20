<<<<<<< HEAD
T_Int8 = Simulink.AliasType;
T_Int8.BaseType = 'int8';
T_Int8.Description = 'range is (-128, 127)';
=======
MyBool = Simulink.AliasType;
MyBool.BaseType = 'boolean';
MyBool.Description = 'A simple BOOLEAN';

T_UInt8 = Simulink.AliasType;
T_UInt8.BaseType = 'uint8';
T_UInt8.Description = 'range is (0, 255)';

MyInteger = Simulink.AliasType;
MyInteger.BaseType = 'uint8';
MyInteger.Description = 'range is (0, 255)';

T_Int32 = Simulink.AliasType;
T_Int32.BaseType = 'int32';
T_Int32.Description = 'range is (-2147483648, 2147483647)';

T_Boolean = Simulink.AliasType;
T_Boolean.BaseType = 'boolean';
T_Boolean.Description = 'A simple BOOLEAN';

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
>>>>>>> 715c55a64ced1d7f9afab43765b56a0beda75fde

MyReal = Simulink.AliasType;
MyReal.BaseType = 'double';
MyReal.Description = 'range is (-1000.0, 100000.0)';

% Values for MyEnum:
MyEnum_value_hello = 0;
MyEnum_value_world = 1;
MyEnum_value_howareyou = 2;
MyEnum = Simulink.AliasType;
MyEnum.BaseType = 'int32';
MyEnum.Description = 'values of ENUMERATED MyEnum';


T_Int8 = Simulink.AliasType;
T_Int8.BaseType = 'int8';
T_Int8.Description = 'range is (-128, 127)';

MySensorData_elem01=Simulink.BusElement;
MySensorData_elem01.name='yawAct';
MySensorData_elem01.DataType='double';
MySensorData_elem01.dimensions=1;

MySensorData_elem02=Simulink.BusElement;
MySensorData_elem02.name='pitchAct';
MySensorData_elem02.DataType='double';
MySensorData_elem02.dimensions=1;

MySensorData_elem03=Simulink.BusElement;
MySensorData_elem03.name='rollAct';
MySensorData_elem03.DataType='double';
MySensorData_elem03.dimensions=1;

MySensorData_elem04=Simulink.BusElement;
MySensorData_elem04.name='baropAct';
MySensorData_elem04.DataType='double';
MySensorData_elem04.dimensions=1;

MySensorData_elem05=Simulink.BusElement;
MySensorData_elem05.name='accxAct';
MySensorData_elem05.DataType='double';
MySensorData_elem05.dimensions=1;

MySensorData_elem06=Simulink.BusElement;
MySensorData_elem06.name='accyAct';
MySensorData_elem06.DataType='double';
MySensorData_elem06.dimensions=1;

MySensorData_elem07=Simulink.BusElement;
MySensorData_elem07.name='acczAct';
MySensorData_elem07.DataType='double';
MySensorData_elem07.dimensions=1;

MySensorData = Simulink.Bus;
MySensorData.Elements = [MySensorData_elem01 MySensorData_elem02 MySensorData_elem03 MySensorData_elem04 MySensorData_elem05 MySensorData_elem06 MySensorData_elem07 ];

<<<<<<< HEAD
MyDroneData_elem01=Simulink.BusElement;
MyDroneData_elem01.name='yawrateRef';
MyDroneData_elem01.DataType='double';
MyDroneData_elem01.dimensions=1;

MyDroneData_elem02=Simulink.BusElement;
MyDroneData_elem02.name='pitchRef';
MyDroneData_elem02.DataType='double';
MyDroneData_elem02.dimensions=1;

MyDroneData_elem03=Simulink.BusElement;
MyDroneData_elem03.name='rollRef';
MyDroneData_elem03.DataType='double';
MyDroneData_elem03.dimensions=1;

MyDroneData_elem04=Simulink.BusElement;
MyDroneData_elem04.name='thrustRef';
MyDroneData_elem04.DataType='double';
MyDroneData_elem04.dimensions=1;

MyDroneData = Simulink.Bus;
MyDroneData.Elements = [MyDroneData_elem01 MyDroneData_elem02 MyDroneData_elem03 MyDroneData_elem04 ];

T_Boolean = Simulink.AliasType;
T_Boolean.BaseType = 'boolean';
T_Boolean.Description = 'A simple BOOLEAN';

% Values for MyEnum:
MyEnum_value_hello = 0;
MyEnum_value_world = 1;
MyEnum_value_howareyou = 2;
MyEnum = Simulink.AliasType;
MyEnum.BaseType = 'int32';
MyEnum.Description = 'values of ENUMERATED MyEnum';

=======
MyOctStr_member_data=Simulink.BusElement;
MyOctStr_member_data.name='element_data';
MyOctStr_member_data.DataType='uint8';
MyOctStr_member_data.dimensions=3;

MyOctStr=Simulink.Bus;
MyOctStr.Elements = [MyOctStr_member_data ];

T_UInt32 = Simulink.AliasType;
T_UInt32.BaseType = 'uint32';
T_UInt32.Description = 'range is (0, 4294967295)';
>>>>>>> 715c55a64ced1d7f9afab43765b56a0beda75fde

MySeqOf_member_data=Simulink.BusElement;
MySeqOf_member_data.name='element_data';
MySeqOf_member_data.DataType='int32';
MySeqOf_member_data.dimensions=2;

MySeqOf=Simulink.Bus;
MySeqOf.Elements = [MySeqOf_member_data ];

<<<<<<< HEAD
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

MyBool = Simulink.AliasType;
MyBool.BaseType = 'boolean';
MyBool.Description = 'A simple BOOLEAN';

T_UInt32 = Simulink.AliasType;
T_UInt32.BaseType = 'uint32';
T_UInt32.Description = 'range is (0, 4294967295)';

MyOctStr_member_data=Simulink.BusElement;
MyOctStr_member_data.name='element_data';
MyOctStr_member_data.DataType='uint8';
MyOctStr_member_data.dimensions=3;

MyOctStr=Simulink.Bus;
MyOctStr.Elements = [MyOctStr_member_data ];

=======
>>>>>>> 715c55a64ced1d7f9afab43765b56a0beda75fde
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

T_Int32 = Simulink.AliasType;
T_Int32.BaseType = 'int32';
T_Int32.Description = 'range is (-2147483648, 2147483647)';

