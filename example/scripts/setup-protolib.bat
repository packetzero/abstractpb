
set VER=3.3.0
set NAME=protobuf-cpp-%VER%

mkdir -p tools
cd tools
curl -L -o %NAME%.zip https://github.com/google/protobuf/releases/download/v%VER%/%NAME%.zip
7z x %NAME%.zip
move protobuf-%VER% protobuf-release
cd protobuf-release


REM ./configure --enable-static --prefix=$PWD/dest \
REM  && make && make install
