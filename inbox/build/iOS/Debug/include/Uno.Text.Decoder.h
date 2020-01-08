// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Utf8.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct Decoder;}}}

namespace g{
namespace Uno{
namespace Text{

// public abstract class Decoder :7
// {
struct Decoder_type : uType
{
    void(*fp_GetChars)(::g::Uno::Text::Decoder*, uArray*, int32_t*, int32_t*, uArray*, int32_t*, int32_t*);
};

Decoder_type* Decoder_typeof();
void Decoder__ctor__fn(Decoder* __this);

struct Decoder : uObject
{
    void ctor_();
    int32_t GetChars(uArray* bytes, int32_t byteIndex, int32_t byteCount, uArray* chars, int32_t charIndex) { int32_t __retval; return (((Decoder_type*)__type)->fp_GetChars)(this, bytes, &byteIndex, &byteCount, chars, &charIndex, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Text
