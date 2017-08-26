# Based on generator.cr NOTE: all descriptors defined here are derived from
# https://github.com/google/protobuf/blob/master/src/google/protobuf/compiler/plugin.proto
#
# The protoc binary will pass a CodeGeneratorRequest in binary format to plugins
# via STDIN and expect an encoded CodeGeneratorResponse on STDOUT

module Protobuf
  class Generator
    def self.compile(req)
      raise Error.new("no files to generate") if req.proto_file.nil?
      package_map = {} of String => String
      req.proto_file.not_nil!.each do |file|
        if !file.package.nil?
          package_map[file.package.not_nil!] = file.crystal_ns.join("::")
        end
      end
      files = req.proto_file.not_nil!.map do |file|
        generator = new(file, package_map)
        CodeGeneratorResponse::File.new(
          name: File.basename(file.name.not_nil!, ".proto").gsub("V3","") + ".apb.h", # TODO: V3 removal is a hack for our file naming
          content: generator.compile
        )
      end
      CodeGeneratorResponse.new(file: files)
    end

    @package_name : String?
    @ns : Array(String)

    def initialize(@file : CodeGeneratorRequest::FileDescriptorProto, @package_map : Hash(String, String))
      @ns = ENV.fetch("PROTOBUF_NS", "").split("::").reject(&.empty?).concat(@file.crystal_ns)
      @str = String::Builder.new
      @indentation = 0
      @cleanup_fields = [] of String
    end

    def compile
      String.build do |str|
        @str = str
        package_part = package_name ? "for #{package_name}" : ""
        puts "// protoc-gen-cppabs: Generated from #{@file.name} #{package_part}".strip

        puts "\#include <abstractpb_types.h>"
        puts "using namespace AbstractPB;"

        ##puts "require \"protobuf\""
        puts nil

        ns! do
          unless @file.enum_type.nil?
            @file.enum_type.not_nil!.each { |et| enum!(et, "") }
          end
          unless @file.message_type.nil?
            @file.message_type.not_nil!.each { |mt| message!(mt) }
          end
        end
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

    def message!(message_type)
      @cleanup_fields = [] of String
      puts "\#ifndef _ABS_C#{message_type.name}_H_"
      puts "\#define _ABS_C#{message_type.name}_H_"
      puts nil

      # guard against recursive structs
      #structure = !message_type.field.nil? && message_type.field.not_nil!.any? { |f| f.type_name && f.type_name.not_nil!.split(".").last == message_type.name } ? "class" : "struct"

      #puts "#{structure} #{message_type.name}"
      puts "struct C#{message_type.name} final : CObj "
      puts "{"

      indent do
        puts nil

        #puts "include Protobuf::Message"

        unless message_type.enum_type.nil?
#          puts "// enums"
          puts ""
          message_type.enum_type.not_nil!.each { |et| enum!(et, message_type.name) }
          puts nil
        end

#        puts "// properties"
#        puts ""
        message_type.nested_type.not_nil!.each { |mt| message!(mt) } unless message_type.nested_type.nil?
        puts ""

        # use contract3() macro for proto3, otherwise use contract() macro

        syntax = @file.syntax.nil? ? "proto2" : @file.syntax

        #puts "contract_of \"#{syntax}\" do"
#        indent do
          message_type.field.not_nil!.each { |f| field!(f, syntax, message_type) } unless message_type.field.nil?
#        end
        #puts "end"

        puts ""
#        puts "// methods "
#        puts ""
#        puts "DEF_to_pb;"
        unless @cleanup_fields.empty?
          puts "~C#{message_type.name}() {"
          indent do
            @cleanup_fields.each {|fieldName|
              puts "if (0L != #{fieldName}) delete #{fieldName};"
            }
          end
          puts "}"
        end
      end
      #puts "end"
      puts  "};"
      puts "\#endif // _ABS_C#{message_type.name}_H_"

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

      ##puts "// field type:'#{field.type.to_s} type_name:'#{field.type_name}'"
      # TODO: nested types should be pointers

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
        s = "C#{s}" unless  field.type == CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_ENUM

        if met == "repeated"
          "VEC< #{s} >"
        else
          unless field.type == CodeGeneratorRequest::FieldDescriptorProto::Type::TYPE_ENUM
            # mark this field for cleanup in destructor
            @cleanup_fields.push  field.name.not_nil!
            "#{s}*"
          else
            "CPrim< #{s} >"
          end
        end
      else
        get_ctype field.type.to_s, met == "repeated"
        #{#}":#{field.type.to_s.sub(/^TYPE_/, "").downcase}"
      end

      cTypeName = type_name.to_s # get_ctype type_name


      # CString           fieldName
      columnPadding = 24 # - cTypeName.size
      puts "#{cTypeName.not_nil!.ljust(columnPadding)} #{field.name.not_nil!};"

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
#      puts field_desc
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
  end
end
