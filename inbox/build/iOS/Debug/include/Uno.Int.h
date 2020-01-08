// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Int.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct Int :9
// {
uStructType* Int_typeof();
void Int__Equals_fn(int32_t* __this, uType* __type, uObject* o, bool* __retval);
void Int__GetHashCode_fn(int32_t* __this, uType* __type, int32_t* __retval);
void Int__Parse_fn(uString* str, int32_t* __retval);
void Int__ToString_fn(int32_t* __this, uType* __type, uString** __retval);
void Int__TryParse_fn(uString* str, int32_t* result, bool* __retval);

struct Int
{
    static bool Equals(int32_t __this, uType* __type, uObject* o) { bool __retval; return Int__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(int32_t __this, uType* __type) { int32_t __retval; return Int__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int32_t __this, uType* __type) { uString* __retval; return Int__ToString_fn(&__this, __type, &__retval), __retval; }
    static int32_t Parse(uString* str);
    static bool TryParse(uString* str, int32_t* result);
};
// }

}} // ::g::Uno
