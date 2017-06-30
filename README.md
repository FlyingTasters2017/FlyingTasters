# FlyingTasters

Welcome to **FlyingTasters** -the open source solution for [CrazyFlie](https://www.bitcraze.io/crazyflie-2/) formation flight developed by [PDEng](https://www.tue.nl/en/education/tue-graduate-school/pdeng-programs/pdeng-programs-overview/pdeng-software-technology-st/) trainees at [TU-Eindhoven](https://www.tue.nl/) in colaboration with [ESA](http://www.esa.int/ESA). This project is powered by the [TASTE](http://taste.tuxfamily.org/) tool chain.

This wiki is the main source to documentation for developers working with (or contributing to) FlyingTasters project. If it is the first time you learn about FlyingTasters we recommend you check our Facebook [page](https://www.facebook.com/flyingtasters/).

Here you will find detailed description of:

* The rationale and design decisions
* The process describing how to build your own FlyingTasters
* The steps of how to contribute to the FlyingTasters project

# TODO [Add high level diagram of the system and its components]


# User's manual 
This manual is intended to give assistance to the people using the **FlyingTasters** system. In order to have this system up and running this is the process that the user needs to follow.

### Pre-requirements:
These are the pre requirements that the user should implement before running the project:

**1** This project uses 3 quadcopters - [Crazyflie 2.0](https://www.bitcraze.io/crazyflie-2/)   

**2** One radio dongle - see [link](https://www.bitcraze.io/2012/02/the-crazyradio-dongle/)

**3** One PixyCam - TODO link for the website

**4** Non reflective floor carpet - TODO see puicture

**5** Isolated room

**6** Drone markers - TODO see picture

### Prepare the PixyCam

**1** Follow the instructions on this [link](http://cmucam.org/projects/cmucam5/wiki/Installing_PixyMon_on_Linux)

**2** Train the camera following the instructions on this [link](https://www.youtube.com/watch?v=7znEmgYZXL0&feature=youtu.be). When training the camera use the drone markers that you want to stick on top of the drone as showed on the picture TODO add picture of drone with markers. For more info see [here](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Position-Detection#object-teaching-and-configuring-the-camera)

### Prepare environement
This chapter explains how to prepare the environment for the drones formation flight.

**1** TODO Arrange a room with this properties - See picture

**2** Attach the PixyCam on 1.7 meter hight

**3** Set the non reflective floor carpet on the floor, under the camera view's field.

### System configuration

**1** For configuring the PixyCam on Linux follow steps on this [link](http://cmucam.org/projects/cmucam5/wiki/Building_the_libpixyusb_example_on_Linux)

**2** Install TASTE on your Debian machine.
```
git clone https://gitrepos.estec.esa.int/taste/taste-setup.git tool-src
cd tool-src
git checkout crazyflie
git submodule init
git submodule update
./Update-TASTE.sh
```

**3** Follow the steps described [here](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Developer's-manual#configuring-the-pixy-camera) to configure the camera for TASTE

**4** [Make sure the PixyCam's drivers are installed in your system.](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Setup-guide#configuring-the-pixy-camera)

**5** [Make sure the dongle's drivers are installed in your system.](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Setup-guide#configuring-the-radio-dongle)

**6** Clone the repository into your machine.
```
git clone https://github.com/FlyingTasters2017/FlyingTasters.git
cd FlyingTasters
```
**7** Initialization

**8** Start the Python server.
```
cd theFolderIfNecessary
python3 theNameoftheScript.py &
```
**8** Build the TASTE project.
```
cd theNameofTheFinalProject
./build-script.sh
```
**9** Run FlyingTasters.
```
cd binary.c/binaries
./x86_partition 
```
# Further information

Please access our [wiki](https://github.com/FlyingTasters2017/FlyingTasters/wiki)

# LICENSE

Licensed under the GNU GENERAL PUBLIC LICENSE, Version 3; you may not use this file except in compliance with the License. You may obtain a copy of the License [here](https://www.gnu.org/licenses/licenses.html).

