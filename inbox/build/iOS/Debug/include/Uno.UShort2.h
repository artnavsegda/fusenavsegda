// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/UShort2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct UShort2;}}

namespace g{
namespace Uno{

// public intrinsic struct UShort2 :6
// {
uStructType* UShort2_typeof();
void UShort2__Equals_fn(UShort2* __this, uType* __type, uObject* o, bool* __retval);
void UShort2__GetHashCode_fn(UShort2* __this, uType* __type, int32_t* __retval);
void UShort2__ToString_fn(UShort2* __this, uType* __type, uString** __retval);

struct UShort2
{
    uint16_t X;
    uint16_t Y;

    bool Equals(uType* __type, uObject* o) { bool __retval; return UShort2__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return UShort2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return UShort2__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
