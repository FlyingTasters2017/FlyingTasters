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
asn1Modules.append("TASTE-BasicTypes")
exportedTypes["TASTE-BasicTypes"] = ["T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-BasicTypes"] = []
importedModules["TASTE-BasicTypes"] = []

types["T-Int32"] = type("T-Int32", (object,), {
    "Line": 6, "CharPositionInLine": 0, "type": type("T-Int32_type", (object,), {
        "Line": 6, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "-2147483648", "Max": "2147483647"
    })
})

types["T-UInt32"] = type("T-UInt32", (object,), {
    "Line": 8, "CharPositionInLine": 0, "type": type("T-UInt32_type", (object,), {
        "Line": 8, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "0", "Max": "4294967295"
    })
})

types["T-Int8"] = type("T-Int8", (object,), {
    "Line": 10, "CharPositionInLine": 0, "type": type("T-Int8_type", (object,), {
        "Line": 10, "CharPositionInLine": 11, "kind": "IntegerType", "Min": "-128", "Max": "127"
    })
})

types["T-UInt8"] = type("T-UInt8", (object,), {
    "Line": 12, "CharPositionInLine": 0, "type": type("T-UInt8_type", (object,), {
        "Line": 12, "CharPositionInLine": 12, "kind": "IntegerType", "Min": "0", "Max": "255"
    })
})

types["T-Boolean"] = type("T-Boolean", (object,), {
    "Line": 14, "CharPositionInLine": 0, "type": type("T-Boolean_type", (object,), {
        "Line": 14, "CharPositionInLine": 14, "kind": "BooleanType"
    })
})



asn1Modules.append("TASTE-Dataview")
exportedTypes["TASTE-Dataview"] = ["MyInteger", "MyReal", "MyBool", "MyEnum", "MySeq", "UserCommand", "Color", "SystemState", "SafetyEvent", "FeedbackToGUI", "PositionSystemData", "DroneSensorData", "DroneControllerInput", "MyChoice", "Position", "Orientation", "Trajectory", "Velocity", "Agent", "Area", "HoverAction", "ReferencePath", "ReferenceFormation", "WorldData", "MySeqOf", "MyOctStr", "ReferenceFormation-nodes", "ReferencePath-actions", "ReferencePath-locations", "MySeq-validity", "T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-Dataview"] = ["myVar"]
importedModules["TASTE-Dataview"] = [{"TASTE-BasicTypes":{"ImportedTypes": ["T-Int32","T-UInt32","T-Int8","T-UInt8","T-Boolean"], "ImportedVariables": []}}]

types["MyInteger"] = type("MyInteger", (object,), {
    "Line": 31, "CharPositionInLine": 0, "type": type("MyInteger_type", (object,), {
        "Line": 31, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt8", "Min": "0", "Max": "255", "ReferencedModName": "TASTE-BasicTypes"
    })
})

types["MyReal"] = type("MyReal", (object,), {
    "Line": 33, "CharPositionInLine": 0, "type": type("MyReal_type", (object,), {
        "Line": 33, "CharPositionInLine": 16, "kind": "RealType", "Min": "-1.00000000000000000000E+003", "Max": "1.00000000000000000000E+005"
    })
})

types["MyBool"] = type("MyBool", (object,), {
    "Line": 35, "CharPositionInLine": 0, "type": type("MyBool_type", (object,), {
        "Line": 35, "CharPositionInLine": 16, "kind": "BooleanType"
    })
})

types["MyEnum"] = type("MyEnum", (object,), {
    "Line": 37, "CharPositionInLine": 0, "type": type("MyEnum_type", (object,), {
        "Line": 37, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "hello": type("hello", (object,), {
                "IntValue": 0, "Line": 37, "CharPositionInLine": 29, "EnumID": "hello"
            }),
            "world": type("world", (object,), {
                "IntValue": 1, "Line": 37, "CharPositionInLine": 36, "EnumID": "world"
            }),
            "howareyou": type("howareyou", (object,), {
                "IntValue": 2, "Line": 37, "CharPositionInLine": 43, "EnumID": "howareyou"
            })
        }
    })
})

