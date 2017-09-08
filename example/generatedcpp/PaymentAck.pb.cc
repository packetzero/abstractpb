// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentAck.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PaymentAck.pb.h"

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
class PaymentAckDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<PaymentAck>
     _instance;
} _PaymentAck_default_instance_;

namespace protobuf_PaymentAck_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, payment_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentAck, memo_),
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(PaymentAck)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PaymentAck_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "PaymentAck.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  ::protobuf_Payment_2eproto::InitDefaults();
  _PaymentAck_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_PaymentAck_default_instance_);_PaymentAck_default_instance_._instance.get_mutable()->payment_ = const_cast< ::Payment*>(
      ::Payment::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020PaymentAck.proto\032\rPayment.proto\"5\n\nPay"
      "mentAck\022\031\n\007payment\030\001 \002(\0132\010.Payment\022\014\n\004me"
      "mo\030\002 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 88);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PaymentAck.proto", &protobuf_RegisterTypes);
  ::protobuf_Payment_2eproto::AddDescriptors();
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

}  // namespace protobuf_PaymentAck_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PaymentAck::kPaymentFieldNumber;
const int PaymentAck::kMemoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PaymentAck::PaymentAck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_PaymentAck_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:PaymentAck)
}
PaymentAck::PaymentAck(const PaymentAck& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_memo()) {
    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  if (from.has_payment()) {
    payment_ = new ::Payment(*from.payment_);
  } else {
    payment_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:PaymentAck)
}

void PaymentAck::SharedCtor() {
  _cached_size_ = 0;
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payment_ = NULL;
}

PaymentAck::~PaymentAck() {
  // @@protoc_insertion_point(destructor:PaymentAck)
  SharedDtor();
}

void PaymentAck::SharedDtor() {
  memo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete payment_;
}

void PaymentAck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PaymentAck::descriptor() {
  protobuf_PaymentAck_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentAck_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PaymentAck& PaymentAck::default_instance() {
  protobuf_PaymentAck_2eproto::InitDefaults();
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
// @@protoc_insertion_point(message_clear_start:PaymentAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!memo_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*memo_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(payment_ != NULL);
      payment_->::Payment::Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PaymentAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PaymentAck)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Payment payment = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_payment()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string memo = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_memo()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->memo().data(), static_cast<int>(this->memo().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "PaymentAck.memo");
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
  // @@protoc_insertion_point(parse_success:PaymentAck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PaymentAck)
  return false;
#undef DO_
}

void PaymentAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PaymentAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .Payment payment = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->payment_, output);
  }

  // optional string memo = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->memo().data(), static_cast<int>(this->memo().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PaymentAck.memo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->memo(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PaymentAck)
}

::google::protobuf::uint8* PaymentAck::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:PaymentAck)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .Payment payment = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->payment_, deterministic, target);
  }

  // optional string memo = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->memo().data(), static_cast<int>(this->memo().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PaymentAck.memo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->memo(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PaymentAck)
  return target;
}

size_t PaymentAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PaymentAck)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required .Payment payment = 1;
  if (has_payment()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->payment_);
  }
  // optional string memo = 2;
  if (has_memo()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->memo());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PaymentAck::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PaymentAck)
  GOOGLE_DCHECK_NE(&from, this);
  const PaymentAck* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PaymentAck>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PaymentAck)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PaymentAck)
    MergeFrom(*source);
  }
}

void PaymentAck::MergeFrom(const PaymentAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PaymentAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_memo();
      memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_payment()->::Payment::MergeFrom(from.payment());
    }
  }
}

void PaymentAck::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PaymentAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PaymentAck::CopyFrom(const PaymentAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PaymentAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PaymentAck::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;
  return true;
}

void PaymentAck::Swap(PaymentAck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PaymentAck::InternalSwap(PaymentAck* other) {
  using std::swap;
  memo_.Swap(&other->memo_);
  swap(payment_, other->payment_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PaymentAck::GetMetadata() const {
  protobuf_PaymentAck_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentAck_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PaymentAck

// required .Payment payment = 1;
bool PaymentAck::has_payment() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PaymentAck::set_has_payment() {
  _has_bits_[0] |= 0x00000002u;
}
void PaymentAck::clear_has_payment() {
  _has_bits_[0] &= ~0x00000002u;
}
void PaymentAck::clear_payment() {
  if (payment_ != NULL) payment_->::Payment::Clear();
  clear_has_payment();
}
const ::Payment& PaymentAck::payment() const {
  const ::Payment* p = payment_;
  // @@protoc_insertion_point(field_get:PaymentAck.payment)
  return p != NULL ? *p : *reinterpret_cast<const ::Payment*>(
      &::_Payment_default_instance_);
}
::Payment* PaymentAck::mutable_payment() {
  set_has_payment();
  if (payment_ == NULL) {
    payment_ = new ::Payment;
  }
  // @@protoc_insertion_point(field_mutable:PaymentAck.payment)
  return payment_;
}
::Payment* PaymentAck::release_payment() {
  // @@protoc_insertion_point(field_release:PaymentAck.payment)
  clear_has_payment();
  ::Payment* temp = payment_;
  payment_ = NULL;
  return temp;
}
void PaymentAck::set_allocated_payment(::Payment* payment) {
  delete payment_;
  payment_ = payment;
  if (payment) {
    set_has_payment();
  } else {
    clear_has_payment();
  }
  // @@protoc_insertion_point(field_set_allocated:PaymentAck.payment)
}

// optional string memo = 2;
bool PaymentAck::has_memo() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PaymentAck::set_has_memo() {
  _has_bits_[0] |= 0x00000001u;
}
void PaymentAck::clear_has_memo() {
  _has_bits_[0] &= ~0x00000001u;
}
void PaymentAck::clear_memo() {
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_memo();
}
const ::std::string& PaymentAck::memo() const {
  // @@protoc_insertion_point(field_get:PaymentAck.memo)
  return memo_.GetNoArena();
}
void PaymentAck::set_memo(const ::std::string& value) {
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PaymentAck.memo)
}
#if LANG_CXX11
void PaymentAck::set_memo(::std::string&& value) {
  set_has_memo();
  memo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PaymentAck.memo)
}
#endif
void PaymentAck::set_memo(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PaymentAck.memo)
}
void PaymentAck::set_memo(const char* value, size_t size) {
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PaymentAck.memo)
}
::std::string* PaymentAck::mutable_memo() {
  set_has_memo();
  // @@protoc_insertion_point(field_mutable:PaymentAck.memo)
  return memo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentAck::release_memo() {
  // @@protoc_insertion_point(field_release:PaymentAck.memo)
  clear_has_memo();
  return memo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentAck::set_allocated_memo(::std::string* memo) {
  if (memo != NULL) {
    set_has_memo();
  } else {
    clear_has_memo();
  }
  memo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), memo);
  // @@protoc_insertion_point(field_set_allocated:PaymentAck.memo)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
