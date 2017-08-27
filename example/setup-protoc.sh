#!/bin/bash

VER=3.3.0
OS=osx
CPU=`uname -m`
NAME=protoc-${VER}-${OS}

mkdir -p tools
cd tools
wget https://github.com/google/protobuf/releases/download/v${VER}/${NAME}-${CPU}.zip
unzip ${NAME}*.zip
