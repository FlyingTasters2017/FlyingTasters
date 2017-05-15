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


MySeqOf_member_data=Simulink.BusElement;
MySeqOf_member_data.name='element_data';
MySeqOf_member_data.DataType='int32';
MySeqOf_member_data.dimensions=2;

MySeqOf=Simulink.Bus;
MySeqOf.Elements = [MySeqOf_member_data ];

MyReal = Simulink.AliasType;
MyReal.BaseType = 'double';
MyReal.Description = 'range is (0.0, 1000.0)';

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

T_Int8 = Simulink.AliasType;
T_Int8.BaseType = 'int8';
T_Int8.Description = 'range is (-128, 127)';

T_Int32 = Simulink.AliasType;
T_Int32.BaseType = 'int32';
T_Int32.Description = 'range is (-2147483648, 2147483647)';

MyBool = Simulink.AliasType;
MyBool.BaseType = 'boolean';
MyBool.Description = 'A simple BOOLEAN';

