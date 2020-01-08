// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/TextTransform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform;}}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public abstract class TextTransform :6
// {
struct TextTransform_type : uType
{
    void(*fp_get_CullFace)(::g::Uno::Content::Fonts::TextTransform*, int32_t*);
    void(*fp_get_Matrix)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*);
    void(*fp_set_Matrix)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*);
    void(*fp_ResolveClipSpaceMatrix)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*);
};

TextTransform_type* TextTransform_typeof();
void TextTransform__ctor__fn(TextTransform* __this);
void TextTransform__get_CullFace_fn(TextTransform* __this, int32_t* __retval);

struct TextTransform : uObject
{
    void ctor_();
    int32_t CullFace() { int32_t __retval; return (((TextTransform_type*)__type)->fp_get_CullFace)(this, &__retval), __retval; }
    ::g::Uno::Float4x4 Matrix();
    void Matrix(::g::Uno::Float4x4 value);
    ::g::Uno::Float4x4 ResolveClipSpaceMatrix();
    static int32_t CullFace(TextTransform* __this) { int32_t __retval; return TextTransform__get_CullFace_fn(__this, &__retval), __retval; }
};

}}}} // ::g::Uno::Content::Fonts

#include <Uno.Float4x4.h>

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

inline ::g::Uno::Float4x4 TextTransform::Matrix() { ::g::Uno::Float4x4 __retval; return (((TextTransform_type*)__type)->fp_get_Matrix)(this, &__retval), __retval; }
inline void TextTransform::Matrix(::g::Uno::Float4x4 value) { (((TextTransform_type*)__type)->fp_set_Matrix)(this, &value); }
inline ::g::Uno::Float4x4 TextTransform::ResolveClipSpaceMatrix() { ::g::Uno::Float4x4 __retval; return (((TextTransform_type*)__type)->fp_ResolveClipSpaceMatrix)(this, &__retval), __retval; }
// }

}}}} // ::g::Uno::Content::Fonts
