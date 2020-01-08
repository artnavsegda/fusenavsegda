// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Rect.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Uno{

// public struct Recti :269
// {
uStructType* Recti_typeof();
void Recti__ctor_1_fn(Recti* __this, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom);
void Recti__ctor_2_fn(Recti* __this, ::g::Uno::Int2* pos, ::g::Uno::Int2* size);
void Recti__get_Area_fn(Recti* __this, int32_t* __retval);
void Recti__Equals2_fn(Recti* rect1, Recti* rect2, bool* __retval);
void Recti__Inflate_fn(Recti* r, int32_t* size, Recti* __retval);
void Recti__Inflate1_fn(Recti* r, ::g::Uno::Int2* size, Recti* __retval);
void Recti__Intersect_fn(Recti* a, Recti* b, Recti* __retval);
void Recti__get_Maximum_fn(Recti* __this, ::g::Uno::Int2* __retval);
void Recti__set_Maximum_fn(Recti* __this, ::g::Uno::Int2* value);
void Recti__get_Minimum_fn(Recti* __this, ::g::Uno::Int2* __retval);
void Recti__set_Minimum_fn(Recti* __this, ::g::Uno::Int2* value);
void Recti__New1_fn(int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, Recti* __retval);
void Recti__New2_fn(::g::Uno::Int2* pos, ::g::Uno::Int2* size, Recti* __retval);
void Recti__get_Size_fn(Recti* __this, ::g::Uno::Int2* __retval);
void Recti__set_Size_fn(Recti* __this, ::g::Uno::Int2* value);
void Recti__ToString_fn(Recti* __this, uType* __type, uString** __retval);

struct Recti
{
    int32_t Left;
    int32_t Top;
    int32_t Right;
    int32_t Bottom;

    void ctor_1(int32_t left, int32_t top, int32_t right, int32_t bottom);
    void ctor_2(::g::Uno::Int2 pos, ::g::Uno::Int2 size);
    int32_t Area();
    ::g::Uno::Int2 Maximum();
    void Maximum(::g::Uno::Int2 value);
    ::g::Uno::Int2 Minimum();
    void Minimum(::g::Uno::Int2 value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    uString* ToString(uType* __type) { uString* __retval; return Recti__ToString_fn(this, __type, &__retval), __retval; }
};

bool Recti__Equals2(Recti rect1, Recti rect2);
Recti Recti__Inflate(Recti r, int32_t size);
Recti Recti__Inflate1(Recti r, ::g::Uno::Int2 size);
Recti Recti__Intersect(Recti a, Recti b);
Recti Recti__New1(int32_t left, int32_t top, int32_t right, int32_t bottom);
Recti Recti__New2(::g::Uno::Int2 pos, ::g::Uno::Int2 size);
// }

}} // ::g::Uno
