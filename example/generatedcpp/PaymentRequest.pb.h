// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentRequest.proto

#ifndef PROTOBUF_PaymentRequest_2eproto__INCLUDED
#define PROTOBUF_PaymentRequest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class PaymentRequest;
class PaymentRequestDefaultTypeInternal;
extern PaymentRequestDefaultTypeInternal _PaymentRequest_default_instance_;

namespace protobuf_PaymentRequest_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_PaymentRequest_2eproto

// ===================================================================

class PaymentRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PaymentRequest) */ {
 public:
  PaymentRequest();
  virtual ~PaymentRequest();

  PaymentRequest(const PaymentRequest& from);

  inline PaymentRequest& operator=(const PaymentRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PaymentRequest& default_instance();

  static inline const PaymentRequest* internal_default_instance() {
    return reinterpret_cast<const PaymentRequest*>(
               &_PaymentRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PaymentRequest* other);

  // implements Message ----------------------------------------------

  inline PaymentRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  PaymentRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PaymentRequest& from);
  void MergeFrom(const PaymentRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PaymentRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string pki_type = 2 [default = "none"];
  bool has_pki_type() const;
  void clear_pki_type();
  static const int kPkiTypeFieldNumber = 2;
  const ::std::string& pki_type() const;
  void set_pki_type(const ::std::string& value);
  #if LANG_CXX11
  void set_pki_type(::std::string&& value);
  #endif
  void set_pki_type(const char* value);
  void set_pki_type(const char* value, size_t size);
  ::std::string* mutable_pki_type();
  ::std::string* release_pki_type();
  void set_allocated_pki_type(::std::string* pki_type);

  // optional bytes pki_data = 3;
  bool has_pki_data() const;
  void clear_pki_data();
  static const int kPkiDataFieldNumber = 3;
  const ::std::string& pki_data() const;
  void set_pki_data(const ::std::string& value);
  #if LANG_CXX11
  void set_pki_data(::std::string&& value);
  #endif
  void set_pki_data(const char* value);
  void set_pki_data(const void* value, size_t size);
  ::std::string* mutable_pki_data();
  ::std::string* release_pki_data();
  void set_allocated_pki_data(::std::string* pki_data);

  // required bytes serialized_payment_details = 4;
  bool has_serialized_payment_details() const;
  void clear_serialized_payment_details();
  static const int kSerializedPaymentDetailsFieldNumber = 4;
  const ::std::string& serialized_payment_details() const;
  void set_serialized_payment_details(const ::std::string& value);
  #if LANG_CXX11
  void set_serialized_payment_details(::std::string&& value);
  #endif
  void set_serialized_payment_details(const char* value);
  void set_serialized_payment_details(const void* value, size_t size);
  ::std::string* mutable_serialized_payment_details();
  ::std::string* release_serialized_payment_details();
  void set_allocated_serialized_payment_details(::std::string* serialized_payment_details);

  // optional bytes signature = 5;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 5;
  const ::std::string& signature() const;
  void set_signature(const ::std::string& value);
  #if LANG_CXX11
  void set_signature(::std::string&& value);
  #endif
  void set_signature(const char* value);
  void set_signature(const void* value, size_t size);
  ::std::string* mutable_signature();
  ::std::string* release_signature();
  void set_allocated_signature(::std::string* signature);

  // optional uint32 payment_details_version = 1 [default = 1];
  bool has_payment_details_version() const;
  void clear_payment_details_version();
  static const int kPaymentDetailsVersionFieldNumber = 1;
  ::google::protobuf::uint32 payment_details_version() const;
  void set_payment_details_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:PaymentRequest)
 private:
  void set_has_payment_details_version();
  void clear_has_payment_details_version();
  void set_has_pki_type();
  void clear_has_pki_type();
  void set_has_pki_data();
  void clear_has_pki_data();
  void set_has_serialized_payment_details();
  void clear_has_serialized_payment_details();
  void set_has_signature();
  void clear_has_signature();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_pki_type_;
  ::google::protobuf::internal::ArenaStringPtr pki_type_;
  ::google::protobuf::internal::ArenaStringPtr pki_data_;
  ::google::protobuf::internal::ArenaStringPtr serialized_payment_details_;
  ::google::protobuf::internal::ArenaStringPtr signature_;
  ::google::protobuf::uint32 payment_details_version_;
  friend struct protobuf_PaymentRequest_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PaymentRequest

// optional uint32 payment_details_version = 1 [default = 1];
inline bool PaymentRequest::has_payment_details_version() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PaymentRequest::set_has_payment_details_version() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PaymentRequest::clear_has_payment_details_version() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PaymentRequest::clear_payment_details_version() {
  payment_details_version_ = 1u;
  clear_has_payment_details_version();
}
inline ::google::protobuf::uint32 PaymentRequest::payment_details_version() const {
  // @@protoc_insertion_point(field_get:PaymentRequest.payment_details_version)
  return payment_details_version_;
}
inline void PaymentRequest::set_payment_details_version(::google::protobuf::uint32 value) {
  set_has_payment_details_version();
  payment_details_version_ = value;
  // @@protoc_insertion_point(field_set:PaymentRequest.payment_details_version)
}

// optional string pki_type = 2 [default = "none"];
inline bool PaymentRequest::has_pki_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PaymentRequest::set_has_pki_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PaymentRequest::clear_has_pki_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PaymentRequest::clear_pki_type() {
  pki_type_.ClearToDefaultNoArena(&PaymentRequest::_default_pki_type_.get());
  clear_has_pki_type();
}
inline const ::std::string& PaymentRequest::pki_type() const {
  // @@protoc_insertion_point(field_get:PaymentRequest.pki_type)
  return pki_type_.GetNoArena();
}
inline void PaymentRequest::set_pki_type(const ::std::string& value) {
  set_has_pki_type();
  pki_type_.SetNoArena(&PaymentRequest::_default_pki_type_.get(), value);
  // @@protoc_insertion_point(field_set:PaymentRequest.pki_type)
}
#if LANG_CXX11
inline void PaymentRequest::set_pki_type(::std::string&& value) {
  set_has_pki_type();
  pki_type_.SetNoArena(
    &PaymentRequest::_default_pki_type_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PaymentRequest.pki_type)
}
#endif
inline void PaymentRequest::set_pki_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_pki_type();
  pki_type_.SetNoArena(&PaymentRequest::_default_pki_type_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PaymentRequest.pki_type)
}
inline void PaymentRequest::set_pki_type(const char* value, size_t size) {
  set_has_pki_type();
  pki_type_.SetNoArena(&PaymentRequest::_default_pki_type_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PaymentRequest.pki_type)
}
inline ::std::string* PaymentRequest::mutable_pki_type() {
  set_has_pki_type();
  // @@protoc_insertion_point(field_mutable:PaymentRequest.pki_type)
  return pki_type_.MutableNoArena(&PaymentRequest::_default_pki_type_.get());
}
inline ::std::string* PaymentRequest::release_pki_type() {
  // @@protoc_insertion_point(field_release:PaymentRequest.pki_type)
  clear_has_pki_type();
  return pki_type_.ReleaseNoArena(&PaymentRequest::_default_pki_type_.get());
}
inline void PaymentRequest::set_allocated_pki_type(::std::string* pki_type) {
  if (pki_type != NULL) {
    set_has_pki_type();
  } else {
    clear_has_pki_type();
  }
  pki_type_.SetAllocatedNoArena(&PaymentRequest::_default_pki_type_.get(), pki_type);
  // @@protoc_insertion_point(field_set_allocated:PaymentRequest.pki_type)
}

// optional bytes pki_data = 3;
inline bool PaymentRequest::has_pki_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PaymentRequest::set_has_pki_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PaymentRequest::clear_has_pki_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PaymentRequest::clear_pki_data() {
  pki_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pki_data();
}
inline const ::std::string& PaymentRequest::pki_data() const {
  // @@protoc_insertion_point(field_get:PaymentRequest.pki_data)
  return pki_data_.GetNoArena();
}
inline void PaymentRequest::set_pki_data(const ::std::string& value) {
  set_has_pki_data();
  pki_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PaymentRequest.pki_data)
}
#if LANG_CXX11
inline void PaymentRequest::set_pki_data(::std::string&& value) {
  set_has_pki_data();
  pki_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PaymentRequest.pki_data)
}
#endif
inline void PaymentRequest::set_pki_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_pki_data();
  pki_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PaymentRequest.pki_data)
}
inline void PaymentRequest::set_pki_data(const void* value, size_t size) {
  set_has_pki_data();
  pki_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PaymentRequest.pki_data)
}
inline ::std::string* PaymentRequest::mutable_pki_data() {
  set_has_pki_data();
  // @@protoc_insertion_point(field_mutable:PaymentRequest.pki_data)
  return pki_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaymentRequest::release_pki_data() {
  // @@protoc_insertion_point(field_release:PaymentRequest.pki_data)
  clear_has_pki_data();
  return pki_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaymentRequest::set_allocated_pki_data(::std::string* pki_data) {
  if (pki_data != NULL) {
    set_has_pki_data();
  } else {
    clear_has_pki_data();
  }
  pki_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pki_data);
  // @@protoc_insertion_point(field_set_allocated:PaymentRequest.pki_data)
}

// required bytes serialized_payment_details = 4;
inline bool PaymentRequest::has_serialized_payment_details() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PaymentRequest::set_has_serialized_payment_details() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PaymentRequest::clear_has_serialized_payment_details() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PaymentRequest::clear_serialized_payment_details() {
  serialized_payment_details_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_serialized_payment_details();
}
inline const ::std::string& PaymentRequest::serialized_payment_details() const {
  // @@protoc_insertion_point(field_get:PaymentRequest.serialized_payment_details)
  return serialized_payment_details_.GetNoArena();
}
inline void PaymentRequest::set_serialized_payment_details(const ::std::string& value) {
  set_has_serialized_payment_details();
  serialized_payment_details_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PaymentRequest.serialized_payment_details)
}
#if LANG_CXX11
inline void PaymentRequest::set_serialized_payment_details(::std::string&& value) {
  set_has_serialized_payment_details();
  serialized_payment_details_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PaymentRequest.serialized_payment_details)
}
#endif
inline void PaymentRequest::set_serialized_payment_details(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_serialized_payment_details();
  serialized_payment_details_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PaymentRequest.serialized_payment_details)
}
inline void PaymentRequest::set_serialized_payment_details(const void* value, size_t size) {
  set_has_serialized_payment_details();
  serialized_payment_details_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PaymentRequest.serialized_payment_details)
}
inline ::std::string* PaymentRequest::mutable_serialized_payment_details() {
  set_has_serialized_payment_details();
  // @@protoc_insertion_point(field_mutable:PaymentRequest.serialized_payment_details)
  return serialized_payment_details_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaymentRequest::release_serialized_payment_details() {
  // @@protoc_insertion_point(field_release:PaymentRequest.serialized_payment_details)
  clear_has_serialized_payment_details();
  return serialized_payment_details_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaymentRequest::set_allocated_serialized_payment_details(::std::string* serialized_payment_details) {
  if (serialized_payment_details != NULL) {
    set_has_serialized_payment_details();
  } else {
    clear_has_serialized_payment_details();
  }
  serialized_payment_details_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serialized_payment_details);
  // @@protoc_insertion_point(field_set_allocated:PaymentRequest.serialized_payment_details)
}

// optional bytes signature = 5;
inline bool PaymentRequest::has_signature() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PaymentRequest::set_has_signature() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PaymentRequest::clear_has_signature() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PaymentRequest::clear_signature() {
  signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_signature();
}
inline const ::std::string& PaymentRequest::signature() const {
  // @@protoc_insertion_point(field_get:PaymentRequest.signature)
  return signature_.GetNoArena();
}
inline void PaymentRequest::set_signature(const ::std::string& value) {
  set_has_signature();
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PaymentRequest.signature)
}
#if LANG_CXX11
inline void PaymentRequest::set_signature(::std::string&& value) {
  set_has_signature();
  signature_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:PaymentRequest.signature)
}
#endif
inline void PaymentRequest::set_signature(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_signature();
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PaymentRequest.signature)
}
inline void PaymentRequest::set_signature(const void* value, size_t size) {
  set_has_signature();
  signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PaymentRequest.signature)
}
inline ::std::string* PaymentRequest::mutable_signature() {
  set_has_signature();
  // @@protoc_insertion_point(field_mutable:PaymentRequest.signature)
  return signature_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PaymentRequest::release_signature() {
  // @@protoc_insertion_point(field_release:PaymentRequest.signature)
  clear_has_signature();
  return signature_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PaymentRequest::set_allocated_signature(::std::string* signature) {
  if (signature != NULL) {
    set_has_signature();
  } else {
    clear_has_signature();
  }
  signature_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signature);
  // @@protoc_insertion_point(field_set_allocated:PaymentRequest.signature)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PaymentRequest_2eproto__INCLUDED
