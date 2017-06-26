
#  SQLAlchemy models for types used in "dummy_integration1.asn"

from sqlalchemy.ext.declarative import declarative_base
Base = declarative_base()

from sqlalchemy import (Column, Integer, String, Boolean, Float,
                        ForeignKey, CheckConstraint, UniqueConstraint)
from sqlalchemy.orm import relationship

from dummy_integration1_asn import (
    Acceleration, Agent, Area, Color, DroneControllerInput, DroneSensorData, FeedbackToGUI, HoverAction, MyBool, MyChoice, MyEnum, MyInteger, MyOctStr, MyReal, MySeq, MySeqOf, Orientation, PixyData, Position, PositionSystemData, ReferenceFormation, ReferencePath, SafetyEvent, SystemState, T_Boolean, T_Int32, T_Int8, T_UInt32, T_UInt8, Trajectory, UserCommand, Velocity, WorldData
)

import DV


class Color_SQL(Base):
    __tablename__ = 'Color'
    __table_args__ = (UniqueConstraint('iid'),)
    black = 0
    pink = 1
    red = 2
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data=0 OR data=1 OR data=2'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Color_SQL).filter(Color_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Color()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MyBool_SQL(Base):
    __tablename__ = 'MyBool'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Boolean, nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyBool_SQL).filter(MyBool_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyBool()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MyEnum_SQL(Base):
    __tablename__ = 'MyEnum'
    __table_args__ = (UniqueConstraint('iid'),)
    hello = 0
    world = 1
    howareyou = 2
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data=0 OR data=1 OR data=2'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyEnum_SQL).filter(MyEnum_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyEnum()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MyInteger_SQL(Base):
    __tablename__ = 'MyInteger'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data>=0 and data<=255'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyInteger_SQL).filter(MyInteger_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyInteger()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MyOctStr_SQL(Base):
    __tablename__ = 'MyOctStr'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(String(3), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyOctStr_SQL).filter(MyOctStr_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyOctStr()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.SetFromPyString(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.GetPyString()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MyReal_SQL(Base):
    __tablename__ = 'MyReal'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Float, CheckConstraint('data>=-1000.0 and data<=100000.0'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyReal_SQL).filter(MyReal_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyReal()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MySeq_validity_SQL(Base):
    __tablename__ = 'MySeq_validity'
    __table_args__ = (UniqueConstraint('iid'),)
    valid = 0
    invalid = 1
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data=0 OR data=1'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MySeq_validity_SQL).filter(MySeq_validity_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MySeq_validity()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class MySeqOf_indexes_SQL(Base):
    __tablename__ = 'MySeqOf_indexes'
    __table_args__ = (UniqueConstraint('idx', 'fk_MySeqOf_iid'),)
    iid = Column(Integer, primary_key=True)
    idx = Column(Integer, CheckConstraint('idx>=0 AND idx<2'), nullable=False)
    fk_MySeqOf_iid = Column(
        Integer,
        ForeignKey('MySeqOf.iid'),
        nullable=False)
    fk_MyEnum_iid = Column(
        Integer,
        ForeignKey('MyEnum.iid'),
        nullable=False)
    array = relationship(
        "MySeqOf_SQL",
        foreign_keys=[fk_MySeqOf_iid],
        backref='arrIndexes_MySeqOf')
    data = relationship(
        "MyEnum_SQL",
        foreign_keys=[fk_MyEnum_iid])

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

class MySeqOf_SQL(Base):
    __tablename__ = 'MySeqOf'
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MySeqOf_SQL).filter(MySeqOf_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MySeqOf()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()

        for idx, idxObj in enumerate(self.arrIndexes_MySeqOf):
            pyObj.Reset(state)
            idxObj.data.assignToASN1object(pyObj[idxObj.idx])
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        for c in self._children:
            session.add(c[0])
            session.add(c[1])
        session.commit()
        return self.iid

    def __init__(self, pyObj):
        self._children = []
        state = pyObj.GetState()
        for i in xrange(pyObj.GetLength()):
            pyObj.Reset(state)
            newIndex = MySeqOf_indexes_SQL()
            newIndex.idx = i
            newIndex.array = self
            newData = MyEnum_SQL(pyObj[i])
            newIndex.data = newData
            self._children.append((newIndex, newData))

        pyObj.Reset(state)


class Orientation_SQL(Base):
    __tablename__ = 'Orientation'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Orientation_SQL).filter(Orientation_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Orientation()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.roll.assignToASN1object(pyObj.roll)
        pyObj.Reset(state)
        self.pitch.assignToASN1object(pyObj.pitch)
        pyObj.Reset(state)
        self.yaw.assignToASN1object(pyObj.yaw)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_roll_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    roll = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_roll_iid])
    fk_pitch_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    pitch = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_pitch_iid])
    fk_yaw_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    yaw = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_yaw_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.roll = MyReal_SQL(pyObj.roll)
        pyObj.Reset(state)
        self.pitch = MyReal_SQL(pyObj.pitch)
        pyObj.Reset(state)
        self.yaw = MyReal_SQL(pyObj.yaw)
        pyObj.Reset(state)


