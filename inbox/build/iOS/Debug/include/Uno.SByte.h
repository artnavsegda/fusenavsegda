// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/SByte.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct SByte :9
// {
uStructType* SByte_typeof();
void SByte__Equals_fn(int8_t* __this, uType* __type, uObject* o, bool* __retval);
void SByte__GetHashCode_fn(int8_t* __this, uType* __type, int32_t* __retval);
void SByte__ToString_fn(int8_t* __this, uType* __type, uString** __retval);

struct SByte
{
    static bool Equals(int8_t __this, uType* __type, uObject* o) { bool __retval; return SByte__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(int8_t __this, uType* __type) { int32_t __retval; return SByte__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int8_t __this, uType* __type) { uString* __retval; return SByte__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
