#!/usr/bin/env python
# ASN.1 Data model
asn1Files = []
asn1Modules = []
exportedTypes = {}
exportedVariables = {}
importedModules = {}
types = {}
variables = {}
asn1Files.append("./dataview-uniq.asn")
asn1Modules.append("TASTE-Dataview")
exportedTypes["TASTE-Dataview"] = ["MyInteger", "MyReal", "MyBool", "MyEnum", "MySeq", "MyChoice", "MySeqOf", "MyOctStr", "ANGLE", "RATE", "T-UInt16", "GYROSCOPE", "ACCELERATION", "HEIGHT", "GYRO-SEQ", "ACC-SEQ", "TM-T", "TC-T", "MySeq-validity", "T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-Dataview"] = ["myVar", "sampleMeasurement", "sampleCommand"]
importedModules["TASTE-Dataview"] = [{"TASTE-BasicTypes":{"ImportedTypes": ["T-Int32","T-UInt32","T-Int8","T-UInt8","T-Boolean"], "ImportedVariables": []}}]

types["MyInteger"] = type("MyInteger", (object,), {
    "Line": 6, "CharPositionInLine": 0, "type": type("MyInteger_type", (object,), {
        "Line": 6, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt8", "Min": "0", "Max": "255", "ReferencedModName": "TASTE-BasicTypes"
    })
})

types["MyReal"] = type("MyReal", (object,), {
    "Line": 8, "CharPositionInLine": 0, "type": type("MyReal_type", (object,), {
        "Line": 8, "CharPositionInLine": 16, "kind": "RealType", "Min": "0.00000000000000000000E+000", "Max": "1.00000000000000000000E+003"
    })
})

types["MyBool"] = type("MyBool", (object,), {
    "Line": 10, "CharPositionInLine": 0, "type": type("MyBool_type", (object,), {
        "Line": 10, "CharPositionInLine": 16, "kind": "BooleanType"
    })
})

types["MyEnum"] = type("MyEnum", (object,), {
    "Line": 12, "CharPositionInLine": 0, "type": type("MyEnum_type", (object,), {
        "Line": 12, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "hello": type("hello", (object,), {
                "IntValue": 0, "Line": 12, "CharPositionInLine": 29, "EnumID": "hello"
            }),
            "world": type("world", (object,), {
                "IntValue": 1, "Line": 12, "CharPositionInLine": 36, "EnumID": "world"
            }),
            "howareyou": type("howareyou", (object,), {
                "IntValue": 2, "Line": 12, "CharPositionInLine": 43, "EnumID": "howareyou"
            })
        }
    })
})

