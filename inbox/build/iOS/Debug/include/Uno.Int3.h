// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Int3.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Int3;}}

namespace g{
namespace Uno{

// public intrinsic struct Int3 :7
// {
uStructType* Int3_typeof();
void Int3__ctor_2_fn(Int3* __this, int32_t* x, int32_t* y, int32_t* z);
void Int3__Equals_fn(Int3* __this, uType* __type, uObject* o, bool* __retval);
void Int3__GetHashCode_fn(Int3* __this, uType* __type, int32_t* __retval);
void Int3__New2_fn(int32_t* x, int32_t* y, int32_t* z, Int3* __retval);
void Int3__ToString_fn(Int3* __this, uType* __type, uString** __retval);

struct Int3
{
    int32_t X;
    int32_t Y;
    int32_t Z;

    void ctor_2(int32_t x, int32_t y, int32_t z);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Int3__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Int3__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Int3__ToString_fn(this, __type, &__retval), __retval; }
};

Int3 Int3__New2(int32_t x, int32_t y, int32_t z);
// }

}} // ::g::Uno
