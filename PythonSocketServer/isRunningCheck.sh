#!/bin/bash
service=/home/taste/Documents/FlyingTasters/PythonSocketServer/runSocketServer.sh

if (ps -ef | grep "runsocketServer.sh") #(( $(ps -ef | grep -v grep | grep $service | wc -l) > 0 ))
then
echo "service is running"
else
echo "service is NOT running"
fi
