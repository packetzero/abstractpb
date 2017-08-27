// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentDetailsV3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "PaymentDetailsV3.pb.h"

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
class PaymentDetailsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PaymentDetails> {
} _PaymentDetails_default_instance_;

namespace protobuf_PaymentDetailsV3_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, network_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, outputs_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, expires_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, memo_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, payment_url_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PaymentDetails, merchant_data_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(PaymentDetails)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PaymentDetails_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "PaymentDetailsV3.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _PaymentDetails_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::com::bitcoin::proto3::protobuf_OutputV3_2eproto::InitDefaults();
  _PaymentDetails_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026PaymentDetailsV3.proto\022\022com.bitcoin.pr"
      "oto3\032\016OutputV3.proto\"\247\001\n\016PaymentDetails\022"
      "\017\n\007network\030\001 \001(\t\022+\n\007outputs\030\002 \003(\0132\032.com."
      "bitcoin.proto3.Output\022\014\n\004time\030\003 \001(\004\022\017\n\007e"
      "xpires\030\004 \001(\004\022\014\n\004memo\030\005 \001(\t\022\023\n\013payment_ur"
      "l\030\006 \001(\t\022\025\n\rmerchant_data\030\007 \001(\014b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 238);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "PaymentDetailsV3.proto", &protobuf_RegisterTypes);
  ::com::bitcoin::proto3::protobuf_OutputV3_2eproto::AddDescriptors();
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

}  // namespace protobuf_PaymentDetailsV3_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PaymentDetails::kNetworkFieldNumber;
const int PaymentDetails::kOutputsFieldNumber;
const int PaymentDetails::kTimeFieldNumber;
const int PaymentDetails::kExpiresFieldNumber;
const int PaymentDetails::kMemoFieldNumber;
const int PaymentDetails::kPaymentUrlFieldNumber;
const int PaymentDetails::kMerchantDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PaymentDetails::PaymentDetails()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_PaymentDetailsV3_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.bitcoin.proto3.PaymentDetails)
}
PaymentDetails::PaymentDetails(const PaymentDetails& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      outputs_(from.outputs_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  network_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.network().size() > 0) {
    network_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.network_);
  }
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.memo().size() > 0) {
    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  payment_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.payment_url().size() > 0) {
    payment_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.payment_url_);
  }
  merchant_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.merchant_data().size() > 0) {
    merchant_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.merchant_data_);
  }
  ::memcpy(&time_, &from.time_,
    reinterpret_cast<char*>(&expires_) -
    reinterpret_cast<char*>(&time_) + sizeof(expires_));
  // @@protoc_insertion_point(copy_constructor:com.bitcoin.proto3.PaymentDetails)
}

void PaymentDetails::SharedCtor() {
  network_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payment_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  merchant_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_, 0, reinterpret_cast<char*>(&expires_) -
    reinterpret_cast<char*>(&time_) + sizeof(expires_));
  _cached_size_ = 0;
}

PaymentDetails::~PaymentDetails() {
  // @@protoc_insertion_point(destructor:com.bitcoin.proto3.PaymentDetails)
  SharedDtor();
}

