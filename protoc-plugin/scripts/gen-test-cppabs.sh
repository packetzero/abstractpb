#!/bin/bash

DEST=./temp
mkdir -p ./temp
rm -rf ./temp/*

./tools/bin/protoc --cppabs_out=${DEST} --plugin=$PWD/bin/protoc-gen-cppabs -I spec/fixtures/ spec/fixtures/test*.proto

