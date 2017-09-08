#!/bin/sh
if [ ! -d tools ]; then
  echo "ERROR: tools subdirectory not found.  Run from wrong directory?"
  exit 2
fi
rm -rf ./apb/*.h ./apb/osx ./apb/*.cc
./tools/bin/protoc --cppabs_out=apb --plugin=../protoc-plugin/bin/protoc-gen-cppabs -I messagesV3 -I messagesV2 messagesV*/*.proto