class Position_SQL(Base):
    __tablename__ = 'Position'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Position_SQL).filter(Position_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Position()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.x.assignToASN1object(pyObj.x)
        pyObj.Reset(state)
        self.y.assignToASN1object(pyObj.y)
        pyObj.Reset(state)
        self.z.assignToASN1object(pyObj.z)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_x_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    x = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_x_iid])
    fk_y_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    y = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_y_iid])
    fk_z_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    z = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_z_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.x = MyReal_SQL(pyObj.x)
        pyObj.Reset(state)
        self.y = MyReal_SQL(pyObj.y)
        pyObj.Reset(state)
        self.z = MyReal_SQL(pyObj.z)
        pyObj.Reset(state)


class PositionSystemData_SQL(Base):
    __tablename__ = 'PositionSystemData'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            PositionSystemData_SQL).filter(PositionSystemData_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = PositionSystemData()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.xAct.assignToASN1object(pyObj.xAct)
        pyObj.Reset(state)
        self.yAct.assignToASN1object(pyObj.yAct)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_xAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    xAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_xAct_iid])
    fk_yAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    yAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_yAct_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.xAct = MyReal_SQL(pyObj.xAct)
        pyObj.Reset(state)
        self.yAct = MyReal_SQL(pyObj.yAct)
        pyObj.Reset(state)


class ReferencePath_locations_indexes_SQL(Base):
    __tablename__ = 'ReferencePath_locations_indexes'
    __table_args__ = (UniqueConstraint('idx', 'fk_ReferencePath_locations_iid'),)
    iid = Column(Integer, primary_key=True)
    idx = Column(Integer, CheckConstraint('idx>=0 AND idx<3'), nullable=False)
    fk_ReferencePath_locations_iid = Column(
        Integer,
        ForeignKey('ReferencePath_locations.iid'),
        nullable=False)
    fk_Position_iid = Column(
        Integer,
        ForeignKey('Position.iid'),
        nullable=False)
    array = relationship(
        "ReferencePath_locations_SQL",
        foreign_keys=[fk_ReferencePath_locations_iid],
        backref='arrIndexes_ReferencePath_locations')
    data = relationship(
        "Position_SQL",
        foreign_keys=[fk_Position_iid])

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