types["MySeq"] = type("MySeq", (object,), {
    "Line": 39, "CharPositionInLine": 0, "type": type("MySeq_type", (object,), {
        "Line": 39, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "input-data": type("input-data", (object,), {
                "Optional": "False", "Line": 40, "CharPositionInLine": 4, "type": type("input-data_type", (object,), {
                    "Line": 40, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "output-data": type("output-data", (object,), {
                "Optional": "False", "Line": 41, "CharPositionInLine": 4, "type": type("output-data_type", (object,), {
                    "Line": 41, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "validity": type("validity", (object,), {
                "Optional": "False", "Line": 42, "CharPositionInLine": 4, "type": type("validity_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MySeq-validity"
                })
            })
        }
    })
})

types["UserCommand"] = type("UserCommand", (object,), {
    "Line": 46, "CharPositionInLine": 0, "type": type("UserCommand_type", (object,), {
        "Line": 46, "CharPositionInLine": 15, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "sysStart": type("sysStart", (object,), {
                "IntValue": 0, "Line": 46, "CharPositionInLine": 27, "EnumID": "sysStart"
            }),
            "sysPause": type("sysPause", (object,), {
                "IntValue": 1, "Line": 46, "CharPositionInLine": 37, "EnumID": "sysPause"
            }),
            "sysStop": type("sysStop", (object,), {
                "IntValue": 2, "Line": 46, "CharPositionInLine": 47, "EnumID": "sysStop"
            })
        }
    })
})

types["Color"] = type("Color", (object,), {
    "Line": 47, "CharPositionInLine": 0, "type": type("Color_type", (object,), {
        "Line": 47, "CharPositionInLine": 10, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "black": type("black", (object,), {
                "IntValue": 0, "Line": 47, "CharPositionInLine": 22, "EnumID": "black"
            }),
            "pink": type("pink", (object,), {
                "IntValue": 1, "Line": 47, "CharPositionInLine": 29, "EnumID": "pink"
            }),
            "red": type("red", (object,), {
                "IntValue": 2, "Line": 47, "CharPositionInLine": 35, "EnumID": "red"
            })
        }
    })
})

types["SystemState"] = type("SystemState", (object,), {
    "Line": 48, "CharPositionInLine": 0, "type": type("SystemState_type", (object,), {
        "Line": 48, "CharPositionInLine": 15, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "idle": type("idle", (object,), {
                "IntValue": 0, "Line": 48, "CharPositionInLine": 27, "EnumID": "idle"
            }),
            "initializing": type("initializing", (object,), {
                "IntValue": 1, "Line": 48, "CharPositionInLine": 33, "EnumID": "initializing"
            }),
            "runningOk": type("runningOk", (object,), {
                "IntValue": 2, "Line": 48, "CharPositionInLine": 47, "EnumID": "runningOk"
            }),
            "emergencyLand": type("emergencyLand", (object,), {
                "IntValue": 3, "Line": 48, "CharPositionInLine": 58, "EnumID": "emergencyLand"
            }),
            "safeReturn": type("safeReturn", (object,), {
                "IntValue": 4, "Line": 48, "CharPositionInLine": 73, "EnumID": "safeReturn"
            })
        }
    })
})

types["SafetyEvent"] = type("SafetyEvent", (object,), {
    "Line": 49, "CharPositionInLine": 0, "type": type("SafetyEvent_type", (object,), {
        "Line": 49, "CharPositionInLine": 15, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "safe": type("safe", (object,), {
                "IntValue": 0, "Line": 49, "CharPositionInLine": 27, "EnumID": "safe"
            }),
            "collision": type("collision", (object,), {
                "IntValue": 1, "Line": 49, "CharPositionInLine": 32, "EnumID": "collision"
            }),
            "wallColl": type("wallColl", (object,), {
                "IntValue": 2, "Line": 49, "CharPositionInLine": 42, "EnumID": "wallColl"
            }),
            "ceilColl": type("ceilColl", (object,), {
                "IntValue": 3, "Line": 49, "CharPositionInLine": 51, "EnumID": "ceilColl"
            })
        }
    })
})

types["FeedbackToGUI"] = type("FeedbackToGUI", (object,), {
    "Line": 51, "CharPositionInLine": 0, "type": type("FeedbackToGUI_type", (object,), {
        "Line": 51, "CharPositionInLine": 18, "kind": "SequenceType", "Children": {
            "flight": type("flight", (object,), {
                "Optional": "False", "Line": 52, "CharPositionInLine": 4, "type": type("flight_type", (object,), {
                    "Line": 52, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "WorldData"
                })
            }),
            "notification": type("notification", (object,), {
                "Optional": "False", "Line": 53, "CharPositionInLine": 4, "type": type("notification_type", (object,), {
                    "Line": 53, "CharPositionInLine": 17, "kind": "ReferenceType", "ReferencedTypeName": "SystemState"
                })
            })
        }
    })
})

types["PositionSystemData"] = type("PositionSystemData", (object,), {
    "Line": 56, "CharPositionInLine": 0, "type": type("PositionSystemData_type", (object,), {
        "Line": 56, "CharPositionInLine": 23, "kind": "SequenceType", "Children": {
            "xAct": type("xAct", (object,), {
                "Optional": "False", "Line": 57, "CharPositionInLine": 4, "type": type("xAct_type", (object,), {
                    "Line": 57, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "yAct": type("yAct", (object,), {
                "Optional": "False", "Line": 58, "CharPositionInLine": 4, "type": type("yAct_type", (object,), {
                    "Line": 58, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["DroneSensorData"] = type("DroneSensorData", (object,), {
    "Line": 61, "CharPositionInLine": 0, "type": type("DroneSensorData_type", (object,), {
        "Line": 61, "CharPositionInLine": 20, "kind": "SequenceType", "Children": {
            "yawAct": type("yawAct", (object,), {
                "Optional": "False", "Line": 62, "CharPositionInLine": 4, "type": type("yawAct_type", (object,), {
                    "Line": 62, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "pitchAct": type("pitchAct", (object,), {
                "Optional": "False", "Line": 63, "CharPositionInLine": 4, "type": type("pitchAct_type", (object,), {
                    "Line": 63, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "rollAct": type("rollAct", (object,), {
                "Optional": "False", "Line": 64, "CharPositionInLine": 4, "type": type("rollAct_type", (object,), {
                    "Line": 64, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "baropAct": type("baropAct", (object,), {
                "Optional": "False", "Line": 65, "CharPositionInLine": 4, "type": type("baropAct_type", (object,), {
                    "Line": 65, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "accxAct": type("accxAct", (object,), {
                "Optional": "False", "Line": 66, "CharPositionInLine": 4, "type": type("accxAct_type", (object,), {
                    "Line": 66, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "accyAct": type("accyAct", (object,), {
                "Optional": "False", "Line": 67, "CharPositionInLine": 4, "type": type("accyAct_type", (object,), {
                    "Line": 67, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "acczAct": type("acczAct", (object,), {
                "Optional": "False", "Line": 68, "CharPositionInLine": 4, "type": type("acczAct_type", (object,), {
                    "Line": 68, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["DroneControllerInput"] = type("DroneControllerInput", (object,), {
    "Line": 71, "CharPositionInLine": 0, "type": type("DroneControllerInput_type", (object,), {
        "Line": 71, "CharPositionInLine": 25, "kind": "SequenceType", "Children": {
            "yawrateRef": type("yawrateRef", (object,), {
                "Optional": "False", "Line": 72, "CharPositionInLine": 4, "type": type("yawrateRef_type", (object,), {
                    "Line": 72, "CharPositionInLine": 15, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "pitchRef": type("pitchRef", (object,), {
                "Optional": "False", "Line": 73, "CharPositionInLine": 4, "type": type("pitchRef_type", (object,), {
                    "Line": 73, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "rollRef": type("rollRef", (object,), {
                "Optional": "False", "Line": 74, "CharPositionInLine": 4, "type": type("rollRef_type", (object,), {
                    "Line": 74, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "thrustRef": type("thrustRef", (object,), {
                "Optional": "False", "Line": 75, "CharPositionInLine": 4, "type": type("thrustRef_type", (object,), {
                    "Line": 75, "CharPositionInLine": 14, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["MyChoice"] = type("MyChoice", (object,), {
    "Line": 78, "CharPositionInLine": 0, "type": type("MyChoice_type", (object,), {
        "Line": 78, "CharPositionInLine": 16, "kind": "ChoiceType", "Children": {
            "a": type("a_PRESENT", (object,), {
                "Line": 79, "CharPositionInLine": 4, "EnumID": "a_PRESENT", "type": type("a_PRESENT_type", (object,), {
                    "Line": 79, "CharPositionInLine": 6, "kind": "BooleanType"
                })
            }),
            "b": type("b_PRESENT", (object,), {
                "Line": 80, "CharPositionInLine": 4, "EnumID": "b_PRESENT", "type": type("b_PRESENT_type", (object,), {
                    "Line": 80, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MySeq"
                })
            })
        }
    })
})

types["Position"] = type("Position", (object,), {
    "Line": 83, "CharPositionInLine": 0, "type": type("Position_type", (object,), {
        "Line": 83, "CharPositionInLine": 13, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 84, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 84, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 85, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 85, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 86, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 86, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["Orientation"] = type("Orientation", (object,), {
    "Line": 89, "CharPositionInLine": 0, "type": type("Orientation_type", (object,), {
        "Line": 89, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "roll": type("roll", (object,), {
                "Optional": "False", "Line": 90, "CharPositionInLine": 4, "type": type("roll_type", (object,), {
                    "Line": 90, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "pitch": type("pitch", (object,), {
                "Optional": "False", "Line": 91, "CharPositionInLine": 4, "type": type("pitch_type", (object,), {
                    "Line": 91, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 92, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 92, "CharPositionInLine": 8, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["Trajectory"] = type("Trajectory", (object,), {
    "Line": 95, "CharPositionInLine": 0, "type": type("Trajectory_type", (object,), {
        "Line": 95, "CharPositionInLine": 15, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 96, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 96, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 97, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 97, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 98, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 98, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 99, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 99, "CharPositionInLine": 8, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["Velocity"] = type("Velocity", (object,), {
    "Line": 102, "CharPositionInLine": 0, "type": type("Velocity_type", (object,), {
        "Line": 102, "CharPositionInLine": 13, "kind": "SequenceType", "Children": {
            "vX": type("vX", (object,), {
                "Optional": "False", "Line": 103, "CharPositionInLine": 4, "type": type("vX_type", (object,), {
                    "Line": 103, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vY": type("vY", (object,), {
                "Optional": "False", "Line": 104, "CharPositionInLine": 4, "type": type("vY_type", (object,), {
                    "Line": 104, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vZ": type("vZ", (object,), {
                "Optional": "False", "Line": 105, "CharPositionInLine": 4, "type": type("vZ_type", (object,), {
                    "Line": 105, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["Agent"] = type("Agent", (object,), {
    "Line": 108, "CharPositionInLine": 0, "type": type("Agent_type", (object,), {
        "Line": 108, "CharPositionInLine": 10, "kind": "SequenceType", "Children": {
            "agentID": type("agentID", (object,), {
                "Optional": "False", "Line": 109, "CharPositionInLine": 4, "type": type("agentID_type", (object,), {
                    "Line": 109, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "agentColor": type("agentColor", (object,), {
                "Optional": "False", "Line": 110, "CharPositionInLine": 4, "type": type("agentColor_type", (object,), {
                    "Line": 110, "CharPositionInLine": 15, "kind": "ReferenceType", "ReferencedTypeName": "Color"
                })
            }),
            "currentPosition": type("currentPosition", (object,), {
                "Optional": "False", "Line": 111, "CharPositionInLine": 4, "type": type("currentPosition_type", (object,), {
                    "Line": 111, "CharPositionInLine": 20, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            }),
            "currentOrientation": type("currentOrientation", (object,), {
                "Optional": "False", "Line": 112, "CharPositionInLine": 4, "type": type("currentOrientation_type", (object,), {
                    "Line": 112, "CharPositionInLine": 23, "kind": "ReferenceType", "ReferencedTypeName": "Orientation"
                })
            }),
            "currentVelocity": type("currentVelocity", (object,), {
                "Optional": "False", "Line": 113, "CharPositionInLine": 4, "type": type("currentVelocity_type", (object,), {
                    "Line": 113, "CharPositionInLine": 20, "kind": "ReferenceType", "ReferencedTypeName": "Velocity"
                })
            })
        }
    })
})

types["Area"] = type("Area", (object,), {
    "Line": 116, "CharPositionInLine": 0, "type": type("Area_type", (object,), {
        "Line": 116, "CharPositionInLine": 8, "kind": "SequenceType", "Children": {
            "height": type("height", (object,), {
                "Optional": "False", "Line": 117, "CharPositionInLine": 4, "type": type("height_type", (object,), {
                    "Line": 117, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "width": type("width", (object,), {
                "Optional": "False", "Line": 118, "CharPositionInLine": 4, "type": type("width_type", (object,), {
                    "Line": 118, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "depth": type("depth", (object,), {
                "Optional": "False", "Line": 119, "CharPositionInLine": 4, "type": type("depth_type", (object,), {
                    "Line": 119, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "refLocation": type("refLocation", (object,), {
                "Optional": "False", "Line": 120, "CharPositionInLine": 4, "type": type("refLocation_type", (object,), {
                    "Line": 120, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            })
        }
    })
})

types["HoverAction"] = type("HoverAction", (object,), {
    "Line": 123, "CharPositionInLine": 0, "type": type("HoverAction_type", (object,), {
        "Line": 123, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "yaw-rate": type("yaw-rate", (object,), {
                "Optional": "False", "Line": 124, "CharPositionInLine": 4, "type": type("yaw-rate_type", (object,), {
                    "Line": 124, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "duration": type("duration", (object,), {
                "Optional": "False", "Line": 125, "CharPositionInLine": 4, "type": type("duration_type", (object,), {
                    "Line": 125, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["ReferencePath"] = type("ReferencePath", (object,), {
    "Line": 128, "CharPositionInLine": 0, "type": type("ReferencePath_type", (object,), {
        "Line": 128, "CharPositionInLine": 18, "kind": "SequenceType", "Children": {
            "locations": type("locations", (object,), {
                "Optional": "False", "Line": 129, "CharPositionInLine": 4, "type": type("locations_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "ReferencePath-locations", "Min": "3", "Max": "3"
                })
            }),
            "actions": type("actions", (object,), {
                "Optional": "False", "Line": 130, "CharPositionInLine": 4, "type": type("actions_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "ReferencePath-actions", "Min": "3", "Max": "3"
                })
            })
        }
    })
})

types["ReferenceFormation"] = type("ReferenceFormation", (object,), {
    "Line": 133, "CharPositionInLine": 0, "type": type("ReferenceFormation_type", (object,), {
        "Line": 133, "CharPositionInLine": 23, "kind": "SequenceType", "Children": {
            "nodes": type("nodes", (object,), {
                "Optional": "False", "Line": 135, "CharPositionInLine": 4, "type": type("nodes_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "ReferenceFormation-nodes", "Min": "5", "Max": "5"
                })
            }),
            "anchor": type("anchor", (object,), {
                "Optional": "False", "Line": 136, "CharPositionInLine": 4, "type": type("anchor_type", (object,), {
                    "Line": 136, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "formationAnchorPosition": type("formationAnchorPosition", (object,), {
                "Optional": "False", "Line": 137, "CharPositionInLine": 4, "type": type("formationAnchorPosition_type", (object,), {
                    "Line": 137, "CharPositionInLine": 28, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            })
        }
    })
})

types["WorldData"] = type("WorldData", (object,), {
    "Line": 140, "CharPositionInLine": 0, "type": type("WorldData_type", (object,), {
        "Line": 140, "CharPositionInLine": 14, "kind": "SequenceType", "Children": {
            "rawASD": type("rawASD", (object,), {
                "Optional": "False", "Line": 141, "CharPositionInLine": 4, "type": type("rawASD_type", (object,), {
                    "Line": 141, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "DroneSensorData"
                })
            })
        }
    })
})

types["MySeqOf"] = type("MySeqOf", (object,), {
    "Line": 150, "CharPositionInLine": 0, "type": type("MySeqOf_type", (object,), {
        "Line": 150, "CharPositionInLine": 16, "kind": "SequenceOfType", "Min": "2", "Max": "2", "type": type("SeqOf_type", (object,), {
            "Line": 150, "CharPositionInLine": 39, "kind": "ReferenceType", "ReferencedTypeName": "MyEnum"
        })
    })
})

types["MyOctStr"] = type("MyOctStr", (object,), {
    "Line": 152, "CharPositionInLine": 0, "type": type("MyOctStr_type", (object,), {
        "Line": 152, "CharPositionInLine": 16, "kind": "OctetStringType", "Min": "3", "Max": "3"
    })
})

types["ReferenceFormation-nodes"] = type("ReferenceFormation-nodes", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("ReferenceFormation-nodes_type", (object,), {
        "Line": 135, "CharPositionInLine": 10, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 135, "CharPositionInLine": 33, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
        })
    })
})

types["ReferencePath-actions"] = type("ReferencePath-actions", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("ReferencePath-actions_type", (object,), {
        "Line": 130, "CharPositionInLine": 12, "kind": "SequenceOfType", "Min": "3", "Max": "3", "type": type("SeqOf_type", (object,), {
            "Line": 130, "CharPositionInLine": 35, "kind": "ReferenceType", "ReferencedTypeName": "HoverAction"
        })
    })
})

types["ReferencePath-locations"] = type("ReferencePath-locations", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("ReferencePath-locations_type", (object,), {
        "Line": 129, "CharPositionInLine": 14, "kind": "SequenceOfType", "Min": "3", "Max": "3", "type": type("SeqOf_type", (object,), {
            "Line": 129, "CharPositionInLine": 37, "kind": "ReferenceType", "ReferencedTypeName": "Position"
        })
    })
})

types["MySeq-validity"] = type("MySeq-validity", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MySeq-validity_type", (object,), {
        "Line": 42, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "valid": type("valid", (object,), {
                "IntValue": 0, "Line": 42, "CharPositionInLine": 29, "EnumID": "valid"
            }),
            "invalid": type("invalid", (object,), {
                "IntValue": 1, "Line": 42, "CharPositionInLine": 36, "EnumID": "invalid"
            })
        }
    })
})


variables["myVar"] = type("myVar", (object,), {
    "Line": 155,
    "CharPositionInLine": 0,
    "varName": "myVar",
    "type": type("myVar_type", (object,), {
        "Line": 155, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MySeqOf", "Min": "2", "Max": "2"
    }),
    "value": {"hello", "world"}
})