void PaymentDetails::SharedDtor() {
  network_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payment_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  merchant_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PaymentDetails::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PaymentDetails::descriptor() {
  protobuf_PaymentDetailsV3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentDetailsV3_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PaymentDetails& PaymentDetails::default_instance() {
  protobuf_PaymentDetailsV3_2eproto::InitDefaults();
  return *internal_default_instance();
}

PaymentDetails* PaymentDetails::New(::google::protobuf::Arena* arena) const {
  PaymentDetails* n = new PaymentDetails;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PaymentDetails::Clear() {
// @@protoc_insertion_point(message_clear_start:com.bitcoin.proto3.PaymentDetails)
  outputs_.Clear();
  network_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payment_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  merchant_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_, 0, reinterpret_cast<char*>(&expires_) -
    reinterpret_cast<char*>(&time_) + sizeof(expires_));
}

bool PaymentDetails::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.bitcoin.proto3.PaymentDetails)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string network = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_network()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->network().data(), this->network().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.bitcoin.proto3.PaymentDetails.network"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .com.bitcoin.proto3.Output outputs = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_outputs()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 expires = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &expires_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string memo = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_memo()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->memo().data(), this->memo().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.bitcoin.proto3.PaymentDetails.memo"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string payment_url = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_payment_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->payment_url().data(), this->payment_url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.bitcoin.proto3.PaymentDetails.payment_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes merchant_data = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_merchant_data()));
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
  // @@protoc_insertion_point(parse_success:com.bitcoin.proto3.PaymentDetails)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.bitcoin.proto3.PaymentDetails)
  return false;
#undef DO_
}

void PaymentDetails::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.bitcoin.proto3.PaymentDetails)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string network = 1;
  if (this->network().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->network().data(), this->network().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentDetails.network");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->network(), output);
  }

  // repeated .com.bitcoin.proto3.Output outputs = 2;
  for (unsigned int i = 0, n = this->outputs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->outputs(i), output);
  }

  // uint64 time = 3;
  if (this->time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->time(), output);
  }

  // uint64 expires = 4;
  if (this->expires() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->expires(), output);
  }

  // string memo = 5;
  if (this->memo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->memo().data(), this->memo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentDetails.memo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->memo(), output);
  }

  // string payment_url = 6;
  if (this->payment_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->payment_url().data(), this->payment_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentDetails.payment_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->payment_url(), output);
  }

  // bytes merchant_data = 7;
  if (this->merchant_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      7, this->merchant_data(), output);
  }

  // @@protoc_insertion_point(serialize_end:com.bitcoin.proto3.PaymentDetails)
}

::google::protobuf::uint8* PaymentDetails::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:com.bitcoin.proto3.PaymentDetails)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string network = 1;
  if (this->network().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->network().data(), this->network().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentDetails.network");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->network(), target);
  }

  // repeated .com.bitcoin.proto3.Output outputs = 2;
  for (unsigned int i = 0, n = this->outputs_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->outputs(i), deterministic, target);
  }

  // uint64 time = 3;
  if (this->time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->time(), target);
  }

  // uint64 expires = 4;
  if (this->expires() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->expires(), target);
  }

  // string memo = 5;
  if (this->memo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->memo().data(), this->memo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentDetails.memo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->memo(), target);
  }

  // string payment_url = 6;
  if (this->payment_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->payment_url().data(), this->payment_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.bitcoin.proto3.PaymentDetails.payment_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->payment_url(), target);
  }

  // bytes merchant_data = 7;
  if (this->merchant_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->merchant_data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:com.bitcoin.proto3.PaymentDetails)
  return target;
}

size_t PaymentDetails::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.bitcoin.proto3.PaymentDetails)
  size_t total_size = 0;

  // repeated .com.bitcoin.proto3.Output outputs = 2;
  {
    unsigned int count = this->outputs_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->outputs(i));
    }
  }

  // string network = 1;
  if (this->network().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->network());
  }

  // string memo = 5;
  if (this->memo().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->memo());
  }

  // string payment_url = 6;
  if (this->payment_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->payment_url());
  }

  // bytes merchant_data = 7;
  if (this->merchant_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->merchant_data());
  }

  // uint64 time = 3;
  if (this->time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->time());
  }

  // uint64 expires = 4;
  if (this->expires() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->expires());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PaymentDetails::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.bitcoin.proto3.PaymentDetails)
  GOOGLE_DCHECK_NE(&from, this);
  const PaymentDetails* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PaymentDetails>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.bitcoin.proto3.PaymentDetails)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.bitcoin.proto3.PaymentDetails)
    MergeFrom(*source);
  }
}

