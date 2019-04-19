// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link2ls_meta.proto

#ifndef PROTOBUF_INCLUDED_link2ls_5fmeta_2eproto
#define PROTOBUF_INCLUDED_link2ls_5fmeta_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_link2ls_5fmeta_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_link2ls_5fmeta_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_link2ls_5fmeta_2eproto();
namespace protos {
class LS2LinkMeta;
class LS2LinkMetaDefaultTypeInternal;
extern LS2LinkMetaDefaultTypeInternal _LS2LinkMeta_default_instance_;
class Link2LSMeta;
class Link2LSMetaDefaultTypeInternal;
extern Link2LSMetaDefaultTypeInternal _Link2LSMeta_default_instance_;
class Link2LSRpcMeta;
class Link2LSRpcMetaDefaultTypeInternal;
extern Link2LSRpcMetaDefaultTypeInternal _Link2LSRpcMeta_default_instance_;
}  // namespace protos
namespace google {
namespace protobuf {
template<> ::protos::LS2LinkMeta* Arena::CreateMaybeMessage<::protos::LS2LinkMeta>(Arena*);
template<> ::protos::Link2LSMeta* Arena::CreateMaybeMessage<::protos::Link2LSMeta>(Arena*);
template<> ::protos::Link2LSRpcMeta* Arena::CreateMaybeMessage<::protos::Link2LSRpcMeta>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protos {

// ===================================================================

class Link2LSMeta :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.Link2LSMeta) */ {
 public:
  Link2LSMeta();
  virtual ~Link2LSMeta();

  Link2LSMeta(const Link2LSMeta& from);

