// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentAckV3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PaymentAckV3.pb.h"

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
class PaymentAckDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PaymentAck> {
} _PaymentAck_default_instance_;

namespace protobuf_PaymentAckV3_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, payment_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, memo_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, responsetime_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(PaymentAck)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PaymentAck_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "PaymentAckV3.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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

void TableStruct::Shutdown() {
  _PaymentAck_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::com::bitcoin::proto3::protobuf_PaymentV3_2eproto::InitDefaults();
  _PaymentAck_default_instance_.DefaultConstruct();
  _PaymentAck_default_instance_.get_mutable()->payment_ = const_cast< ::com::bitcoin::proto3::Payment*>(
      ::com::bitcoin::proto3::Payment::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\022PaymentAckV3.proto\022\022com.bitcoin.proto3"
      "\032\017PaymentV3.proto\"^\n\nPaymentAck\022,\n\007payme"
      "nt\030\001 \001(\0132\033.com.bitcoin.proto3.Payment\022\014\n"
      "\004memo\030\002 \001(\t\022\024\n\014responseTime\030\004 \001(\004b\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 161);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PaymentAckV3.proto", &protobuf_RegisterTypes);
  ::com::bitcoin::proto3::protobuf_PaymentV3_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_PaymentAckV3_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PaymentAck::kPaymentFieldNumber;
const int PaymentAck::kMemoFieldNumber;
const int PaymentAck::kResponseTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PaymentAck::PaymentAck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_PaymentAckV3_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.bitcoin.proto3.PaymentAck)
}
PaymentAck::PaymentAck(const PaymentAck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.memo().size() > 0) {
    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  if (from.has_payment()) {
    payment_ = new ::com::bitcoin::proto3::Payment(*from.payment_);
  } else {
    payment_ = NULL;
  }
  responsetime_ = from.responsetime_;
  // @@protoc_insertion_point(copy_constructor:com.bitcoin.proto3.PaymentAck)
}

void PaymentAck::SharedCtor() {
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&payment_, 0, reinterpret_cast<char*>(&responsetime_) -
    reinterpret_cast<char*>(&payment_) + sizeof(responsetime_));
  _cached_size_ = 0;
}

PaymentAck::~PaymentAck() {
  // @@protoc_insertion_point(destructor:com.bitcoin.proto3.PaymentAck)
  SharedDtor();
}

void PaymentAck::SharedDtor() {
  memo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete payment_;
  }
}

void PaymentAck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PaymentAck::descriptor() {
  protobuf_PaymentAckV3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentAckV3_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PaymentAck& PaymentAck::default_instance() {
  protobuf_PaymentAckV3_2eproto::InitDefaults();
  return *internal_default_instance();
}

PaymentAck* PaymentAck::New(::google::protobuf::Arena* arena) const {
  PaymentAck* n = new PaymentAck;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PaymentAck::Clear() {
// @@protoc_insertion_point(message_clear_start:com.bitcoin.proto3.PaymentAck)
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && payment_ != NULL) {
    delete payment_;
  }
  payment_ = NULL;
  responsetime_ = GOOGLE_ULONGLONG(0);
}

bool PaymentAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.bitcoin.proto3.PaymentAck)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .com.bitcoin.proto3.Payment payment = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_payment()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string memo = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_memo()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->memo().data(), this->memo().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.bitcoin.proto3.PaymentAck.memo"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 responseTime = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &responsetime_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.bitcoin.proto3.PaymentAck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.bitcoin.proto3.PaymentAck)
  return false;
#undef DO_
}

void PaymentAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.bitcoin.proto3.PaymentAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .com.bitcoin.proto3.Payment payment = 1;
  if (this->has_payment()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->payment_, output);
  }

  // string memo = 2;
  if (this->memo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->memo().data(), this->memo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentAck.memo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->memo(), output);
  }

  // uint64 responseTime = 4;
  if (this->responsetime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->responsetime(), output);
  }

  // @@protoc_insertion_point(serialize_end:com.bitcoin.proto3.PaymentAck)
}

::google::protobuf::uint8* PaymentAck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.bitcoin.proto3.PaymentAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .com.bitcoin.proto3.Payment payment = 1;
  if (this->has_payment()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->payment_, deterministic, target);
  }

  // string memo = 2;
  if (this->memo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->memo().data(), this->memo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentAck.memo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->memo(), target);
  }

  // uint64 responseTime = 4;
  if (this->responsetime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->responsetime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:com.bitcoin.proto3.PaymentAck)
  return target;
}

