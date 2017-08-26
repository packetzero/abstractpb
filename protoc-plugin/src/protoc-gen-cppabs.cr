require "protobuf"
require "./generator.cr"

VERSION="0.1.0"

STDERR.puts "Generating AbstractPB C++ struct header files ... (#{VERSION})"

req = Protobuf::CodeGeneratorRequest.from_protobuf(STDIN)
res = Protobuf::Generator.compile(req)

STDOUT.print(res.to_protobuf.rewind.to_s)
