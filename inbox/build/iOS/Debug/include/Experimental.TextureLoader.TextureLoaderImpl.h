// This file was generated based on /usr/local/share/uno/Packages/Experimental.TextureLoader/1.10.0-rc1/TextureLoaderImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace TextureLoader{struct TextureLoaderImpl;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Experimental{
namespace TextureLoader{

// internal static class TextureLoaderImpl :16
// {
uClassType* TextureLoaderImpl_typeof();
void TextureLoaderImpl__JpegByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval);
void TextureLoaderImpl__PngByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval);

struct TextureLoaderImpl : uObject
{
    static ::g::Uno::Graphics::Texture2D* JpegByteArrayToTexture2D(uArray* arr);
    static ::g::Uno::Graphics::Texture2D* PngByteArrayToTexture2D(uArray* arr);
};
// }

}}} // ::g::Experimental::TextureLoader