size_t PaymentAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.bitcoin.proto3.PaymentAck)
  size_t total_size = 0;

  // string memo = 2;
  if (this->memo().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->memo());
  }

  // .com.bitcoin.proto3.Payment payment = 1;
  if (this->has_payment()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->payment_);
  }

  // uint64 responseTime = 4;
  if (this->responsetime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->responsetime());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PaymentAck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.bitcoin.proto3.PaymentAck)
  GOOGLE_DCHECK_NE(&from, this);
  const PaymentAck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PaymentAck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.bitcoin.proto3.PaymentAck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.bitcoin.proto3.PaymentAck)
    MergeFrom(*source);
  }
}

void PaymentAck::MergeFrom(const PaymentAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.bitcoin.proto3.PaymentAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.memo().size() > 0) {

    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  if (from.has_payment()) {
    mutable_payment()->::com::bitcoin::proto3::Payment::MergeFrom(from.payment());
  }
  if (from.responsetime() != 0) {
    set_responsetime(from.responsetime());
  }
}

void PaymentAck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.bitcoin.proto3.PaymentAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PaymentAck::CopyFrom(const PaymentAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.bitcoin.proto3.PaymentAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PaymentAck::IsInitialized() const {
  return true;
}

void PaymentAck::Swap(PaymentAck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PaymentAck::InternalSwap(PaymentAck* other) {
  memo_.Swap(&other->memo_);
  std::swap(payment_, other->payment_);
  std::swap(responsetime_, other->responsetime_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PaymentAck::GetMetadata() const {
  protobuf_PaymentAckV3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentAckV3_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PaymentAck

// .com.bitcoin.proto3.Payment payment = 1;
bool PaymentAck::has_payment() const {
  return this != internal_default_instance() && payment_ != NULL;
}
void PaymentAck::clear_payment() {
  if (GetArenaNoVirtual() == NULL && payment_ != NULL) delete payment_;
  payment_ = NULL;
}
const ::com::bitcoin::proto3::Payment& PaymentAck::payment() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentAck.payment)
  return payment_ != NULL ? *payment_
                         : *::com::bitcoin::proto3::Payment::internal_default_instance();
}
::com::bitcoin::proto3::Payment* PaymentAck::mutable_payment() {
  
  if (payment_ == NULL) {
    payment_ = new ::com::bitcoin::proto3::Payment;
  }
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentAck.payment)
  return payment_;
}
::com::bitcoin::proto3::Payment* PaymentAck::release_payment() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentAck.payment)
  
  ::com::bitcoin::proto3::Payment* temp = payment_;
  payment_ = NULL;
  return temp;
}
void PaymentAck::set_allocated_payment(::com::bitcoin::proto3::Payment* payment) {
  delete payment_;
  payment_ = payment;
  if (payment) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentAck.payment)
}

// string memo = 2;
void PaymentAck::clear_memo() {
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentAck::memo() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentAck.memo)
  return memo_.GetNoArena();
}
void PaymentAck::set_memo(const ::std::string& value) {
  
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentAck.memo)
}
#if LANG_CXX11
void PaymentAck::set_memo(::std::string&& value) {
  
  memo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentAck.memo)
}
#endif
void PaymentAck::set_memo(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentAck.memo)
}
void PaymentAck::set_memo(const char* value, size_t size) {
  
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentAck.memo)
}
::std::string* PaymentAck::mutable_memo() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentAck.memo)
  return memo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentAck::release_memo() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentAck.memo)
  
  return memo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentAck::set_allocated_memo(::std::string* memo) {
  if (memo != NULL) {
    
  } else {
    
  }
  memo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), memo);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentAck.memo)
}

// uint64 responseTime = 4;
void PaymentAck::clear_responsetime() {
  responsetime_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 PaymentAck::responsetime() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentAck.responseTime)
  return responsetime_;
}
void PaymentAck::set_responsetime(::google::protobuf::uint64 value) {
  
  responsetime_ = value;
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentAck.responseTime)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto3
}  // namespace bitcoin
}  // namespace com

// @@protoc_insertion_point(global_scope)