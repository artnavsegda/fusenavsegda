// This file was generated based on /usr/local/share/uno/Packages/Experimental.TextureLoader/1.10.0-rc1/TextureLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace TextureLoader{struct TextureLoader;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Experimental{
namespace TextureLoader{

// public static class TextureLoader :13
// {
uClassType* TextureLoader_typeof();
void TextureLoader__ByteArrayToTexture2DContentType_fn(uArray* arr, uString* contentType, ::g::Uno::Graphics::Texture2D** __retval);
void TextureLoader__ByteArrayToTexture2DFilename_fn(uArray* arr, uString* filename, ::g::Uno::Graphics::Texture2D** __retval);
void TextureLoader__JpegByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval);
void TextureLoader__PngByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval);

struct TextureLoader : uObject
{
    static ::g::Uno::Graphics::Texture2D* ByteArrayToTexture2DContentType(uArray* arr, uString* contentType);
    static ::g::Uno::Graphics::Texture2D* ByteArrayToTexture2DFilename(uArray* arr, uString* filename);
    static ::g::Uno::Graphics::Texture2D* JpegByteArrayToTexture2D(uArray* arr);
    static ::g::Uno::Graphics::Texture2D* PngByteArrayToTexture2D(uArray* arr);
};
// }

}}} // ::g::Experimental::TextureLoader
