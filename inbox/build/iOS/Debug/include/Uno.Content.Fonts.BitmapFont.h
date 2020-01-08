// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/BitmapFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.BitmapFont.CharPair.h>
#include <Uno.Content.Fonts.BitmapFont.GlyphInfo.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class BitmapFont :7
// {
struct BitmapFont_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BitmapFont_type* BitmapFont_typeof();
void BitmapFont__ctor__fn(BitmapFont* __this);
void BitmapFont__New1_fn(BitmapFont** __retval);
void BitmapFont__UnoIDisposableDispose_fn(BitmapFont* __this);

struct BitmapFont : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> Glyphs;
    uStrong< ::g::Uno::Collections::Dictionary*> Advances;
    uStrong< ::g::Uno::Collections::Dictionary*> Kernings;
    uStrong< ::g::Uno::Graphics::Texture2D*> Texture;
    float Ascent;
    float Descent;
    float LineHeight;
    float PixelSize;
    float PixelSpread;
    uStrong<uString*> FamilyName;
    uStrong<uString*> StyleName;
    uStrong< ::g::Uno::Content::Fonts::FontFace*> FontFace;

    void ctor_();
    static BitmapFont* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