class ReferencePath_locations_SQL(Base):
    __tablename__ = 'ReferencePath_locations'
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            ReferencePath_locations_SQL).filter(ReferencePath_locations_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = ReferencePath_locations()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()

        for idx, idxObj in enumerate(self.arrIndexes_ReferencePath_locations):
            pyObj.Reset(state)
            idxObj.data.assignToASN1object(pyObj[idxObj.idx])
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        for c in self._children:
            session.add(c[0])
            session.add(c[1])
        session.commit()
        return self.iid

    def __init__(self, pyObj):
        self._children = []
        state = pyObj.GetState()
        for i in xrange(pyObj.GetLength()):
            pyObj.Reset(state)
            newIndex = ReferencePath_locations_indexes_SQL()
            newIndex.idx = i
            newIndex.array = self
            newData = Position_SQL(pyObj[i])
            newIndex.data = newData
            self._children.append((newIndex, newData))

        pyObj.Reset(state)


class SafetyEvent_SQL(Base):
    __tablename__ = 'SafetyEvent'
    __table_args__ = (UniqueConstraint('iid'),)
    safe = 0
    collision = 1
    wallColl = 2
    ceilColl = 3
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data=0 OR data=1 OR data=2 OR data=3'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            SafetyEvent_SQL).filter(SafetyEvent_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = SafetyEvent()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class SystemState_SQL(Base):
    __tablename__ = 'SystemState'
    __table_args__ = (UniqueConstraint('iid'),)
    idle = 0
    initializing = 1
    runningOk = 2
    emergencyLand = 3
    safeReturn = 4
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data=0 OR data=1 OR data=2 OR data=3 OR data=4'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            SystemState_SQL).filter(SystemState_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = SystemState()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class T_Boolean_SQL(Base):
    __tablename__ = 'T_Boolean'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Boolean, nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            T_Boolean_SQL).filter(T_Boolean_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = T_Boolean()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class T_Int32_SQL(Base):
    __tablename__ = 'T_Int32'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data>=-2147483648 and data<=2147483647'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            T_Int32_SQL).filter(T_Int32_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = T_Int32()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class T_Int8_SQL(Base):
    __tablename__ = 'T_Int8'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data>=-128 and data<=127'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            T_Int8_SQL).filter(T_Int8_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = T_Int8()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class T_UInt32_SQL(Base):
    __tablename__ = 'T_UInt32'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data>=0 and data<=4294967295'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            T_UInt32_SQL).filter(T_UInt32_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = T_UInt32()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class T_UInt8_SQL(Base):
    __tablename__ = 'T_UInt8'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data>=0 and data<=255'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            T_UInt8_SQL).filter(T_UInt8_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = T_UInt8()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class TaStE_A_type_SQL(Base):
    __tablename__ = 'TaStE_A_type'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    data = Column(Boolean, nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            TaStE_A_type_SQL).filter(TaStE_A_type_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = TaStE_A_type()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class Trajectory_SQL(Base):
    __tablename__ = 'Trajectory'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Trajectory_SQL).filter(Trajectory_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Trajectory()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.x.assignToASN1object(pyObj.x)
        pyObj.Reset(state)
        self.y.assignToASN1object(pyObj.y)
        pyObj.Reset(state)
        self.z.assignToASN1object(pyObj.z)
        pyObj.Reset(state)
        self.yaw.assignToASN1object(pyObj.yaw)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_x_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    x = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_x_iid])
    fk_y_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    y = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_y_iid])
    fk_z_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    z = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_z_iid])
    fk_yaw_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    yaw = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_yaw_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.x = MyReal_SQL(pyObj.x)
        pyObj.Reset(state)
        self.y = MyReal_SQL(pyObj.y)
        pyObj.Reset(state)
        self.z = MyReal_SQL(pyObj.z)
        pyObj.Reset(state)
        self.yaw = MyReal_SQL(pyObj.yaw)
        pyObj.Reset(state)


class UserCommand_SQL(Base):
    __tablename__ = 'UserCommand'
    __table_args__ = (UniqueConstraint('iid'),)
    sysStart = 0
    sysPause = 1
    sysStop = 2
    iid = Column(Integer, primary_key=True)
    data = Column(Integer, CheckConstraint('data=0 OR data=1 OR data=2'), nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            UserCommand_SQL).filter(UserCommand_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = UserCommand()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        pyObj.Set(self.data)

    def __init__(self, pyObj):
        self.data = pyObj.Get()

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid


class Velocity_SQL(Base):
    __tablename__ = 'Velocity'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Velocity_SQL).filter(Velocity_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Velocity()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.vX.assignToASN1object(pyObj.vX)
        pyObj.Reset(state)
        self.vY.assignToASN1object(pyObj.vY)
        pyObj.Reset(state)
        self.vZ.assignToASN1object(pyObj.vZ)
        pyObj.Reset(state)
        self.vRoll.assignToASN1object(pyObj.vRoll)
        pyObj.Reset(state)
        self.vPitch.assignToASN1object(pyObj.vPitch)
        pyObj.Reset(state)
        self.vYaw.assignToASN1object(pyObj.vYaw)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_vX_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    vX = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_vX_iid])
    fk_vY_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    vY = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_vY_iid])
    fk_vZ_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    vZ = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_vZ_iid])
    fk_vRoll_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    vRoll = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_vRoll_iid])
    fk_vPitch_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    vPitch = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_vPitch_iid])
    fk_vYaw_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    vYaw = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_vYaw_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.vX = MyReal_SQL(pyObj.vX)
        pyObj.Reset(state)
        self.vY = MyReal_SQL(pyObj.vY)
        pyObj.Reset(state)
        self.vZ = MyReal_SQL(pyObj.vZ)
        pyObj.Reset(state)
        self.vRoll = MyReal_SQL(pyObj.vRoll)
        pyObj.Reset(state)
        self.vPitch = MyReal_SQL(pyObj.vPitch)
        pyObj.Reset(state)
        self.vYaw = MyReal_SQL(pyObj.vYaw)
        pyObj.Reset(state)


