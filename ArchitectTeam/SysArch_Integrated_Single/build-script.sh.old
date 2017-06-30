#!/bin/bash

# This script will build your TASTE system (by default with the C runtime).

# You should not change this file as it was automatically generated.

# If you need additional preprocessing, create a file named 'user_init_pre.sh'
# and/or 'user_init_post.sh - They will never get overwritten.'

# Inside these files you may set some environment variables:
#    C_INCLUDE_PATH=/usr/include/xenomai/analogy/:${C_INCLUDE_PATH}
#    unset USE_POHIC   

CWD=$(pwd)

if [ -t 0 ] ; then
    COLORON="\e[1m\e[32m"
    COLOROFF="\e[0m"
else
    COLORON=""
    COLOROFF=""
fi
INFO="${COLORON}[INFO]${COLOROFF}"

if [ -f user_init_pre.sh ]
then
    echo -e "${INFO} Executing user-defined init script"
    source user_init_pre.sh
fi

# Use PolyORB-HI-C runtime
USE_POHIC=1

# Detect models from Ellidiss tools v2, and convert them to 1.3
INTERFACEVIEW=InterfaceView.aadl
grep "version => \"2" InterfaceView.aadl >/dev/null && {
    echo -e "${INFO} Converting interface view from V2 to V1.3"
    TASTE --load-interface-view InterfaceView.aadl --export-interface-view-to-1_3 __iv_1_3.aadl
    INTERFACEVIEW=__iv_1_3.aadl
};

if [ -z "$DEPLOYMENTVIEW" ]
then
    DEPLOYMENTVIEW=DeploymentView.aadl
fi

# Detect models from Ellidiss tools v2, and convert them to 1.3
grep "version => \"2" "$DEPLOYMENTVIEW" >/dev/null && {
    echo -e "${INFO} Converting deployment view from V2 to V1.3"
    TASTE --load-deployment-view "$DEPLOYMENTVIEW" --export-deployment-view-to-1_3 __dv_1_3.aadl
    DEPLOYMENTVIEW=__dv_1_3.aadl
};

SKELS="./"

# Update the data view with local paths
taste-update-data-view

# Generate code for OpenGEODE function system_supervisor
cd "$SKELS"/system_supervisor && opengeode --toAda system_supervisor.pr system_structure.pr && cd $OLDPWD

# Generate code for OpenGEODE function as_supervisor
cd "$SKELS"/as_supervisor && opengeode --toAda as_supervisor.pr system_structure.pr && cd $OLDPWD

# Generate code for OpenGEODE function houston
cd "$SKELS"/houston && opengeode --toAda houston.pr system_structure.pr && cd $OLDPWD

# Generate code for OpenGEODE function ms_supervisor
cd "$SKELS"/ms_supervisor && opengeode --toAda ms_supervisor.pr system_structure.pr && cd $OLDPWD

# Generate code for OpenGEODE function enable_pass
cd "$SKELS"/enable_pass && opengeode --toAda enable_pass.pr system_structure.pr && cd $OLDPWD

cd "$SKELS" && rm -f system_supervisor.zip && zip system_supervisor system_supervisor/* && cd $OLDPWD

cd "$SKELS" && rm -f ms_communication.zip && zip ms_communication ms_communication/* && cd $OLDPWD

cd "$SKELS" && rm -f as_supervisor.zip && zip as_supervisor as_supervisor/* && cd $OLDPWD

cd "$SKELS" && rm -f houston.zip && zip houston houston/* && cd $OLDPWD

cd "$SKELS" && rm -f msd_processing.zip && zip msd_processing msd_processing/* && cd $OLDPWD

cd "$SKELS" && rm -f asd_processing.zip && zip asd_processing asd_processing/* && cd $OLDPWD

cd "$SKELS" && rm -f mission_safety.zip && zip mission_safety mission_safety/* && cd $OLDPWD

cd "$SKELS" && rm -f trajectory_generator.zip && zip trajectory_generator trajectory_generator/* && cd $OLDPWD

cd "$SKELS" && rm -f drone_control.zip && zip drone_control drone_control/* && cd $OLDPWD

cd "$SKELS" && rm -f control_data_storage.zip && zip control_data_storage control_data_storage/* && cd $OLDPWD

cd "$SKELS" && rm -f world_model.zip && zip world_model world_model/* && cd $OLDPWD

cd "$SKELS" && rm -f socket_client.zip && zip socket_client socket_client/* && cd $OLDPWD

cd "$SKELS" && rm -f ms_supervisor.zip && zip ms_supervisor ms_supervisor/* && cd $OLDPWD

cd "$SKELS" && rm -f enable_pass.zip && zip enable_pass enable_pass/* && cd $OLDPWD

[ ! -z "$CLEANUP" ] && rm -rf binary*

if [ -f ConcurrencyView.pro ]
then
    ORCHESTRATOR_OPTIONS+=" -w ConcurrencyView.pro "
fi

if [ ! -z "$USE_POHIC" ]
then
    OUTPUTDIR=binary.c
    ORCHESTRATOR_OPTIONS+=" -p "
elif [ ! -z "$USE_POHIADA" ]
then
    OUTPUTDIR=binary.ada
else
    OUTPUTDIR=binary
fi

if [ -f user_init_post.sh ]
then
    echo -e "${INFO} Executing user-defined init script"
    source user_init_post.sh
fi

cd "$CWD" && assert-builder-ocarina.py \
	--fast \
	--debug \
	--aadlv2 \
	--keep-case \
	--interfaceView "$INTERFACEVIEW" \
	--deploymentView "$DEPLOYMENTVIEW" \
	-o "$OUTPUTDIR" \
	--subAda system_supervisor:"$SKELS"/system_supervisor.zip \
	--subC ms_communication:"$SKELS"/ms_communication.zip \
	--subAda as_supervisor:"$SKELS"/as_supervisor.zip \
	--subAda houston:"$SKELS"/houston.zip \
	--subC msd_processing:"$SKELS"/msd_processing.zip \
	--subC asd_processing:"$SKELS"/asd_processing.zip \
	--subC mission_safety:"$SKELS"/mission_safety.zip \
	--subC trajectory_generator:"$SKELS"/trajectory_generator.zip \
	--subSIMULINK drone_control:"$SKELS"/drone_control.zip \
	--subC control_data_storage:"$SKELS"/control_data_storage.zip \
	--subC world_model:"$SKELS"/world_model.zip \
	--subC socket_client:"$SKELS"/socket_client.zip \
	--subAda ms_supervisor:"$SKELS"/ms_supervisor.zip \
	--subAda enable_pass:"$SKELS"/enable_pass.zip \
	$ORCHESTRATOR_OPTIONS
