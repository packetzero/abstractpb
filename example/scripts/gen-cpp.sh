#!/bin/sh

if [ ! -d ./tools ]; then
  echo "ERROR: tools subdirectory not found.  Run from wrong directory?"
  exit 2
fi

DIR=generatedcpp

rm -rf ./${DIR}/*.h ./${DIR}/*.cc
./tools/bin/protoc --cpp_out=${DIR} -I messagesV2 messagesV2/*.proto
./tools/bin/protoc --cpp_out=${DIR} -I messagesV3 messagesV3/*.proto