class Acceleration_SQL(Base):
    __tablename__ = 'Acceleration'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Acceleration_SQL).filter(Acceleration_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Acceleration()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.aX.assignToASN1object(pyObj.aX)
        pyObj.Reset(state)
        self.aY.assignToASN1object(pyObj.aY)
        pyObj.Reset(state)
        self.aZ.assignToASN1object(pyObj.aZ)
        pyObj.Reset(state)
        self.aRoll.assignToASN1object(pyObj.aRoll)
        pyObj.Reset(state)
        self.aPitch.assignToASN1object(pyObj.aPitch)
        pyObj.Reset(state)
        self.aYaw.assignToASN1object(pyObj.aYaw)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_aX_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    aX = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_aX_iid])
    fk_aY_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    aY = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_aY_iid])
    fk_aZ_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    aZ = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_aZ_iid])
    fk_aRoll_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    aRoll = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_aRoll_iid])
    fk_aPitch_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    aPitch = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_aPitch_iid])
    fk_aYaw_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    aYaw = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_aYaw_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.aX = MyReal_SQL(pyObj.aX)
        pyObj.Reset(state)
        self.aY = MyReal_SQL(pyObj.aY)
        pyObj.Reset(state)
        self.aZ = MyReal_SQL(pyObj.aZ)
        pyObj.Reset(state)
        self.aRoll = MyReal_SQL(pyObj.aRoll)
        pyObj.Reset(state)
        self.aPitch = MyReal_SQL(pyObj.aPitch)
        pyObj.Reset(state)
        self.aYaw = MyReal_SQL(pyObj.aYaw)
        pyObj.Reset(state)


