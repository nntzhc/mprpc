// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#include "user.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace fixbug {
constexpr ResultCode::ResultCode(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : errmsg_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , errcode_(0){}
struct ResultCodeDefaultTypeInternal {
  constexpr ResultCodeDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ResultCodeDefaultTypeInternal() {}
  union {
    ResultCode _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ResultCodeDefaultTypeInternal _ResultCode_default_instance_;
constexpr LoginRequest::LoginRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , passwd_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct LoginRequestDefaultTypeInternal {
  constexpr LoginRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LoginRequestDefaultTypeInternal() {}
  union {
    LoginRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LoginRequestDefaultTypeInternal _LoginRequest_default_instance_;
constexpr LoginResponse::LoginResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : result_(nullptr)
  , success_(false){}
struct LoginResponseDefaultTypeInternal {
  constexpr LoginResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LoginResponseDefaultTypeInternal() {}
  union {
    LoginResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LoginResponseDefaultTypeInternal _LoginResponse_default_instance_;
}  // namespace fixbug
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_user_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_user_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_user_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_user_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fixbug::ResultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::fixbug::ResultCode, errcode_),
  PROTOBUF_FIELD_OFFSET(::fixbug::ResultCode, errmsg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fixbug::LoginRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::fixbug::LoginRequest, name_),
  PROTOBUF_FIELD_OFFSET(::fixbug::LoginRequest, passwd_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::fixbug::LoginResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::fixbug::LoginResponse, result_),
  PROTOBUF_FIELD_OFFSET(::fixbug::LoginResponse, success_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::fixbug::ResultCode)},
  { 7, -1, sizeof(::fixbug::LoginRequest)},
  { 14, -1, sizeof(::fixbug::LoginResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fixbug::_ResultCode_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fixbug::_LoginRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::fixbug::_LoginResponse_default_instance_),
};

const char descriptor_table_protodef_user_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nuser.proto\022\006fixbug\"-\n\nResultCode\022\017\n\007er"
  "rcode\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\014\",\n\014LoginRequ"
  "est\022\014\n\004name\030\001 \001(\014\022\016\n\006passwd\030\002 \001(\014\"D\n\rLog"
  "inResponse\022\"\n\006result\030\001 \001(\0132\022.fixbug.Resu"
  "ltCode\022\017\n\007success\030\002 \001(\0102F\n\016UserServiceRp"
  "c\0224\n\005Login\022\024.fixbug.LoginRequest\032\025.fixbu"
  "g.LoginResponseb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_user_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_user_2eproto = {
  false, false, 263, descriptor_table_protodef_user_2eproto, "user.proto", 
  &descriptor_table_user_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_user_2eproto::offsets,
  file_level_metadata_user_2eproto, file_level_enum_descriptors_user_2eproto, file_level_service_descriptors_user_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_user_2eproto_getter() {
  return &descriptor_table_user_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_user_2eproto(&descriptor_table_user_2eproto);
namespace fixbug {

// ===================================================================

class ResultCode::_Internal {
 public:
};

ResultCode::ResultCode(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:fixbug.ResultCode)
}
ResultCode::ResultCode(const ResultCode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_errmsg().empty()) {
    errmsg_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_errmsg(), 
      GetArenaForAllocation());
  }
  errcode_ = from.errcode_;
  // @@protoc_insertion_point(copy_constructor:fixbug.ResultCode)
}

inline void ResultCode::SharedCtor() {
errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
errcode_ = 0;
}

ResultCode::~ResultCode() {
  // @@protoc_insertion_point(destructor:fixbug.ResultCode)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ResultCode::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  errmsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResultCode::ArenaDtor(void* object) {
  ResultCode* _this = reinterpret_cast< ResultCode* >(object);
  (void)_this;
}
void ResultCode::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResultCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ResultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.ResultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  errmsg_.ClearToEmpty();
  errcode_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResultCode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 errcode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          errcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes errmsg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_errmsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResultCode::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.ResultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 errcode = 1;
  if (this->_internal_errcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_errcode(), target);
  }

  // bytes errmsg = 2;
  if (!this->_internal_errmsg().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_errmsg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.ResultCode)
  return target;
}

size_t ResultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.ResultCode)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes errmsg = 2;
  if (!this->_internal_errmsg().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_errmsg());
  }

  // int32 errcode = 1;
  if (this->_internal_errcode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_errcode());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResultCode::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ResultCode::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResultCode::GetClassData() const { return &_class_data_; }

void ResultCode::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<ResultCode *>(to)->MergeFrom(
      static_cast<const ResultCode &>(from));
}


void ResultCode::MergeFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_errmsg().empty()) {
    _internal_set_errmsg(from._internal_errmsg());
  }
  if (from._internal_errcode() != 0) {
    _internal_set_errcode(from._internal_errcode());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResultCode::CopyFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResultCode::IsInitialized() const {
  return true;
}

void ResultCode::InternalSwap(ResultCode* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &errmsg_, GetArenaForAllocation(),
      &other->errmsg_, other->GetArenaForAllocation()
  );
  swap(errcode_, other->errcode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResultCode::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[0]);
}

