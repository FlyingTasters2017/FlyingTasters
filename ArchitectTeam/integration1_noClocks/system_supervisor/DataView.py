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
exportedTypes["TASTE-Dataview"] = ["MyInteger", "MyReal", "MyBool", "MyEnum", "MySeq", "Acceleration", "Agent", "Area", "Color", "ControlError", "DroneControllerInput", "DroneSensorData", "FeedbackToGUI", "HoverAction", "MultiAgents", "MultiControlError", "MultiDroneControllerInput", "MultiDroneSensorData", "MyChoice", "Orientation", "Position", "PositionSystemData", "ReferenceFormation", "ReferencePath", "PixyData", "SafetyAction", "SafetyEvent", "SafetyInterupt", "SystemState", "Trajectory", "UserCommand", "Velocity", "WorldData", "MySeqOf", "MyOctStr", "WorldData-agents", "Trajectory-yaw", "Trajectory-z", "Trajectory-y", "Trajectory-x", "SafetyInterupt-sAction", "PixyData-yPix", "PixyData-xPix", "ReferencePath-actions", "ReferencePath-locations", "ReferenceFormation-nodes", "PositionSystemData-yAct", "PositionSystemData-xAct", "MultiDroneSensorData-data", "MultiDroneControllerInput-controllerInput", "MultiControlError-bodyFrameError", "MultiAgents-agents", "MySeq-validity", "T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-Dataview"] = ["myVar"]
importedModules["TASTE-Dataview"] = [{"TASTE-BasicTypes":{"ImportedTypes": ["T-Int32","T-UInt32","T-Int8","T-UInt8","T-Boolean"], "ImportedVariables": []}}]

types["MyInteger"] = type("MyInteger", (object,), {
    "Line": 14, "CharPositionInLine": 0, "type": type("MyInteger_type", (object,), {
        "Line": 14, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt8", "Min": "0", "Max": "255", "ReferencedModName": "TASTE-BasicTypes"
    })
})

types["MyReal"] = type("MyReal", (object,), {
    "Line": 16, "CharPositionInLine": 0, "type": type("MyReal_type", (object,), {
        "Line": 16, "CharPositionInLine": 16, "kind": "RealType", "Min": "-1.00000000000000000000E+003", "Max": "1.00000000000000000000E+005"
    })
})

types["MyBool"] = type("MyBool", (object,), {
    "Line": 18, "CharPositionInLine": 0, "type": type("MyBool_type", (object,), {
        "Line": 18, "CharPositionInLine": 16, "kind": "BooleanType"
    })
})

types["MyEnum"] = type("MyEnum", (object,), {
    "Line": 20, "CharPositionInLine": 0, "type": type("MyEnum_type", (object,), {
        "Line": 20, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "hello": type("hello", (object,), {
                "IntValue": 0, "Line": 20, "CharPositionInLine": 29, "EnumID": "hello"
            }),
            "world": type("world", (object,), {
                "IntValue": 1, "Line": 20, "CharPositionInLine": 36, "EnumID": "world"
            }),
            "howareyou": type("howareyou", (object,), {
                "IntValue": 2, "Line": 20, "CharPositionInLine": 43, "EnumID": "howareyou"
            })
        }
    })
})