  inline Link2LSMeta& operator=(const Link2LSMeta& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Link2LSMeta(Link2LSMeta&& from) noexcept
    : Link2LSMeta() {
    *this = ::std::move(from);
  }

  inline Link2LSMeta& operator=(Link2LSMeta&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Link2LSMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Link2LSMeta* internal_default_instance() {
    return reinterpret_cast<const Link2LSMeta*>(
               &_Link2LSMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Link2LSMeta* other);
  friend void swap(Link2LSMeta& a, Link2LSMeta& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Link2LSMeta* New() const final {
    return CreateMaybeMessage<Link2LSMeta>(nullptr);
  }

  Link2LSMeta* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Link2LSMeta>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Link2LSMeta& from);
  void MergeFrom(const Link2LSMeta& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Link2LSMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 userid = 1;
  void clear_userid();
  static const int kUseridFieldNumber = 1;
  ::google::protobuf::int64 userid() const;
  void set_userid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:protos.Link2LSMeta)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 userid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_link2ls_5fmeta_2eproto;
};
// -------------------------------------------------------------------

class LS2LinkMeta :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.LS2LinkMeta) */ {
 public:
  LS2LinkMeta();
  virtual ~LS2LinkMeta();

  LS2LinkMeta(const LS2LinkMeta& from);

  inline LS2LinkMeta& operator=(const LS2LinkMeta& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LS2LinkMeta(LS2LinkMeta&& from) noexcept
    : LS2LinkMeta() {
    *this = ::std::move(from);
  }

  inline LS2LinkMeta& operator=(LS2LinkMeta&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const LS2LinkMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LS2LinkMeta* internal_default_instance() {
    return reinterpret_cast<const LS2LinkMeta*>(
               &_LS2LinkMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(LS2LinkMeta* other);
  friend void swap(LS2LinkMeta& a, LS2LinkMeta& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LS2LinkMeta* New() const final {
    return CreateMaybeMessage<LS2LinkMeta>(nullptr);
  }

  LS2LinkMeta* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LS2LinkMeta>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LS2LinkMeta& from);
  void MergeFrom(const LS2LinkMeta& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LS2LinkMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int64 userid = 1;
  void clear_userid();
  static const int kUseridFieldNumber = 1;
  ::google::protobuf::int64 userid() const;
  void set_userid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:protos.LS2LinkMeta)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int64 userid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_link2ls_5fmeta_2eproto;
};
// -------------------------------------------------------------------

class Link2LSRpcMeta :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protos.Link2LSRpcMeta) */ {
 public:
  Link2LSRpcMeta();
  virtual ~Link2LSRpcMeta();

  Link2LSRpcMeta(const Link2LSRpcMeta& from);

  inline Link2LSRpcMeta& operator=(const Link2LSRpcMeta& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Link2LSRpcMeta(Link2LSRpcMeta&& from) noexcept
    : Link2LSRpcMeta() {
    *this = ::std::move(from);
  }

  inline Link2LSRpcMeta& operator=(Link2LSRpcMeta&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Link2LSRpcMeta& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Link2LSRpcMeta* internal_default_instance() {
    return reinterpret_cast<const Link2LSRpcMeta*>(
               &_Link2LSRpcMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Link2LSRpcMeta* other);
  friend void swap(Link2LSRpcMeta& a, Link2LSRpcMeta& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Link2LSRpcMeta* New() const final {
    return CreateMaybeMessage<Link2LSRpcMeta>(nullptr);
  }

  Link2LSRpcMeta* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Link2LSRpcMeta>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Link2LSRpcMeta& from);
  void MergeFrom(const Link2LSRpcMeta& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Link2LSRpcMeta* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .protos.Link2LSMeta req = 1;
  bool has_req() const;
  void clear_req();
  static const int kReqFieldNumber = 1;
  const ::protos::Link2LSMeta& req() const;
  ::protos::Link2LSMeta* release_req();
  ::protos::Link2LSMeta* mutable_req();
  void set_allocated_req(::protos::Link2LSMeta* req);

  // .protos.LS2LinkMeta resp = 2;
  bool has_resp() const;
  void clear_resp();
  static const int kRespFieldNumber = 2;
  const ::protos::LS2LinkMeta& resp() const;
  ::protos::LS2LinkMeta* release_resp();
  ::protos::LS2LinkMeta* mutable_resp();
  void set_allocated_resp(::protos::LS2LinkMeta* resp);

  // @@protoc_insertion_point(class_scope:protos.Link2LSRpcMeta)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::protos::Link2LSMeta* req_;
  ::protos::LS2LinkMeta* resp_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_link2ls_5fmeta_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Link2LSMeta

// int64 userid = 1;
inline void Link2LSMeta::clear_userid() {
  userid_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 Link2LSMeta::userid() const {
  // @@protoc_insertion_point(field_get:protos.Link2LSMeta.userid)
  return userid_;
}
inline void Link2LSMeta::set_userid(::google::protobuf::int64 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:protos.Link2LSMeta.userid)
}

// -------------------------------------------------------------------

// LS2LinkMeta

// int64 userid = 1;
inline void LS2LinkMeta::clear_userid() {
  userid_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 LS2LinkMeta::userid() const {
  // @@protoc_insertion_point(field_get:protos.LS2LinkMeta.userid)
  return userid_;
}
inline void LS2LinkMeta::set_userid(::google::protobuf::int64 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:protos.LS2LinkMeta.userid)
}

// -------------------------------------------------------------------

// Link2LSRpcMeta

// .protos.Link2LSMeta req = 1;
inline bool Link2LSRpcMeta::has_req() const {
  return this != internal_default_instance() && req_ != nullptr;
}
inline void Link2LSRpcMeta::clear_req() {
  if (GetArenaNoVirtual() == nullptr && req_ != nullptr) {
    delete req_;
  }
  req_ = nullptr;
}
inline const ::protos::Link2LSMeta& Link2LSRpcMeta::req() const {
  const ::protos::Link2LSMeta* p = req_;
  // @@protoc_insertion_point(field_get:protos.Link2LSRpcMeta.req)
  return p != nullptr ? *p : *reinterpret_cast<const ::protos::Link2LSMeta*>(
      &::protos::_Link2LSMeta_default_instance_);
}
inline ::protos::Link2LSMeta* Link2LSRpcMeta::release_req() {
  // @@protoc_insertion_point(field_release:protos.Link2LSRpcMeta.req)
  
  ::protos::Link2LSMeta* temp = req_;
  req_ = nullptr;
  return temp;
}
inline ::protos::Link2LSMeta* Link2LSRpcMeta::mutable_req() {
  
  if (req_ == nullptr) {
    auto* p = CreateMaybeMessage<::protos::Link2LSMeta>(GetArenaNoVirtual());
    req_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protos.Link2LSRpcMeta.req)
  return req_;
}
inline void Link2LSRpcMeta::set_allocated_req(::protos::Link2LSMeta* req) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete req_;
  }
  if (req) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      req = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, req, submessage_arena);
    }
    
  } else {
    
  }
  req_ = req;
  // @@protoc_insertion_point(field_set_allocated:protos.Link2LSRpcMeta.req)
}

// .protos.LS2LinkMeta resp = 2;
inline bool Link2LSRpcMeta::has_resp() const {
  return this != internal_default_instance() && resp_ != nullptr;
}
inline void Link2LSRpcMeta::clear_resp() {
  if (GetArenaNoVirtual() == nullptr && resp_ != nullptr) {
    delete resp_;
  }
  resp_ = nullptr;
}
inline const ::protos::LS2LinkMeta& Link2LSRpcMeta::resp() const {
  const ::protos::LS2LinkMeta* p = resp_;
  // @@protoc_insertion_point(field_get:protos.Link2LSRpcMeta.resp)
  return p != nullptr ? *p : *reinterpret_cast<const ::protos::LS2LinkMeta*>(
      &::protos::_LS2LinkMeta_default_instance_);
}
inline ::protos::LS2LinkMeta* Link2LSRpcMeta::release_resp() {
  // @@protoc_insertion_point(field_release:protos.Link2LSRpcMeta.resp)
  
  ::protos::LS2LinkMeta* temp = resp_;
  resp_ = nullptr;
  return temp;
}
inline ::protos::LS2LinkMeta* Link2LSRpcMeta::mutable_resp() {
  
  if (resp_ == nullptr) {
    auto* p = CreateMaybeMessage<::protos::LS2LinkMeta>(GetArenaNoVirtual());
    resp_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protos.Link2LSRpcMeta.resp)
  return resp_;
}
inline void Link2LSRpcMeta::set_allocated_resp(::protos::LS2LinkMeta* resp) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete resp_;
  }
  if (resp) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      resp = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, resp, submessage_arena);
    }
    
  } else {
    
  }
  resp_ = resp;
  // @@protoc_insertion_point(field_set_allocated:protos.Link2LSRpcMeta.resp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_link2ls_5fmeta_2eproto