void PaymentDetails::MergeFrom(const PaymentDetails& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.bitcoin.proto3.PaymentDetails)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  outputs_.MergeFrom(from.outputs_);
  if (from.network().size() > 0) {

    network_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.network_);
  }
  if (from.memo().size() > 0) {

    memo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.memo_);
  }
  if (from.payment_url().size() > 0) {

    payment_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.payment_url_);
  }
  if (from.merchant_data().size() > 0) {

    merchant_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.merchant_data_);
  }
  if (from.time() != 0) {
    set_time(from.time());
  }
  if (from.expires() != 0) {
    set_expires(from.expires());
  }
}

void PaymentDetails::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.bitcoin.proto3.PaymentDetails)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PaymentDetails::CopyFrom(const PaymentDetails& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.bitcoin.proto3.PaymentDetails)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PaymentDetails::IsInitialized() const {
  return true;
}

void PaymentDetails::Swap(PaymentDetails* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PaymentDetails::InternalSwap(PaymentDetails* other) {
  outputs_.InternalSwap(&other->outputs_);
  network_.Swap(&other->network_);
  memo_.Swap(&other->memo_);
  payment_url_.Swap(&other->payment_url_);
  merchant_data_.Swap(&other->merchant_data_);
  std::swap(time_, other->time_);
  std::swap(expires_, other->expires_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PaymentDetails::GetMetadata() const {
  protobuf_PaymentDetailsV3_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_PaymentDetailsV3_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PaymentDetails

// string network = 1;
void PaymentDetails::clear_network() {
  network_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentDetails::network() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.network)
  return network_.GetNoArena();
}
void PaymentDetails::set_network(const ::std::string& value) {
  
  network_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentDetails.network)
}
#if LANG_CXX11
void PaymentDetails::set_network(::std::string&& value) {
  
  network_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentDetails.network)
}
#endif
void PaymentDetails::set_network(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  network_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentDetails.network)
}
void PaymentDetails::set_network(const char* value, size_t size) {
  
  network_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentDetails.network)
}
::std::string* PaymentDetails::mutable_network() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentDetails.network)
  return network_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentDetails::release_network() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentDetails.network)
  
  return network_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentDetails::set_allocated_network(::std::string* network) {
  if (network != NULL) {
    
  } else {
    
  }
  network_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), network);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentDetails.network)
}

// repeated .com.bitcoin.proto3.Output outputs = 2;
int PaymentDetails::outputs_size() const {
  return outputs_.size();
}
void PaymentDetails::clear_outputs() {
  outputs_.Clear();
}
const ::com::bitcoin::proto3::Output& PaymentDetails::outputs(int index) const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.outputs)
  return outputs_.Get(index);
}
::com::bitcoin::proto3::Output* PaymentDetails::mutable_outputs(int index) {
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentDetails.outputs)
  return outputs_.Mutable(index);
}
::com::bitcoin::proto3::Output* PaymentDetails::add_outputs() {
  // @@protoc_insertion_point(field_add:com.bitcoin.proto3.PaymentDetails.outputs)
  return outputs_.Add();
}
::google::protobuf::RepeatedPtrField< ::com::bitcoin::proto3::Output >*
PaymentDetails::mutable_outputs() {
  // @@protoc_insertion_point(field_mutable_list:com.bitcoin.proto3.PaymentDetails.outputs)
  return &outputs_;
}
const ::google::protobuf::RepeatedPtrField< ::com::bitcoin::proto3::Output >&
PaymentDetails::outputs() const {
  // @@protoc_insertion_point(field_list:com.bitcoin.proto3.PaymentDetails.outputs)
  return outputs_;
}

// uint64 time = 3;
void PaymentDetails::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 PaymentDetails::time() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.time)
  return time_;
}
void PaymentDetails::set_time(::google::protobuf::uint64 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentDetails.time)
}