types["MySeq"] = type("MySeq", (object,), {
    "Line": 14, "CharPositionInLine": 0, "type": type("MySeq_type", (object,), {
        "Line": 14, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "input-data": type("input-data", (object,), {
                "Optional": "False", "Line": 15, "CharPositionInLine": 4, "type": type("input-data_type", (object,), {
                    "Line": 15, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "output-data": type("output-data", (object,), {
                "Optional": "False", "Line": 16, "CharPositionInLine": 4, "type": type("output-data_type", (object,), {
                    "Line": 16, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "validity": type("validity", (object,), {
                "Optional": "False", "Line": 17, "CharPositionInLine": 4, "type": type("validity_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MySeq-validity"
                })
            })
        }
    })
})

types["MyChoice"] = type("MyChoice", (object,), {
    "Line": 20, "CharPositionInLine": 0, "type": type("MyChoice_type", (object,), {
        "Line": 20, "CharPositionInLine": 16, "kind": "ChoiceType", "Children": {
            "a": type("a_PRESENT", (object,), {
                "Line": 21, "CharPositionInLine": 4, "EnumID": "a_PRESENT", "type": type("a_PRESENT_type", (object,), {
                    "Line": 21, "CharPositionInLine": 6, "kind": "BooleanType"
                })
            }),
            "b": type("b_PRESENT", (object,), {
                "Line": 22, "CharPositionInLine": 4, "EnumID": "b_PRESENT", "type": type("b_PRESENT_type", (object,), {
                    "Line": 22, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MySeq"
                })
            })
        }
    })
})

types["MySeqOf"] = type("MySeqOf", (object,), {
    "Line": 25, "CharPositionInLine": 0, "type": type("MySeqOf_type", (object,), {
        "Line": 25, "CharPositionInLine": 16, "kind": "SequenceOfType", "Min": "2", "Max": "2", "type": type("SeqOf_type", (object,), {
            "Line": 25, "CharPositionInLine": 39, "kind": "ReferenceType", "ReferencedTypeName": "MyEnum"
        })
    })
})

types["MyOctStr"] = type("MyOctStr", (object,), {
    "Line": 27, "CharPositionInLine": 0, "type": type("MyOctStr_type", (object,), {
        "Line": 27, "CharPositionInLine": 16, "kind": "OctetStringType", "Min": "3", "Max": "3"
    })
})

types["ANGLE"] = type("ANGLE", (object,), {
    "Line": 33, "CharPositionInLine": 0, "type": type("ANGLE_type", (object,), {
        "Line": 33, "CharPositionInLine": 18, "kind": "RealType", "Min": "-3.60000000000000000000E+002", "Max": "3.60000000000000000000E+002"
    })
})

types["RATE"] = type("RATE", (object,), {
    "Line": 34, "CharPositionInLine": 0, "type": type("RATE_type", (object,), {
        "Line": 34, "CharPositionInLine": 18, "kind": "RealType", "Min": "-1.00000000000000000000E+005", "Max": "1.00000000000000000000E+005"
    })
})

types["T-UInt16"] = type("T-UInt16", (object,), {
    "Line": 35, "CharPositionInLine": 0, "type": type("T-UInt16_type", (object,), {
        "Line": 35, "CharPositionInLine": 18, "kind": "IntegerType", "Min": "0", "Max": "65535"
    })
})

types["GYROSCOPE"] = type("GYROSCOPE", (object,), {
    "Line": 37, "CharPositionInLine": 0, "type": type("GYROSCOPE_type", (object,), {
        "Line": 37, "CharPositionInLine": 18, "kind": "RealType", "Min": "-1.00000000000000000000E+005", "Max": "1.00000000000000000000E+005"
    })
})

types["ACCELERATION"] = type("ACCELERATION", (object,), {
    "Line": 38, "CharPositionInLine": 0, "type": type("ACCELERATION_type", (object,), {
        "Line": 38, "CharPositionInLine": 18, "kind": "RealType", "Min": "-1.60000000000000000000E+001", "Max": "1.60000000000000000000E+001"
    })
})

types["HEIGHT"] = type("HEIGHT", (object,), {
    "Line": 39, "CharPositionInLine": 0, "type": type("HEIGHT_type", (object,), {
        "Line": 39, "CharPositionInLine": 18, "kind": "IntegerType", "Min": "0", "Max": "8191"
    })
})

types["GYRO-SEQ"] = type("GYRO-SEQ", (object,), {
    "Line": 41, "CharPositionInLine": 0, "type": type("GYRO-SEQ_type", (object,), {
        "Line": 41, "CharPositionInLine": 13, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 42, "CharPositionInLine": 7, "type": type("x_type", (object,), {
                    "Line": 42, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "GYROSCOPE", "Min": "-100000", "Max": "100000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 43, "CharPositionInLine": 7, "type": type("y_type", (object,), {
                    "Line": 43, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "GYROSCOPE", "Min": "-100000", "Max": "100000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 44, "CharPositionInLine": 7, "type": type("z_type", (object,), {
                    "Line": 44, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "GYROSCOPE", "Min": "-100000", "Max": "100000"
                })
            })
        }
    })
})

types["ACC-SEQ"] = type("ACC-SEQ", (object,), {
    "Line": 47, "CharPositionInLine": 0, "type": type("ACC-SEQ_type", (object,), {
        "Line": 47, "CharPositionInLine": 12, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 48, "CharPositionInLine": 7, "type": type("x_type", (object,), {
                    "Line": 48, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "ACCELERATION", "Min": "-16", "Max": "16"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 49, "CharPositionInLine": 7, "type": type("y_type", (object,), {
                    "Line": 49, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "ACCELERATION", "Min": "-16", "Max": "16"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 50, "CharPositionInLine": 7, "type": type("z_type", (object,), {
                    "Line": 50, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "ACCELERATION", "Min": "-16", "Max": "16"
                })
            })
        }
    })
})

types["TM-T"] = type("TM-T", (object,), {
    "Line": 53, "CharPositionInLine": 0, "type": type("TM-T_type", (object,), {
        "Line": 53, "CharPositionInLine": 9, "kind": "SequenceType", "Children": {
            "gyro": type("gyro", (object,), {
                "Optional": "False", "Line": 54, "CharPositionInLine": 4, "type": type("gyro_type", (object,), {
                    "Line": 54, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "GYRO-SEQ"
                })
            }),
            "acc": type("acc", (object,), {
                "Optional": "False", "Line": 55, "CharPositionInLine": 4, "type": type("acc_type", (object,), {
                    "Line": 55, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "ACC-SEQ"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 56, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 56, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "HEIGHT", "Min": "0", "Max": "8191"
                })
            })
        }
    })
})

types["TC-T"] = type("TC-T", (object,), {
    "Line": 59, "CharPositionInLine": 0, "type": type("TC-T_type", (object,), {
        "Line": 59, "CharPositionInLine": 9, "kind": "SequenceType", "Children": {
            "roll": type("roll", (object,), {
                "Optional": "False", "Line": 60, "CharPositionInLine": 4, "type": type("roll_type", (object,), {
                    "Line": 60, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "ANGLE", "Min": "-360", "Max": "360"
                })
            }),
            "pitch": type("pitch", (object,), {
                "Optional": "False", "Line": 61, "CharPositionInLine": 4, "type": type("pitch_type", (object,), {
                    "Line": 61, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "ANGLE", "Min": "-360", "Max": "360"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 62, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 62, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "RATE", "Min": "-100000", "Max": "100000"
                })
            }),
            "thrust": type("thrust", (object,), {
                "Optional": "False", "Line": 63, "CharPositionInLine": 4, "type": type("thrust_type", (object,), {
                    "Line": 63, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt16", "Min": "0", "Max": "65535"
                })
            })
        }
    })
})

types["MySeq-validity"] = type("MySeq-validity", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MySeq-validity_type", (object,), {
        "Line": 17, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "valid": type("valid", (object,), {
                "IntValue": 0, "Line": 17, "CharPositionInLine": 29, "EnumID": "valid"
            }),
            "invalid": type("invalid", (object,), {
                "IntValue": 1, "Line": 17, "CharPositionInLine": 36, "EnumID": "invalid"
            })
        }
    })
})


