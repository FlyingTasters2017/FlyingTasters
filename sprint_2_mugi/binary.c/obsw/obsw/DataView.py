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
exportedTypes["TASTE-Dataview"] = ["MyInteger", "MyReal", "MyPWM", "MyTrajectory", "MyStates", "MyBool", "MyEnum", "MySeq", "MyChoice", "MySeqOf", "MyOctStr", "MySeq-validity", "T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-Dataview"] = ["myVar"]
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

types["MyPWM"] = type("MyPWM", (object,), {
    "Line": 10, "CharPositionInLine": 0, "type": type("MyPWM_type", (object,), {
        "Line": 10, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "pwm1": type("pwm1", (object,), {
                "Optional": "False", "Line": 11, "CharPositionInLine": 4, "type": type("pwm1_type", (object,), {
                    "Line": 11, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "pwm2": type("pwm2", (object,), {
                "Optional": "False", "Line": 12, "CharPositionInLine": 4, "type": type("pwm2_type", (object,), {
                    "Line": 12, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "pwm3": type("pwm3", (object,), {
                "Optional": "False", "Line": 13, "CharPositionInLine": 4, "type": type("pwm3_type", (object,), {
                    "Line": 13, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "pwm4": type("pwm4", (object,), {
                "Optional": "False", "Line": 14, "CharPositionInLine": 4, "type": type("pwm4_type", (object,), {
                    "Line": 14, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            })
        }
    })
})

types["MyTrajectory"] = type("MyTrajectory", (object,), {
    "Line": 17, "CharPositionInLine": 0, "type": type("MyTrajectory_type", (object,), {
        "Line": 17, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 18, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 18, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 19, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 19, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 20, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 20, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 21, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 21, "CharPositionInLine": 8, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            })
        }
    })
})

types["MyStates"] = type("MyStates", (object,), {
    "Line": 24, "CharPositionInLine": 0, "type": type("MyStates_type", (object,), {
        "Line": 24, "CharPositionInLine": 15, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 25, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 25, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 26, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 26, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 27, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 27, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 28, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 28, "CharPositionInLine": 8, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "pitch": type("pitch", (object,), {
                "Optional": "False", "Line": 29, "CharPositionInLine": 4, "type": type("pitch_type", (object,), {
                    "Line": 29, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "roll": type("roll", (object,), {
                "Optional": "False", "Line": 30, "CharPositionInLine": 4, "type": type("roll_type", (object,), {
                    "Line": 30, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "dx": type("dx", (object,), {
                "Optional": "False", "Line": 31, "CharPositionInLine": 4, "type": type("dx_type", (object,), {
                    "Line": 31, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "dy": type("dy", (object,), {
                "Optional": "False", "Line": 32, "CharPositionInLine": 4, "type": type("dy_type", (object,), {
                    "Line": 32, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "dz": type("dz", (object,), {
                "Optional": "False", "Line": 33, "CharPositionInLine": 4, "type": type("dz_type", (object,), {
                    "Line": 33, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "dyaw": type("dyaw", (object,), {
                "Optional": "False", "Line": 34, "CharPositionInLine": 4, "type": type("dyaw_type", (object,), {
                    "Line": 34, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "dpitch": type("dpitch", (object,), {
                "Optional": "False", "Line": 35, "CharPositionInLine": 4, "type": type("dpitch_type", (object,), {
                    "Line": 35, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            }),
            "droll": type("droll", (object,), {
                "Optional": "False", "Line": 36, "CharPositionInLine": 4, "type": type("droll_type", (object,), {
                    "Line": 36, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "0", "Max": "1000"
                })
            })
        }
    })
})

types["MyBool"] = type("MyBool", (object,), {
    "Line": 39, "CharPositionInLine": 0, "type": type("MyBool_type", (object,), {
        "Line": 39, "CharPositionInLine": 16, "kind": "BooleanType"
    })
})

types["MyEnum"] = type("MyEnum", (object,), {
    "Line": 41, "CharPositionInLine": 0, "type": type("MyEnum_type", (object,), {
        "Line": 41, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "hello": type("hello", (object,), {
                "IntValue": 0, "Line": 41, "CharPositionInLine": 29, "EnumID": "hello"
            }),
            "world": type("world", (object,), {
                "IntValue": 1, "Line": 41, "CharPositionInLine": 36, "EnumID": "world"
            }),
            "howareyou": type("howareyou", (object,), {
                "IntValue": 2, "Line": 41, "CharPositionInLine": 43, "EnumID": "howareyou"
            })
        }
    })
})

types["MySeq"] = type("MySeq", (object,), {
    "Line": 43, "CharPositionInLine": 0, "type": type("MySeq_type", (object,), {
        "Line": 43, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "input-data": type("input-data", (object,), {
                "Optional": "False", "Line": 44, "CharPositionInLine": 4, "type": type("input-data_type", (object,), {
                    "Line": 44, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "output-data": type("output-data", (object,), {
                "Optional": "False", "Line": 45, "CharPositionInLine": 4, "type": type("output-data_type", (object,), {
                    "Line": 45, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "validity": type("validity", (object,), {
                "Optional": "False", "Line": 46, "CharPositionInLine": 4, "type": type("validity_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MySeq-validity"
                })
            })
        }
    })
})

types["MyChoice"] = type("MyChoice", (object,), {
    "Line": 49, "CharPositionInLine": 0, "type": type("MyChoice_type", (object,), {
        "Line": 49, "CharPositionInLine": 16, "kind": "ChoiceType", "Children": {
            "a": type("a_PRESENT", (object,), {
                "Line": 50, "CharPositionInLine": 4, "EnumID": "a_PRESENT", "type": type("a_PRESENT_type", (object,), {
                    "Line": 50, "CharPositionInLine": 6, "kind": "BooleanType"
                })
            }),
            "b": type("b_PRESENT", (object,), {
                "Line": 51, "CharPositionInLine": 4, "EnumID": "b_PRESENT", "type": type("b_PRESENT_type", (object,), {
                    "Line": 51, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MySeq"
                })
            })
        }
    })
})

types["MySeqOf"] = type("MySeqOf", (object,), {
    "Line": 54, "CharPositionInLine": 0, "type": type("MySeqOf_type", (object,), {
        "Line": 54, "CharPositionInLine": 16, "kind": "SequenceOfType", "Min": "2", "Max": "2", "type": type("SeqOf_type", (object,), {
            "Line": 54, "CharPositionInLine": 39, "kind": "ReferenceType", "ReferencedTypeName": "MyEnum"
        })
    })
})

types["MyOctStr"] = type("MyOctStr", (object,), {
    "Line": 56, "CharPositionInLine": 0, "type": type("MyOctStr_type", (object,), {
        "Line": 56, "CharPositionInLine": 16, "kind": "OctetStringType", "Min": "3", "Max": "3"
    })
})

types["MySeq-validity"] = type("MySeq-validity", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MySeq-validity_type", (object,), {
        "Line": 46, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "valid": type("valid", (object,), {
                "IntValue": 0, "Line": 46, "CharPositionInLine": 29, "EnumID": "valid"
            }),
            "invalid": type("invalid", (object,), {
                "IntValue": 1, "Line": 46, "CharPositionInLine": 36, "EnumID": "invalid"
            })
        }
    })
})


variables["myVar"] = type("myVar", (object,), {
    "Line": 59,
    "CharPositionInLine": 0,
    "varName": "myVar",
    "type": type("myVar_type", (object,), {
        "Line": 59, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MySeqOf", "Min": "2", "Max": "2"
    }),
    "value": {"hello", "world"}
})

asn1Modules.append("TASTE-BasicTypes")
exportedTypes["TASTE-BasicTypes"] = ["T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-BasicTypes"] = []
importedModules["TASTE-BasicTypes"] = []

types["T-Int32"] = type("T-Int32", (object,), {
    "Line": 68, "CharPositionInLine": 0, "type": type("T-Int32_type", (object,), {
        "Line": 68, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "-2147483648", "Max": "2147483647"
    })
})

types["T-UInt32"] = type("T-UInt32", (object,), {
    "Line": 70, "CharPositionInLine": 0, "type": type("T-UInt32_type", (object,), {
        "Line": 70, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "0", "Max": "4294967295"
    })
})

types["T-Int8"] = type("T-Int8", (object,), {
    "Line": 72, "CharPositionInLine": 0, "type": type("T-Int8_type", (object,), {
        "Line": 72, "CharPositionInLine": 11, "kind": "IntegerType", "Min": "-128", "Max": "127"
    })
})

types["T-UInt8"] = type("T-UInt8", (object,), {
    "Line": 74, "CharPositionInLine": 0, "type": type("T-UInt8_type", (object,), {
        "Line": 74, "CharPositionInLine": 12, "kind": "IntegerType", "Min": "0", "Max": "255"
    })
})

types["T-Boolean"] = type("T-Boolean", (object,), {
    "Line": 76, "CharPositionInLine": 0, "type": type("T-Boolean_type", (object,), {
        "Line": 76, "CharPositionInLine": 14, "kind": "BooleanType"
    })
})


