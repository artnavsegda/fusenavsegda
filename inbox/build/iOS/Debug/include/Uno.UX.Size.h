// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/UX/Size.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace UX{struct Size;}}}

namespace g{
namespace Uno{
namespace UX{

// public struct Size :29
// {
uStructType* Size_typeof();
void Size__ctor_1_fn(Size* __this, float* value, int32_t* unit);
void Size__get_Auto_fn(Size* __retval);
void Size__Combine_fn(int32_t* a, int32_t* b, int32_t* __retval);
void Size__DetermineUnit_fn(Size* __this, int32_t* __retval);
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval);
void Size__GetHashCode_fn(Size* __this, uType* __type, int32_t* __retval);
void Size__get_IsAuto_fn(Size* __this, bool* __retval);
void Size__New1_fn(float* value, int32_t* unit, Size* __retval);
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval);
void Size__op_Explicit1_fn(Size* s, float* __retval);
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval);
void Size__op_Implicit1_fn(int32_t* unspecifiedUnits, Size* __retval);
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval);
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval);
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval);
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval);

struct Size
{
    float Value;
    int32_t Unit;

    void ctor_1(float value, int32_t unit);
    int32_t DetermineUnit();
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Size__Equals_fn(this, __type, obj, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Size__GetHashCode_fn(this, __type, &__retval), __retval; }
    bool IsAuto();
    uString* ToString(uType* __type) { uString* __retval; return Size__ToString_fn(this, __type, &__retval), __retval; }
    static int32_t Combine(int32_t a, int32_t b);
};

Size Size__New1(float value, int32_t unit);
Size Size__op_Addition(Size a, Size b);
float Size__op_Explicit1(Size s);
Size Size__op_Implicit(float unspecifiedUnits);
Size Size__op_Implicit1(int32_t unspecifiedUnits);
bool Size__op_Inequality(Size a, Size b);
Size Size__op_Multiply(Size a, float b);
Size Size__op_Subtraction(Size a, Size b);
Size Size__Auto();
// }

}}} // ::g::Uno::UX