variables["myVar"] = type("myVar", (object,), {
    "Line": 30,
    "CharPositionInLine": 0,
    "varName": "myVar",
    "type": type("myVar_type", (object,), {
        "Line": 30, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MySeqOf", "Min": "2", "Max": "2"
    }),
    "value": {"hello", "world"}
})

variables["sampleMeasurement"] = type("sampleMeasurement", (object,), {
    "Line": 66,
    "CharPositionInLine": 0,
    "varName": "sampleMeasurement",
    "type": type("sampleMeasurement_type", (object,), {
        "Line": 66, "CharPositionInLine": 18, "kind": "ReferenceType", "ReferencedTypeName": "TM-T"
    }),
    "value": {"gyro": {"x": 0.00000000000000000000E+000, "y": 0.00000000000000000000E+000, "z": 0.00000000000000000000E+000}, "acc": {"x": 0.00000000000000000000E+000, "y": 0.00000000000000000000E+000, "z": 1.00000000000000000000E+000}, "z": 0}
})

variables["sampleCommand"] = type("sampleCommand", (object,), {
    "Line": 68,
    "CharPositionInLine": 0,
    "varName": "sampleCommand",
    "type": type("sampleCommand_type", (object,), {
        "Line": 68, "CharPositionInLine": 14, "kind": "ReferenceType", "ReferencedTypeName": "TC-T"
    }),
    "value": {"roll": 0.00000000000000000000E+000, "pitch": 0.00000000000000000000E+000, "yaw": 0.00000000000000000000E+000, "thrust": 0}
})

asn1Modules.append("TASTE-BasicTypes")
exportedTypes["TASTE-BasicTypes"] = ["T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-BasicTypes"] = []
importedModules["TASTE-BasicTypes"] = []

types["T-Int32"] = type("T-Int32", (object,), {
    "Line": 77, "CharPositionInLine": 0, "type": type("T-Int32_type", (object,), {
        "Line": 77, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "-2147483648", "Max": "2147483647"
    })
})

types["T-UInt32"] = type("T-UInt32", (object,), {
    "Line": 79, "CharPositionInLine": 0, "type": type("T-UInt32_type", (object,), {
        "Line": 79, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "0", "Max": "4294967295"
    })
})

types["T-Int8"] = type("T-Int8", (object,), {
    "Line": 81, "CharPositionInLine": 0, "type": type("T-Int8_type", (object,), {
        "Line": 81, "CharPositionInLine": 11, "kind": "IntegerType", "Min": "-128", "Max": "127"
    })
})

types["T-UInt8"] = type("T-UInt8", (object,), {
    "Line": 83, "CharPositionInLine": 0, "type": type("T-UInt8_type", (object,), {
        "Line": 83, "CharPositionInLine": 12, "kind": "IntegerType", "Min": "0", "Max": "255"
    })
})

types["T-Boolean"] = type("T-Boolean", (object,), {
    "Line": 85, "CharPositionInLine": 0, "type": type("T-Boolean_type", (object,), {
        "Line": 85, "CharPositionInLine": 14, "kind": "BooleanType"
    })
})


