#!/bin/bash
#
myServicePID=$(pgrep -x runSocketServer)
if [[ ! -z $myServicePID ]];
then
echo "service is running"
else
./runSocketServer.sh
echo "service is NOT running" 
fi
