// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Color;}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public static class Color :9
// {
uClassType* Color_typeof();
void Color__FromInt4_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval);
void Color__FromRgba_fn(uint32_t* rgba, ::g::Uno::Float4* __retval);
void Color__Parse_fn(uString* str, ::g::Uno::Float4* __retval);
void Color__TryParse_fn(uString* str, ::g::Uno::Float4* color, bool* __retval);
void Color__TryParseHexByte_fn(char16_t* ch1, char16_t* ch2, int32_t* result, bool* __retval);
void Color__TryParseHexDigit_fn(char16_t* ch, int32_t* result, bool* __retval);
void Color__TryParseHexNibble_fn(char16_t* ch, int32_t* result, bool* __retval);
void Color__TryParseHexString_fn(uString* hex, ::g::Uno::Int4* result, bool* __retval);

struct Color : uObject
{
    static ::g::Uno::Float3x3 ToYCbCrMat_;
    static ::g::Uno::Float3x3& ToYCbCrMat() { return Color_typeof()->Init(), ToYCbCrMat_; }
    static ::g::Uno::Float3x3 ToYCbCrMatInv_;
    static ::g::Uno::Float3x3& ToYCbCrMatInv() { return Color_typeof()->Init(), ToYCbCrMatInv_; }

    static ::g::Uno::Float4 FromInt4(::g::Uno::Int4 rgba);
    static ::g::Uno::Float4 FromRgba(uint32_t rgba);
    static ::g::Uno::Float4 Parse(uString* str);
    static bool TryParse(uString* str, ::g::Uno::Float4* color);
    static bool TryParseHexByte(char16_t ch1, char16_t ch2, int32_t* result);
    static bool TryParseHexDigit(char16_t ch, int32_t* result);
    static bool TryParseHexNibble(char16_t ch, int32_t* result);
    static bool TryParseHexString(uString* hex, ::g::Uno::Int4* result);
};
// }

}} // ::g::Uno
