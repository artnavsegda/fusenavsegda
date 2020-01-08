// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Int4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public intrinsic struct Int4 :7
// {
uStructType* Int4_typeof();
void Int4__ctor_2_fn(Int4* __this, int32_t* x, int32_t* y, int32_t* z, int32_t* w);
void Int4__ctor_7_fn(Int4* __this, ::g::Uno::Int2* xy, ::g::Uno::Int2* zw);
void Int4__Equals_fn(Int4* __this, uType* __type, uObject* o, bool* __retval);
void Int4__GetHashCode_fn(Int4* __this, uType* __type, int32_t* __retval);
void Int4__get_Item_fn(Int4* __this, int32_t* index, int32_t* __retval);
void Int4__set_Item_fn(Int4* __this, int32_t* index, int32_t* value);
void Int4__New2_fn(int32_t* x, int32_t* y, int32_t* z, int32_t* w, Int4* __retval);
void Int4__New7_fn(::g::Uno::Int2* xy, ::g::Uno::Int2* zw, Int4* __retval);
void Int4__ToString_fn(Int4* __this, uType* __type, uString** __retval);

struct Int4
{
    int32_t X;
    int32_t Y;
    int32_t Z;
    int32_t W;

    void ctor_2(int32_t x, int32_t y, int32_t z, int32_t w);
    void ctor_7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Int4__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Int4__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Item(int32_t index);
    void Item(int32_t index, int32_t value);
    uString* ToString(uType* __type) { uString* __retval; return Int4__ToString_fn(this, __type, &__retval), __retval; }
};

Int4 Int4__New2(int32_t x, int32_t y, int32_t z, int32_t w);
Int4 Int4__New7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw);
// }

}} // ::g::Uno