class Agent_SQL(Base):
    __tablename__ = 'Agent'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Agent_SQL).filter(Agent_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Agent()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.agentID.assignToASN1object(pyObj.agentID)
        pyObj.Reset(state)
        self.agentColor.assignToASN1object(pyObj.agentColor)
        pyObj.Reset(state)
        self.currentPosition.assignToASN1object(pyObj.currentPosition)
        pyObj.Reset(state)
        self.currentOrientation.assignToASN1object(pyObj.currentOrientation)
        pyObj.Reset(state)
        self.currentVelocity.assignToASN1object(pyObj.currentVelocity)
        pyObj.Reset(state)
        self.currentAcceleration.assignToASN1object(pyObj.currentAcceleration)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_agentID_iid = Column(Integer, ForeignKey('T_Int8.iid'), nullable=False)
    agentID = relationship(
        "T_Int8_SQL",
        foreign_keys=[fk_agentID_iid])
    fk_agentColor_iid = Column(Integer, ForeignKey('Color.iid'), nullable=False)
    agentColor = relationship(
        "Color_SQL",
        foreign_keys=[fk_agentColor_iid])
    fk_currentPosition_iid = Column(Integer, ForeignKey('Position.iid'), nullable=False)
    currentPosition = relationship(
        "Position_SQL",
        foreign_keys=[fk_currentPosition_iid])
    fk_currentOrientation_iid = Column(Integer, ForeignKey('Orientation.iid'), nullable=False)
    currentOrientation = relationship(
        "Orientation_SQL",
        foreign_keys=[fk_currentOrientation_iid])
    fk_currentVelocity_iid = Column(Integer, ForeignKey('Velocity.iid'), nullable=False)
    currentVelocity = relationship(
        "Velocity_SQL",
        foreign_keys=[fk_currentVelocity_iid])
    fk_currentAcceleration_iid = Column(Integer, ForeignKey('Acceleration.iid'), nullable=False)
    currentAcceleration = relationship(
        "Acceleration_SQL",
        foreign_keys=[fk_currentAcceleration_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.agentID = T_Int8_SQL(pyObj.agentID)
        pyObj.Reset(state)
        self.agentColor = Color_SQL(pyObj.agentColor)
        pyObj.Reset(state)
        self.currentPosition = Position_SQL(pyObj.currentPosition)
        pyObj.Reset(state)
        self.currentOrientation = Orientation_SQL(pyObj.currentOrientation)
        pyObj.Reset(state)
        self.currentVelocity = Velocity_SQL(pyObj.currentVelocity)
        pyObj.Reset(state)
        self.currentAcceleration = Acceleration_SQL(pyObj.currentAcceleration)
        pyObj.Reset(state)


class Area_SQL(Base):
    __tablename__ = 'Area'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            Area_SQL).filter(Area_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = Area()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.height.assignToASN1object(pyObj.height)
        pyObj.Reset(state)
        self.width.assignToASN1object(pyObj.width)
        pyObj.Reset(state)
        self.depth.assignToASN1object(pyObj.depth)
        pyObj.Reset(state)
        self.refLocation.assignToASN1object(pyObj.refLocation)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_height_iid = Column(Integer, ForeignKey('T_Int8.iid'), nullable=False)
    height = relationship(
        "T_Int8_SQL",
        foreign_keys=[fk_height_iid])
    fk_width_iid = Column(Integer, ForeignKey('T_Int8.iid'), nullable=False)
    width = relationship(
        "T_Int8_SQL",
        foreign_keys=[fk_width_iid])
    fk_depth_iid = Column(Integer, ForeignKey('T_Int8.iid'), nullable=False)
    depth = relationship(
        "T_Int8_SQL",
        foreign_keys=[fk_depth_iid])
    fk_refLocation_iid = Column(Integer, ForeignKey('Position.iid'), nullable=False)
    refLocation = relationship(
        "Position_SQL",
        foreign_keys=[fk_refLocation_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.height = T_Int8_SQL(pyObj.height)
        pyObj.Reset(state)
        self.width = T_Int8_SQL(pyObj.width)
        pyObj.Reset(state)
        self.depth = T_Int8_SQL(pyObj.depth)
        pyObj.Reset(state)
        self.refLocation = Position_SQL(pyObj.refLocation)
        pyObj.Reset(state)


class DroneControllerInput_SQL(Base):
    __tablename__ = 'DroneControllerInput'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            DroneControllerInput_SQL).filter(DroneControllerInput_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = DroneControllerInput()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.yawrateRef.assignToASN1object(pyObj.yawrateRef)
        pyObj.Reset(state)
        self.pitchRef.assignToASN1object(pyObj.pitchRef)
        pyObj.Reset(state)
        self.rollRef.assignToASN1object(pyObj.rollRef)
        pyObj.Reset(state)
        self.thrustRef.assignToASN1object(pyObj.thrustRef)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_yawrateRef_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    yawrateRef = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_yawrateRef_iid])
    fk_pitchRef_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    pitchRef = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_pitchRef_iid])
    fk_rollRef_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    rollRef = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_rollRef_iid])
    fk_thrustRef_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    thrustRef = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_thrustRef_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.yawrateRef = MyReal_SQL(pyObj.yawrateRef)
        pyObj.Reset(state)
        self.pitchRef = MyReal_SQL(pyObj.pitchRef)
        pyObj.Reset(state)
        self.rollRef = MyReal_SQL(pyObj.rollRef)
        pyObj.Reset(state)
        self.thrustRef = MyReal_SQL(pyObj.thrustRef)
        pyObj.Reset(state)


class DroneSensorData_SQL(Base):
    __tablename__ = 'DroneSensorData'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            DroneSensorData_SQL).filter(DroneSensorData_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = DroneSensorData()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.yawAct.assignToASN1object(pyObj.yawAct)
        pyObj.Reset(state)
        self.pitchAct.assignToASN1object(pyObj.pitchAct)
        pyObj.Reset(state)
        self.rollAct.assignToASN1object(pyObj.rollAct)
        pyObj.Reset(state)
        self.baropAct.assignToASN1object(pyObj.baropAct)
        pyObj.Reset(state)
        self.accxAct.assignToASN1object(pyObj.accxAct)
        pyObj.Reset(state)
        self.accyAct.assignToASN1object(pyObj.accyAct)
        pyObj.Reset(state)
        self.acczAct.assignToASN1object(pyObj.acczAct)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_yawAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    yawAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_yawAct_iid])
    fk_pitchAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    pitchAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_pitchAct_iid])
    fk_rollAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    rollAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_rollAct_iid])
    fk_baropAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    baropAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_baropAct_iid])
    fk_accxAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    accxAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_accxAct_iid])
    fk_accyAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    accyAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_accyAct_iid])
    fk_acczAct_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    acczAct = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_acczAct_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.yawAct = MyReal_SQL(pyObj.yawAct)
        pyObj.Reset(state)
        self.pitchAct = MyReal_SQL(pyObj.pitchAct)
        pyObj.Reset(state)
        self.rollAct = MyReal_SQL(pyObj.rollAct)
        pyObj.Reset(state)
        self.baropAct = MyReal_SQL(pyObj.baropAct)
        pyObj.Reset(state)
        self.accxAct = MyReal_SQL(pyObj.accxAct)
        pyObj.Reset(state)
        self.accyAct = MyReal_SQL(pyObj.accyAct)
        pyObj.Reset(state)
        self.acczAct = MyReal_SQL(pyObj.acczAct)
        pyObj.Reset(state)


