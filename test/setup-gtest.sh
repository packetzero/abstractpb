#!/bin/bash
cd gtest
NAME=release-1.8.0
OS=`uname -s`
CPU=`uname -m`
PLATFORM=${OS}-${CPU}

mkdir -p lib/${PLATFORM}

if [ -f ./lib/${PLATFORM}/libgtest.a ] ; then
  echo "nothing to do"
  exit 0
fi

# download release if not present

URL=https://github.com/google/googletest/archive/${NAME}.tar.gz
if [ ! -f ${NAME}.tar.gz ] ; then
  wget ${URL}
fi

if [ ! -f ${NAME}.tar.gz ] ; then
  echo "Failed to download ${URL}"
  exit 2
fi

# extract and make

tar xfz ${NAME}.tar.gz \
  && rm -rf ./release \
  && mv googletest-${NAME} release \
  && cd release/googletest \
  && g++ -std=c++11 -isystem ./include -I. -pthread -c ./src/gtest-all.cc && ar -rv libgtest.a gtest-all.o \
  && cd ../..

if [ ! -f release/googletest/libgtest.a ] ; then
  echo "ERROR: unable to build googletest"
  exit 2
fi

# copy

cp ./release/googletest/libgtest.a ./lib/${PLATFORM}/
cp -r ./release/googletest/include .

echo "Done with gtest"
