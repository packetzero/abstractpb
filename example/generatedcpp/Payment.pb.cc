// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Payment.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Payment.pb.h"

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
class PaymentDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Payment> {
} _Payment_default_instance_;

namespace protobuf_Payment_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payment, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payment, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payment, merchant_data_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payment, transactions_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payment, refund_to_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Payment, memo_),
  0,
  ~0u,
  ~0u,
  1,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 9, sizeof(Payment)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Payment_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Payment.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _Payment_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_Output_2eproto::InitDefaults();
  _Payment_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\rPayment.proto\032\014Output.proto\"`\n\007Payment"
      "\022\025\n\rmerchant_data\030\001 \001(\014\022\024\n\014transactions\030"
      "\002 \003(\014\022\032\n\trefund_to\030\003 \003(\0132\007.Output\022\014\n\004mem"
      "o\030\004 \001(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 127);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Payment.proto", &protobuf_RegisterTypes);
  ::protobuf_Output_2eproto::AddDescriptors();
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

}  // namespace protobuf_Payment_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Payment::kMerchantDataFieldNumber;
const int Payment::kTransactionsFieldNumber;
const int Payment::kRefundToFieldNumber;
const int Payment::kMemoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Payment::Payment()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_Payment_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Payment)
}
Payment::Payment(const Payment& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      transactions_(from.transactions_),
      refund_to_(from.refund_to_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  merchant_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_merchant_data()) {
    merchant_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.merchant_data_);
  }
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_memo()) {
    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  // @@protoc_insertion_point(copy_constructor:Payment)
}

void Payment::SharedCtor() {
  _cached_size_ = 0;
  merchant_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Payment::~Payment() {
  // @@protoc_insertion_point(destructor:Payment)
  SharedDtor();
}

void Payment::SharedDtor() {
  merchant_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Payment::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Payment::descriptor() {
  protobuf_Payment_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Payment_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Payment& Payment::default_instance() {
  protobuf_Payment_2eproto::InitDefaults();
  return *internal_default_instance();
}

Payment* Payment::New(::google::protobuf::Arena* arena) const {
  Payment* n = new Payment;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Payment::Clear() {
// @@protoc_insertion_point(message_clear_start:Payment)
  transactions_.Clear();
  refund_to_.Clear();
  if (_has_bits_[0 / 32] & 3u) {
    if (has_merchant_data()) {
      GOOGLE_DCHECK(!merchant_data_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*merchant_data_.UnsafeRawStringPointer())->clear();
    }
    if (has_memo()) {
      GOOGLE_DCHECK(!memo_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*memo_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Payment::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Payment)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes merchant_data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_merchant_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated bytes transactions = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_transactions()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Output refund_to = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_refund_to()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string memo = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_memo()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->memo().data(), this->memo().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Payment.memo");
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Payment)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Payment)
  return false;
#undef DO_
}

void Payment::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Payment)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes merchant_data = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->merchant_data(), output);
  }

  // repeated bytes transactions = 2;
  for (int i = 0, n = this->transactions_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->transactions(i), output);
  }

  // repeated .Output refund_to = 3;
  for (unsigned int i = 0, n = this->refund_to_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->refund_to(i), output);
  }

  // optional string memo = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->memo().data(), this->memo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Payment.memo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->memo(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Payment)
}

::google::protobuf::uint8* Payment::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Payment)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes merchant_data = 1;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->merchant_data(), target);
  }

  // repeated bytes transactions = 2;
  for (int i = 0, n = this->transactions_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(2, this->transactions(i), target);
  }

  // repeated .Output refund_to = 3;
  for (unsigned int i = 0, n = this->refund_to_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->refund_to(i), deterministic, target);
  }

  // optional string memo = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->memo().data(), this->memo().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Payment.memo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->memo(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Payment)
  return target;
}

size_t Payment::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Payment)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated bytes transactions = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->transactions_size());
  for (int i = 0, n = this->transactions_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->transactions(i));
  }

  // repeated .Output refund_to = 3;
  {
    unsigned int count = this->refund_to_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->refund_to(i));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional bytes merchant_data = 1;
    if (has_merchant_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->merchant_data());
    }

    // optional string memo = 4;
    if (has_memo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->memo());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Payment::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Payment)
  GOOGLE_DCHECK_NE(&from, this);
  const Payment* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Payment>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Payment)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Payment)
    MergeFrom(*source);
  }
}

void Payment::MergeFrom(const Payment& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Payment)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  transactions_.MergeFrom(from.transactions_);
  refund_to_.MergeFrom(from.refund_to_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_merchant_data();
      merchant_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.merchant_data_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_memo();
      memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
    }
  }
}

