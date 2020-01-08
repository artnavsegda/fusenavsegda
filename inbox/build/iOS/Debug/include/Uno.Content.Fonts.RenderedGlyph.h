// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/RenderedGlyph.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Int2.h>
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct RenderedGlyph;}}}}
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public struct RenderedGlyph :7
// {
uStructType* RenderedGlyph_typeof();
void RenderedGlyph__ctor_1_fn(RenderedGlyph* __this, ::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Int2* size, int32_t* format, uArray* data);
void RenderedGlyph__get_Bitmap_fn(RenderedGlyph* __this, ::g::Uno::Content::Images::Bitmap** __retval);
void RenderedGlyph__New1_fn(::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Int2* size, int32_t* format, uArray* data, RenderedGlyph* __retval);

struct RenderedGlyph
{
    ::g::Uno::Float2 Advance;
    ::g::Uno::Float2 Bearing;
    ::g::Uno::Int2 Size;
    int32_t Format;
    uStrong<uArray*> Data;

    void ctor_1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Int2 size, int32_t format, uArray* data);
    ::g::Uno::Content::Images::Bitmap* Bitmap();
};

RenderedGlyph RenderedGlyph__New1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Int2 size, int32_t format, uArray* data);
// }

}}}} // ::g::Uno::Content::Fonts
