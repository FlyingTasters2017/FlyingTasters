from functools import partial

import DV

from Stubs import (
    myassert, Clean, DataStream, COMMON)

class MyBool(COMMON):
    def __init__(self, ptr=None):
        super(MyBool, self).__init__("MyBool", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()!=0).upper())

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class ANGLE(COMMON):
    def __init__(self, ptr=None):
        super(ANGLE, self).__init__("ANGLE", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class T_UInt16(COMMON):
    def __init__(self, ptr=None):
        super(T_UInt16, self).__init__("T_UInt16", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MyInteger(COMMON):
    def __init__(self, ptr=None):
        super(MyInteger, self).__init__("MyInteger", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class RATE(COMMON):
    def __init__(self, ptr=None):
        super(RATE, self).__init__("RATE", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class ACCELERATION(COMMON):
    def __init__(self, ptr=None):
        super(ACCELERATION, self).__init__("ACCELERATION", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class GYROSCOPE(COMMON):
    def __init__(self, ptr=None):
        super(GYROSCOPE, self).__init__("GYROSCOPE", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MyChoice(COMMON):
    def __init__(self, ptr=None):
        super(MyChoice, self).__init__("MyChoice", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        if self.kind.Get() == DV.a_PRESENT:
         lines.append("a: ")
         lines.append(" "+str(self.a.Get()!=0).upper())
        if self.kind.Get() == DV.b_PRESENT:
         lines.append("b: ")
         lines.append("{")
         lines.append(" input-data ")
         lines.append("  "+str(self.b.input_data.Get()))
         lines.append(', ')
         lines.append(" output-data ")
         lines.append("  "+str(self.b.output_data.Get()))
         lines.append(', ')
         lines.append(" validity ")
         lines.append("  "+{'1': 'invalid', '0': 'valid'}[str(self.b.validity.Get())])
         lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MyReal(COMMON):
    def __init__(self, ptr=None):
        super(MyReal, self).__init__("MyReal", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class HEIGHT(COMMON):
    def __init__(self, ptr=None):
        super(HEIGHT, self).__init__("HEIGHT", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class TM_T(COMMON):
    # Ordered list of fields:
    children_ordered = ['gyro', 'acc', 'z']

    def __init__(self, ptr=None):
        super(TM_T, self).__init__("TM_T", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("gyro ")
        lines.append("{")
        lines.append(" x ")
        lines.append("  "+str(self.gyro.x.Get()))
        lines.append(', ')
        lines.append(" y ")
        lines.append("  "+str(self.gyro.y.Get()))
        lines.append(', ')
        lines.append(" z ")
        lines.append("  "+str(self.gyro.z.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("acc ")
        lines.append("{")
        lines.append(" x ")
        lines.append("  "+str(self.acc.x.Get()))
        lines.append(', ')
        lines.append(" y ")
        lines.append("  "+str(self.acc.y.Get()))
        lines.append(', ')
        lines.append(" z ")
        lines.append("  "+str(self.acc.z.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("z ")
        lines.append(" "+str(self.z.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class T_Int32(COMMON):
    def __init__(self, ptr=None):
        super(T_Int32, self).__init__("T_Int32", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MySeqOf(COMMON):
    def __init__(self, ptr=None):
        super(MySeqOf, self).__init__("MySeqOf", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        def emitElem(path, i):
            state = self.GetState()
            if i > 0:
                lines.append(",")
            lines.append(" "+{'1': 'world', '2': 'howareyou', '0': 'hello'}[str(path[i].Get())])
            self.Reset(state)
        state = self.GetState()
        length = self.GetLength()
        self.Reset(state)
        map(partial(emitElem, self), xrange(length))
        self.Reset(state)
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class T_UInt32(COMMON):
    def __init__(self, ptr=None):
        super(T_UInt32, self).__init__("T_UInt32", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class ACC_SEQ(COMMON):
    # Ordered list of fields:
    children_ordered = ['x', 'y', 'z']

    def __init__(self, ptr=None):
        super(ACC_SEQ, self).__init__("ACC_SEQ", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("x ")
        lines.append(" "+str(self.x.Get()))
        lines.append(', ')
        lines.append("y ")
        lines.append(" "+str(self.y.Get()))
        lines.append(', ')
        lines.append("z ")
        lines.append(" "+str(self.z.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MyOctStr(COMMON):
    def __init__(self, ptr=None):
        super(MyOctStr, self).__init__("MyOctStr", ptr)
#

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("\""+str(self.GetPyString()) + "\"")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class TC_T(COMMON):
    # Ordered list of fields:
    children_ordered = ['roll', 'pitch', 'yaw', 'thrust']

    def __init__(self, ptr=None):
        super(TC_T, self).__init__("TC_T", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("roll ")
        lines.append(" "+str(self.roll.Get()))
        lines.append(', ')
        lines.append("pitch ")
        lines.append(" "+str(self.pitch.Get()))
        lines.append(', ')
        lines.append("yaw ")
        lines.append(" "+str(self.yaw.Get()))
        lines.append(', ')
        lines.append("thrust ")
        lines.append(" "+str(self.thrust.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class T_UInt8(COMMON):
    def __init__(self, ptr=None):
        super(T_UInt8, self).__init__("T_UInt8", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class T_Boolean(COMMON):
    def __init__(self, ptr=None):
        super(T_Boolean, self).__init__("T_Boolean", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()!=0).upper())

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MyEnum(COMMON):
    # Allowed enumerants:
    hello = 0
    world = 1
    howareyou = 2
    allowed = [hello, world, howareyou]
    def __init__(self, ptr=None):
        super(MyEnum, self).__init__("MyEnum", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+{'1': 'world', '2': 'howareyou', '0': 'hello'}[str(self.Get())])

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class T_Int8(COMMON):
    def __init__(self, ptr=None):
        super(T_Int8, self).__init__("T_Int8", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+str(self.Get()))

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class MySeq(COMMON):
    # Ordered list of fields:
    children_ordered = ['input-data', 'output-data', 'validity']

    def __init__(self, ptr=None):
        super(MySeq, self).__init__("MySeq", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("input-data ")
        lines.append(" "+str(self.input_data.Get()))
        lines.append(', ')
        lines.append("output-data ")
        lines.append(" "+str(self.output_data.Get()))
        lines.append(', ')
        lines.append("validity ")
        lines.append(" "+{'1': 'invalid', '0': 'valid'}[str(self.validity.Get())])
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class GYRO_SEQ(COMMON):
    # Ordered list of fields:
    children_ordered = ['x', 'y', 'z']

    def __init__(self, ptr=None):
        super(GYRO_SEQ, self).__init__("GYRO_SEQ", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("x ")
        lines.append(" "+str(self.x.Get()))
        lines.append(', ')
        lines.append("y ")
        lines.append(" "+str(self.y.Get()))
        lines.append(', ')
        lines.append("z ")
        lines.append(" "+str(self.z.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


