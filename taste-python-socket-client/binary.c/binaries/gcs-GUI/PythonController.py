import threading, time, sys, os, ctypes

import DV
PythonAccess = ctypes.cdll.LoadLibrary("./PythonAccess.so")
OpenMsgQueueForReading = PythonAccess.OpenMsgQueueForReading
OpenMsgQueueForReading.restype = ctypes.c_int
CloseMsgQueue =  PythonAccess.CloseMsgQueue
GetMsgQueueBufferSize = PythonAccess.GetMsgQueueBufferSize
GetMsgQueueBufferSize.restype = ctypes.c_int
RetrieveMessageFromQueue = PythonAccess.RetrieveMessageFromQueue
RetrieveMessageFromQueue.restype = ctypes.c_int
i_takeoff = ctypes.c_int.in_dll(PythonAccess, "ii_takeoff").value
SendTC_takeoff = PythonAccess.SendTC_takeoff


def Invoke_takeoff(var_MyReal):
    if -1 == SendTC_takeoff(var_MyReal._ptr):
        print 'Failed to send TC: takeoff...\n'
        raise IOError("takeoff")

def ProcessTM(self):
    pass


