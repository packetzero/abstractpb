#!/bin/bash

VER=3.4.0
NAME=protobuf-cpp-${VER}
OS=`uname -s`

mkdir -p tools/${OS}
cd tools/${OS}
if [ ! -f "${NAME}.tar.gz" ] ; then
  wget https://github.com/google/protobuf/releases/download/v${VER}/${NAME}.tar.gz
fi
if [ ! -f "${NAME}.tar.gz" ] ; then
  echo "ERROR: unable to get release ${NAME}.tar.gz"
  exit 2
fi
tar xfz ${NAME}.tar.gz
rm -rf ./protobuf-release
mv protobuf-${VER} protobuf-release
cd protobuf-release
./configure --enable-static --prefix=$PWD/dest \
  && make && make install
#cd cmake && mkdir build && cd build 
#cmake --module libprotobuf .. && make
