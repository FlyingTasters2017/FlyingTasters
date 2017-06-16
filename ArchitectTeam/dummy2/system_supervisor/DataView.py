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
exportedTypes["TASTE-Dataview"] = ["MyInteger", "MyReal", "MyBool", "MyEnum", "MySeq", "MyChoice", "MySeqOf", "MyOctStr", "MySeq-validity", "T-Int32", "T-UInt32", "T-Int8", "T-UInt8", "T-Boolean"]
exportedVariables["TASTE-Dataview"] = ["myVar"]
importedModules["TASTE-Dataview"] = [{"TASTE-BasicTypes":{"ImportedTypes": ["T-Int32","T-UInt32","T-Int8","T-UInt8","T-Boolean"], "ImportedVariables": []}}]

types["MyInteger"] = type("MyInteger", (object,), {
    "Line": 23, "CharPositionInLine": 0, "type": type("MyInteger_type", (object,), {
        "Line": 23, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "T-UInt8", "Min": "0", "Max": "255", "ReferencedModName": "TASTE-BasicTypes"
    })
})

types["MyReal"] = type("MyReal", (object,), {
    "Line": 25, "CharPositionInLine": 0, "type": type("MyReal_type", (object,), {
        "Line": 25, "CharPositionInLine": 16, "kind": "RealType", "Min": "0.00000000000000000000E+000", "Max": "1.00000000000000000000E+003"
    })
})

types["MyBool"] = type("MyBool", (object,), {
    "Line": 27, "CharPositionInLine": 0, "type": type("MyBool_type", (object,), {
        "Line": 27, "CharPositionInLine": 16, "kind": "BooleanType"
    })
})

types["MyEnum"] = type("MyEnum", (object,), {
    "Line": 29, "CharPositionInLine": 0, "type": type("MyEnum_type", (object,), {
        "Line": 29, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "hello": type("hello", (object,), {
                "IntValue": 0, "Line": 29, "CharPositionInLine": 29, "EnumID": "hello"
            }),
            "world": type("world", (object,), {
                "IntValue": 1, "Line": 29, "CharPositionInLine": 36, "EnumID": "world"
            }),
            "howareyou": type("howareyou", (object,), {
                "IntValue": 2, "Line": 29, "CharPositionInLine": 43, "EnumID": "howareyou"
            })
        }
    })
})

types["MySeq"] = type("MySeq", (object,), {
    "Line": 31, "CharPositionInLine": 0, "type": type("MySeq_type", (object,), {
        "Line": 31, "CharPositionInLine": 16, "kind": "SequenceType", "Children": {
            "input-data": type("input-data", (object,), {
                "Optional": "False", "Line": 32, "CharPositionInLine": 4, "type": type("input-data_type", (object,), {
                    "Line": 32, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "output-data": type("output-data", (object,), {
                "Optional": "False", "Line": 33, "CharPositionInLine": 4, "type": type("output-data_type", (object,), {
                    "Line": 33, "CharPositionInLine": 16, "kind": "ReferenceType", "ReferencedTypeName": "MyInteger", "Min": "0", "Max": "255"
                })
            }),
            "validity": type("validity", (object,), {
                "Optional": "False", "Line": 34, "CharPositionInLine": 4, "type": type("validity_type", (object,), {
                    "Line": 0, "CharPositionInLine": 0, "kind": "ReferenceType", "ReferencedTypeName": "MySeq-validity"
                })
            })
        }
    })
})

types["MyChoice"] = type("MyChoice", (object,), {
    "Line": 37, "CharPositionInLine": 0, "type": type("MyChoice_type", (object,), {
        "Line": 37, "CharPositionInLine": 16, "kind": "ChoiceType", "Children": {
            "a": type("a_PRESENT", (object,), {
                "Line": 38, "CharPositionInLine": 4, "EnumID": "a_PRESENT", "type": type("a_PRESENT_type", (object,), {
                    "Line": 38, "CharPositionInLine": 6, "kind": "BooleanType"
                })
            }),
            "b": type("b_PRESENT", (object,), {
                "Line": 39, "CharPositionInLine": 4, "EnumID": "b_PRESENT", "type": type("b_PRESENT_type", (object,), {
                    "Line": 39, "CharPositionInLine": 6, "kind": "ReferenceType", "ReferencedTypeName": "MySeq"
                })
            })
        }
    })
})

types["MySeqOf"] = type("MySeqOf", (object,), {
    "Line": 42, "CharPositionInLine": 0, "type": type("MySeqOf_type", (object,), {
        "Line": 42, "CharPositionInLine": 16, "kind": "SequenceOfType", "Min": "2", "Max": "2", "type": type("SeqOf_type", (object,), {
            "Line": 42, "CharPositionInLine": 39, "kind": "ReferenceType", "ReferencedTypeName": "MyEnum"
        })
    })
})

types["MyOctStr"] = type("MyOctStr", (object,), {
    "Line": 44, "CharPositionInLine": 0, "type": type("MyOctStr_type", (object,), {
        "Line": 44, "CharPositionInLine": 16, "kind": "OctetStringType", "Min": "3", "Max": "3"
    })
})

types["MySeq-validity"] = type("MySeq-validity", (object,), {
    "Line": 0, "CharPositionInLine": 0, "type": type("MySeq-validity_type", (object,), {
        "Line": 34, "CharPositionInLine": 16, "kind": "EnumeratedType", "Extensible": "False", "ValuesAutoCalculated": "False", "EnumValues": {
            "valid": type("valid", (object,), {
                "IntValue": 0, "Line": 34, "CharPositionInLine": 29, "EnumID": "valid"
            }),
            "invalid": type("invalid", (object,), {
                "IntValue": 1, "Line": 34, "CharPositionInLine": 36, "EnumID": "invalid"
            })
        }
    })
})


variables["myVar"] = type("myVar", (object,), {
    "Line": 47,
    "CharPositionInLine": 0,
    "varName": "myVar",
    "type": type("myVar_type", (object,), {
        "Line": 47, "CharPositionInLine": 12, "kind": "ReferenceType", "ReferencedTypeName": "MySeqOf", "Min": "2", "Max": "2"
    }),
    "value": {"hello", "world"}
})
