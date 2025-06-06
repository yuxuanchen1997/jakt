#pragma once
#include <lib.h>
#include "jakt__prelude__hash.h"
namespace Jakt {
namespace ids {
struct ModuleId;
struct VarId;
struct FunctionId;
struct StructId;
struct EnumId;
struct TypeId;
struct TraitId;
struct ScopeId;
}
namespace ids {
struct ModuleId {
  public:
public: size_t id;public: __attribute__((always_inline)) inline bool equals(Jakt::ids::ModuleId const rhs) const {
{
return this->id == rhs.id;
}
}
public: __attribute__((always_inline)) inline u32 hash() const {
{
return [](size_t const& self) -> u32 {{
return AK::Traits<size_t>().hash(self);
}
}
(this->id);
}
}
public: ModuleId(size_t a_id);

public: public: public: ByteString debug_description() const;
};struct VarId {
  public:
public: Jakt::ids::ModuleId module;public: size_t id;public: VarId(Jakt::ids::ModuleId a_module, size_t a_id);

public: ByteString debug_description() const;
};struct FunctionId {
  public:
public: Jakt::ids::ModuleId module;public: size_t id;public: __attribute__((always_inline)) inline bool equals(Jakt::ids::FunctionId const rhs) const {
{
return (this->module.id == rhs.module.id) && (this->id == rhs.id);
}
}
public: FunctionId(Jakt::ids::ModuleId a_module, size_t a_id);

public: ByteString debug_description() const;
};struct StructId {
  public:
public: Jakt::ids::ModuleId module;public: size_t id;public: __attribute__((always_inline)) inline bool equals(Jakt::ids::StructId const rhs) const {
{
return (this->module.id == rhs.module.id) && (this->id == rhs.id);
}
}
public: __attribute__((always_inline)) inline u32 hash() const {
{
return pair_int_hash(infallible_integer_cast<u32>(this->id),infallible_integer_cast<u32>(this->module.id));
}
}
public: StructId(Jakt::ids::ModuleId a_module, size_t a_id);

public: public: public: ByteString debug_description() const;
};struct EnumId {
  public:
public: Jakt::ids::ModuleId module;public: size_t id;public: __attribute__((always_inline)) inline bool equals(Jakt::ids::EnumId const rhs) const {
{
return (this->module.id == rhs.module.id) && (this->id == rhs.id);
}
}
public: __attribute__((always_inline)) inline u32 hash() const {
{
return pair_int_hash(infallible_integer_cast<u32>(this->id),infallible_integer_cast<u32>(this->module.id));
}
}
public: EnumId(Jakt::ids::ModuleId a_module, size_t a_id);

public: ByteString debug_description() const;
};struct TypeId {
  public:
public: Jakt::ids::ModuleId module;public: size_t id;public: __attribute__((always_inline)) inline static JaktInternal::Optional<Jakt::ids::TypeId> none() {
{
return JaktInternal::OptionalNone();
}
}
public: __attribute__((always_inline)) inline bool equals(Jakt::ids::TypeId const rhs) const {
{
return (this->module.id == rhs.module.id) && (this->id == rhs.id);
}
}
public: __attribute__((always_inline)) inline u32 hash() const {
{
return pair_int_hash(infallible_integer_cast<u32>(this->id),infallible_integer_cast<u32>(this->module.id));
}
}
public: TypeId(Jakt::ids::ModuleId a_module, size_t a_id);

public: public: public: ByteString debug_description() const;
};struct TraitId {
  public:
public: Jakt::ids::ModuleId module;public: size_t id;public: __attribute__((always_inline)) inline bool equals(Jakt::ids::TraitId const other) const {
{
return (this->module.id == other.module.id) && (this->id == other.id);
}
}
public: __attribute__((always_inline)) inline u32 hash() const {
{
return pair_int_hash(infallible_integer_cast<u32>(this->id),infallible_integer_cast<u32>(this->module.id));
}
}
public: TraitId(Jakt::ids::ModuleId a_module, size_t a_id);

public: ByteString debug_description() const;
};struct ScopeId {
  public:
public: Jakt::ids::ModuleId module_id;public: size_t id;public: __attribute__((always_inline)) inline bool equals(Jakt::ids::ScopeId const other) const {
{
return (this->module_id.id == other.module_id.id) && (this->id == other.id);
}
}
public: __attribute__((always_inline)) inline u32 hash() const {
{
return pair_int_hash(infallible_integer_cast<u32>(this->id),infallible_integer_cast<u32>(this->module_id.id));
}
}
public: ScopeId(Jakt::ids::ModuleId a_module_id, size_t a_id);

public: public: public: ByteString debug_description() const;
};}
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::ModuleId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::ModuleId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::VarId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::VarId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::FunctionId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::FunctionId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::StructId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::StructId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::EnumId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::EnumId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::TypeId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::TypeId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::TraitId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::TraitId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
template<>struct Jakt::Formatter<Jakt::ids::ScopeId> : Jakt::Formatter<Jakt::StringView>{
Jakt::ErrorOr<void> format(Jakt::FormatBuilder& builder, Jakt::ids::ScopeId const& value) {
JaktInternal::PrettyPrint::ScopedEnable pretty_print_enable { m_alternative_form };Jakt::ErrorOr<void> format_error = Jakt::Formatter<Jakt::StringView>::format(builder, value.debug_description());return format_error;}
};
namespace Jakt {
} // namespace Jakt