// uint64 expires = 4;
void PaymentDetails::clear_expires() {
  expires_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 PaymentDetails::expires() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.expires)
  return expires_;
}
void PaymentDetails::set_expires(::google::protobuf::uint64 value) {
  
  expires_ = value;
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentDetails.expires)
}

// string memo = 5;
void PaymentDetails::clear_memo() {
  memo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentDetails::memo() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.memo)
  return memo_.GetNoArena();
}
void PaymentDetails::set_memo(const ::std::string& value) {
  
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentDetails.memo)
}
#if LANG_CXX11
void PaymentDetails::set_memo(::std::string&& value) {
  
  memo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentDetails.memo)
}
#endif
void PaymentDetails::set_memo(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentDetails.memo)
}
void PaymentDetails::set_memo(const char* value, size_t size) {
  
  memo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentDetails.memo)
}
::std::string* PaymentDetails::mutable_memo() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentDetails.memo)
  return memo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentDetails::release_memo() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentDetails.memo)
  
  return memo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentDetails::set_allocated_memo(::std::string* memo) {
  if (memo != NULL) {
    
  } else {
    
  }
  memo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), memo);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentDetails.memo)
}

// string payment_url = 6;
void PaymentDetails::clear_payment_url() {
  payment_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentDetails::payment_url() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.payment_url)
  return payment_url_.GetNoArena();
}
void PaymentDetails::set_payment_url(const ::std::string& value) {
  
  payment_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentDetails.payment_url)
}
#if LANG_CXX11
void PaymentDetails::set_payment_url(::std::string&& value) {
  
  payment_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentDetails.payment_url)
}
#endif
void PaymentDetails::set_payment_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  payment_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentDetails.payment_url)
}
void PaymentDetails::set_payment_url(const char* value, size_t size) {
  
  payment_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentDetails.payment_url)
}
::std::string* PaymentDetails::mutable_payment_url() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentDetails.payment_url)
  return payment_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentDetails::release_payment_url() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentDetails.payment_url)
  
  return payment_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentDetails::set_allocated_payment_url(::std::string* payment_url) {
  if (payment_url != NULL) {
    
  } else {
    
  }
  payment_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), payment_url);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentDetails.payment_url)
}

// bytes merchant_data = 7;
void PaymentDetails::clear_merchant_data() {
  merchant_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& PaymentDetails::merchant_data() const {
  // @@protoc_insertion_point(field_get:com.bitcoin.proto3.PaymentDetails.merchant_data)
  return merchant_data_.GetNoArena();
}
void PaymentDetails::set_merchant_data(const ::std::string& value) {
  
  merchant_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.bitcoin.proto3.PaymentDetails.merchant_data)
}
#if LANG_CXX11
void PaymentDetails::set_merchant_data(::std::string&& value) {
  
  merchant_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.bitcoin.proto3.PaymentDetails.merchant_data)
}
#endif
void PaymentDetails::set_merchant_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  merchant_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.bitcoin.proto3.PaymentDetails.merchant_data)
}
void PaymentDetails::set_merchant_data(const void* value, size_t size) {
  
  merchant_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.bitcoin.proto3.PaymentDetails.merchant_data)
}
::std::string* PaymentDetails::mutable_merchant_data() {
  
  // @@protoc_insertion_point(field_mutable:com.bitcoin.proto3.PaymentDetails.merchant_data)
  return merchant_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PaymentDetails::release_merchant_data() {
  // @@protoc_insertion_point(field_release:com.bitcoin.proto3.PaymentDetails.merchant_data)
  
  return merchant_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PaymentDetails::set_allocated_merchant_data(::std::string* merchant_data) {
  if (merchant_data != NULL) {
    
  } else {
    
  }
  merchant_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), merchant_data);
  // @@protoc_insertion_point(field_set_allocated:com.bitcoin.proto3.PaymentDetails.merchant_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto3
}  // namespace bitcoin
}  // namespace com

// @@protoc_insertion_point(global_scope)