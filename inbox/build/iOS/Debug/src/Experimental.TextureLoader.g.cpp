// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.TextureLoader.InvalidContentTypeException.h>
#include <Experimental.TextureLoader.TextureLoader.h>
#include <Experimental.TextureLoader.TextureLoaderImpl.h>
#include <uBase/Buffer.h>
#include <uBase/BufferStream.h>
#include <uBase/Memory.h>
#include <uImage/Jpeg.h>
#include <uImage/Png.h>
#include <uImage/Texture.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>
static uString* STRINGS[8];
static uType* TYPES[1];

namespace g{
namespace Experimental{
namespace TextureLoader{

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.10.0-rc1/TextureLoader.uno
// -------------------------------------------------------------------------------------

// public sealed class InvalidContentTypeException :8
// {
static void InvalidContentTypeException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* InvalidContentTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidContentTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Experimental.TextureLoader.InvalidContentTypeException", options);
    type->fp_build_ = InvalidContentTypeException_build;
    return type;
}

// public InvalidContentTypeException(string reason) :10
void InvalidContentTypeException__ctor_3_fn(InvalidContentTypeException* __this, uString* reason)
{
    __this->ctor_3(reason);
}

// public InvalidContentTypeException New(string reason) :10
void InvalidContentTypeException__New4_fn(uString* reason, InvalidContentTypeException** __retval)
{
    *__retval = InvalidContentTypeException::New4(reason);
}

// public InvalidContentTypeException(string reason) [instance] :10
void InvalidContentTypeException::ctor_3(uString* reason)
{
    ctor_1(reason);
}

// public InvalidContentTypeException New(string reason) [static] :10
InvalidContentTypeException* InvalidContentTypeException::New4(uString* reason)
{
    InvalidContentTypeException* obj1 = (InvalidContentTypeException*)uNew(InvalidContentTypeException_typeof());
    obj1->ctor_3(reason);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.10.0-rc1/TextureLoader.uno
// -------------------------------------------------------------------------------------

// public static class TextureLoader :13
// {
static void TextureLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("image/jpeg");
    ::STRINGS[1] = uString::Const("image/jpg");
    ::STRINGS[2] = uString::Const("image/png");
    ::STRINGS[3] = uString::Const("application/octet-stream");
    ::STRINGS[4] = uString::Const("binary/octet-stream");
    ::STRINGS[5] = uString::Const(".png");
    ::STRINGS[6] = uString::Const(".jpg");
    ::STRINGS[7] = uString::Const(".jpeg");
    ::TYPES[0] = ::g::Uno::Exception_typeof();
}

uClassType* TextureLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoader", options);
    type->fp_build_ = TextureLoader_build;
    return type;
}

// public static texture2D ByteArrayToTexture2DContentType(byte[] arr, string contentType) :114
void TextureLoader__ByteArrayToTexture2DContentType_fn(uArray* arr, uString* contentType, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = TextureLoader::ByteArrayToTexture2DContentType(arr, contentType);
}

// public static texture2D ByteArrayToTexture2DFilename(byte[] arr, string filename) :91
void TextureLoader__ByteArrayToTexture2DFilename_fn(uArray* arr, uString* filename, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = TextureLoader::ByteArrayToTexture2DFilename(arr, filename);
}

// public static texture2D JpegByteArrayToTexture2D(byte[] arr) :27
void TextureLoader__JpegByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = TextureLoader::JpegByteArrayToTexture2D(arr);
}

// public static texture2D PngByteArrayToTexture2D(byte[] arr) :59
void TextureLoader__PngByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = TextureLoader::PngByteArrayToTexture2D(arr);
}

// public static texture2D ByteArrayToTexture2DContentType(byte[] arr, string contentType) [static] :114
::g::Uno::Graphics::Texture2D* TextureLoader::ByteArrayToTexture2DContentType(uArray* arr, uString* contentType)
{
    if ((::g::Uno::String::IndexOf3(uPtr(contentType), ::STRINGS[0/*"image/jpeg"*/], 0) != -1) || (::g::Uno::String::IndexOf3(uPtr(contentType), ::STRINGS[1/*"image/jpg"*/], 0) != -1))
        return TextureLoader::JpegByteArrayToTexture2D(arr);
    else if (::g::Uno::String::IndexOf3(uPtr(contentType), ::STRINGS[2/*"image/png"*/], 0) != -1)
        return TextureLoader::PngByteArrayToTexture2D(arr);
    else if (::g::Uno::String::IndexOf3(uPtr(contentType), ::STRINGS[3/*"application...*/], 0) != -1)
        return TextureLoader::JpegByteArrayToTexture2D(arr);
    else if (::g::Uno::String::IndexOf3(uPtr(contentType), ::STRINGS[4/*"binary/octe...*/], 0) != -1)
        return TextureLoader::JpegByteArrayToTexture2D(arr);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(contentType));
}

