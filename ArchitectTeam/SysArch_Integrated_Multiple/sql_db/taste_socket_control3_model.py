
#  SQLAlchemy models for types used in "taste_socket_control3.asn"

from sqlalchemy.ext.declarative import declarative_base
Base = declarative_base()

from sqlalchemy import (Column, Integer, String, Boolean, Float,
                        ForeignKey, CheckConstraint, UniqueConstraint)
from sqlalchemy.orm import relationship

from taste_socket_control3_asn import (
    MyBool, MyChoice, MyDroneData, MyEnum, MyInteger, MyOctStr, MyReal, MySensorData, MySeq, MySeqOf, T_Boolean, T_Int32, T_Int8, T_UInt32, T_UInt8
)

import DV


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


class MySensorData_SQL(Base):
    __tablename__ = 'MySensorData'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MySensorData_SQL).filter(MySensorData_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MySensorData()
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


class MyDroneData_SQL(Base):
    __tablename__ = 'MyDroneData'
    __table_args__ = (UniqueConstraint('iid'),)
    iid = Column(Integer, primary_key=True)

    @staticmethod
    def loadFromDB(session, iid):
        return session.query(
            MyDroneData_SQL).filter(MyDroneData_SQL.iid == iid).first()

    @property
    def asn1(self):
        if hasattr(self, "_cache"):
            return self._cache
        pyObj = MyDroneData()
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