types["MySeq"] = type("MySeq", (object,), {
    "Line": 22, "CharPositionInLine": 0, "type": type("MySeq_type", (object,), {
        "Line": 22, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "input-data": type("input-data", (object,), {
                "Optional": "False", "Line": 23, "CharPositionInLine": 4, "type": type("input-data_type", (object,), {
                    "Line": 23, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "output-data": type("output-data", (object,), {
                "Optional": "False", "Line": 24, "CharPositionInLine": 4, "type": type("output-data_type", (object,), {
                    "Line": 24, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "validity": type("validity", (object,), {
                "Optional": "False", "Line": 25, "CharPositionInLine": 4, "type": type("validity_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MySeq-validity"
                })
            })
        }
    })
})

types["Acceleration"] = type("Acceleration", (object,), {
    "Line": 29, "CharPositionInLine": 0, "type": type("Acceleration_type", (object,), {
        "Line": 29, "CharPositionInLine": 17, "kind": "SequenceType", "Children": {
            "aX": type("aX", (object,), {
                "Optional": "False", "Line": 30, "CharPositionInLine": 4, "type": type("aX_type", (object,), {
                    "Line": 30, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "aY": type("aY", (object,), {
                "Optional": "False", "Line": 31, "CharPositionInLine": 4, "type": type("aY_type", (object,), {
                    "Line": 31, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "aZ": type("aZ", (object,), {
                "Optional": "False", "Line": 32, "CharPositionInLine": 4, "type": type("aZ_type", (object,), {
                    "Line": 32, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "aRoll": type("aRoll", (object,), {
                "Optional": "False", "Line": 33, "CharPositionInLine": 4, "type": type("aRoll_type", (object,), {
                    "Line": 33, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "aPitch": type("aPitch", (object,), {
                "Optional": "False", "Line": 34, "CharPositionInLine": 4, "type": type("aPitch_type", (object,), {
                    "Line": 34, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "aYaw": type("aYaw", (object,), {
                "Optional": "False", "Line": 35, "CharPositionInLine": 4, "type": type("aYaw_type", (object,), {
                    "Line": 35, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["Agent"] = type("Agent", (object,), {
    "Line": 38, "CharPositionInLine": 0, "type": type("Agent_type", (object,), {
        "Line": 38, "CharPositionInLine": 10, "kind": "SequenceType", "Children": {
            "agentID": type("agentID", (object,), {
                "Optional": "False", "Line": 39, "CharPositionInLine": 4, "type": type("agentID_type", (object,), {
                    "Line": 39, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "agentColor": type("agentColor", (object,), {
                "Optional": "False", "Line": 40, "CharPositionInLine": 4, "type": type("agentColor_type", (object,), {
                    "Line": 40, "CharPositionInLine": 15, "kind": "ReferenceType", "ReferencedTypeName": "Color"
                })
            }),
            "currentPosition": type("currentPosition", (object,), {
                "Optional": "False", "Line": 41, "CharPositionInLine": 4, "type": type("currentPosition_type", (object,), {
                    "Line": 41, "CharPositionInLine": 20, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            }),
            "currentOrientation": type("currentOrientation", (object,), {
                "Optional": "False", "Line": 42, "CharPositionInLine": 4, "type": type("currentOrientation_type", (object,), {
                    "Line": 42, "CharPositionInLine": 23, "kind": "ReferenceType", "ReferencedTypeName": "Orientation"
                })
            }),
            "currentVelocity": type("currentVelocity", (object,), {
                "Optional": "False", "Line": 43, "CharPositionInLine": 4, "type": type("currentVelocity_type", (object,), {
                    "Line": 43, "CharPositionInLine": 20, "kind": "ReferenceType", "ReferencedTypeName": "Velocity"
                })
            }),
            "currentAcceleration": type("currentAcceleration", (object,), {
                "Optional": "False", "Line": 44, "CharPositionInLine": 4, "type": type("currentAcceleration_type", (object,), {
                    "Line": 44, "CharPositionInLine": 24, "kind": "ReferenceType", "ReferencedTypeName": "Acceleration"
                })
            })
        }
    })
})

types["Area"] = type("Area", (object,), {
    "Line": 47, "CharPositionInLine": 0, "type": type("Area_type", (object,), {
        "Line": 47, "CharPositionInLine": 9, "kind": "SequenceType", "Children": {
            "height": type("height", (object,), {
                "Optional": "False", "Line": 48, "CharPositionInLine": 4, "type": type("height_type", (object,), {
                    "Line": 48, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "width": type("width", (object,), {
                "Optional": "False", "Line": 49, "CharPositionInLine": 4, "type": type("width_type", (object,), {
                    "Line": 49, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "depth": type("depth", (object,), {
                "Optional": "False", "Line": 50, "CharPositionInLine": 4, "type": type("depth_type", (object,), {
                    "Line": 50, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "refLocation": type("refLocation", (object,), {
                "Optional": "False", "Line": 51, "CharPositionInLine": 4, "type": type("refLocation_type", (object,), {
                    "Line": 51, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            })
        }
    })
})

types["Color"] = type("Color", (object,), {
    "Line": 54, "CharPositionInLine": 0, "type": type("Color_type", (object,), {
        "Line": 54, "CharPositionInLine": 10, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "black": type("black", (object,), {
                "IntValue": 0, "Line": 54, "CharPositionInLine": 22, "EnumID": "black"
            }),
            "pink": type("pink", (object,), {
                "IntValue": 1, "Line": 54, "CharPositionInLine": 29, "EnumID": "pink"
            }),
            "red": type("red", (object,), {
                "IntValue": 2, "Line": 54, "CharPositionInLine": 35, "EnumID": "red"
            })
        }
    })
})

types["ControlError"] = type("ControlError", (object,), {
    "Line": 56, "CharPositionInLine": 0, "type": type("ControlError_type", (object,), {
        "Line": 56, "CharPositionInLine": 17, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 57, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 57, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 58, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 58, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 59, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 59, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 60, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 60, "CharPositionInLine": 8, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["DroneControllerInput"] = type("DroneControllerInput", (object,), {
    "Line": 63, "CharPositionInLine": 0, "type": type("DroneControllerInput_type", (object,), {
        "Line": 63, "CharPositionInLine": 25, "kind": "SequenceType", "Children": {
            "yawrateRef": type("yawrateRef", (object,), {
                "Optional": "False", "Line": 64, "CharPositionInLine": 4, "type": type("yawrateRef_type", (object,), {
                    "Line": 64, "CharPositionInLine": 15, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "pitchRef": type("pitchRef", (object,), {
                "Optional": "False", "Line": 65, "CharPositionInLine": 4, "type": type("pitchRef_type", (object,), {
                    "Line": 65, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "rollRef": type("rollRef", (object,), {
                "Optional": "False", "Line": 66, "CharPositionInLine": 4, "type": type("rollRef_type", (object,), {
                    "Line": 66, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "heightRef": type("heightRef", (object,), {
                "Optional": "False", "Line": 67, "CharPositionInLine": 4, "type": type("heightRef_type", (object,), {
                    "Line": 67, "CharPositionInLine": 14, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "thrustRef": type("thrustRef", (object,), {
                "Optional": "False", "Line": 68, "CharPositionInLine": 4, "type": type("thrustRef_type", (object,), {
                    "Line": 68, "CharPositionInLine": 14, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["DroneSensorData"] = type("DroneSensorData", (object,), {
    "Line": 71, "CharPositionInLine": 0, "type": type("DroneSensorData_type", (object,), {
        "Line": 71, "CharPositionInLine": 20, "kind": "SequenceType", "Children": {
            "yawAct": type("yawAct", (object,), {
                "Optional": "False", "Line": 72, "CharPositionInLine": 4, "type": type("yawAct_type", (object,), {
                    "Line": 72, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "pitchAct": type("pitchAct", (object,), {
                "Optional": "False", "Line": 73, "CharPositionInLine": 4, "type": type("pitchAct_type", (object,), {
                    "Line": 73, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "rollAct": type("rollAct", (object,), {
                "Optional": "False", "Line": 74, "CharPositionInLine": 4, "type": type("rollAct_type", (object,), {
                    "Line": 74, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "baropAct": type("baropAct", (object,), {
                "Optional": "False", "Line": 75, "CharPositionInLine": 4, "type": type("baropAct_type", (object,), {
                    "Line": 75, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "accxAct": type("accxAct", (object,), {
                "Optional": "False", "Line": 76, "CharPositionInLine": 4, "type": type("accxAct_type", (object,), {
                    "Line": 76, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "accyAct": type("accyAct", (object,), {
                "Optional": "False", "Line": 77, "CharPositionInLine": 4, "type": type("accyAct_type", (object,), {
                    "Line": 77, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "acczAct": type("acczAct", (object,), {
                "Optional": "False", "Line": 78, "CharPositionInLine": 4, "type": type("acczAct_type", (object,), {
                    "Line": 78, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["FeedbackToGUI"] = type("FeedbackToGUI", (object,), {
    "Line": 81, "CharPositionInLine": 0, "type": type("FeedbackToGUI_type", (object,), {
        "Line": 81, "CharPositionInLine": 18, "kind": "SequenceType", "Children": {
            "flight": type("flight", (object,), {
                "Optional": "False", "Line": 82, "CharPositionInLine": 4, "type": type("flight_type", (object,), {
                    "Line": 82, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "WorldData"
                })
            }),
            "notification": type("notification", (object,), {
                "Optional": "False", "Line": 83, "CharPositionInLine": 4, "type": type("notification_type", (object,), {
                    "Line": 83, "CharPositionInLine": 17, "kind": "ReferenceType", "ReferencedTypeName": "SystemState"
                })
            })
        }
    })
})

types["HoverAction"] = type("HoverAction", (object,), {
    "Line": 86, "CharPositionInLine": 0, "type": type("HoverAction_type", (object,), {
        "Line": 86, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "yaw-rate": type("yaw-rate", (object,), {
                "Optional": "False", "Line": 87, "CharPositionInLine": 4, "type": type("yaw-rate_type", (object,), {
                    "Line": 87, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "duration": type("duration", (object,), {
                "Optional": "False", "Line": 88, "CharPositionInLine": 4, "type": type("duration_type", (object,), {
                    "Line": 88, "CharPositionInLine": 13, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["MultiAgents"] = type("MultiAgents", (object,), {
    "Line": 91, "CharPositionInLine": 0, "type": type("MultiAgents_type", (object,), {
        "Line": 91, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "agents": type("agents", (object,), {
                "Optional": "False", "Line": 92, "CharPositionInLine": 4, "type": type("agents_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MultiAgents-agents", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["MultiControlError"] = type("MultiControlError", (object,), {
    "Line": 95, "CharPositionInLine": 0, "type": type("MultiControlError_type", (object,), {
        "Line": 95, "CharPositionInLine": 22, "kind": "SequenceType", "Children": {
            "bodyFrameError": type("bodyFrameError", (object,), {
                "Optional": "False", "Line": 96, "CharPositionInLine": 4, "type": type("bodyFrameError_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MultiControlError-bodyFrameError", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["MultiDroneControllerInput"] = type("MultiDroneControllerInput", (object,), {
    "Line": 99, "CharPositionInLine": 0, "type": type("MultiDroneControllerInput_type", (object,), {
        "Line": 99, "CharPositionInLine": 30, "kind": "SequenceType", "Children": {
            "controllerInput": type("controllerInput", (object,), {
                "Optional": "False", "Line": 100, "CharPositionInLine": 4, "type": type("controllerInput_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MultiDroneControllerInput-controllerInput", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["MultiDroneSensorData"] = type("MultiDroneSensorData", (object,), {
    "Line": 103, "CharPositionInLine": 0, "type": type("MultiDroneSensorData_type", (object,), {
        "Line": 103, "CharPositionInLine": 25, "kind": "SequenceType", "Children": {
            "data": type("data", (object,), {
                "Optional": "False", "Line": 104, "CharPositionInLine": 4, "type": type("data_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MultiDroneSensorData-data", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["MyChoice"] = type("MyChoice", (object,), {
    "Line": 107, "CharPositionInLine": 0, "type": type("MyChoice_type", (object,), {
        "Line": 107, "CharPositionInLine": 16, "kind": "ChoiceType", "Children": {
            "a": type("a_PRESENT", (object,), {
                "Line": 108, "CharPositionInLine": 4, "EnumID": "a_PRESENT", "type": type("a_PRESENT_type", (object,), {
                    "Line": 108, "CharPositionInLine": 6, "kind": "BooleanType"
                })
            }),
            "b": type("b_PRESENT", (object,), {
                "Line": 109, "CharPositionInLine": 4, "EnumID": "b_PRESENT", "type": type("b_PRESENT_type", (object,), {
                    "Line": 109, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MySeq"
                })
            })
        }
    })
})

types["Orientation"] = type("Orientation", (object,), {
    "Line": 112, "CharPositionInLine": 0, "type": type("Orientation_type", (object,), {
        "Line": 112, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "roll": type("roll", (object,), {
                "Optional": "False", "Line": 113, "CharPositionInLine": 4, "type": type("roll_type", (object,), {
                    "Line": 113, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "pitch": type("pitch", (object,), {
                "Optional": "False", "Line": 114, "CharPositionInLine": 4, "type": type("pitch_type", (object,), {
                    "Line": 114, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 115, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 115, "CharPositionInLine": 8, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["Position"] = type("Position", (object,), {
    "Line": 118, "CharPositionInLine": 0, "type": type("Position_type", (object,), {
        "Line": 118, "CharPositionInLine": 13, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 119, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 119, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 120, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 120, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 121, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 121, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["PositionSystemData"] = type("PositionSystemData", (object,), {
    "Line": 124, "CharPositionInLine": 0, "type": type("PositionSystemData_type", (object,), {
        "Line": 124, "CharPositionInLine": 23, "kind": "SequenceType", "Children": {
            "xAct": type("xAct", (object,), {
                "Optional": "False", "Line": 125, "CharPositionInLine": 4, "type": type("xAct_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "PositionSystemData-xAct", "Min": "5", "Max": "5"
                })
            }),
            "yAct": type("yAct", (object,), {
                "Optional": "False", "Line": 126, "CharPositionInLine": 4, "type": type("yAct_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "PositionSystemData-yAct", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["ReferenceFormation"] = type("ReferenceFormation", (object,), {
    "Line": 129, "CharPositionInLine": 0, "type": type("ReferenceFormation_type", (object,), {
        "Line": 129, "CharPositionInLine": 23, "kind": "SequenceType", "Children": {
            "nodes": type("nodes", (object,), {
                "Optional": "False", "Line": 131, "CharPositionInLine": 4, "type": type("nodes_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "ReferenceFormation-nodes", "Min": "5", "Max": "5"
                })
            }),
            "anchor": type("anchor", (object,), {
                "Optional": "False", "Line": 132, "CharPositionInLine": 4, "type": type("anchor_type", (object,), {
                    "Line": 132, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
                })
            }),
            "formationAnchorPosition": type("formationAnchorPosition", (object,), {
                "Optional": "False", "Line": 133, "CharPositionInLine": 4, "type": type("formationAnchorPosition_type", (object,), {
                    "Line": 133, "CharPositionInLine": 28, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            })
        }
    })
})

types["ReferencePath"] = type("ReferencePath", (object,), {
    "Line": 136, "CharPositionInLine": 0, "type": type("ReferencePath_type", (object,), {
        "Line": 136, "CharPositionInLine": 18, "kind": "SequenceType", "Children": {
            "locations": type("locations", (object,), {
                "Optional": "False", "Line": 137, "CharPositionInLine": 4, "type": type("locations_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "ReferencePath-locations", "Min": "3", "Max": "3"
                })
            }),
            "actions": type("actions", (object,), {
                "Optional": "False", "Line": 138, "CharPositionInLine": 4, "type": type("actions_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "ReferencePath-actions", "Min": "3", "Max": "3"
                })
            })
        }
    })
})

types["PixyData"] = type("PixyData", (object,), {
    "Line": 141, "CharPositionInLine": 0, "type": type("PixyData_type", (object,), {
        "Line": 141, "CharPositionInLine": 13, "kind": "SequenceType", "Children": {
            "xPix": type("xPix", (object,), {
                "Optional": "False", "Line": 142, "CharPositionInLine": 4, "type": type("xPix_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "PixyData-xPix", "Min": "5", "Max": "5"
                })
            }),
            "yPix": type("yPix", (object,), {
                "Optional": "False", "Line": 143, "CharPositionInLine": 4, "type": type("yPix_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "PixyData-yPix", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["SafetyAction"] = type("SafetyAction", (object,), {
    "Line": 146, "CharPositionInLine": 0, "type": type("SafetyAction_type", (object,), {
        "Line": 146, "CharPositionInLine": 17, "kind": "SequenceType", "Children": {
            "sPosition": type("sPosition", (object,), {
                "Optional": "False", "Line": 147, "CharPositionInLine": 4, "type": type("sPosition_type", (object,), {
                    "Line": 147, "CharPositionInLine": 14, "kind": "ReferenceType", "ReferencedTypeName": "Position"
                })
            })
        }
    })
})

types["SafetyEvent"] = type("SafetyEvent", (object,), {
    "Line": 150, "CharPositionInLine": 0, "type": type("SafetyEvent_type", (object,), {
        "Line": 150, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "safe": type("safe", (object,), {
                "IntValue": 0, "Line": 150, "CharPositionInLine": 28, "EnumID": "safe"
            }),
            "collision": type("collision", (object,), {
                "IntValue": 1, "Line": 150, "CharPositionInLine": 33, "EnumID": "collision"
            }),
            "wallColl": type("wallColl", (object,), {
                "IntValue": 2, "Line": 150, "CharPositionInLine": 43, "EnumID": "wallColl"
            }),
            "ceilColl": type("ceilColl", (object,), {
                "IntValue": 3, "Line": 150, "CharPositionInLine": 52, "EnumID": "ceilColl"
            })
        }
    })
})

types["SafetyInterupt"] = type("SafetyInterupt", (object,), {
    "Line": 152, "CharPositionInLine": 0, "type": type("SafetyInterupt_type", (object,), {
        "Line": 152, "CharPositionInLine": 19, "kind": "SequenceType", "Children": {
            "sEvent": type("sEvent", (object,), {
                "Optional": "False", "Line": 153, "CharPositionInLine": 4, "type": type("sEvent_type", (object,), {
                    "Line": 153, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "SafetyEvent"
                })
            }),
            "sAction": type("sAction", (object,), {
                "Optional": "False", "Line": 154, "CharPositionInLine": 4, "type": type("sAction_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "SafetyInterupt-sAction", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["SystemState"] = type("SystemState", (object,), {
    "Line": 157, "CharPositionInLine": 0, "type": type("SystemState_type", (object,), {
        "Line": 157, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "idle": type("idle", (object,), {
                "IntValue": 0, "Line": 157, "CharPositionInLine": 28, "EnumID": "idle"
            }),
            "initializing": type("initializing", (object,), {
                "IntValue": 1, "Line": 157, "CharPositionInLine": 34, "EnumID": "initializing"
            }),
            "runningOk": type("runningOk", (object,), {
                "IntValue": 2, "Line": 157, "CharPositionInLine": 48, "EnumID": "runningOk"
            }),
            "emergencyLand": type("emergencyLand", (object,), {
                "IntValue": 3, "Line": 157, "CharPositionInLine": 59, "EnumID": "emergencyLand"
            }),
            "safeReturn": type("safeReturn", (object,), {
                "IntValue": 4, "Line": 157, "CharPositionInLine": 74, "EnumID": "safeReturn"
            })
        }
    })
})

types["Trajectory"] = type("Trajectory", (object,), {
    "Line": 159, "CharPositionInLine": 0, "type": type("Trajectory_type", (object,), {
        "Line": 159, "CharPositionInLine": 15, "kind": "SequenceType", "Children": {
            "x": type("x", (object,), {
                "Optional": "False", "Line": 160, "CharPositionInLine": 4, "type": type("x_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "Trajectory-x", "Min": "5", "Max": "5"
                })
            }),
            "y": type("y", (object,), {
                "Optional": "False", "Line": 161, "CharPositionInLine": 4, "type": type("y_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "Trajectory-y", "Min": "5", "Max": "5"
                })
            }),
            "z": type("z", (object,), {
                "Optional": "False", "Line": 162, "CharPositionInLine": 4, "type": type("z_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "Trajectory-z", "Min": "5", "Max": "5"
                })
            }),
            "yaw": type("yaw", (object,), {
                "Optional": "False", "Line": 163, "CharPositionInLine": 4, "type": type("yaw_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "Trajectory-yaw", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["UserCommand"] = type("UserCommand", (object,), {
    "Line": 166, "CharPositionInLine": 0, "type": type("UserCommand_type", (object,), {
        "Line": 166, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "sysStart": type("sysStart", (object,), {
                "IntValue": 0, "Line": 166, "CharPositionInLine": 28, "EnumID": "sysStart"
            }),
            "sysPause": type("sysPause", (object,), {
                "IntValue": 1, "Line": 166, "CharPositionInLine": 38, "EnumID": "sysPause"
            }),
            "sysStop": type("sysStop", (object,), {
                "IntValue": 2, "Line": 166, "CharPositionInLine": 48, "EnumID": "sysStop"
            })
        }
    })
})

types["Velocity"] = type("Velocity", (object,), {
    "Line": 168, "CharPositionInLine": 0, "type": type("Velocity_type", (object,), {
        "Line": 168, "CharPositionInLine": 13, "kind": "SequenceType", "Children": {
            "vX": type("vX", (object,), {
                "Optional": "False", "Line": 169, "CharPositionInLine": 4, "type": type("vX_type", (object,), {
                    "Line": 169, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vY": type("vY", (object,), {
                "Optional": "False", "Line": 170, "CharPositionInLine": 4, "type": type("vY_type", (object,), {
                    "Line": 170, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vZ": type("vZ", (object,), {
                "Optional": "False", "Line": 171, "CharPositionInLine": 4, "type": type("vZ_type", (object,), {
                    "Line": 171, "CharPositionInLine": 7, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vRoll": type("vRoll", (object,), {
                "Optional": "False", "Line": 172, "CharPositionInLine": 4, "type": type("vRoll_type", (object,), {
                    "Line": 172, "CharPositionInLine": 10, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vPitch": type("vPitch", (object,), {
                "Optional": "False", "Line": 173, "CharPositionInLine": 4, "type": type("vPitch_type", (object,), {
                    "Line": 173, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            }),
            "vYaw": type("vYaw", (object,), {
                "Optional": "False", "Line": 174, "CharPositionInLine": 4, "type": type("vYaw_type", (object,), {
                    "Line": 174, "CharPositionInLine": 9, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
                })
            })
        }
    })
})

types["WorldData"] = type("WorldData", (object,), {
    "Line": 177, "CharPositionInLine": 0, "type": type("WorldData_type", (object,), {
        "Line": 177, "CharPositionInLine": 14, "kind": "SequenceType", "Children": {
            "myArea": type("myArea", (object,), {
                "Optional": "False", "Line": 178, "CharPositionInLine": 4, "type": type("myArea_type", (object,), {
                    "Line": 178, "CharPositionInLine": 11, "kind": "ReferenceType", "ReferencedTypeName": "Area"
                })
            }),
            "refPath": type("refPath", (object,), {
                "Optional": "False", "Line": 179, "CharPositionInLine": 4, "type": type("refPath_type", (object,), {
                    "Line": 179, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "ReferencePath"
                })
            }),
            "refFormation": type("refFormation", (object,), {
                "Optional": "False", "Line": 180, "CharPositionInLine": 4, "type": type("refFormation_type", (object,), {
                    "Line": 180, "CharPositionInLine": 17, "kind": "ReferenceType", "ReferencedTypeName": "ReferenceFormation"
                })
            }),
            "agents": type("agents", (object,), {
                "Optional": "False", "Line": 181, "CharPositionInLine": 4, "type": type("agents_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "WorldData-agents", "Min": "5", "Max": "5"
                })
            })
        }
    })
})

types["MySeqOf"] = type("MySeqOf", (object,), {
    "Line": 188, "CharPositionInLine": 0, "type": type("MySeqOf_type", (object,), {
        "Line": 188, "CharPositionInLine": 16, "kind": "SequenceOfType", "Min": "2", "Max": "2", "type": type("SeqOf_type", (object,), {
            "Line": 188, "CharPositionInLine": 39, "kind": "ReferenceType", "ReferencedTypeName": "MyEnum"
        })
    })
})

types["MyOctStr"] = type("MyOctStr", (object,), {
    "Line": 190, "CharPositionInLine": 0, "type": type("MyOctStr_type", (object,), {
        "Line": 190, "CharPositionInLine": 16, "kind": "OctetStringType", "Min": "3", "Max": "3"
    })
})

types["WorldData-agents"] = type("WorldData-agents", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("WorldData-agents_type", (object,), {
        "Line": 181, "CharPositionInLine": 11, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 181, "CharPositionInLine": 34, "kind": "ReferenceType", "ReferencedTypeName": "Agent"
        })
    })
})

types["Trajectory-yaw"] = type("Trajectory-yaw", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("Trajectory-yaw_type", (object,), {
        "Line": 163, "CharPositionInLine": 8, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 163, "CharPositionInLine": 31, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
        })
    })
})

types["Trajectory-z"] = type("Trajectory-z", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("Trajectory-z_type", (object,), {
        "Line": 162, "CharPositionInLine": 6, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 162, "CharPositionInLine": 29, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
        })
    })
})

types["Trajectory-y"] = type("Trajectory-y", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("Trajectory-y_type", (object,), {
        "Line": 161, "CharPositionInLine": 6, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 161, "CharPositionInLine": 29, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
        })
    })
})

types["Trajectory-x"] = type("Trajectory-x", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("Trajectory-x_type", (object,), {
        "Line": 160, "CharPositionInLine": 6, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 160, "CharPositionInLine": 29, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
        })
    })
})

types["SafetyInterupt-sAction"] = type("SafetyInterupt-sAction", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("SafetyInterupt-sAction_type", (object,), {
        "Line": 154, "CharPositionInLine": 12, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 154, "CharPositionInLine": 35, "kind": "ReferenceType", "ReferencedTypeName": "SafetyAction"
        })
    })
})

types["PixyData-yPix"] = type("PixyData-yPix", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("PixyData-yPix_type", (object,), {
        "Line": 143, "CharPositionInLine": 9, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 143, "CharPositionInLine": 32, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt32", "Min": "0", "Max": "4294967295", "ReferencedModName": "TASTE-BasicTypes"
        })
    })
})

types["PixyData-xPix"] = type("PixyData-xPix", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("PixyData-xPix_type", (object,), {
        "Line": 142, "CharPositionInLine": 9, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 142, "CharPositionInLine": 32, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt32", "Min": "0", "Max": "4294967295", "ReferencedModName": "TASTE-BasicTypes"
        })
    })
})

types["ReferencePath-actions"] = type("ReferencePath-actions", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("ReferencePath-actions_type", (object,), {
        "Line": 138, "CharPositionInLine": 12, "kind": "SequenceOfType", "Min": "3", "Max": "3", "type": type("SeqOf_type", (object,), {
            "Line": 138, "CharPositionInLine": 35, "kind": "ReferenceType", "ReferencedTypeName": "HoverAction"
        })
    })
})

types["ReferencePath-locations"] = type("ReferencePath-locations", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("ReferencePath-locations_type", (object,), {
        "Line": 137, "CharPositionInLine": 14, "kind": "SequenceOfType", "Min": "3", "Max": "3", "type": type("SeqOf_type", (object,), {
            "Line": 137, "CharPositionInLine": 37, "kind": "ReferenceType", "ReferencedTypeName": "Position"
        })
    })
})

types["ReferenceFormation-nodes"] = type("ReferenceFormation-nodes", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("ReferenceFormation-nodes_type", (object,), {
        "Line": 131, "CharPositionInLine": 10, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 131, "CharPositionInLine": 33, "kind": "ReferenceType", "ReferencedTypeName": "T-Int8", "Min": "-128", "Max": "127", "ReferencedModName": "TASTE-BasicTypes"
        })
    })
})

types["PositionSystemData-yAct"] = type("PositionSystemData-yAct", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("PositionSystemData-yAct_type", (object,), {
        "Line": 126, "CharPositionInLine": 9, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 126, "CharPositionInLine": 32, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
        })
    })
})

types["PositionSystemData-xAct"] = type("PositionSystemData-xAct", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("PositionSystemData-xAct_type", (object,), {
        "Line": 125, "CharPositionInLine": 9, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 125, "CharPositionInLine": 32, "kind": "ReferenceType", "ReferencedTypeName": "MyReal", "Min": "-1000", "Max": "100000"
        })
    })
})

types["MultiDroneSensorData-data"] = type("MultiDroneSensorData-data", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MultiDroneSensorData-data_type", (object,), {
        "Line": 104, "CharPositionInLine": 9, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 104, "CharPositionInLine": 32, "kind": "ReferenceType", "ReferencedTypeName": "DroneSensorData"
        })
    })
})

types["MultiDroneControllerInput-controllerInput"] = type("MultiDroneControllerInput-controllerInput", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MultiDroneControllerInput-controllerInput_type", (object,), {
        "Line": 100, "CharPositionInLine": 20, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 100, "CharPositionInLine": 43, "kind": "ReferenceType", "ReferencedTypeName": "DroneControllerInput"
        })
    })
})

types["MultiControlError-bodyFrameError"] = type("MultiControlError-bodyFrameError", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MultiControlError-bodyFrameError_type", (object,), {
        "Line": 96, "CharPositionInLine": 19, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 96, "CharPositionInLine": 42, "kind": "ReferenceType", "ReferencedTypeName": "ControlError"
        })
    })
})

types["MultiAgents-agents"] = type("MultiAgents-agents", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MultiAgents-agents_type", (object,), {
        "Line": 92, "CharPositionInLine": 11, "kind": "SequenceOfType", "Min": "5", "Max": "5", "type": type("SeqOf_type", (object,), {
            "Line": 92, "CharPositionInLine": 34, "kind": "ReferenceType", "ReferencedTypeName": "Agent"
        })
    })
})

types["MySeq-validity"] = type("MySeq-validity", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MySeq-validity_type", (object,), {
        "Line": 25, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "valid": type("valid", (object,), {
                "IntValue": 0, "Line": 25, "CharPositionInLine": 29, "EnumID": "valid"
            }),
            "invalid": type("invalid", (object,), {
                "IntValue": 1, "Line": 25, "CharPositionInLine": 36, "EnumID": "invalid"
            })
        }
    })
})


variables["myVar"] = type("myVar", (object,), {
    "Line": 193,
    "CharPositionInLine": 0,
    "varName": "myVar",
    "type": type("myVar_type", (object,), {
        "Line": 193, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MySeqOf", "Min": "2", "Max": "2"
    }),
    "value": {"hello", "world"}
})

asn1Modules.append("TASTE-BasicTypes")
exportedTypes["TASTE-BasicTypes"] = ["T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-BasicTypes"] = []
importedModules["TASTE-BasicTypes"] = []

types["T-Int32"] = type("T-Int32", (object,), {
    "Line": 202, "CharPositionInLine": 0, "type": type("T-Int32_type", (object,), {
        "Line": 202, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "-2147483648", "Max": "2147483647"
    })
})

types["T-UInt32"] = type("T-UInt32", (object,), {
    "Line": 204, "CharPositionInLine": 0, "type": type("T-UInt32_type", (object,), {
        "Line": 204, "CharPositionInLine": 13, "kind": "IntegerType", "Min": "0", "Max": "4294967295"
    })
})

types["T-Int8"] = type("T-Int8", (object,), {
    "Line": 206, "CharPositionInLine": 0, "type": type("T-Int8_type", (object,), {
        "Line": 206, "CharPositionInLine": 11, "kind": "IntegerType", "Min": "-128", "Max": "127"
    })
})

types["T-UInt8"] = type("T-UInt8", (object,), {
    "Line": 208, "CharPositionInLine": 0, "type": type("T-UInt8_type", (object,), {
        "Line": 208, "CharPositionInLine": 12, "kind": "IntegerType", "Min": "0", "Max": "255"
    })
})

types["T-Boolean"] = type("T-Boolean", (object,), {
    "Line": 210, "CharPositionInLine": 0, "type": type("T-Boolean_type", (object,), {
        "Line": 210, "CharPositionInLine": 14, "kind": "BooleanType"
    })
})


