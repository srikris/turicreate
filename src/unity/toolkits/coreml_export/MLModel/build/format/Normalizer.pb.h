/* Copyright © 2017 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Normalizer.proto

#ifndef PROTOBUF_Normalizer_2eproto__INCLUDED
#define PROTOBUF_Normalizer_2eproto__INCLUDED

#include <string>

#include <protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <protobuf/arena.h>
#include <protobuf/arenastring.h>
#include <protobuf/generated_message_util.h>
#include <protobuf/message_lite.h>
#include <protobuf/repeated_field.h>
#include <protobuf/extension_set.h>
#include <protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Normalizer_2eproto();
void protobuf_InitDefaults_Normalizer_2eproto();
void protobuf_AssignDesc_Normalizer_2eproto();
void protobuf_ShutdownFile_Normalizer_2eproto();

class Normalizer;

enum Normalizer_NormType {
  Normalizer_NormType_LMax = 0,
  Normalizer_NormType_L1 = 1,
  Normalizer_NormType_L2 = 2,
  Normalizer_NormType_Normalizer_NormType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Normalizer_NormType_Normalizer_NormType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Normalizer_NormType_IsValid(int value);
const Normalizer_NormType Normalizer_NormType_NormType_MIN = Normalizer_NormType_LMax;
const Normalizer_NormType Normalizer_NormType_NormType_MAX = Normalizer_NormType_L2;
const int Normalizer_NormType_NormType_ARRAYSIZE = Normalizer_NormType_NormType_MAX + 1;

// ===================================================================

class Normalizer : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.Normalizer) */ {
 public:
  Normalizer();
  virtual ~Normalizer();

  Normalizer(const Normalizer& from);

  inline Normalizer& operator=(const Normalizer& from) {
    CopyFrom(from);
    return *this;
  }

  static const Normalizer& default_instance();

  static const Normalizer* internal_default_instance();

  void Swap(Normalizer* other);

  // implements Message ----------------------------------------------

  inline Normalizer* New() const { return New(NULL); }

  Normalizer* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const Normalizer& from);
  void MergeFrom(const Normalizer& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Normalizer* other);
  void UnsafeMergeFrom(const Normalizer& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef Normalizer_NormType NormType;
  static const NormType LMax =
    Normalizer_NormType_LMax;
  static const NormType L1 =
    Normalizer_NormType_L1;
  static const NormType L2 =
    Normalizer_NormType_L2;
  static inline bool NormType_IsValid(int value) {
    return Normalizer_NormType_IsValid(value);
  }
  static const NormType NormType_MIN =
    Normalizer_NormType_NormType_MIN;
  static const NormType NormType_MAX =
    Normalizer_NormType_NormType_MAX;
  static const int NormType_ARRAYSIZE =
    Normalizer_NormType_NormType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .CoreML.Specification.Normalizer.NormType normType = 1;
  void clear_normtype();
  static const int kNormTypeFieldNumber = 1;
  ::CoreML::Specification::Normalizer_NormType normtype() const;
  void set_normtype(::CoreML::Specification::Normalizer_NormType value);

  // @@protoc_insertion_point(class_scope:CoreML.Specification.Normalizer)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  int normtype_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_Normalizer_2eproto_impl();
  friend void  protobuf_AddDesc_Normalizer_2eproto_impl();
  friend void protobuf_AssignDesc_Normalizer_2eproto();
  friend void protobuf_ShutdownFile_Normalizer_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Normalizer> Normalizer_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Normalizer

// optional .CoreML.Specification.Normalizer.NormType normType = 1;
inline void Normalizer::clear_normtype() {
  normtype_ = 0;
}
inline ::CoreML::Specification::Normalizer_NormType Normalizer::normtype() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.Normalizer.normType)
  return static_cast< ::CoreML::Specification::Normalizer_NormType >(normtype_);
}
inline void Normalizer::set_normtype(::CoreML::Specification::Normalizer_NormType value) {
  
  normtype_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.Normalizer.normType)
}

inline const Normalizer* Normalizer::internal_default_instance() {
  return &Normalizer_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::CoreML::Specification::Normalizer_NormType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Normalizer_2eproto__INCLUDED
