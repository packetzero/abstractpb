all: genapb example

genapb:
	./tools/bin/protoc --cppabs_out=apb --plugin=../protoc-plugin/bin/protoc-gen-cppabs -I messagesV3 -I messagesV2 messagesV*/*.proto

gencpp:
	./tools/bin/protoc --cpp_out=generatedcpp -I messagesV2 messagesV2/*.proto
	./tools/bin/protoc --cpp_out=generatedcpp -I messagesV3 messagesV3/*.proto

example: apb/apb*.cc main.cc
	cc -o example -I.. -I./generatedcpp -I./tools/protobuf-release/dest/include -ObjC++ --std=c++11 main.cc apb/apb_to_pb.cc apb/apb_from_pb.cc generatedcpp/*.cc tools/protobuf-release/dest/lib/libprotobuf.a -lstdc++
