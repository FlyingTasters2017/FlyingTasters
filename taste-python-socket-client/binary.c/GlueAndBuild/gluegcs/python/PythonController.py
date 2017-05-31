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
i_SensorData = ctypes.c_int.in_dll(PythonAccess, "ii_SensorData").value
i_takeoff = ctypes.c_int.in_dll(PythonAccess, "ii_takeoff").value
SendTC_takeoff = PythonAccess.SendTC_takeoff

class Poll_gcs(threading.Thread):
    def run(self):
        self._bDie = False
        while True:
            if self._bDie:
                return
            self._msgQueue = OpenMsgQueueForReading(str(os.geteuid()) + "_gcs_PI_Python_queue")
            if (self._msgQueue != -1): break
            print "Communication channel over %d_gcs_PI_Python_queue not established yet...\n" % os.geteuid()
            time.sleep(1)
        bufferSize = GetMsgQueueBufferSize(self._msgQueue)
        self._pMem = ctypes.create_string_buffer(bufferSize).raw
        while not self._bDie:
            self.messageReceivedType = RetrieveMessageFromQueue(self._msgQueue, bufferSize, self._pMem)
            if self.messageReceivedType == -1:
                time.sleep(0.01)
                continue
            ProcessTM(self)

def Invoke_takeoff(var_MyReal):
    if -1 == SendTC_takeoff(var_MyReal._ptr):
        print 'Failed to send TC: takeoff...\n'
        raise IOError("takeoff")

def ProcessTM(self):
    if self.messageReceivedType == i_SensorData:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: SensorData" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param updated_thrust
        var_updated_thrust = dataview_uniq_asn.MyReal()
        var_updated_thrust.SetData(self._pMem)
        print "Parameter updated_thrust:"
        var_updated_thrust.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_MyReal(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup

if __name__ == "__main__":
    poll_gcs = Poll_gcs()
    poll_gcs.start()
    try:
        time.sleep(1e8)
    except:
        poll_gcs._bDie = True
        poll_gcs.join()