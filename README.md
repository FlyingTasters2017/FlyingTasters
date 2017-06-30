# FlyingTasters

Welcome to **FlyingTasters** -the open source solution for [CrazyFlie](https://www.bitcraze.io/crazyflie-2/) formation flight developed by [PDEng](https://www.tue.nl/en/education/tue-graduate-school/pdeng-programs/pdeng-programs-overview/pdeng-software-technology-st/) trainees at [TU-Eindhoven](https://www.tue.nl/) in colaboration with [ESA](http://www.esa.int/ESA). This project is powered by the [TASTE](http://taste.tuxfamily.org/) tool chain.

This wiki is the mains source to documentation for developers working with (or contributing to) FlyingTasters project. If it is the first time you learn about FlyingTasters we recommend you check our Facebook [page](https://www.facebook.com/flyingtasters/).

Here you will find detailed description of:

* The rationale and design decisions used,
* the process to build your own FlyingTasters,
* the steps required in order to make changes and extend the FlyingTasters system.

# TODO [Add high level diagram of the system and its components]


# Where is the information?

Please access our [wiki](https://github.com/FlyingTasters2017/FlyingTasters/wiki)

# User's manual 
In order to run the latest version of **FlyingTasters**, please follow these steps:

* Install TASTE on your Debian machine.
```
git clone https://gitrepos.estec.esa.int/taste/taste-setup.git tool-src
cd tool-src
git checkout crazyflie
git submodule init
git submodule update
./Update-TASTE.sh
```

* [Make sure the dongle's drivers are installed in your system.](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Setup-guide#configuring-the-radio-dongle)
* [Make sure the PixyCam's drivers are installed in your system.](https://github.com/FlyingTasters2017/FlyingTasters/wiki/Setup-guide#configuring-the-pixy-camera)
* Clone the repository into your machine.
```
git clone https://github.com/FlyingTasters2017/FlyingTasters.git
cd FlyingTasters
```
* Start the Python server.
```
cd theFolderIfNecessary
python3 theNameoftheScript.py &
```
* Build the TASTE project.
```
cd theNameofTheFinalProject
./build-script.sh
```
* Run FlyingTasters.
```
cd binary.c/binaries
./x86_partition &
./GUI-gui &
```

# LICENSE

Licensed under the GNU GENERAL PUBLIC LICENSE, Version 3; you may not use this file except in compliance with the License. You may obtain a copy of the License [here](https://www.gnu.org/licenses/licenses.html).

