#!/bin/bash -x

#create the build directory
mkdir build

#go to the directory
cd build

cmake ../

make
