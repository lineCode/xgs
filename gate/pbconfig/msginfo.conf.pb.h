// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msginfo.conf.proto

#ifndef PROTOBUF_INCLUDED_msginfo_2econf_2eproto
#define PROTOBUF_INCLUDED_msginfo_2econf_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_msginfo_2econf_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_msginfo_2econf_2eproto {
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
void AddDescriptors_msginfo_2econf_2eproto();
namespace pbconfig {
class MsgDir;
class MsgDirDefaultTypeInternal;
extern MsgDirDefaultTypeInternal _MsgDir_default_instance_;
class MsgInfo;
class MsgInfoDefaultTypeInternal;
extern MsgInfoDefaultTypeInternal _MsgInfo_default_instance_;
class MsgLog;
class MsgLogDefaultTypeInternal;
extern MsgLogDefaultTypeInternal _MsgLog_default_instance_;
}  // namespace pbconfig
namespace google {
namespace protobuf {
template<> ::pbconfig::MsgDir* Arena::CreateMaybeMessage<::pbconfig::MsgDir>(Arena*);
template<> ::pbconfig::MsgInfo* Arena::CreateMaybeMessage<::pbconfig::MsgInfo>(Arena*);
template<> ::pbconfig::MsgLog* Arena::CreateMaybeMessage<::pbconfig::MsgLog>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace pbconfig {

// ===================================================================

class MsgDir :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pbconfig.MsgDir) */ {
 public:
  MsgDir();
  virtual ~MsgDir();

  MsgDir(const MsgDir& from);

