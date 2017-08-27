#!/bin/bash

mkdir -p apb
./tools/bin/protoc --cppabs_out=apb --plugin=../protoc-plugin/bin/protoc-gen-cppabs -I messagesV3 messagesV3/*.proto

mkdir -p generatedcpp
./tools/bin/protoc --cpp_out=generatedcpp -I messagesV3 messagesV3/*.proto
./tools/bin/protoc --cpp_out=generatedcpp -I messagesV2 messagesV2/*.proto