// ===================================================================

class LoginRequest::_Internal {
 public:
};

LoginRequest::LoginRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:fixbug.LoginRequest)
}
LoginRequest::LoginRequest(const LoginRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  passwd_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_passwd().empty()) {
    passwd_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_passwd(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:fixbug.LoginRequest)
}

inline void LoginRequest::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
passwd_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

LoginRequest::~LoginRequest() {
  // @@protoc_insertion_point(destructor:fixbug.LoginRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LoginRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  passwd_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LoginRequest::ArenaDtor(void* object) {
  LoginRequest* _this = reinterpret_cast< LoginRequest* >(object);
  (void)_this;
}
void LoginRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoginRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LoginRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.LoginRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  passwd_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes passwd = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_passwd();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LoginRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.LoginRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (!this->_internal_name().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_name(), target);
  }

  // bytes passwd = 2;
  if (!this->_internal_passwd().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_passwd(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.LoginRequest)
  return target;
}

size_t LoginRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.LoginRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_name());
  }

  // bytes passwd = 2;
  if (!this->_internal_passwd().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_passwd());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LoginRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LoginRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LoginRequest::GetClassData() const { return &_class_data_; }

void LoginRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<LoginRequest *>(to)->MergeFrom(
      static_cast<const LoginRequest &>(from));
}


void LoginRequest::MergeFrom(const LoginRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.LoginRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (!from._internal_passwd().empty()) {
    _internal_set_passwd(from._internal_passwd());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LoginRequest::CopyFrom(const LoginRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.LoginRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRequest::IsInitialized() const {
  return true;
}

void LoginRequest::InternalSwap(LoginRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, GetArenaForAllocation(),
      &other->name_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &passwd_, GetArenaForAllocation(),
      &other->passwd_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[1]);
}

// ===================================================================

class LoginResponse::_Internal {
 public:
  static const ::fixbug::ResultCode& result(const LoginResponse* msg);
};

const ::fixbug::ResultCode&
LoginResponse::_Internal::result(const LoginResponse* msg) {
  return *msg->result_;
}
LoginResponse::LoginResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:fixbug.LoginResponse)
}
LoginResponse::LoginResponse(const LoginResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_result()) {
    result_ = new ::fixbug::ResultCode(*from.result_);
  } else {
    result_ = nullptr;
  }
  success_ = from.success_;
  // @@protoc_insertion_point(copy_constructor:fixbug.LoginResponse)
}

inline void LoginResponse::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&result_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&success_) -
    reinterpret_cast<char*>(&result_)) + sizeof(success_));
}

LoginResponse::~LoginResponse() {
  // @@protoc_insertion_point(destructor:fixbug.LoginResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void LoginResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete result_;
}

void LoginResponse::ArenaDtor(void* object) {
  LoginResponse* _this = reinterpret_cast< LoginResponse* >(object);
  (void)_this;
}
void LoginResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoginResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LoginResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.LoginResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
  success_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .fixbug.ResultCode result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_result(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool success = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LoginResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.LoginResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .fixbug.ResultCode result = 1;
  if (this->_internal_has_result()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::result(this), target, stream);
  }

  // bool success = 2;
  if (this->_internal_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_success(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.LoginResponse)
  return target;
}

size_t LoginResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.LoginResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .fixbug.ResultCode result = 1;
  if (this->_internal_has_result()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *result_);
  }

  // bool success = 2;
  if (this->_internal_success() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LoginResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    LoginResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LoginResponse::GetClassData() const { return &_class_data_; }

void LoginResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to,
                      const ::PROTOBUF_NAMESPACE_ID::Message&from) {
  static_cast<LoginResponse *>(to)->MergeFrom(
      static_cast<const LoginResponse &>(from));
}


void LoginResponse::MergeFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.LoginResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_result()) {
    _internal_mutable_result()->::fixbug::ResultCode::MergeFrom(from._internal_result());
  }
  if (from._internal_success() != 0) {
    _internal_set_success(from._internal_success());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LoginResponse::CopyFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.LoginResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginResponse::IsInitialized() const {
  return true;
}

void LoginResponse::InternalSwap(LoginResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LoginResponse, success_)
      + sizeof(LoginResponse::success_)
      - PROTOBUF_FIELD_OFFSET(LoginResponse, result_)>(
          reinterpret_cast<char*>(&result_),
          reinterpret_cast<char*>(&other->result_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_user_2eproto_getter, &descriptor_table_user_2eproto_once,
      file_level_metadata_user_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace fixbug
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::fixbug::ResultCode* Arena::CreateMaybeMessage< ::fixbug::ResultCode >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fixbug::ResultCode >(arena);
}
template<> PROTOBUF_NOINLINE ::fixbug::LoginRequest* Arena::CreateMaybeMessage< ::fixbug::LoginRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fixbug::LoginRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::fixbug::LoginResponse* Arena::CreateMaybeMessage< ::fixbug::LoginResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::fixbug::LoginResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
