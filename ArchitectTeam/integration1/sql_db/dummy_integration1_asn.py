from functools import partial

import DV

from Stubs import (
    myassert, Clean, DataStream, COMMON)

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
            lines.append(" "+{'1': 'world', '0': 'hello', '2': 'howareyou'}[str(path[i].Get())])
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


class PixyData(COMMON):
    # Ordered list of fields:
    children_ordered = ['xPix', 'yPix']

    def __init__(self, ptr=None):
        super(PixyData, self).__init__("PixyData", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("xPix ")
        lines.append(" "+str(self.xPix.Get()))
        lines.append(', ')
        lines.append("yPix ")
        lines.append(" "+str(self.yPix.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class ReferenceFormation(COMMON):
    # Ordered list of fields:
    children_ordered = ['nodes', 'anchor', 'formationAnchorPosition']

    def __init__(self, ptr=None):
        super(ReferenceFormation, self).__init__("ReferenceFormation", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("nodes ")
        lines.append("{")
        def emitElem(path, i):
            state = self.GetState()
            if i > 0:
                lines.append(",")
            lines.append("  "+str(path[i].Get()))
            self.Reset(state)
        state = self.GetState()
        length = self.nodes.GetLength()
        self.Reset(state)
        map(partial(emitElem, self.nodes), xrange(length))
        self.Reset(state)
        lines.append("}")
        lines.append(', ')
        lines.append("anchor ")
        lines.append(" "+str(self.anchor.Get()))
        lines.append(', ')
        lines.append("formationAnchorPosition ")
        lines.append("{")
        lines.append(" x ")
        lines.append("  "+str(self.formationAnchorPosition.x.Get()))
        lines.append(', ')
        lines.append(" y ")
        lines.append("  "+str(self.formationAnchorPosition.y.Get()))
        lines.append(', ')
        lines.append(" z ")
        lines.append("  "+str(self.formationAnchorPosition.z.Get()))
        lines.append("}")
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class Trajectory(COMMON):
    # Ordered list of fields:
    children_ordered = ['x', 'y', 'z', 'yaw']

    def __init__(self, ptr=None):
        super(Trajectory, self).__init__("Trajectory", ptr)

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


class DroneControllerInput(COMMON):
    # Ordered list of fields:
    children_ordered = ['yawrateRef', 'pitchRef', 'rollRef', 'thrustRef']

    def __init__(self, ptr=None):
        super(DroneControllerInput, self).__init__("DroneControllerInput", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("yawrateRef ")
        lines.append(" "+str(self.yawrateRef.Get()))
        lines.append(', ')
        lines.append("pitchRef ")
        lines.append(" "+str(self.pitchRef.Get()))
        lines.append(', ')
        lines.append("rollRef ")
        lines.append(" "+str(self.rollRef.Get()))
        lines.append(', ')
        lines.append("thrustRef ")
        lines.append(" "+str(self.thrustRef.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class Acceleration(COMMON):
    # Ordered list of fields:
    children_ordered = ['aX', 'aY', 'aZ', 'aRoll', 'aPitch', 'aYaw']

    def __init__(self, ptr=None):
        super(Acceleration, self).__init__("Acceleration", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("aX ")
        lines.append(" "+str(self.aX.Get()))
        lines.append(', ')
        lines.append("aY ")
        lines.append(" "+str(self.aY.Get()))
        lines.append(', ')
        lines.append("aZ ")
        lines.append(" "+str(self.aZ.Get()))
        lines.append(', ')
        lines.append("aRoll ")
        lines.append(" "+str(self.aRoll.Get()))
        lines.append(', ')
        lines.append("aPitch ")
        lines.append(" "+str(self.aPitch.Get()))
        lines.append(', ')
        lines.append("aYaw ")
        lines.append(" "+str(self.aYaw.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class Velocity(COMMON):
    # Ordered list of fields:
    children_ordered = ['vX', 'vY', 'vZ', 'vRoll', 'vPitch', 'vYaw']

    def __init__(self, ptr=None):
        super(Velocity, self).__init__("Velocity", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("vX ")
        lines.append(" "+str(self.vX.Get()))
        lines.append(', ')
        lines.append("vY ")
        lines.append(" "+str(self.vY.Get()))
        lines.append(', ')
        lines.append("vZ ")
        lines.append(" "+str(self.vZ.Get()))
        lines.append(', ')
        lines.append("vRoll ")
        lines.append(" "+str(self.vRoll.Get()))
        lines.append(', ')
        lines.append("vPitch ")
        lines.append(" "+str(self.vPitch.Get()))
        lines.append(', ')
        lines.append("vYaw ")
        lines.append(" "+str(self.vYaw.Get()))
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


class Position(COMMON):
    # Ordered list of fields:
    children_ordered = ['x', 'y', 'z']

    def __init__(self, ptr=None):
        super(Position, self).__init__("Position", ptr)

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


class FeedbackToGUI(COMMON):
    # Ordered list of fields:
    children_ordered = ['flight', 'notification']

    def __init__(self, ptr=None):
        super(FeedbackToGUI, self).__init__("FeedbackToGUI", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("flight ")
        lines.append("{")
        lines.append(" agentData ")
        lines.append("{")
        lines.append("  agentID ")
        lines.append("   "+str(self.flight.agentData.agentID.Get()))
        lines.append(', ')
        lines.append("  agentColor ")
        lines.append("   "+{'1': 'pink', '0': 'black', '2': 'red'}[str(self.flight.agentData.agentColor.Get())])
        lines.append(', ')
        lines.append("  currentPosition ")
        lines.append("{")
        lines.append("   x ")
        lines.append("    "+str(self.flight.agentData.currentPosition.x.Get()))
        lines.append(', ')
        lines.append("   y ")
        lines.append("    "+str(self.flight.agentData.currentPosition.y.Get()))
        lines.append(', ')
        lines.append("   z ")
        lines.append("    "+str(self.flight.agentData.currentPosition.z.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("  currentOrientation ")
        lines.append("{")
        lines.append("   roll ")
        lines.append("    "+str(self.flight.agentData.currentOrientation.roll.Get()))
        lines.append(', ')
        lines.append("   pitch ")
        lines.append("    "+str(self.flight.agentData.currentOrientation.pitch.Get()))
        lines.append(', ')
        lines.append("   yaw ")
        lines.append("    "+str(self.flight.agentData.currentOrientation.yaw.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("  currentVelocity ")
        lines.append("{")
        lines.append("   vX ")
        lines.append("    "+str(self.flight.agentData.currentVelocity.vX.Get()))
        lines.append(', ')
        lines.append("   vY ")
        lines.append("    "+str(self.flight.agentData.currentVelocity.vY.Get()))
        lines.append(', ')
        lines.append("   vZ ")
        lines.append("    "+str(self.flight.agentData.currentVelocity.vZ.Get()))
        lines.append(', ')
        lines.append("   vRoll ")
        lines.append("    "+str(self.flight.agentData.currentVelocity.vRoll.Get()))
        lines.append(', ')
        lines.append("   vPitch ")
        lines.append("    "+str(self.flight.agentData.currentVelocity.vPitch.Get()))
        lines.append(', ')
        lines.append("   vYaw ")
        lines.append("    "+str(self.flight.agentData.currentVelocity.vYaw.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("  currentAcceleration ")
        lines.append("{")
        lines.append("   aX ")
        lines.append("    "+str(self.flight.agentData.currentAcceleration.aX.Get()))
        lines.append(', ')
        lines.append("   aY ")
        lines.append("    "+str(self.flight.agentData.currentAcceleration.aY.Get()))
        lines.append(', ')
        lines.append("   aZ ")
        lines.append("    "+str(self.flight.agentData.currentAcceleration.aZ.Get()))
        lines.append(', ')
        lines.append("   aRoll ")
        lines.append("    "+str(self.flight.agentData.currentAcceleration.aRoll.Get()))
        lines.append(', ')
        lines.append("   aPitch ")
        lines.append("    "+str(self.flight.agentData.currentAcceleration.aPitch.Get()))
        lines.append(', ')
        lines.append("   aYaw ")
        lines.append("    "+str(self.flight.agentData.currentAcceleration.aYaw.Get()))
        lines.append("}")
        lines.append("}")
        lines.append("}")
        lines.append(', ')
        lines.append("notification ")
        lines.append(" "+{'1': 'initializing', '4': 'safeReturn', '0': 'idle', '3': 'emergencyLand', '2': 'runningOk'}[str(self.notification.Get())])
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class UserCommand(COMMON):
    # Allowed enumerants:
    sysStart = 0
    sysPause = 1
    sysStop = 2
    allowed = [sysStart, sysPause, sysStop]
    def __init__(self, ptr=None):
        super(UserCommand, self).__init__("UserCommand", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+{'1': 'sysPause', '0': 'sysStart', '2': 'sysStop'}[str(self.Get())])

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class WorldData(COMMON):
    # Ordered list of fields:
    children_ordered = ['agentData']

    def __init__(self, ptr=None):
        super(WorldData, self).__init__("WorldData", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("agentData ")
        lines.append("{")
        lines.append(" agentID ")
        lines.append("  "+str(self.agentData.agentID.Get()))
        lines.append(', ')
        lines.append(" agentColor ")
        lines.append("  "+{'1': 'pink', '0': 'black', '2': 'red'}[str(self.agentData.agentColor.Get())])
        lines.append(', ')
        lines.append(" currentPosition ")
        lines.append("{")
        lines.append("  x ")
        lines.append("   "+str(self.agentData.currentPosition.x.Get()))
        lines.append(', ')
        lines.append("  y ")
        lines.append("   "+str(self.agentData.currentPosition.y.Get()))
        lines.append(', ')
        lines.append("  z ")
        lines.append("   "+str(self.agentData.currentPosition.z.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append(" currentOrientation ")
        lines.append("{")
        lines.append("  roll ")
        lines.append("   "+str(self.agentData.currentOrientation.roll.Get()))
        lines.append(', ')
        lines.append("  pitch ")
        lines.append("   "+str(self.agentData.currentOrientation.pitch.Get()))
        lines.append(', ')
        lines.append("  yaw ")
        lines.append("   "+str(self.agentData.currentOrientation.yaw.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append(" currentVelocity ")
        lines.append("{")
        lines.append("  vX ")
        lines.append("   "+str(self.agentData.currentVelocity.vX.Get()))
        lines.append(', ')
        lines.append("  vY ")
        lines.append("   "+str(self.agentData.currentVelocity.vY.Get()))
        lines.append(', ')
        lines.append("  vZ ")
        lines.append("   "+str(self.agentData.currentVelocity.vZ.Get()))
        lines.append(', ')
        lines.append("  vRoll ")
        lines.append("   "+str(self.agentData.currentVelocity.vRoll.Get()))
        lines.append(', ')
        lines.append("  vPitch ")
        lines.append("   "+str(self.agentData.currentVelocity.vPitch.Get()))
        lines.append(', ')
        lines.append("  vYaw ")
        lines.append("   "+str(self.agentData.currentVelocity.vYaw.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append(" currentAcceleration ")
        lines.append("{")
        lines.append("  aX ")
        lines.append("   "+str(self.agentData.currentAcceleration.aX.Get()))
        lines.append(', ')
        lines.append("  aY ")
        lines.append("   "+str(self.agentData.currentAcceleration.aY.Get()))
        lines.append(', ')
        lines.append("  aZ ")
        lines.append("   "+str(self.agentData.currentAcceleration.aZ.Get()))
        lines.append(', ')
        lines.append("  aRoll ")
        lines.append("   "+str(self.agentData.currentAcceleration.aRoll.Get()))
        lines.append(', ')
        lines.append("  aPitch ")
        lines.append("   "+str(self.agentData.currentAcceleration.aPitch.Get()))
        lines.append(', ')
        lines.append("  aYaw ")
        lines.append("   "+str(self.agentData.currentAcceleration.aYaw.Get()))
        lines.append("}")
        lines.append("}")
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


class Color(COMMON):
    # Allowed enumerants:
    black = 0
    pink = 1
    red = 2
    allowed = [black, pink, red]
    def __init__(self, ptr=None):
        super(Color, self).__init__("Color", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+{'1': 'pink', '0': 'black', '2': 'red'}[str(self.Get())])

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


class SafetyEvent(COMMON):
    # Allowed enumerants:
    safe = 0
    collision = 1
    wallColl = 2
    ceilColl = 3
    allowed = [safe, collision, wallColl, ceilColl]
    def __init__(self, ptr=None):
        super(SafetyEvent, self).__init__("SafetyEvent", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+{'1': 'collision', '0': 'safe', '3': 'ceilColl', '2': 'wallColl'}[str(self.Get())])

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


class ReferencePath(COMMON):
    # Ordered list of fields:
    children_ordered = ['locations', 'actions']

    def __init__(self, ptr=None):
        super(ReferencePath, self).__init__("ReferencePath", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("locations ")
        lines.append("{")
        def emitElem(path, i):
            state = self.GetState()
            if i > 0:
                lines.append(",")
            lines.append("{")
            lines.append("  x ")
            lines.append("   "+str(path[i].x.Get()))
            self.Reset(state)
            lines.append(', ')
            lines.append("  y ")
            lines.append("   "+str(path[i].y.Get()))
            self.Reset(state)
            lines.append(', ')
            lines.append("  z ")
            lines.append("   "+str(path[i].z.Get()))
            self.Reset(state)
            lines.append("}")
        state = self.GetState()
        length = self.locations.GetLength()
        self.Reset(state)
        map(partial(emitElem, self.locations), xrange(length))
        self.Reset(state)
        lines.append("}")
        lines.append(', ')
        lines.append("actions ")
        lines.append("{")
        def emitElem(path, i):
            state = self.GetState()
            if i > 0:
                lines.append(",")
            lines.append("{")
            lines.append("  yaw-rate ")
            lines.append("   "+str(path[i].yaw_rate.Get()))
            self.Reset(state)
            lines.append(', ')
            lines.append("  duration ")
            lines.append("   "+str(path[i].duration.Get()))
            self.Reset(state)
            lines.append("}")
        state = self.GetState()
        length = self.actions.GetLength()
        self.Reset(state)
        map(partial(emitElem, self.actions), xrange(length))
        self.Reset(state)
        lines.append("}")
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


class DroneSensorData(COMMON):
    # Ordered list of fields:
    children_ordered = ['yawAct', 'pitchAct', 'rollAct', 'baropAct', 'accxAct', 'accyAct', 'acczAct']

    def __init__(self, ptr=None):
        super(DroneSensorData, self).__init__("DroneSensorData", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("yawAct ")
        lines.append(" "+str(self.yawAct.Get()))
        lines.append(', ')
        lines.append("pitchAct ")
        lines.append(" "+str(self.pitchAct.Get()))
        lines.append(', ')
        lines.append("rollAct ")
        lines.append(" "+str(self.rollAct.Get()))
        lines.append(', ')
        lines.append("baropAct ")
        lines.append(" "+str(self.baropAct.Get()))
        lines.append(', ')
        lines.append("accxAct ")
        lines.append(" "+str(self.accxAct.Get()))
        lines.append(', ')
        lines.append("accyAct ")
        lines.append(" "+str(self.accyAct.Get()))
        lines.append(', ')
        lines.append("acczAct ")
        lines.append(" "+str(self.acczAct.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class HoverAction(COMMON):
    # Ordered list of fields:
    children_ordered = ['yaw-rate', 'duration']

    def __init__(self, ptr=None):
        super(HoverAction, self).__init__("HoverAction", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("yaw-rate ")
        lines.append(" "+str(self.yaw_rate.Get()))
        lines.append(', ')
        lines.append("duration ")
        lines.append(" "+str(self.duration.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class PositionSystemData(COMMON):
    # Ordered list of fields:
    children_ordered = ['xAct', 'yAct']

    def __init__(self, ptr=None):
        super(PositionSystemData, self).__init__("PositionSystemData", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("xAct ")
        lines.append(" "+str(self.xAct.Get()))
        lines.append(', ')
        lines.append("yAct ")
        lines.append(" "+str(self.yAct.Get()))
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class Area(COMMON):
    # Ordered list of fields:
    children_ordered = ['height', 'width', 'depth', 'refLocation']

    def __init__(self, ptr=None):
        super(Area, self).__init__("Area", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("height ")
        lines.append(" "+str(self.height.Get()))
        lines.append(', ')
        lines.append("width ")
        lines.append(" "+str(self.width.Get()))
        lines.append(', ')
        lines.append("depth ")
        lines.append(" "+str(self.depth.Get()))
        lines.append(', ')
        lines.append("refLocation ")
        lines.append("{")
        lines.append(" x ")
        lines.append("  "+str(self.refLocation.x.Get()))
        lines.append(', ')
        lines.append(" y ")
        lines.append("  "+str(self.refLocation.y.Get()))
        lines.append(', ')
        lines.append(" z ")
        lines.append("  "+str(self.refLocation.z.Get()))
        lines.append("}")
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class Orientation(COMMON):
    # Ordered list of fields:
    children_ordered = ['roll', 'pitch', 'yaw']

    def __init__(self, ptr=None):
        super(Orientation, self).__init__("Orientation", ptr)

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
        lines.append("}")

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


class Agent(COMMON):
    # Ordered list of fields:
    children_ordered = ['agentID', 'agentColor', 'currentPosition', 'currentOrientation', 'currentVelocity', 'currentAcceleration']

    def __init__(self, ptr=None):
        super(Agent, self).__init__("Agent", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append("{")
        lines.append("agentID ")
        lines.append(" "+str(self.agentID.Get()))
        lines.append(', ')
        lines.append("agentColor ")
        lines.append(" "+{'1': 'pink', '0': 'black', '2': 'red'}[str(self.agentColor.Get())])
        lines.append(', ')
        lines.append("currentPosition ")
        lines.append("{")
        lines.append(" x ")
        lines.append("  "+str(self.currentPosition.x.Get()))
        lines.append(', ')
        lines.append(" y ")
        lines.append("  "+str(self.currentPosition.y.Get()))
        lines.append(', ')
        lines.append(" z ")
        lines.append("  "+str(self.currentPosition.z.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("currentOrientation ")
        lines.append("{")
        lines.append(" roll ")
        lines.append("  "+str(self.currentOrientation.roll.Get()))
        lines.append(', ')
        lines.append(" pitch ")
        lines.append("  "+str(self.currentOrientation.pitch.Get()))
        lines.append(', ')
        lines.append(" yaw ")
        lines.append("  "+str(self.currentOrientation.yaw.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("currentVelocity ")
        lines.append("{")
        lines.append(" vX ")
        lines.append("  "+str(self.currentVelocity.vX.Get()))
        lines.append(', ')
        lines.append(" vY ")
        lines.append("  "+str(self.currentVelocity.vY.Get()))
        lines.append(', ')
        lines.append(" vZ ")
        lines.append("  "+str(self.currentVelocity.vZ.Get()))
        lines.append(', ')
        lines.append(" vRoll ")
        lines.append("  "+str(self.currentVelocity.vRoll.Get()))
        lines.append(', ')
        lines.append(" vPitch ")
        lines.append("  "+str(self.currentVelocity.vPitch.Get()))
        lines.append(', ')
        lines.append(" vYaw ")
        lines.append("  "+str(self.currentVelocity.vYaw.Get()))
        lines.append("}")
        lines.append(', ')
        lines.append("currentAcceleration ")
        lines.append("{")
        lines.append(" aX ")
        lines.append("  "+str(self.currentAcceleration.aX.Get()))
        lines.append(', ')
        lines.append(" aY ")
        lines.append("  "+str(self.currentAcceleration.aY.Get()))
        lines.append(', ')
        lines.append(" aZ ")
        lines.append("  "+str(self.currentAcceleration.aZ.Get()))
        lines.append(', ')
        lines.append(" aRoll ")
        lines.append("  "+str(self.currentAcceleration.aRoll.Get()))
        lines.append(', ')
        lines.append(" aPitch ")
        lines.append("  "+str(self.currentAcceleration.aPitch.Get()))
        lines.append(', ')
        lines.append(" aYaw ")
        lines.append("  "+str(self.currentAcceleration.aYaw.Get()))
        lines.append("}")
        lines.append("}")

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


class SystemState(COMMON):
    # Allowed enumerants:
    idle = 0
    initializing = 1
    runningOk = 2
    emergencyLand = 3
    safeReturn = 4
    allowed = [idle, initializing, runningOk, emergencyLand, safeReturn]
    def __init__(self, ptr=None):
        super(SystemState, self).__init__("SystemState", ptr)

    def GSER(self):
        ''' Return the GSER representation of the value '''
        lines = []
        lines.append(""+{'1': 'initializing', '4': 'safeReturn', '0': 'idle', '3': 'emergencyLand', '2': 'runningOk'}[str(self.Get())])

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
        lines.append(""+{'1': 'world', '0': 'hello', '2': 'howareyou'}[str(self.Get())])

        return ' '.join(lines)

    def PrintAll(self):
        ''' Display a variable of this type '''
        print(self.GSER() + '\n')


