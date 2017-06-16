#!/bin/bash -e

# This script will build your TASTE system.

# You should not change this file as it was automatically generated.

# If you need additional preprocessing, there are three hook files
# that you can provide and that are called dring the build:
# user_init_pre.sh, user_init_post.sh and user_init_last.sh
# These files will never get overwritten by TASTE.'

# Inside these files you may set some environment variables:
#    C_INCLUDE_PATH=/usr/include/xenomai/analogy/:${C_INCLUDE_PATH}
#    unset USE_POHIC   
unset USE_POHIC   
unset USE_POHIADA

CWD=$(pwd)

[ -z "$ADA_PROJECT_PATH" ] && \
    export ADA_PROJECT_PATH=$HOME/GitHub/Certyflie/Ada_Drivers_Library/boards

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

# Check if Dataview references existing files 
taste-extract-asn-from-design.exe -i "$INTERFACEVIEW" -j /tmp/dv.asn

cd "$SKELS" && rm -f copter_imu.zip && zip copter_imu copter_imu/* && cd $OLDPWD

cd "$SKELS" && rm -f control_laws.zip && zip control_laws control_laws/* && cd $OLDPWD

cd "$SKELS" && rm -f drone.zip && zip drone drone/* && cd $OLDPWD

[ ! -z "$CLEANUP" ] && rm -rf binary*

if [ -f ConcurrencyView.pro ]
then
    ORCHESTRATOR_OPTIONS+=" -w ConcurrencyView.pro "
fi

if [ -f user_init_post.sh ]
then
    echo -e "${INFO} Executing user-defined post-init script"
    source user_init_post.sh
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

# Option to compile in debug

cd "$CWD" && assert-builder-ocarina.py \
	--fast \
	--debug \
	--aadlv2 \
	--keep-case \
	--interfaceView "$INTERFACEVIEW" \
	--deploymentView "$DEPLOYMENTVIEW" \
	-o "$OUTPUTDIR" \
	--subAda copter_imu:"$SKELS"/copter_imu.zip \
	--subC control_laws:"$SKELS"/control_laws.zip \
	--subAda drone:"$SKELS"/drone.zip \
	--with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/config \
        --with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/drivers \
        --with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/hal \
	--with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/lib \
	--with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/modules \
	--with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/modules/mahony \
	--with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/types \
        --with-extra-Ada-code cortex_m_partition:$HOME/GitHub/Certyflie/utils \
	$ORCHESTRATOR_OPTIONS

arm-eabi-objcopy -O binary binary/binaries/cortex_m_partition binary/binaries/cortex_m_partition.flash_image

echo -e "\nNow burn the new image with:\n"
echo "   sudo dfu-util -d 0483:df11 -a 0 -s 0x08000000 \\"
echo "       -D binary/binaries/cortex_m_partition.flash_image"

