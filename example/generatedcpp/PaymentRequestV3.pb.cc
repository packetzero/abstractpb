// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentRequestV3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PaymentRequestV3.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace bitcoin {
namespace proto3 {
class PaymentRequestDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<PaymentRequest>
     _instance;
} _PaymentRequest_default_instance_;

namespace protobuf_PaymentRequestV3_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentRequest, payment_details_version_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentRequest, pki_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentRequest, pki_data_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentRequest, serialized_payment_details_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentRequest, signature_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(PaymentRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PaymentRequest_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "PaymentRequestV3.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _PaymentRequest_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_PaymentRequest_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\026PaymentRequestV3.proto\022\022com.bitcoin.pr"
      "oto3\"\214\001\n\016PaymentRequest\022\037\n\027payment_detai"
      "ls_version\030\001 \001(\r\022\020\n\010pki_type\030\002 \001(\t\022\020\n\010pk"
      "i_data\030\003 \001(\014\022\"\n\032serialized_payment_detai"
      "ls\030\004 \001(\014\022\021\n\tsignature\030\005 \001(\014b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PaymentRequestV3.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_PaymentRequestV3_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PaymentRequest::kPaymentDetailsVersionFieldNumber;
const int PaymentRequest::kPkiTypeFieldNumber;
const int PaymentRequest::kPkiDataFieldNumber;
const int PaymentRequest::kSerializedPaymentDetailsFieldNumber;
const int PaymentRequest::kSignatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PaymentRequest::PaymentRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_PaymentRequestV3_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.bitcoin.proto3.PaymentRequest)
}
PaymentRequest::PaymentRequest(const PaymentRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  pki_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pki_type().size() > 0) {
    pki_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pki_type_);
  }
  pki_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pki_data().size() > 0) {
    pki_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pki_data_);
  }
  serialized_payment_details_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.serialized_payment_details().size() > 0) {
    serialized_payment_details_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serialized_payment_details_);
  }
  signature_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.signature().size() > 0) {
    signature_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signature_);
  }
  payment_details_version_ = from.payment_details_version_;
  // @@protoc_insertion_point(copy_constructor:com.bitcoin.proto3.PaymentRequest)
}

void PaymentRequest::SharedCtor() {
  pki_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pki_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialized_payment_details_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signature_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payment_details_version_ = 0u;
  _cached_size_ = 0;
}

PaymentRequest::~PaymentRequest() {
  // @@protoc_insertion_point(destructor:com.bitcoin.proto3.PaymentRequest)
  SharedDtor();
}

void PaymentRequest::SharedDtor() {
  pki_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pki_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialized_payment_details_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signature_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PaymentRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PaymentRequest::descriptor() {
  protobuf_PaymentRequestV3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentRequestV3_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PaymentRequest& PaymentRequest::default_instance() {
  protobuf_PaymentRequestV3_2eproto::InitDefaults();
  return *internal_default_instance();
}

PaymentRequest* PaymentRequest::New(::google::protobuf::Arena* arena) const {
  PaymentRequest* n = new PaymentRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PaymentRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:com.bitcoin.proto3.PaymentRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pki_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pki_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serialized_payment_details_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payment_details_version_ = 0u;
  _internal_metadata_.Clear();
}

bool PaymentRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.bitcoin.proto3.PaymentRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 payment_details_version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &payment_details_version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string pki_type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pki_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->pki_type().data(), static_cast<int>(this->pki_type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.bitcoin.proto3.PaymentRequest.pki_type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes pki_data = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_pki_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes serialized_payment_details = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_serialized_payment_details()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes signature = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_signature()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.bitcoin.proto3.PaymentRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.bitcoin.proto3.PaymentRequest)
  return false;
#undef DO_
}

void PaymentRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.bitcoin.proto3.PaymentRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 payment_details_version = 1;
  if (this->payment_details_version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->payment_details_version(), output);
  }

  // string pki_type = 2;
  if (this->pki_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pki_type().data(), static_cast<int>(this->pki_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentRequest.pki_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->pki_type(), output);
  }

  // bytes pki_data = 3;
  if (this->pki_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->pki_data(), output);
  }

  // bytes serialized_payment_details = 4;
  if (this->serialized_payment_details().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->serialized_payment_details(), output);
  }

  // bytes signature = 5;
  if (this->signature().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->signature(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:com.bitcoin.proto3.PaymentRequest)
}

