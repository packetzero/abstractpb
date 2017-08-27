#!/bin/bash

VER=3.3.0
OS=osx
CPU=`uname -m`
NAME=protobuf-cpp-${VER}

mkdir -p tools
cd tools
wget https://github.com/google/protobuf/releases/download/v${VER}/${NAME}.tar.gz
tar xfz ${NAME}.tar.gz
mv protobuf-${VER} protobuf-release
cd protobuf-release
./configure --enable-static --prefix=$PWD/dest \
  && make && make install
