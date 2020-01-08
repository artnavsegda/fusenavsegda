// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/UInt.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct UInt :8
// {
uStructType* UInt_typeof();
void UInt__Equals_fn(uint32_t* __this, uType* __type, uObject* o, bool* __retval);
void UInt__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval);
void UInt__ToString_fn(uint32_t* __this, uType* __type, uString** __retval);

struct UInt
{
    static bool Equals(uint32_t __this, uType* __type, uObject* o) { bool __retval; return UInt__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(uint32_t __this, uType* __type) { int32_t __retval; return UInt__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint32_t __this, uType* __type) { uString* __retval; return UInt__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
