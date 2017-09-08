#!/bin/bash

GEN=
OS=`uname -s`

if [ "$OS" == "Darwin" ] ; then
  GEN="-G Xcode"
fi

./scripts/gen-apb.sh \
  && ./scripts/gen-cpp.sh \
  && mkdir -p build && cd build && rm -f CMakeCache* \
  && cmake $GEN .. \
  && xcodebuild -configuration Release && xcodebuild -configuration Debug

