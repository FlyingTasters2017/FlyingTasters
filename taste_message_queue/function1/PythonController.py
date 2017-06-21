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
i_TC_from_TASTE = ctypes.c_int.in_dll(PythonAccess, "ii_TC_from_TASTE").value
i_TM_from_CF = ctypes.c_int.in_dll(PythonAccess, "ii_TM_from_CF").value
SendTC_TM_from_CF = PythonAccess.SendTC_TM_from_CF

class Poll_function2(threading.Thread):
    def run(self):
        self._bDie = False
        while True:
            if self._bDie:
                return
            self._msgQueue = OpenMsgQueueForReading(str(os.geteuid()) + "_function2_PI_Python_queue")
            if (self._msgQueue != -1): break
            print "Communication channel over %d_function2_PI_Python_queue not established yet...\n" % os.geteuid()
            time.sleep(1)
        bufferSize = GetMsgQueueBufferSize(self._msgQueue)
        self._pMem = ctypes.create_string_buffer(bufferSize).raw
        while not self._bDie:
            self.messageReceivedType = RetrieveMessageFromQueue(self._msgQueue, bufferSize, self._pMem)
            if self.messageReceivedType == -1:
                time.sleep(0.01)
                continue
            ProcessTM(self)

def Invoke_TM_from_CF(var_TM_T):
    if -1 == SendTC_TM_from_CF(var_TM_T._ptr):
        print 'Failed to send TC: TM_from_CF...\n'
        raise IOError("TM_from_CF")

def ProcessTM(self):
    if self.messageReceivedType == i_TC_from_TASTE:
        print "\n"+chr(27)+"[32m" + "Received Telemetry: TC_from_TASTE" + chr(27) + "[0m\n"
        backup = self._pMem
        # Read the data for param tc_data
        var_tc_data = dataview_uniq_asn.TC_T()
        var_tc_data.SetData(self._pMem)
        print "Parameter tc_data:"
        var_tc_data.PrintAll()
        print
        # self._pMem = DV.MovePtrBySizeOf_TC_T(self._pMem)
        # Revert the pointer to start of the data
        self._pMem = backup

if __name__ == "__main__":
    poll_function2 = Poll_function2()
    poll_function2.start()
    try:
        time.sleep(1e8)
    except:
        poll_function2._bDie = True
        poll_function2.join()