::google::protobuf::uint8* PaymentRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:com.bitcoin.proto3.PaymentRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 payment_details_version = 1;
  if (this->payment_details_version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->payment_details_version(), target);
  }

  // string pki_type = 2;
  if (this->pki_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pki_type().data(), static_cast<int>(this->pki_type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentRequest.pki_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->pki_type(), target);
  }

  // bytes pki_data = 3;
  if (this->pki_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->pki_data(), target);
  }

  // bytes serialized_payment_details = 4;
  if (this->serialized_payment_details().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->serialized_payment_details(), target);
  }

  // bytes signature = 5;
  if (this->signature().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->signature(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.bitcoin.proto3.PaymentRequest)
  return target;
}

size_t PaymentRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.bitcoin.proto3.PaymentRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string pki_type = 2;
  if (this->pki_type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->pki_type());
  }

  // bytes pki_data = 3;
  if (this->pki_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->pki_data());
  }

  // bytes serialized_payment_details = 4;
  if (this->serialized_payment_details().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->serialized_payment_details());
  }

  // bytes signature = 5;
  if (this->signature().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->signature());
  }

  // uint32 payment_details_version = 1;
  if (this->payment_details_version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->payment_details_version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PaymentRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.bitcoin.proto3.PaymentRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PaymentRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PaymentRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.bitcoin.proto3.PaymentRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.bitcoin.proto3.PaymentRequest)
    MergeFrom(*source);
  }
}

void PaymentRequest::MergeFrom(const PaymentRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.bitcoin.proto3.PaymentRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.pki_type().size() > 0) {

    pki_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pki_type_);
  }
  if (from.pki_data().size() > 0) {

    pki_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pki_data_);
  }
  if (from.serialized_payment_details().size() > 0) {

    serialized_payment_details_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serialized_payment_details_);
  }
  if (from.signature().size() > 0) {

    signature_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signature_);
  }
  if (from.payment_details_version() != 0) {
    set_payment_details_version(from.payment_details_version());
  }
}

void PaymentRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.bitcoin.proto3.PaymentRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PaymentRequest::CopyFrom(const PaymentRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.bitcoin.proto3.PaymentRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PaymentRequest::IsInitialized() const {
  return true;
}

void PaymentRequest::Swap(PaymentRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PaymentRequest::InternalSwap(PaymentRequest* other) {
  using std::swap;
  pki_type_.Swap(&other->pki_type_);
  pki_data_.Swap(&other->pki_data_);
  serialized_payment_details_.Swap(&other->serialized_payment_details_);
  signature_.Swap(&other->signature_);
  swap(payment_details_version_, other->payment_details_version_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PaymentRequest::GetMetadata() const {
  protobuf_PaymentRequestV3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentRequestV3_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PaymentRequest

// uint32 payment_details_version = 1;
void PaymentRequest::clear_payment_details_version() {
  payment_details_version_ = 0u;
}
::google::protobuf::uint32 PaymentRequest::payment_details_version() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentRequest.payment_details_version)
  return payment_details_version_;
}
void PaymentRequest::set_payment_details_version(::google::protobuf::uint32 value) {
  
  payment_details_version_ = value;
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentRequest.payment_details_version)
}

// string pki_type = 2;
void PaymentRequest::clear_pki_type() {
  pki_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentRequest::pki_type() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentRequest.pki_type)
  return pki_type_.GetNoArena();
}
void PaymentRequest::set_pki_type(const ::std::string& value) {
  
  pki_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentRequest.pki_type)
}
#if LANG_CXX11
void PaymentRequest::set_pki_type(::std::string&& value) {
  
  pki_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentRequest.pki_type)
}
#endif
void PaymentRequest::set_pki_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  pki_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentRequest.pki_type)
}
void PaymentRequest::set_pki_type(const char* value, size_t size) {
  
  pki_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentRequest.pki_type)
}
::std::string* PaymentRequest::mutable_pki_type() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentRequest.pki_type)
  return pki_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentRequest::release_pki_type() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentRequest.pki_type)
  
  return pki_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentRequest::set_allocated_pki_type(::std::string* pki_type) {
  if (pki_type != NULL) {
    
  } else {
    
  }
  pki_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pki_type);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentRequest.pki_type)
}

