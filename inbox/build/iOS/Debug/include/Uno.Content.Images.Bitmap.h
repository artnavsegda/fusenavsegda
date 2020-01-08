// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Images/Bitmap.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Content{
namespace Images{

// public sealed class Bitmap :7
// {
uType* Bitmap_typeof();
void Bitmap__ctor__fn(Bitmap* __this, ::g::Uno::Int2* size, int32_t* format, ::g::Uno::Buffer* optionalBuffer);
void Bitmap__get_Buffer_fn(Bitmap* __this, ::g::Uno::Buffer** __retval);
void Bitmap__set_Buffer_fn(Bitmap* __this, ::g::Uno::Buffer* value);
void Bitmap__get_Format_fn(Bitmap* __this, int32_t* __retval);
void Bitmap__set_Format_fn(Bitmap* __this, int32_t* value);
void Bitmap__New1_fn(::g::Uno::Int2* size, int32_t* format, ::g::Uno::Buffer* optionalBuffer, Bitmap** __retval);
void Bitmap__get_Size_fn(Bitmap* __this, ::g::Uno::Int2* __retval);
void Bitmap__set_Size_fn(Bitmap* __this, ::g::Uno::Int2* value);

struct Bitmap : uObject
{
    uStrong< ::g::Uno::Buffer*> _Buffer;
    int32_t _Format;
    ::g::Uno::Int2 _Size;

    void ctor_(::g::Uno::Int2 size, int32_t format, ::g::Uno::Buffer* optionalBuffer);
    ::g::Uno::Buffer* Buffer();
    void Buffer(::g::Uno::Buffer* value);
    int32_t Format();
    void Format(int32_t value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    static Bitmap* New1(::g::Uno::Int2 size, int32_t format, ::g::Uno::Buffer* optionalBuffer);
};
// }

}}}} // ::g::Uno::Content::Images
