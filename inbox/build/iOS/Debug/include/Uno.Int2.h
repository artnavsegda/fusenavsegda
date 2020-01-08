// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Int2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{

// public intrinsic struct Int2 :7
// {
uStructType* Int2_typeof();
void Int2__ctor_1_fn(Int2* __this, int32_t* xy);
void Int2__ctor_2_fn(Int2* __this, int32_t* x, int32_t* y);
void Int2__Equals_fn(Int2* __this, uType* __type, uObject* o, bool* __retval);
void Int2__GetHashCode_fn(Int2* __this, uType* __type, int32_t* __retval);
void Int2__New1_fn(int32_t* xy, Int2* __retval);
void Int2__New2_fn(int32_t* x, int32_t* y, Int2* __retval);
void Int2__op_Explicit1_fn(::g::Uno::Float2* v, Int2* __retval);
void Int2__op_Inequality_fn(Int2* a, Int2* b, bool* __retval);
void Int2__op_Multiply_fn(Int2* a, int32_t* b, Int2* __retval);
void Int2__op_Subtraction1_fn(Int2* a, Int2* b, Int2* __retval);
void Int2__ToString_fn(Int2* __this, uType* __type, uString** __retval);

struct Int2
{
    int32_t X;
    int32_t Y;

    void ctor_1(int32_t xy);
    void ctor_2(int32_t x, int32_t y);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Int2__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Int2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Int2__ToString_fn(this, __type, &__retval), __retval; }
};

Int2 Int2__New1(int32_t xy);
Int2 Int2__New2(int32_t x, int32_t y);
Int2 Int2__op_Explicit1(::g::Uno::Float2 v);
bool Int2__op_Inequality(Int2 a, Int2 b);
Int2 Int2__op_Multiply(Int2 a, int32_t b);
Int2 Int2__op_Subtraction1(Int2 a, Int2 b);
// }

}} // ::g::Uno
