// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/Offset.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct Offset :5
// {
uStructType* Offset_typeof();
void Offset__ctor_1_fn(Offset* __this, int32_t* milliseconds);
void Offset__Equals_fn(Offset* __this, uType* __type, uObject* obj, bool* __retval);
void Offset__Equals2_fn(Offset* __this, Offset* other, bool* __retval);
void Offset__FromHoursAndMinutes_fn(int32_t* hours, int32_t* minutes, Offset* __retval);
void Offset__FromMilliseconds_fn(int32_t* milliseconds, Offset* __retval);
void Offset__GetHashCode_fn(Offset* __this, uType* __type, int32_t* __retval);
void Offset__get_Milliseconds_fn(Offset* __this, int32_t* __retval);
void Offset__New1_fn(int32_t* milliseconds, Offset* __retval);
void Offset__op_Equality_fn(Offset* left, Offset* right, bool* __retval);
void Offset__get_Ticks_fn(Offset* __this, int64_t* __retval);
void Offset__ToString_fn(Offset* __this, uType* __type, uString** __retval);

struct Offset
{
    static Offset Zero_;
    static Offset& Zero() { return Offset_typeof()->Init(), Zero_; }
    static Offset MinValue_;
    static Offset& MinValue() { return Offset_typeof()->Init(), MinValue_; }
    static Offset MaxValue_;
    static Offset& MaxValue() { return Offset_typeof()->Init(), MaxValue_; }
    int32_t _milliseconds;

    void ctor_1(int32_t milliseconds);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Offset__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(Offset other);
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Offset__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Milliseconds();
    int64_t Ticks();
    uString* ToString(uType* __type) { uString* __retval; return Offset__ToString_fn(this, __type, &__retval), __retval; }
};

Offset Offset__FromHoursAndMinutes(int32_t hours, int32_t minutes);
Offset Offset__FromMilliseconds(int32_t milliseconds);
Offset Offset__New1(int32_t milliseconds);
bool Offset__op_Equality(Offset left, Offset right);
// }

}}} // ::g::Uno::Time
