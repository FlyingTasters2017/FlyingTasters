# FlyingTasters

Welcome to **FlyingTasters** -the open source solution for [CrazyFlie](https://www.bitcraze.io/crazyflie-2/) formation flight developed by [PDEng](https://www.tue.nl/en/education/tue-graduate-school/pdeng-programs/pdeng-programs-overview/pdeng-software-technology-st/) trainees at [TU-Eindhoven](https://www.tue.nl/) in colaboration with [ESA](http://www.esa.int/ESA). This project is powered by the [TASTE](http://taste.tuxfamily.org/) tool chain.

This wiki is the main source to documentation for developers working with (or contributing to) FlyingTasters project. If it is the first time you learn about FlyingTasters we recommend you check our Facebook [page](https://www.facebook.com/flyingtasters/).

Here you will find detailed description of:

* The rationale and design decisions
* The process describing how to build your own FlyingTasters
* The steps of how to contribute to the FlyingTasters project

# High level diagram of the system and its components
![external library](https://github.com/FlyingTasters2017/FlyingTasters/blob/development/images/high_level_diagram_of_the_system.jpeg)


# User's manual 
This manual is intended to give assistance to the people using the **FlyingTasters** system. In order to have this system up and running this is the process that the user needs to follow.

### Pre-requirements:
These are the pre requirements that the user should implement before running the project:

**1** This project uses 3 quadcopters - [Crazyflie 2.0](https://www.bitcraze.io/crazyflie-2/)   

**2** One radio dongle - see [link](https://www.bitcraze.io/2012/02/the-crazyradio-dongle/)

**3** One PixyCam - see [link](http://cmucam.org/projects/cmucam5)

**4** Non reflective floor carpet - see the picture bellow 

![external library](https://github.com/FlyingTasters2017/FlyingTasters/blob/development/images/markers.jpeg)

**5** Isolated room

**6** Drone markers - see picture bellow

![external library](https://github.com/FlyingTasters2017/FlyingTasters/blob/development/images/markers_diff_col.jpg)

### Prepare the PixyCam

**1** Follow the instructions on this [link](http://cmucam.org/projects/cmucam5/wiki/Installing_PixyMon_on_Linux)

**2** Train the camera following the instructions on this [link](https://www.youtube.com/watch?v=7znEmgYZXL0&feature=youtu.be). When training the camera use the drone markers that you want to stick on top of the drone as showed on the picture above. 

**3** Follow the steps described [here](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Developer's-manual#configuring-the-pixy-camera)

### Prepare environement
This chapter explains how to prepare the environment for the drones formation flight. See the picture bellow for reference. 

![external library](https://github.com/FlyingTasters2017/FlyingTasters/blob/development/images/room_set_up.jpeg)

**1** Arrange a room where the drones can fly safely

**2** Attach the PixyCam on 1.7 meter height

**3** Set the non reflective floor carpet on the floor, under the camera's view field.

**4** Set the drones on the carpet under the camera, at safe distance from each other

**5** Make sure that the x-coordinate of the Crazyflie (x crazyflie - shown in the right half on the picture below) coincides with the x-coordinate of the camera (x camera+ - shown in the left half on the picture bellow).
Remark: Notice that these axes are not coinceding on the picture. You have to make sure that you set the drones accordingly.

![external library](https://github.com/FlyingTasters2017/FlyingTasters/blob/development/images/camr_drone_orientation.jpeg)

### System configuration

**1** Install TASTE on your Debian machine.
```
git clone https://gitrepos.estec.esa.int/taste/taste-setup.git tool-src
cd tool-src
git checkout crazyflie
git submodule init
git submodule update
./Update-TASTE.sh
```

**2** Make sure the dongle's drivers are installed in your system - see [link](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Developer's-manual#configuring-the-radio-dongle)

**3** Clone the repository into your machine.
```
git clone https://github.com/FlyingTasters2017/FlyingTasters.git
cd FlyingTasters
```

**4** Make sure the PixyCam's drivers are linked in TASTE - see [link](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Developer's-manual#using-the-pixy-camera-in-taste) section *Using the Pixy camera in TASTE*

**5** Start the Python server.
```
cd PythonSocketServer
python3 serverMultipleDrones.py
```
**6** Build the TASTE project.
```
cd FlyingTasters
./build-script.sh
```
**7** Run FlyingTasters.
```
cd binary.c/binaries
./x86_partition 
```
# Further information

Please access our [wiki](https://github.com/FlyingTasters2017/FlyingTasters/wiki)

# LICENSE

Licensed under the GNU GENERAL PUBLIC LICENSE, Version 3; you may not use this file except in compliance with the License. You may obtain a copy of the License [here](https://www.gnu.org/licenses/licenses.html).