  inline MsgDir& operator=(const MsgDir& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgDir(MsgDir&& from) noexcept
    : MsgDir() {
    *this = ::std::move(from);
  }

  inline MsgDir& operator=(MsgDir&& from) noexcept {
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
  static const MsgDir& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgDir* internal_default_instance() {
    return reinterpret_cast<const MsgDir*>(
               &_MsgDir_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MsgDir* other);
  friend void swap(MsgDir& a, MsgDir& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgDir* New() const final {
    return CreateMaybeMessage<MsgDir>(nullptr);
  }

  MsgDir* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MsgDir>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MsgDir& from);
  void MergeFrom(const MsgDir& from);
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
  void InternalSwap(MsgDir* other);
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

  // bool c2w = 1;
  void clear_c2w();
  static const int kC2WFieldNumber = 1;
  bool c2w() const;
  void set_c2w(bool value);

  // bool w2c = 2;
  void clear_w2c();
  static const int kW2CFieldNumber = 2;
  bool w2c() const;
  void set_w2c(bool value);

  // @@protoc_insertion_point(class_scope:pbconfig.MsgDir)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool c2w_;
  bool w2c_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msginfo_2econf_2eproto;
};
// -------------------------------------------------------------------

class MsgLog :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pbconfig.MsgLog) */ {
 public:
  MsgLog();
  virtual ~MsgLog();

  MsgLog(const MsgLog& from);

  inline MsgLog& operator=(const MsgLog& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgLog(MsgLog&& from) noexcept
    : MsgLog() {
    *this = ::std::move(from);
  }

  inline MsgLog& operator=(MsgLog&& from) noexcept {
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
  static const MsgLog& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgLog* internal_default_instance() {
    return reinterpret_cast<const MsgLog*>(
               &_MsgLog_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(MsgLog* other);
  friend void swap(MsgLog& a, MsgLog& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgLog* New() const final {
    return CreateMaybeMessage<MsgLog>(nullptr);
  }

  MsgLog* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MsgLog>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MsgLog& from);
  void MergeFrom(const MsgLog& from);
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
  void InternalSwap(MsgLog* other);
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

  // bool on = 1;
  void clear_on();
  static const int kOnFieldNumber = 1;
  bool on() const;
  void set_on(bool value);

  // @@protoc_insertion_point(class_scope:pbconfig.MsgLog)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool on_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msginfo_2econf_2eproto;
};
// -------------------------------------------------------------------

class MsgInfo :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pbconfig.MsgInfo) */ {
 public:
  MsgInfo();
  virtual ~MsgInfo();

  MsgInfo(const MsgInfo& from);

  inline MsgInfo& operator=(const MsgInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MsgInfo(MsgInfo&& from) noexcept
    : MsgInfo() {
    *this = ::std::move(from);
  }

  inline MsgInfo& operator=(MsgInfo&& from) noexcept {
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
  static const MsgInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MsgInfo* internal_default_instance() {
    return reinterpret_cast<const MsgInfo*>(
               &_MsgInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(MsgInfo* other);
  friend void swap(MsgInfo& a, MsgInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MsgInfo* New() const final {
    return CreateMaybeMessage<MsgInfo>(nullptr);
  }

  MsgInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MsgInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MsgInfo& from);
  void MergeFrom(const MsgInfo& from);
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
  void InternalSwap(MsgInfo* other);
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

  // string title = 1;
  void clear_title();
  static const int kTitleFieldNumber = 1;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  #if LANG_CXX11
  void set_title(::std::string&& value);
  #endif
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // .pbconfig.MsgDir dir = 4;
  bool has_dir() const;
  void clear_dir();
  static const int kDirFieldNumber = 4;
  const ::pbconfig::MsgDir& dir() const;
  ::pbconfig::MsgDir* release_dir();
  ::pbconfig::MsgDir* mutable_dir();
  void set_allocated_dir(::pbconfig::MsgDir* dir);

  // .pbconfig.MsgLog log = 5;
  bool has_log() const;
  void clear_log();
  static const int kLogFieldNumber = 5;
  const ::pbconfig::MsgLog& log() const;
  ::pbconfig::MsgLog* release_log();
  ::pbconfig::MsgLog* mutable_log();
  void set_allocated_log(::pbconfig::MsgLog* log);

  // bool open = 3;
  void clear_open();
  static const int kOpenFieldNumber = 3;
  bool open() const;
  void set_open(bool value);

  // @@protoc_insertion_point(class_scope:pbconfig.MsgInfo)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::pbconfig::MsgDir* dir_;
  ::pbconfig::MsgLog* log_;
  bool open_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msginfo_2econf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MsgDir

// bool c2w = 1;
inline void MsgDir::clear_c2w() {
  c2w_ = false;
}
inline bool MsgDir::c2w() const {
  // @@protoc_insertion_point(field_get:pbconfig.MsgDir.c2w)
  return c2w_;
}
inline void MsgDir::set_c2w(bool value) {
  
  c2w_ = value;
  // @@protoc_insertion_point(field_set:pbconfig.MsgDir.c2w)
}

// bool w2c = 2;
inline void MsgDir::clear_w2c() {
  w2c_ = false;
}
inline bool MsgDir::w2c() const {
  // @@protoc_insertion_point(field_get:pbconfig.MsgDir.w2c)
  return w2c_;
}
inline void MsgDir::set_w2c(bool value) {
  
  w2c_ = value;
  // @@protoc_insertion_point(field_set:pbconfig.MsgDir.w2c)
}

// -------------------------------------------------------------------

// MsgLog

// bool on = 1;
inline void MsgLog::clear_on() {
  on_ = false;
}
inline bool MsgLog::on() const {
  // @@protoc_insertion_point(field_get:pbconfig.MsgLog.on)
  return on_;
}
inline void MsgLog::set_on(bool value) {
  
  on_ = value;
  // @@protoc_insertion_point(field_set:pbconfig.MsgLog.on)
}

// -------------------------------------------------------------------

// MsgInfo

// string title = 1;
inline void MsgInfo::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgInfo::title() const {
  // @@protoc_insertion_point(field_get:pbconfig.MsgInfo.title)
  return title_.GetNoArena();
}
inline void MsgInfo::set_title(const ::std::string& value) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pbconfig.MsgInfo.title)
}
#if LANG_CXX11
inline void MsgInfo::set_title(::std::string&& value) {
  
  title_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pbconfig.MsgInfo.title)
}
#endif
inline void MsgInfo::set_title(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pbconfig.MsgInfo.title)
}
inline void MsgInfo::set_title(const char* value, size_t size) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pbconfig.MsgInfo.title)
}
inline ::std::string* MsgInfo::mutable_title() {
  
  // @@protoc_insertion_point(field_mutable:pbconfig.MsgInfo.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgInfo::release_title() {
  // @@protoc_insertion_point(field_release:pbconfig.MsgInfo.title)
  
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgInfo::set_allocated_title(::std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:pbconfig.MsgInfo.title)
}

// string name = 2;
inline void MsgInfo::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgInfo::name() const {
  // @@protoc_insertion_point(field_get:pbconfig.MsgInfo.name)
  return name_.GetNoArena();
}
inline void MsgInfo::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pbconfig.MsgInfo.name)
}
#if LANG_CXX11
inline void MsgInfo::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pbconfig.MsgInfo.name)
}
#endif
inline void MsgInfo::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pbconfig.MsgInfo.name)
}
inline void MsgInfo::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pbconfig.MsgInfo.name)
}
inline ::std::string* MsgInfo::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:pbconfig.MsgInfo.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgInfo::release_name() {
  // @@protoc_insertion_point(field_release:pbconfig.MsgInfo.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgInfo::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:pbconfig.MsgInfo.name)
}

