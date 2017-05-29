from functools import partial

import DV

from Stubs import (
    myassert, Clean, DataStream, COMMON)

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
         lines.append("  "+{'0': 'valid', '1': 'invalid'}[str(self.b.validity.Get())])
         lines.append("}")

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
            lines.append(" "+{'0': 'hello', '2': 'howareyou', '1': 'world'}[str(path[i].Get())])
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


class MyPWM(COMMON):
    # Ordered list of fields:
    children_ordered = ['pwm1', 'pwm2', 'pwm3', 'pwm4']

    def __init__(self, ptr=None):
        super(MyPWM, self).__init__("MyPWM", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("pwm1 ")
        lines.append(" "+str(self.pwm1.Get()))
        lines.append(', ')
        lines.append("pwm2 ")
        lines.append(" "+str(self.pwm2.Get()))
        lines.append(', ')
        lines.append("pwm3 ")
        lines.append(" "+str(self.pwm3.Get()))
        lines.append(', ')
        lines.append("pwm4 ")
        lines.append(" "+str(self.pwm4.Get()))
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
        lines.append(" "+{'0': 'valid', '1': 'invalid'}[str(self.validity.Get())])
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


class MyTrajectory(COMMON):
    # Ordered list of fields:
    children_ordered = ['x', 'y', 'z', 'yaw']

    def __init__(self, ptr=None):
        super(MyTrajectory, self).__init__("MyTrajectory", ptr)

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
        lines.append(', ')
        lines.append("yaw ")
        lines.append(" "+str(self.yaw.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


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
        lines.append(""+{'0': 'hello', '2': 'howareyou', '1': 'world'}[str(self.Get())])

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


class MyStates(COMMON):
    # Ordered list of fields:
    children_ordered = ['x', 'y', 'z', 'yaw', 'pitch', 'roll', 'dx', 'dy', 'dz', 'dyaw', 'dpitch', 'droll']

    def __init__(self, ptr=None):
        super(MyStates, self).__init__("MyStates", ptr)

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
        lines.append(', ')
        lines.append("yaw ")
        lines.append(" "+str(self.yaw.Get()))
        lines.append(', ')
        lines.append("pitch ")
        lines.append(" "+str(self.pitch.Get()))
        lines.append(', ')
        lines.append("roll ")
        lines.append(" "+str(self.roll.Get()))
        lines.append(', ')
        lines.append("dx ")
        lines.append(" "+str(self.dx.Get()))
        lines.append(', ')
        lines.append("dy ")
        lines.append(" "+str(self.dy.Get()))
        lines.append(', ')
        lines.append("dz ")
        lines.append(" "+str(self.dz.Get()))
        lines.append(', ')
        lines.append("dyaw ")
        lines.append(" "+str(self.dyaw.Get()))
        lines.append(', ')
        lines.append("dpitch ")
        lines.append(" "+str(self.dpitch.Get()))
        lines.append(', ')
        lines.append("droll ")
        lines.append(" "+str(self.droll.Get()))
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


