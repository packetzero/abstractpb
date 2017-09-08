#!/bin/sh
OS=`uname -s`
if [ ! -d ./tools/${OS} ]; then
  echo "ERROR: tools/${OS} subdirectory not found.  Run from wrong directory?"
  exit 2
fi

DIR=generatedcpp

rm -rf ./${DIR}/*.h ./${DIR}/*.cc
./tools/${OS}/bin/protoc --cpp_out=${DIR} -I messagesV2 messagesV2/*.proto
./tools/${OS}/bin/protoc --cpp_out=${DIR} -I messagesV3 messagesV3/*.proto
