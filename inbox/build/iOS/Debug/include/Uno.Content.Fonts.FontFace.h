// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/FontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct RenderedGlyph;}}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public abstract class FontFace :8
// {
struct FontFace_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_ContainsGlyph)(::g::Uno::Content::Fonts::FontFace*, float*, char16_t*, bool*);
    void(*fp_Dispose)(::g::Uno::Content::Fonts::FontFace*);
    void(*fp_get_FamilyName)(::g::Uno::Content::Fonts::FontFace*, uString**);
    void(*fp_GetAscender)(::g::Uno::Content::Fonts::FontFace*, float*, float*);
    void(*fp_GetDescender)(::g::Uno::Content::Fonts::FontFace*, float*, float*);
    void(*fp_GetLineHeight)(::g::Uno::Content::Fonts::FontFace*, float*, float*);
    void(*fp_RenderGlyph)(::g::Uno::Content::Fonts::FontFace*, float*, char16_t*, ::g::Uno::Content::Fonts::RenderedGlyph*);
    void(*fp_get_StyleName)(::g::Uno::Content::Fonts::FontFace*, uString**);
    void(*fp_TryGetKerning)(::g::Uno::Content::Fonts::FontFace*, float*, char16_t*, char16_t*, ::g::Uno::Float2*, bool*);
};

FontFace_type* FontFace_typeof();
void FontFace__ctor__fn(FontFace* __this);
void FontFace__Load_fn(uString* name, uArray* data, int32_t* offset, int32_t* length, FontFace** __retval);
void FontFace__Load1_fn(::g::Uno::IO::BundleFile* file, FontFace** __retval);

struct FontFace : uObject
{
    void ctor_();
    bool ContainsGlyph(float size, char16_t glyph) { bool __retval; return (((FontFace_type*)__type)->fp_ContainsGlyph)(this, &size, &glyph, &__retval), __retval; }
    void Dispose() { (((FontFace_type*)__type)->fp_Dispose)(this); }
    uString* FamilyName() { uString* __retval; return (((FontFace_type*)__type)->fp_get_FamilyName)(this, &__retval), __retval; }
    float GetAscender(float size) { float __retval; return (((FontFace_type*)__type)->fp_GetAscender)(this, &size, &__retval), __retval; }
    float GetDescender(float size) { float __retval; return (((FontFace_type*)__type)->fp_GetDescender)(this, &size, &__retval), __retval; }
    float GetLineHeight(float size) { float __retval; return (((FontFace_type*)__type)->fp_GetLineHeight)(this, &size, &__retval), __retval; }
    ::g::Uno::Content::Fonts::RenderedGlyph RenderGlyph(float size, char16_t glyph);
    uString* StyleName() { uString* __retval; return (((FontFace_type*)__type)->fp_get_StyleName)(this, &__retval), __retval; }
    bool TryGetKerning(float size, char16_t left, char16_t right, ::g::Uno::Float2* result) { bool __retval; return (((FontFace_type*)__type)->fp_TryGetKerning)(this, &size, &left, &right, result, &__retval), __retval; }
    static FontFace* Load(uString* name, uArray* data, int32_t offset, int32_t length);
    static FontFace* Load1(::g::Uno::IO::BundleFile* file);
};

}}}} // ::g::Uno::Content::Fonts

#include <Uno.Content.Fonts.RenderedGlyph.h>

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

inline ::g::Uno::Content::Fonts::RenderedGlyph FontFace::RenderGlyph(float size, char16_t glyph) { ::g::Uno::Content::Fonts::RenderedGlyph __retval; return (((FontFace_type*)__type)->fp_RenderGlyph)(this, &size, &glyph, &__retval), __retval; }
// }

}}}} // ::g::Uno::Content::Fonts
