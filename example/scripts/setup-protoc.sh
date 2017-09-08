#!/bin/bash

VER=3.4.0
OS=`uname -s`
PBOS=$OS
if [ "$OS" == "Darwin" ] ; then
  PBOS="osx"
fi
CPU=`uname -m`
NAME=protoc-${VER}-${PBOS}

mkdir -p tools/${OS}
cd tools/${OS}
wget https://github.com/google/protobuf/releases/download/v${VER}/${NAME}-${CPU}.zip
unzip ${NAME}*.zip
