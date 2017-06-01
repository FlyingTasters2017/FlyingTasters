#!/bin/bash
#**********
#*Change path to the script that starts your server
# ||
# \/
#**********
socketServerPath=/home/taste/Documents/FlyingTasters/PythonSocketServer/runSocketServer.sh
#Name of the script that starts Socket Server
socketServerPID=$(pgrep -x runSocketServer)
echo "Start of isSocketServerRunning script"
if [[ ! -z $socketServerPID ]];
then
echo "Socket server is running"
else
clear
echo "Socket server is NOT running"
${socketServerPath}
echo "end of isSocketServerRunning script"
exit
fi
