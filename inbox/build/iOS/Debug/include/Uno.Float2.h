// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Float2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{

// public intrinsic struct Float2 :7
// {
uStructType* Float2_typeof();
void Float2__ctor_1_fn(Float2* __this, float* xy);
void Float2__ctor_2_fn(Float2* __this, float* x, float* y);
void Float2__Equals_fn(Float2* __this, uType* __type, uObject* o, bool* __retval);
void Float2__GetHashCode_fn(Float2* __this, uType* __type, int32_t* __retval);
void Float2__get_Item_fn(Float2* __this, int32_t* index, float* __retval);
void Float2__set_Item_fn(Float2* __this, int32_t* index, float* value);
void Float2__New1_fn(float* xy, Float2* __retval);
void Float2__New2_fn(float* x, float* y, Float2* __retval);
void Float2__op_Addition_fn(float* a, Float2* b, Float2* __retval);
void Float2__op_Addition1_fn(Float2* a, float* b, Float2* __retval);
void Float2__op_Addition2_fn(Float2* a, Float2* b, Float2* __retval);
void Float2__op_Division1_fn(Float2* a, float* b, Float2* __retval);
void Float2__op_Division2_fn(Float2* a, Float2* b, Float2* __retval);
void Float2__op_Equality_fn(Float2* a, Float2* b, bool* __retval);
void Float2__op_Implicit1_fn(::g::Uno::Int2* a, Float2* __retval);
void Float2__op_Inequality_fn(Float2* a, Float2* b, bool* __retval);
void Float2__op_Multiply_fn(float* a, Float2* b, Float2* __retval);
void Float2__op_Multiply1_fn(Float2* a, float* b, Float2* __retval);
void Float2__op_Multiply2_fn(Float2* a, Float2* b, Float2* __retval);
void Float2__op_Subtraction1_fn(Float2* a, float* b, Float2* __retval);
void Float2__op_Subtraction2_fn(Float2* a, Float2* b, Float2* __retval);
void Float2__op_UnaryNegation_fn(Float2* a, Float2* __retval);
void Float2__ToString_fn(Float2* __this, uType* __type, uString** __retval);

struct Float2
{
    float X;
    float Y;

    void ctor_1(float xy);
    void ctor_2(float x, float y);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float2__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Float2__GetHashCode_fn(this, __type, &__retval), __retval; }
    float Item(int32_t index);
    void Item(int32_t index, float value);
    uString* ToString(uType* __type) { uString* __retval; return Float2__ToString_fn(this, __type, &__retval), __retval; }
};

Float2 Float2__New1(float xy);
Float2 Float2__New2(float x, float y);
Float2 Float2__op_Addition(float a, Float2 b);
Float2 Float2__op_Addition1(Float2 a, float b);
Float2 Float2__op_Addition2(Float2 a, Float2 b);
Float2 Float2__op_Division1(Float2 a, float b);
Float2 Float2__op_Division2(Float2 a, Float2 b);
bool Float2__op_Equality(Float2 a, Float2 b);
Float2 Float2__op_Implicit1(::g::Uno::Int2 a);
bool Float2__op_Inequality(Float2 a, Float2 b);
Float2 Float2__op_Multiply(float a, Float2 b);
Float2 Float2__op_Multiply1(Float2 a, float b);
Float2 Float2__op_Multiply2(Float2 a, Float2 b);
Float2 Float2__op_Subtraction1(Float2 a, float b);
Float2 Float2__op_Subtraction2(Float2 a, Float2 b);
Float2 Float2__op_UnaryNegation(Float2 a);
// }

}} // ::g::Uno