// public static texture2D ByteArrayToTexture2DFilename(byte[] arr, string filename) [static] :91
::g::Uno::Graphics::Texture2D* TextureLoader::ByteArrayToTexture2DFilename(uArray* arr, uString* filename)
{
    filename = ::g::Uno::String::ToLower(uPtr(filename));

    if (::g::Uno::String::EndsWith(filename, ::STRINGS[5/*".png"*/]))
        return TextureLoader::PngByteArrayToTexture2D(arr);
    else if (::g::Uno::String::EndsWith(uPtr(filename), ::STRINGS[6/*".jpg"*/]) || ::g::Uno::String::EndsWith(uPtr(filename), ::STRINGS[7/*".jpeg"*/]))
        return TextureLoader::JpegByteArrayToTexture2D(arr);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(filename));
}

// public static texture2D JpegByteArrayToTexture2D(byte[] arr) [static] :27
::g::Uno::Graphics::Texture2D* TextureLoader::JpegByteArrayToTexture2D(uArray* arr)
{
    try
    {
        {
            return ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* jpegException = __t.Exception;

        try
        {
            {
                return ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr);
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* pngException = __t.Exception;
            U_THROW(jpegException);
        }
    }
}

// public static texture2D PngByteArrayToTexture2D(byte[] arr) [static] :59
::g::Uno::Graphics::Texture2D* TextureLoader::PngByteArrayToTexture2D(uArray* arr)
{
    try
    {
        {
            return ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* pngException = __t.Exception;

        try
        {
            {
                return ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr);
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* jpegException = __t.Exception;
            U_THROW(pngException);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.10.0-rc1/TextureLoaderImpl.uno
// -----------------------------------------------------------------------------------------

// internal static class TextureLoaderImpl :16
// {
static void TextureLoaderImpl_build(uType* type)
{
}

uClassType* TextureLoaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoaderImpl", options);
    type->fp_build_ = TextureLoaderImpl_build;
    return type;
}

// public static texture2D JpegByteArrayToTexture2D(byte[] arr) :18
void TextureLoaderImpl__JpegByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = TextureLoaderImpl::JpegByteArrayToTexture2D(arr);
}

// public static texture2D PngByteArrayToTexture2D(byte[] arr) :60
void TextureLoaderImpl__PngByteArrayToTexture2D_fn(uArray* arr, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = TextureLoaderImpl::PngByteArrayToTexture2D(arr);
}

// public static texture2D JpegByteArrayToTexture2D(byte[] arr) [static] :18
::g::Uno::Graphics::Texture2D* TextureLoaderImpl::JpegByteArrayToTexture2D(uArray* arr)
{
    try
    {
    	uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(arr->Ptr(), arr->Length(), false);
    	uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
    	uBase::Auto<uImage::ImageReader> ir = uImage::Jpeg::CreateReader(bs);
    	uBase::Auto<uImage ::Bitmap> bmp = ir->ReadBitmap();
    	int originalWidth = bmp->GetWidth(), originalHeight = bmp->GetHeight();
    
    	int maxTextureSize;
    	glGetIntegerv(GL_MAX_TEXTURE_SIZE, &maxTextureSize);
    	while (bmp->GetWidth() > maxTextureSize ||
    		   bmp->GetHeight() > maxTextureSize)
    	{
    		bmp = bmp->DownSample2x2();
    	}
    
    	uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
    	uGLTextureInfo info;
    
    	GLuint handle = uCreateGLTexture(tex, false, &info);
    
    	return ::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(originalWidth, originalHeight), info.MipCount, 0);
    }
    catch (const uBase::Exception &e)
    {
    	U_THROW(::g::Uno::Exception::New2(uStringFromXliString(e.GetMessage())));
    }
}

// public static texture2D PngByteArrayToTexture2D(byte[] arr) [static] :60
::g::Uno::Graphics::Texture2D* TextureLoaderImpl::PngByteArrayToTexture2D(uArray* arr)
{
    try
    {
    	uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(arr->Ptr(), arr->Length(), false);
    	uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
    	uBase::Auto<uImage::ImageReader> ir = uImage::Png::CreateReader(bs);
    	uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
    	int originalWidth = bmp->GetWidth(), originalHeight = bmp->GetHeight();
    
    	int maxTextureSize;
    	glGetIntegerv(GL_MAX_TEXTURE_SIZE, &maxTextureSize);
    	while (bmp->GetWidth() > maxTextureSize ||
    		   bmp->GetHeight() > maxTextureSize)
    	{
    		bmp = bmp->DownSample2x2();
    	}
    
    	uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
    	uGLTextureInfo info;
    	GLuint handle = uCreateGLTexture(tex, false, &info);
    
    	return ::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(originalWidth, originalHeight), info.MipCount, 0);
    }
    catch (const uBase::Exception &e)
    {
    	U_THROW(::g::Uno::Exception::New2(uStringFromXliString(e.GetMessage())));
    }
}
// }

}}} // ::g::Experimental::TextureLoader