// bool open = 3;
inline void MsgInfo::clear_open() {
  open_ = false;
}
inline bool MsgInfo::open() const {
  // @@protoc_insertion_point(field_get:pbconfig.MsgInfo.open)
  return open_;
}
inline void MsgInfo::set_open(bool value) {
  
  open_ = value;
  // @@protoc_insertion_point(field_set:pbconfig.MsgInfo.open)
}

// .pbconfig.MsgDir dir = 4;
inline bool MsgInfo::has_dir() const {
  return this != internal_default_instance() && dir_ != nullptr;
}
inline void MsgInfo::clear_dir() {
  if (GetArenaNoVirtual() == nullptr && dir_ != nullptr) {
    delete dir_;
  }
  dir_ = nullptr;
}
inline const ::pbconfig::MsgDir& MsgInfo::dir() const {
  const ::pbconfig::MsgDir* p = dir_;
  // @@protoc_insertion_point(field_get:pbconfig.MsgInfo.dir)
  return p != nullptr ? *p : *reinterpret_cast<const ::pbconfig::MsgDir*>(
      &::pbconfig::_MsgDir_default_instance_);
}
inline ::pbconfig::MsgDir* MsgInfo::release_dir() {
  // @@protoc_insertion_point(field_release:pbconfig.MsgInfo.dir)
  
  ::pbconfig::MsgDir* temp = dir_;
  dir_ = nullptr;
  return temp;
}
inline ::pbconfig::MsgDir* MsgInfo::mutable_dir() {
  
  if (dir_ == nullptr) {
    auto* p = CreateMaybeMessage<::pbconfig::MsgDir>(GetArenaNoVirtual());
    dir_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pbconfig.MsgInfo.dir)
  return dir_;
}
inline void MsgInfo::set_allocated_dir(::pbconfig::MsgDir* dir) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete dir_;
  }
  if (dir) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      dir = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, dir, submessage_arena);
    }
    
  } else {
    
  }
  dir_ = dir;
  // @@protoc_insertion_point(field_set_allocated:pbconfig.MsgInfo.dir)
}

// .pbconfig.MsgLog log = 5;
inline bool MsgInfo::has_log() const {
  return this != internal_default_instance() && log_ != nullptr;
}
inline void MsgInfo::clear_log() {
  if (GetArenaNoVirtual() == nullptr && log_ != nullptr) {
    delete log_;
  }
  log_ = nullptr;
}
inline const ::pbconfig::MsgLog& MsgInfo::log() const {
  const ::pbconfig::MsgLog* p = log_;
  // @@protoc_insertion_point(field_get:pbconfig.MsgInfo.log)
  return p != nullptr ? *p : *reinterpret_cast<const ::pbconfig::MsgLog*>(
      &::pbconfig::_MsgLog_default_instance_);
}
inline ::pbconfig::MsgLog* MsgInfo::release_log() {
  // @@protoc_insertion_point(field_release:pbconfig.MsgInfo.log)
  
  ::pbconfig::MsgLog* temp = log_;
  log_ = nullptr;
  return temp;
}
inline ::pbconfig::MsgLog* MsgInfo::mutable_log() {
  
  if (log_ == nullptr) {
    auto* p = CreateMaybeMessage<::pbconfig::MsgLog>(GetArenaNoVirtual());
    log_ = p;
  }
  // @@protoc_insertion_point(field_mutable:pbconfig.MsgInfo.log)
  return log_;
}
inline void MsgInfo::set_allocated_log(::pbconfig::MsgLog* log) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete log_;
  }
  if (log) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      log = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, log, submessage_arena);
    }
    
  } else {
    
  }
  log_ = log;
  // @@protoc_insertion_point(field_set_allocated:pbconfig.MsgInfo.log)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pbconfig

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_msginfo_2econf_2eproto
