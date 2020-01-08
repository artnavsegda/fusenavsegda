// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Char.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct Char :9
// {
uStructType* Char_typeof();
void Char__Equals_fn(char16_t* __this, uType* __type, uObject* o, bool* __retval);
void Char__GetHashCode_fn(char16_t* __this, uType* __type, int32_t* __retval);
void Char__IsDigit_fn(char16_t* c, bool* __retval);
void Char__IsUpper_fn(char16_t* c, bool* __retval);
void Char__IsWhiteSpace_fn(char16_t* c, bool* __retval);
void Char__ToLower_fn(char16_t* c, char16_t* __retval);
void Char__ToString_fn(char16_t* __this, uType* __type, uString** __retval);
void Char__ToUpper_fn(char16_t* c, char16_t* __retval);

struct Char
{
    static uSStrong<uArray*> l65_;
    static uSStrong<uArray*>& l65() { return Char_typeof()->Init(), l65_; }
    static uSStrong<uArray*> l4256_;
    static uSStrong<uArray*>& l4256() { return Char_typeof()->Init(), l4256_; }
    static uSStrong<uArray*> l7680_;
    static uSStrong<uArray*>& l7680() { return Char_typeof()->Init(), l7680_; }
    static uSStrong<uArray*> l11246_;
    static uSStrong<uArray*>& l11246() { return Char_typeof()->Init(), l11246_; }
    static uSStrong<uArray*> l42560_;
    static uSStrong<uArray*>& l42560() { return Char_typeof()->Init(), l42560_; }
    static uSStrong<uArray*> l65313_;
    static uSStrong<uArray*>& l65313() { return Char_typeof()->Init(), l65313_; }
    static uSStrong<uArray*> u97_;
    static uSStrong<uArray*>& u97() { return Char_typeof()->Init(), u97_; }
    static uSStrong<uArray*> u7545_;
    static uSStrong<uArray*>& u7545() { return Char_typeof()->Init(), u7545_; }
    static uSStrong<uArray*> u11312_;
    static uSStrong<uArray*>& u11312() { return Char_typeof()->Init(), u11312_; }
    static uSStrong<uArray*> u42561_;
    static uSStrong<uArray*>& u42561() { return Char_typeof()->Init(), u42561_; }

    static bool Equals(char16_t __this, uType* __type, uObject* o) { bool __retval; return Char__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(char16_t __this, uType* __type) { int32_t __retval; return Char__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(char16_t __this, uType* __type) { uString* __retval; return Char__ToString_fn(&__this, __type, &__retval), __retval; }
    static bool IsDigit(char16_t c);
    static bool IsUpper(char16_t c);
    static bool IsWhiteSpace(char16_t c);
    static char16_t ToLower(char16_t c);
    static char16_t ToUpper(char16_t c);
};
// }

}} // ::g::Uno
