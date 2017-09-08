#!/bin/bash

set VER=3.3.0
set OS=win32
set NAME=protoc-%VER%-%OS%

mkdir tools
cd tools
curl -L -o %NAME%.zip https://github.com/google/protobuf/releases/download/v%VER%/%NAME%.zip
7z x %NAME%.zip
