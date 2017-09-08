#!/bin/sh
OS=`uname -s`
if [ ! -d tools/${OS} ]; then
  echo "ERROR: tools/${OS} subdirectory not found.  Run from wrong directory?"
  exit 2
fi
rm -rf ./apb/*.h ./apb/osx ./apb/*.cc
./tools/${OS}/bin/protoc --cppabs_out=apb --plugin=${PWD}/../protoc-plugin/bin/${OS}/protoc-gen-cppabs -I messagesV3 -I messagesV2 messagesV*/*.proto