class HoverAction_SQL(Base):
    __tablename__ = 'HoverAction'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            HoverAction_SQL).filter(HoverAction_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = HoverAction()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.yaw_rate.assignToASN1object(pyObj.yaw_rate)
        pyObj.Reset(state)
        self.duration.assignToASN1object(pyObj.duration)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_yaw_rate_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    yaw_rate = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_yaw_rate_iid])
    fk_duration_iid = Column(Integer, ForeignKey('MyReal.iid'), nullable=False)
    duration = relationship(
        "MyReal_SQL",
        foreign_keys=[fk_duration_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.yaw_rate = MyReal_SQL(pyObj.yaw_rate)
        pyObj.Reset(state)
        self.duration = MyReal_SQL(pyObj.duration)
        pyObj.Reset(state)


class MySeq_SQL(Base):
    __tablename__ = 'MySeq'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MySeq_SQL).filter(MySeq_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MySeq()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.input_data.assignToASN1object(pyObj.input_data)
        pyObj.Reset(state)
        self.output_data.assignToASN1object(pyObj.output_data)
        pyObj.Reset(state)
        self.validity.assignToASN1object(pyObj.validity)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_input_data_iid = Column(Integer, ForeignKey('MyInteger.iid'), nullable=False)
    input_data = relationship(
        "MyInteger_SQL",
        foreign_keys=[fk_input_data_iid])
    fk_output_data_iid = Column(Integer, ForeignKey('MyInteger.iid'), nullable=False)
    output_data = relationship(
        "MyInteger_SQL",
        foreign_keys=[fk_output_data_iid])
    fk_validity_iid = Column(Integer, ForeignKey('MySeq_validity.iid'), nullable=False)
    validity = relationship(
        "MySeq_validity_SQL",
        foreign_keys=[fk_validity_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.input_data = MyInteger_SQL(pyObj.input_data)
        pyObj.Reset(state)
        self.output_data = MyInteger_SQL(pyObj.output_data)
        pyObj.Reset(state)
        self.validity = MySeq_validity_SQL(pyObj.validity)
        pyObj.Reset(state)


class PixyData_SQL(Base):
    __tablename__ = 'PixyData'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            PixyData_SQL).filter(PixyData_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = PixyData()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.xPix.assignToASN1object(pyObj.xPix)
        pyObj.Reset(state)
        self.yPix.assignToASN1object(pyObj.yPix)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_xPix_iid = Column(Integer, ForeignKey('T_UInt32.iid'), nullable=False)
    xPix = relationship(
        "T_UInt32_SQL",
        foreign_keys=[fk_xPix_iid])
    fk_yPix_iid = Column(Integer, ForeignKey('T_UInt32.iid'), nullable=False)
    yPix = relationship(
        "T_UInt32_SQL",
        foreign_keys=[fk_yPix_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.xPix = T_UInt32_SQL(pyObj.xPix)
        pyObj.Reset(state)
        self.yPix = T_UInt32_SQL(pyObj.yPix)
        pyObj.Reset(state)


class ReferenceFormation_nodes_indexes_SQL(Base):
    __tablename__ = 'ReferenceFormation_nodes_indexes'
    __table_args__ = (UniqueConstraint('idx', 'fk_ReferenceFormation_nodes_iid'),)
    iid = Column(Integer, primary_key=True)
    idx = Column(Integer, CheckConstraint('idx>=0 AND idx<5'), nullable=False)
    fk_ReferenceFormation_nodes_iid = Column(
        Integer,
        ForeignKey('ReferenceFormation_nodes.iid'),
        nullable=False)
    fk_T_Int8_iid = Column(
        Integer,
        ForeignKey('T_Int8.iid'),
        nullable=False)
    array = relationship(
        "ReferenceFormation_nodes_SQL",
        foreign_keys=[fk_ReferenceFormation_nodes_iid],
        backref='arrIndexes_ReferenceFormation_nodes')
    data = relationship(
        "T_Int8_SQL",
        foreign_keys=[fk_T_Int8_iid])

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

class ReferenceFormation_nodes_SQL(Base):
    __tablename__ = 'ReferenceFormation_nodes'
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            ReferenceFormation_nodes_SQL).filter(ReferenceFormation_nodes_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = ReferenceFormation_nodes()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()

        for idx, idxObj in enumerate(self.arrIndexes_ReferenceFormation_nodes):
            pyObj.Reset(state)
            idxObj.data.assignToASN1object(pyObj[idxObj.idx])
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        for c in self._children:
            session.add(c[0])
            session.add(c[1])
        session.commit()
        return self.iid

    def __init__(self, pyObj):
        self._children = []
        state = pyObj.GetState()
        for i in xrange(pyObj.GetLength()):
            pyObj.Reset(state)
            newIndex = ReferenceFormation_nodes_indexes_SQL()
            newIndex.idx = i
            newIndex.array = self
            newData = T_Int8_SQL(pyObj[i])
            newIndex.data = newData
            self._children.append((newIndex, newData))

        pyObj.Reset(state)


class ReferencePath_actions_indexes_SQL(Base):
    __tablename__ = 'ReferencePath_actions_indexes'
    __table_args__ = (UniqueConstraint('idx', 'fk_ReferencePath_actions_iid'),)
    iid = Column(Integer, primary_key=True)
    idx = Column(Integer, CheckConstraint('idx>=0 AND idx<3'), nullable=False)
    fk_ReferencePath_actions_iid = Column(
        Integer,
        ForeignKey('ReferencePath_actions.iid'),
        nullable=False)
    fk_HoverAction_iid = Column(
        Integer,
        ForeignKey('HoverAction.iid'),
        nullable=False)
    array = relationship(
        "ReferencePath_actions_SQL",
        foreign_keys=[fk_ReferencePath_actions_iid],
        backref='arrIndexes_ReferencePath_actions')
    data = relationship(
        "HoverAction_SQL",
        foreign_keys=[fk_HoverAction_iid])

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

class ReferencePath_actions_SQL(Base):
    __tablename__ = 'ReferencePath_actions'
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            ReferencePath_actions_SQL).filter(ReferencePath_actions_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = ReferencePath_actions()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()

        for idx, idxObj in enumerate(self.arrIndexes_ReferencePath_actions):
            pyObj.Reset(state)
            idxObj.data.assignToASN1object(pyObj[idxObj.idx])
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        for c in self._children:
            session.add(c[0])
            session.add(c[1])
        session.commit()
        return self.iid

    def __init__(self, pyObj):
        self._children = []
        state = pyObj.GetState()
        for i in xrange(pyObj.GetLength()):
            pyObj.Reset(state)
            newIndex = ReferencePath_actions_indexes_SQL()
            newIndex.idx = i
            newIndex.array = self
            newData = HoverAction_SQL(pyObj[i])
            newIndex.data = newData
            self._children.append((newIndex, newData))

        pyObj.Reset(state)


class WorldData_SQL(Base):
    __tablename__ = 'WorldData'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            WorldData_SQL).filter(WorldData_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = WorldData()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.agentData.assignToASN1object(pyObj.agentData)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_agentData_iid = Column(Integer, ForeignKey('Agent.iid'), nullable=False)
    agentData = relationship(
        "Agent_SQL",
        foreign_keys=[fk_agentData_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.agentData = Agent_SQL(pyObj.agentData)
        pyObj.Reset(state)


class FeedbackToGUI_SQL(Base):
    __tablename__ = 'FeedbackToGUI'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            FeedbackToGUI_SQL).filter(FeedbackToGUI_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = FeedbackToGUI()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.flight.assignToASN1object(pyObj.flight)
        pyObj.Reset(state)
        self.notification.assignToASN1object(pyObj.notification)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_flight_iid = Column(Integer, ForeignKey('WorldData.iid'), nullable=False)
    flight = relationship(
        "WorldData_SQL",
        foreign_keys=[fk_flight_iid])
    fk_notification_iid = Column(Integer, ForeignKey('SystemState.iid'), nullable=False)
    notification = relationship(
        "SystemState_SQL",
        foreign_keys=[fk_notification_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.flight = WorldData_SQL(pyObj.flight)
        pyObj.Reset(state)
        self.notification = SystemState_SQL(pyObj.notification)
        pyObj.Reset(state)


class MyChoice_SQL(Base):
    __tablename__ = 'MyChoice'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)
    kind = Column(Integer, nullable=False)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyChoice_SQL).filter(MyChoice_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyChoice()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.kind.Set(self.kind)
        if self.kind == DV.a_PRESENT:
            pyObj.Reset(state)
            self.a.assignToASN1object(pyObj.a)
        if self.kind == DV.b_PRESENT:
            pyObj.Reset(state)
            self.b.assignToASN1object(pyObj.b)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_a_iid = Column(Integer, ForeignKey('TaStE_A_type.iid'), nullable=True)
    a = relationship(
        "TaStE_A_type_SQL",
        foreign_keys=[fk_a_iid])
    fk_b_iid = Column(Integer, ForeignKey('MySeq.iid'), nullable=True)
    b = relationship(
        "MySeq_SQL",
        foreign_keys=[fk_b_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.kind = pyObj.kind.Get()
        pyObj.Reset(state)
        if self.kind == DV.a_PRESENT:
            self.a = TaStE_A_type_SQL(pyObj.a)
            pyObj.Reset(state)
        if self.kind == DV.b_PRESENT:
            self.b = MySeq_SQL(pyObj.b)
            pyObj.Reset(state)


class ReferenceFormation_SQL(Base):
    __tablename__ = 'ReferenceFormation'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            ReferenceFormation_SQL).filter(ReferenceFormation_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = ReferenceFormation()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.nodes.assignToASN1object(pyObj.nodes)
        pyObj.Reset(state)
        self.anchor.assignToASN1object(pyObj.anchor)
        pyObj.Reset(state)
        self.formationAnchorPosition.assignToASN1object(pyObj.formationAnchorPosition)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_nodes_iid = Column(Integer, ForeignKey('ReferenceFormation_nodes.iid'), nullable=False)
    nodes = relationship(
        "ReferenceFormation_nodes_SQL",
        foreign_keys=[fk_nodes_iid])
    fk_anchor_iid = Column(Integer, ForeignKey('T_Int8.iid'), nullable=False)
    anchor = relationship(
        "T_Int8_SQL",
        foreign_keys=[fk_anchor_iid])
    fk_formationAnchorPosition_iid = Column(Integer, ForeignKey('Position.iid'), nullable=False)
    formationAnchorPosition = relationship(
        "Position_SQL",
        foreign_keys=[fk_formationAnchorPosition_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.nodes = ReferenceFormation_nodes_SQL(pyObj.nodes)
        pyObj.Reset(state)
        self.anchor = T_Int8_SQL(pyObj.anchor)
        pyObj.Reset(state)
        self.formationAnchorPosition = Position_SQL(pyObj.formationAnchorPosition)
        pyObj.Reset(state)


class ReferencePath_SQL(Base):
    __tablename__ = 'ReferencePath'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            ReferencePath_SQL).filter(ReferencePath_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = ReferencePath()
        self.assignToASN1object(pyObj)
        self._cache = pyObj
        return pyObj

    def assignToASN1object(self, pyObj):
        state = pyObj.GetState()
        pyObj.Reset(state)
        self.locations.assignToASN1object(pyObj.locations)
        pyObj.Reset(state)
        self.actions.assignToASN1object(pyObj.actions)
        pyObj.Reset(state)

    def save(self, session):
        session.add(self)
        session.commit()
        return self.iid

    fk_locations_iid = Column(Integer, ForeignKey('ReferencePath_locations.iid'), nullable=False)
    locations = relationship(
        "ReferencePath_locations_SQL",
        foreign_keys=[fk_locations_iid])
    fk_actions_iid = Column(Integer, ForeignKey('ReferencePath_actions.iid'), nullable=False)
    actions = relationship(
        "ReferencePath_actions_SQL",
        foreign_keys=[fk_actions_iid])

    def __init__(self, pyObj):
        state = pyObj.GetState()
        self.locations = ReferencePath_locations_SQL(pyObj.locations)
        pyObj.Reset(state)
        self.actions = ReferencePath_actions_SQL(pyObj.actions)
        pyObj.Reset(state)