// bytes pki_data = 3;
void PaymentRequest::clear_pki_data() {
  pki_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentRequest::pki_data() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentRequest.pki_data)
  return pki_data_.GetNoArena();
}
void PaymentRequest::set_pki_data(const ::std::string& value) {
  
  pki_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentRequest.pki_data)
}
#if LANG_CXX11
void PaymentRequest::set_pki_data(::std::string&& value) {
  
  pki_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentRequest.pki_data)
}
#endif
void PaymentRequest::set_pki_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  pki_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentRequest.pki_data)
}
void PaymentRequest::set_pki_data(const void* value, size_t size) {
  
  pki_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentRequest.pki_data)
}
::std::string* PaymentRequest::mutable_pki_data() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentRequest.pki_data)
  return pki_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentRequest::release_pki_data() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentRequest.pki_data)
  
  return pki_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentRequest::set_allocated_pki_data(::std::string* pki_data) {
  if (pki_data != NULL) {
    
  } else {
    
  }
  pki_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pki_data);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentRequest.pki_data)
}

// bytes serialized_payment_details = 4;
void PaymentRequest::clear_serialized_payment_details() {
  serialized_payment_details_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentRequest::serialized_payment_details() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
  return serialized_payment_details_.GetNoArena();
}
void PaymentRequest::set_serialized_payment_details(const ::std::string& value) {
  
  serialized_payment_details_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
}
#if LANG_CXX11
void PaymentRequest::set_serialized_payment_details(::std::string&& value) {
  
  serialized_payment_details_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
}
#endif
void PaymentRequest::set_serialized_payment_details(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  serialized_payment_details_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
}
void PaymentRequest::set_serialized_payment_details(const void* value, size_t size) {
  
  serialized_payment_details_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
}
::std::string* PaymentRequest::mutable_serialized_payment_details() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
  return serialized_payment_details_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentRequest::release_serialized_payment_details() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
  
  return serialized_payment_details_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentRequest::set_allocated_serialized_payment_details(::std::string* serialized_payment_details) {
  if (serialized_payment_details != NULL) {
    
  } else {
    
  }
  serialized_payment_details_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serialized_payment_details);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentRequest.serialized_payment_details)
}

// bytes signature = 5;
void PaymentRequest::clear_signature() {
  signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentRequest::signature() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentRequest.signature)
  return signature_.GetNoArena();
}
void PaymentRequest::set_signature(const ::std::string& value) {
  
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentRequest.signature)
}
#if LANG_CXX11
void PaymentRequest::set_signature(::std::string&& value) {
  
  signature_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentRequest.signature)
}
#endif
void PaymentRequest::set_signature(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentRequest.signature)
}
void PaymentRequest::set_signature(const void* value, size_t size) {
  
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentRequest.signature)
}
::std::string* PaymentRequest::mutable_signature() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentRequest.signature)
  return signature_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentRequest::release_signature() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentRequest.signature)
  
  return signature_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentRequest::set_allocated_signature(::std::string* signature) {
  if (signature != NULL) {
    
  } else {
    
  }
  signature_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signature);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentRequest.signature)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto3
}  // namespace bitcoin
}  // namespace com

// @@protoc_insertion_point(global_scope)
