# Based on generator.cr NOTE: all descriptors defined here are derived from
# https://github.com/google/protobuf/blob/master/src/google/protobuf/compiler/plugin.proto
#
# The protoc binary will pass a CodeGeneratorRequest in binary format to plugins
# via STDIN and expect an encoded CodeGeneratorResponse on STDOUT

module Protobuf

  class FieldSummary
    property name : String
    property absType : String
    property isRepeated : Bool
    property isPrimitive : Bool
    property isEnum : Bool
    property enumType : String?

    def initialize(@name, @absType, @isRepeated, @isPrimitive, @isEnum, @enumType)
      # convert ".com.bitcoin.proto3.TimeOfDay" into C-stype namespace "::com::bitcoin::proto3::TimeOfDay"
      @enumType = @enumType.not_nil!.gsub(".", "::") unless @enumType.nil?
    end
  end

  class OutputFile
    property name : String
    property syntax : String
    property content : String

    def initialize(@name, @content, @syntax)
    end

    # returns int protobuf version (2, 3, etc.)
    def version
      syntax.gsub(/[a-zA-Z]*/,"").to_i rescue 2
    end
  end

  class MsgSummary
    property name : String
    property syntax = "proto2"
    property fields = [] of FieldSummary

    def initialize(@name)
    end

    # returns int protobuf version (2, 3, etc.)
    def version
      syntax.gsub(/[a-zA-Z]*/,"").to_i rescue 2
    end
  end

  class Generator
    @@funcSigs=[] of String
    @@sbToPb = String::Builder.new
    @@sbToPbH = String::Builder.new
    @@sbFromPb = String::Builder.new
    @@sbFromPbH = String::Builder.new
    property syntax = "proto2"

    # by default APB structs are prefixed with "C". override with ENV variable PROTOBUF_APBNAMING
    @@fmtAPBName="C%%"

    def self.compile(req)
      raise Error.new("no files to generate") if req.proto_file.nil?

      tmp=ENV.fetch("PROTOBUF_APBNAMING", "")
      @@fmtAPBName = tmp if tmp.size > 0

      package_map = {} of String => String
      req.proto_file.not_nil!.each do |file|
        if !file.package.nil?
          package_map[file.package.not_nil!] = file.crystal_ns.join("::")
        end
      end

      @@sbToPb.puts "\#include \"apb_to_pb.h\""
      @@sbFromPb.puts "\#include \"apb_from_pb.h\""

      outputFiles = {} of String => OutputFile

      req.proto_file.not_nil!.map do |file|
        generator = new(file, package_map)
        content = generator.compile
        name = generator.get_apb_filename(File.basename(file.name.not_nil!, ".proto"))

        existing = outputFiles.fetch(name, nil)

        # overwrite - only write out APB def of highest version
        if existing.nil? || generator.version > existing.version
            outputFiles[name] = OutputFile.new(name, content, generator.syntax)
        end
      end

      files = [] of CodeGeneratorResponse::File
      outputFiles.each {|name, msgSum|
        files.push CodeGeneratorResponse::File.new( name: msgSum.name, content: msgSum.content )
      }

      files.push CodeGeneratorResponse::File.new(
        name: File.basename("apb_to_pb.h"),
        content: @@sbToPbH.to_s
      )

      files.push CodeGeneratorResponse::File.new(
        name: File.basename("apb_to_pb.cc"),
        content: @@sbToPb.to_s
      )

      files.push CodeGeneratorResponse::File.new(
        name: File.basename("apb_from_pb.h"),
        content: @@sbFromPbH.to_s
      )

      files.push CodeGeneratorResponse::File.new(
        name: File.basename("apb_from_pb.cc"),
        content: @@sbFromPb.to_s
      )

      # ObjC++ wrappers for MacOS OS X

      files.push CodeGeneratorResponse::File.new(
        name: "osx/apb_from_pb.hpp",
        content: "// Need a .hpp file to specify mixed ObjectiveC and C++\n#include \"../apb_from_pb.h\"\n"
      )

      files.push CodeGeneratorResponse::File.new(
        name: "osx/apb_from_pb.mm",
        content: "// Need a .mm file to specify mixed ObjectiveC and C++\n#import \"apb_from_pb.hpp\"\n#include \"../apb_from_pb.cc\"\n"
      )

      files.push CodeGeneratorResponse::File.new(
        name: "osx/apb_to_pb.hpp",
        content: "// Need a .hpp file to specify mixed ObjectiveC and C++\n#include \"../apb_to_pb.h\"\n"
      )

      files.push CodeGeneratorResponse::File.new(
        name: "osx/apb_to_pb.mm",
        content: "// Need a .mm file to specify mixed ObjectiveC and C++\n#import \"apb_to_pb.hpp\"\n#include \"../apb_to_pb.cc\"\n"
      )

      CodeGeneratorResponse.new(file: files)
    end

    # returns int protobuf version (2, 3, etc.)
    def version
      syntax.gsub(/[a-zA-Z]*/,"").to_i rescue 2
    end

    def apb_name(msg_name)
      @@fmtAPBName.gsub("%%", msg_name)
    end

    def gen_to_pb(msg : MsgSummary)
        ver = msg.version
        pbname=msg.name
        pbname="#{package_name.not_nil!.gsub(".","::")}::#{msg.name}" if package_name

        topbh_puts "\#include \"#{msg.name}.apb.h\""

        topb_puts "\#include <#{msg.name}#{ver == 3 ? "V3" : ""}.pb.h>"
        topb_puts ""
        topb_puts "void apb_init_pb_v#{ver}(#{apb_name(msg.name)} &apb, #{pbname} &pb)"
        topb_puts "{"
        indent do
          msg.fields.each do |f|
            cfield = f.name.downcase
            if f.isRepeated
              topb_puts "for (auto it = apb.#{f.name}.begin(); it != apb.#{f.name}.end(); it++)"
              if (f.isPrimitive)
                if f.absType == "V_Bytes"
                  topb_puts "   pb.add_#{cfield}(it->ptr(), it->size());  // #{f.absType}"
                else
                  topb_puts "   pb.add_#{cfield}(*it);  // #{f.absType}"
                end
              else
                if (f.isEnum)
                  topb_puts "   pb.add_#{cfield}((#{f.enumType})*it);"
                else
                  topb_puts "   apb_init_pb_v#{ver}(*it, *pb.add_#{cfield}());"
                end
              end
            else
              if (f.isPrimitive)
                if (f.absType == "CBytes")
                  topb_puts "if (apb.#{f.name}.isSet()) pb.set_#{cfield}(apb.#{f.name}.ptr(), apb.#{f.name}.size());"
                else
                  if (f.isEnum)
                    topb_puts "if (apb.#{f.name}.isSet()) pb.set_#{cfield}((#{f.enumType})apb.#{f.name}.v());"
                  else
                    topb_puts "if (apb.#{f.name}.isSet()) pb.set_#{cfield}(apb.#{f.name});"
                  end
                end
              else
                topb_puts "if (0L != apb.#{f.name}) apb_init_pb_v#{ver}(*apb.#{f.name}, *pb.mutable_#{cfield}());"
              end
            end
            topb_puts ""
          end
        end
        topb_puts "}"

        topb_puts ""
        funcSig = "bool to_pb_v#{ver}(#{apb_name(msg.name)} &apb, std::string &dest)"
        @@funcSigs.push funcSig
        topbh_puts "#{funcSig};"
        topb_puts funcSig
        topb_puts "{"
        indent do
          topb_puts "#{pbname} pb;"
          topb_puts ""
          topb_puts "apb_init_pb_v#{ver}(apb, pb);"
          topb_puts ""
          if (msg.version == 2)
            topb_puts "if (!pb.IsInitialized()) return false;"
            topb_puts ""
          end
          topb_puts "return pb.SerializeToString(&dest);"
        end
        topb_puts "}"
    end

    def gen_from_pb(msg : MsgSummary)
        ver = msg.version
        pbname=msg.name
        pbname="#{package_name.not_nil!.gsub(".","::")}::#{msg.name}" if package_name

        frompbh_puts "\#include \"#{msg.name}.apb.h\""

        frompb_puts "\#include <#{msg.name}#{ver == 3 ? "V3" : ""}.pb.h>"
        frompb_puts ""
        frompb_puts "static void _init_from_pb_v3(const #{pbname} &pb, #{apb_name(msg.name)} &dest)"
        frompb_puts "{"
        indent do
          msg.fields.each do |f|
            cfield = f.name.downcase

            frompb_puts "if (pb.has_#{cfield}())" if msg.version == 2 && false == f.isRepeated

            if f.isRepeated
              frompb_puts "for (auto it = pb.#{f.name}().begin(); it != pb.#{f.name}().end(); it++)"
              if (f.isPrimitive)
                if f.absType == "V_Bytes"
                  frompb_puts "   dest.#{f.name}.push_back( *it);  // #{f.absType}"
                else
                  frompb_puts "   dest.#{f.name}.push_back( *it);  // #{f.absType}"
                end

              elsif (f.isEnum)
                enumType = f.absType.gsub(/.*</,"").gsub(">","")
                frompb_puts "   dest.#{f.name}.push_back((#{enumType}) *it);"
              else
                frompb_puts "{"
                frompb_puts "   int idx = dest.#{f.name}.size();"
                frompb_puts "   dest.#{f.name}.resize(idx + 1);"
                frompb_puts "   _init_from_pb_v3(*it, dest.#{f.name}[idx]);"
                frompb_puts "}"
              end
            else
              if (f.isPrimitive)

                if (f.isEnum)
                  enumType = f.absType.gsub(/.*</,"").gsub(">","")
                  frompb_puts "dest.#{f.name} = (#{enumType})pb.#{cfield}(); // #{f.absType}"
                  #topb_puts "if (apb.#{f.name}.isSet()) pb.set_#{cfield}((#{f.enumType})apb.#{f.name}.v());"
                else
                  frompb_puts "dest.#{f.name} = pb.#{cfield}();"
                end
              else
                frompb_puts "{"
                indent do
                  frompb_puts "dest.#{f.name} = new #{f.absType.gsub("*","")}();"
                  frompb_puts "_init_from_pb_v3(pb.#{cfield}(), *dest.#{f.name});"
                end
                frompb_puts "}"
              end
            end
            frompb_puts ""
          end
        end
        frompb_puts "}"

        frompb_puts ""
        funcSig = "bool from_pb_v#{ver}(CBytes &src, #{apb_name(msg.name)} &dest)"
        #@@funcSigs.push funcSig
        frompbh_puts "#{funcSig};"
        frompb_puts funcSig
        frompb_puts "{"
        indent do
          frompb_puts "#{pbname} pb = #{pbname}();"
          frompb_puts ""
          frompb_puts "if (false == pb.ParseFromArray(src.ptr(), src.size())) return false;"
          frompb_puts ""
          frompb_puts "_init_from_pb_v3(pb, dest);"
          frompb_puts ""
          frompb_puts "return true;"
        end
        frompb_puts "}"
    end

    @package_name : String?
    @ns : Array(String)
    @messages : Array(MsgSummary)

    def initialize(@file : CodeGeneratorRequest::FileDescriptorProto, @package_map : Hash(String, String))
      @ns = ENV.fetch("PROTOBUF_NS", "").split("::").reject(&.empty?).concat(@file.crystal_ns)
      @str = String::Builder.new
      @indentation = 0
      @cleanup_fields = [] of String
      @messages = [] of MsgSummary
    end

    def compile
      String.build do |str|
        @str = str
        name = @file.name.not_nil!.gsub(".proto","").gsub(".","_")
        package_part = package_name ? "for #{package_name}" : ""
        puts "// protoc-gen-cppabs: Generated from #{@file.name} #{package_part}".strip

        puts "\#ifndef _ABS_#{name}_H_"
        puts "\#define _ABS_#{name}_H_"
        puts nil
        puts "\#include <abstractpb_types.h>"
        puts "using namespace AbstractPB;"
        puts nil

        ns! do
          unless @file.enum_type.nil?
            @file.enum_type.not_nil!.each { |et| enum!(et, "") }
          end
          unless @file.message_type.nil?
            @file.message_type.not_nil!.each { |mt| message!(mt) }
          end
        end

        puts "\#endif // _ABS_#{name}_H_"
      end
    end

    def enum!(enum_type, message_type_name)
      name = enum_type.name.not_nil!

      # for enums defined inside a struct/class, remove parent type name
      unless message_type_name.nil?
        name = name.gsub(message_type_name.not_nil!,"") if name.starts_with?(message_type_name.not_nil!)
      end

      puts "enum #{name} {"
      unless enum_type.value.nil?
        indent do
          enum_type.not_nil!.value.not_nil!.each do |ev|
            # Issue 9 - enum constants must start with Capital letter
            puts "#{ev.name.not_nil!.camelcase.ljust(32)} = #{ev.number},"
          end
          puts "NUM_#{name.upcase}"
        end
      end
      puts "};"
    end

    def package_name
      @package_name ||= @file.package
    end

    def get_apb_filename(filename : String)
      filename.gsub("V3","") + ".apb.h"   # TODO: use @messages and filename to determine best name
    end

    def message!(message_type)
      @cleanup_fields = [] of String

      # guard against recursive structs
      #structure = !message_type.field.nil? && message_type.field.not_nil!.any? { |f| f.type_name && f.type_name.not_nil!.split(".").last == message_type.name } ? "class" : "struct"

      @msg = MsgSummary.new message_type.name.not_nil!

      #puts "#{structure} #{message_type.name}"
      puts "struct #{apb_name(message_type.name)} final : CObj "
      puts "{"

      indent do

        unless message_type.enum_type.nil?
          message_type.enum_type.not_nil!.each { |et| enum!(et, message_type.name) }
          puts nil
        end

        unless message_type.nested_type.nil?
          message_type.nested_type.not_nil!.each { |mt| message!(mt) }
          puts ""
        end

        syntax = @file.syntax.nil? ? "proto2" : @file.syntax
        @msg.not_nil!.syntax = syntax.not_nil!
        @syntax = syntax.not_nil!

          message_type.field.not_nil!.each { |f| field!(f, syntax, message_type) } unless message_type.field.nil?

        unless @cleanup_fields.empty?
          puts nil
          puts "~#{apb_name(message_type.name)}() {"
          indent do
            @cleanup_fields.each {|fieldName|
              puts "if (0L != #{fieldName}) delete #{fieldName};"
            }
          end
          puts "}"
        end
      end
      puts  "};"

      @messages.push @msg.not_nil!

      gen_to_pb @msg.not_nil!
      gen_from_pb @msg.not_nil!
    end

    def get_ctype (std_name, is_repeated)
      prefix = "C"
      prefix = "V_" if is_repeated

      val = case std_name
      when "TYPE_STRING" then "#{prefix}String"
      when "TYPE_INT64"  then "#{prefix}Int64"
      when "TYPE_UINT64" then "#{prefix}UInt64"
      when "TYPE_INT32"  then "#{prefix}Int32"
      when "TYPE_UINT32" then "#{prefix}UInt32"
      when "TYPE_INT16"  then "#{prefix}Int16"
      when "TYPE_UINT16" then "#{prefix}UInt16"
      when "TYPE_INT8"   then "#{prefix}Int8"
      when "TYPE_UINT8"  then "#{prefix}UInt8"
      when "TYPE_BOOL"   then "#{prefix}Bool"
      when "TYPE_FLOAT"   then "#{prefix}Float"
      when "TYPE_DOUBLE"  then "#{prefix}Double"
      when "TYPE_BYTES"  then "#{prefix}Bytes"
      when "TYPE_FIXED32" then "#{prefix}UInt32"
      when "TYPE_FIXED64" then "#{prefix}UInt64"
      when "TYPE_SFIXED32" then "#{prefix}Int32"
      when "TYPE_SFIXED64" then "#{prefix}Int64"
      when "TYPE_SINT32" then "#{prefix}Int32"
      when "TYPE_SINT64" then "#{prefix}Int64"
      else
        std_name
      end
    end

    def field!(field, syntax, message_type)
      met = case field.label
      when CodeGeneratorRequest::FieldDescriptorProto::Label::LABEL_OPTIONAL
        "optional"
      when CodeGeneratorRequest::FieldDescriptorProto::Label::LABEL_REQUIRED
        "required"
      when CodeGeneratorRequest::FieldDescriptorProto::Label::LABEL_REPEATED
        "repeated"
      end

      isSubType = false
      isEnum = (field.type == CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_ENUM)
      enumType = nil
      enumType = field.type_name.not_nil! if isEnum

      type_name = unless field.type_name.nil?
        t = field.type_name.not_nil!
        t = t.gsub(/^\.{0,}#{package_name.not_nil!}\.*/, "") unless package_name.nil?
        to_strip = @package_map.find do |k,v|
          t.match(/\.{0,}#{k}/)
        end
        t = t.gsub(/^\.{0,}#{to_strip[0]}/, "#{to_strip[1]}") if to_strip
        s = t.gsub(/^\.*/, "").split(".").map(&.camelcase).last ###.join("::")

        # remove leading classname MessageNameEnumName => EnumName
        s = s.gsub(message_type.name.not_nil!,"") if s.starts_with?(message_type.name.not_nil!)

        # remember class name prefix
        s = "#{apb_name(s)}" unless isEnum

        if met == "repeated"
          isSubType = true
          "VEC< #{s} >"
        else
          unless isEnum
            # mark this field for cleanup in destructor
            isSubType = true
            @cleanup_fields.push  field.name.not_nil!
            "#{s}*"
          else
            "CPrim< #{s} >"
          end
        end
      else
        get_ctype field.type.to_s, met == "repeated"
      end

      cTypeName = type_name.to_s

      columnPadding = 24
      puts "#{cTypeName.not_nil!.ljust(columnPadding)} #{field.name.not_nil!};"
      @msg.not_nil!.fields.push FieldSummary.new(field.name.not_nil!, cTypeName.not_nil!,
        met == "repeated", !isSubType, isEnum, enumType)

      field_desc = "#{met} :#{field.name.not_nil!.underscore}, #{type_name}, #{field.number}"
      unless field.default_value.nil?
        def_value = field.type == CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_STRING ?
          "\"#{field.default_value}\"" :
          field.type_name.nil? ?
            field.default_value :
            field.type == CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_ENUM ?
              "#{type_name}::#{field.default_value.not_nil!.camelcase}" : # enum
              raise Error.new("can't use a default value for non-native / enum types")
        case field.type
        when CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_DOUBLE
          def_value += "_f64" if def_value
        when CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_FLOAT
          def_value += "_f32" if def_value
        when CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_INT64
          def_value += "_i64" if def_value
        when CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_UINT64
          def_value += "_u64" if def_value
        when CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_UINT32
          def_value += "_u32" if def_value
        end

        # no default values in proto3

        if syntax == "proto2"
          field_desc += ", default: #{def_value}"
        end
      end
      unless field.options.nil?
        # all repeating fields use packed encoding in V3
        if syntax == "proto2"
          field_desc += ", packed: true" if field.options.not_nil!.packed
        end
      end
    end

    def indent
      @indentation += 1
      yield
      @indentation -= 1
    end

    def ns!
      return yield if @ns.empty?
      @ns.each do |ns|
        puts "module #{ns}"
        @indentation += 1
      end
      yield
      @ns.each do |ns|
        puts "end"
        @indentation -= 1
      end
    end

    def puts(text)
      @str.puts "#{"  " * @indentation}#{text}"
    end
    # this is for the to_pb() output, which goes to a separate string builder
    def topb_puts(text)
      @@sbToPb.puts "#{"  " * @indentation}#{text}"
    end
    # this is for the to_pb() output, which goes to a separate string builder
    def topbh_puts(text)
      @@sbToPbH.puts "#{"  " * @indentation}#{text}"
    end
    # this is for the to_pb() output, which goes to a separate string builder
    def frompb_puts(text)
      @@sbFromPb.puts "#{"  " * @indentation}#{text}"
    end
    # this is for the to_pb() output, which goes to a separate string builder
    def frompbh_puts(text)
      @@sbFromPbH.puts "#{"  " * @indentation}#{text}"
    end
  end
end
