// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer__FontKey;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// private sealed class DefaultTextRenderer.FontKey :11
// {
uType* DefaultTextRenderer__FontKey_typeof();
void DefaultTextRenderer__FontKey__ctor__fn(DefaultTextRenderer__FontKey* __this, ::g::Uno::Content::Fonts::FontFace* fontFace, int32_t* size);
void DefaultTextRenderer__FontKey__Equals_fn(DefaultTextRenderer__FontKey* __this, uObject* obj, bool* __retval);
void DefaultTextRenderer__FontKey__GetHashCode_fn(DefaultTextRenderer__FontKey* __this, int32_t* __retval);
void DefaultTextRenderer__FontKey__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, int32_t* size, DefaultTextRenderer__FontKey** __retval);

struct DefaultTextRenderer__FontKey : uObject
{
    uStrong< ::g::Uno::Content::Fonts::FontFace*> FontFace;
    int32_t Size;

    void ctor_(::g::Uno::Content::Fonts::FontFace* fontFace, int32_t size);
    static DefaultTextRenderer__FontKey* New1(::g::Uno::Content::Fonts::FontFace* fontFace, int32_t size);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