void Payment::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Payment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Payment::CopyFrom(const Payment& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Payment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Payment::IsInitialized() const {
  return true;
}

void Payment::Swap(Payment* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Payment::InternalSwap(Payment* other) {
  transactions_.InternalSwap(&other->transactions_);
  refund_to_.InternalSwap(&other->refund_to_);
  merchant_data_.Swap(&other->merchant_data_);
  memo_.Swap(&other->memo_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Payment::GetMetadata() const {
  protobuf_Payment_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Payment_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Payment

// optional bytes merchant_data = 1;
bool Payment::has_merchant_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Payment::set_has_merchant_data() {
  _has_bits_[0] |= 0x00000001u;
}
void Payment::clear_has_merchant_data() {
  _has_bits_[0] &= ~0x00000001u;
}
void Payment::clear_merchant_data() {
  merchant_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_merchant_data();
}
const ::std::string& Payment::merchant_data() const {
  // @@protoc_insertion_point(field_get:Payment.merchant_data)
  return merchant_data_.GetNoArena();
}
void Payment::set_merchant_data(const ::std::string& value) {
  set_has_merchant_data();
  merchant_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Payment.merchant_data)
}
#if LANG_CXX11
void Payment::set_merchant_data(::std::string&& value) {
  set_has_merchant_data();
  merchant_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Payment.merchant_data)
}
#endif
void Payment::set_merchant_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_merchant_data();
  merchant_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Payment.merchant_data)
}
void Payment::set_merchant_data(const void* value, size_t size) {
  set_has_merchant_data();
  merchant_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Payment.merchant_data)
}
::std::string* Payment::mutable_merchant_data() {
  set_has_merchant_data();
  // @@protoc_insertion_point(field_mutable:Payment.merchant_data)
  return merchant_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Payment::release_merchant_data() {
  // @@protoc_insertion_point(field_release:Payment.merchant_data)
  clear_has_merchant_data();
  return merchant_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Payment::set_allocated_merchant_data(::std::string* merchant_data) {
  if (merchant_data != NULL) {
    set_has_merchant_data();
  } else {
    clear_has_merchant_data();
  }
  merchant_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), merchant_data);
  // @@protoc_insertion_point(field_set_allocated:Payment.merchant_data)
}

// repeated bytes transactions = 2;
int Payment::transactions_size() const {
  return transactions_.size();
}
void Payment::clear_transactions() {
  transactions_.Clear();
}
const ::std::string& Payment::transactions(int index) const {
  // @@protoc_insertion_point(field_get:Payment.transactions)
  return transactions_.Get(index);
}
::std::string* Payment::mutable_transactions(int index) {
  // @@protoc_insertion_point(field_mutable:Payment.transactions)
  return transactions_.Mutable(index);
}
void Payment::set_transactions(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Payment.transactions)
  transactions_.Mutable(index)->assign(value);
}
#if LANG_CXX11
void Payment::set_transactions(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:Payment.transactions)
  transactions_.Mutable(index)->assign(std::move(value));
}
#endif
void Payment::set_transactions(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  transactions_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Payment.transactions)
}
void Payment::set_transactions(int index, const void* value, size_t size) {
  transactions_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Payment.transactions)
}
::std::string* Payment::add_transactions() {
  // @@protoc_insertion_point(field_add_mutable:Payment.transactions)
  return transactions_.Add();
}
void Payment::add_transactions(const ::std::string& value) {
  transactions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Payment.transactions)
}
#if LANG_CXX11
void Payment::add_transactions(::std::string&& value) {
  transactions_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Payment.transactions)
}
#endif
void Payment::add_transactions(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  transactions_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Payment.transactions)
}
void Payment::add_transactions(const void* value, size_t size) {
  transactions_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Payment.transactions)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
Payment::transactions() const {
  // @@protoc_insertion_point(field_list:Payment.transactions)
  return transactions_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
Payment::mutable_transactions() {
  // @@protoc_insertion_point(field_mutable_list:Payment.transactions)
  return &transactions_;
}

// repeated .Output refund_to = 3;
int Payment::refund_to_size() const {
  return refund_to_.size();
}
void Payment::clear_refund_to() {
  refund_to_.Clear();
}
const ::Output& Payment::refund_to(int index) const {
  // @@protoc_insertion_point(field_get:Payment.refund_to)
  return refund_to_.Get(index);
}
::Output* Payment::mutable_refund_to(int index) {
  // @@protoc_insertion_point(field_mutable:Payment.refund_to)
  return refund_to_.Mutable(index);
}
::Output* Payment::add_refund_to() {
  // @@protoc_insertion_point(field_add:Payment.refund_to)
  return refund_to_.Add();
}
::google::protobuf::RepeatedPtrField< ::Output >*
Payment::mutable_refund_to() {
  // @@protoc_insertion_point(field_mutable_list:Payment.refund_to)
  return &refund_to_;
}
const ::google::protobuf::RepeatedPtrField< ::Output >&
Payment::refund_to() const {
  // @@protoc_insertion_point(field_list:Payment.refund_to)
  return refund_to_;
}

// optional string memo = 4;
bool Payment::has_memo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Payment::set_has_memo() {
  _has_bits_[0] |= 0x00000002u;
}
void Payment::clear_has_memo() {
  _has_bits_[0] &= ~0x00000002u;
}
void Payment::clear_memo() {
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_memo();
}
const ::std::string& Payment::memo() const {
  // @@protoc_insertion_point(field_get:Payment.memo)
  return memo_.GetNoArena();
}
void Payment::set_memo(const ::std::string& value) {
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Payment.memo)
}
#if LANG_CXX11
void Payment::set_memo(::std::string&& value) {
  set_has_memo();
  memo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Payment.memo)
}
#endif
void Payment::set_memo(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Payment.memo)
}
void Payment::set_memo(const char* value, size_t size) {
  set_has_memo();
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Payment.memo)
}
::std::string* Payment::mutable_memo() {
  set_has_memo();
  // @@protoc_insertion_point(field_mutable:Payment.memo)
  return memo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Payment::release_memo() {
  // @@protoc_insertion_point(field_release:Payment.memo)
  clear_has_memo();
  return memo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Payment::set_allocated_memo(::std::string* memo) {
  if (memo != NULL) {
    set_has_memo();
  } else {
    clear_has_memo();
  }
  memo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), memo);
  // @@protoc_insertion_point(field_set_allocated:Payment.memo)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
