tar extended-remote :2331
file binary/binaries/cortex_m_partition
load binary/binaries/cortex_m_partition
monitor reset
set pagination off
b control_laws.c:26
commands 1
    silent
    echo Acc X :
    p acc_x
    echo Acc Y :
    p acc_y
    echo Acc Z :
    p acc_z
    echo \n
    c
end
c

