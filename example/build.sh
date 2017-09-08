#!/bin/bash

GEN=
MAKECMD=make
OS=`uname -s`

if [ ! -d tools/${OS} ] ; then
  echo "tools directory not present, setting up libprotobuf and protoc"
  mkdir -p tools/${OS}

  sh ./scripts/setup-protoc.sh && sh ./scripts/setup-protolib.sh
  if [ "$?" != "0" ] ; then
    exit $?
  fi
fi

if [ "$OS" == "Darwin" ] ; then
  GEN="-G Xcode"
  MAKECMD="xcodebuild -configuration Release"
fi

./scripts/gen-apb.sh && ./scripts/gen-cpp.sh

mkdir -p build && cd build && rm -f CMakeCache* \
  && cmake $GEN .. \
  && $MAKECMD

