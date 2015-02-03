Description
===========

This is a NAOqi module that bridges with ROS. It publishes
several sensor data as well as the robot position.

On the other hand it enables ROS to call parts of the
NAOqi API.

It is necessary to include ROS into your toolchain.
You can check out the toolchain packages under:
git@gitlab.aldebaran.lan:kknese/ros-toolchain.git
(!) As for now, there are pre-compiled packages for atom and linux64

Building the doc
================

Run:

   cd ./doc
   sphinx-build ./source/ ./build/

Enjoy:

   xdg-open ./build/index.html

TODO
====
- write down instructions on how to deploy that module in that README.rst file
- check how DCM access is done with B-Human: https://github.com/bhuman/BHumanCodeRelease/blob/master/Src/libbhuman/bhuman.cpp#L768
- take over the world