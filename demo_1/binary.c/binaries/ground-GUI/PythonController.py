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
import dataview_uniq_asn
i_Height = ctypes.c_int.in_dll(PythonAccess, "ii_Height").value
i_Takeoff = ctypes.c_int.in_dll(PythonAccess, "ii_Takeoff").value
SendTC_Takeoff = PythonAccess.SendTC_Takeoff

class Poll_ground(threading.Thread):
    def run(self):
        self._bDie = False
        while True:
            if self._bDie:
                return
            self._msgQueue = OpenMsgQueueForReading(str(os.geteuid()) + "_ground_PI_Python_queue")
            if (self._msgQueue != -1): break
            print "Communication channel over %d_ground_PI_Python_queue not established yet...\n" % os.geteuid()
            time.sleep(1)
        bufferSize = GetMsgQueueBufferSize(self._msgQueue)
        self._pMem = ctypes.create_string_buffer(bufferSize).raw
        while not self._bDie:
            self.messageReceivedType = RetrieveMessageFromQueue(self._msgQueue, bufferSize, self._pMem)
            if self.messageReceivedType == -1:
                time.sleep(0.01)
                continue
            ProcessTM(self)

def Invoke_Takeoff(var_MyReal):
    if -1 == SendTC_Takeoff(var_MyReal._ptr):
        print 'Failed to send TC: Takeoff...\n'
        raise IOError("Takeoff")

def ProcessTM(self):
    if self.messageReceivedType == i_Height:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: Height" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param h
        var_h = dataview_uniq_asn.MyReal()
        var_h.SetData(self._pMem)
        print "Parameter h:"
        var_h.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_MyReal(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup

if __name__ == "__main__":
    poll_ground = Poll_ground()
    poll_ground.start()
    try:
        time.sleep(1e8)
    except:
        poll_ground._bDie = True
        poll_ground.join()