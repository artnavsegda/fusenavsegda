// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/DateTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Time{struct Duration;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Uno{

// public struct DateTime :13
// {
uStructType* DateTime_typeof();
void DateTime__ctor_1_fn(DateTime* __this, int64_t* ticks, int32_t* kind);
void DateTime__get_Day_fn(DateTime* __this, int32_t* __retval);
void DateTime__get_DotNetTimeBase_fn(::g::Uno::Time::Instant* __retval);
void DateTime__get_DotNetTimeOffset_fn(::g::Uno::Time::Duration* __retval);
void DateTime__Equals_fn(DateTime* __this, uType* __type, uObject* obj, bool* __retval);
void DateTime__GetHashCode_fn(DateTime* __this, uType* __type, int32_t* __retval);
void DateTime__get_Hour_fn(DateTime* __this, int32_t* __retval);
void DateTime__InternalTimeOrDefault_fn(DateTime* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void DateTime__get_Minute_fn(DateTime* __this, int32_t* __retval);
void DateTime__get_Month_fn(DateTime* __this, int32_t* __retval);
void DateTime__New1_fn(int64_t* ticks, int32_t* kind, DateTime* __retval);
void DateTime__op_Equality_fn(DateTime* x, DateTime* y, bool* __retval);
void DateTime__get_Second_fn(DateTime* __this, int32_t* __retval);
void DateTime__get_Ticks_fn(DateTime* __this, int64_t* __retval);
void DateTime__ToString_fn(DateTime* __this, uType* __type, uString** __retval);
void DateTime__get_Year_fn(DateTime* __this, int32_t* __retval);

struct DateTime
{
    int32_t _kind;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _time;

    void ctor_1(int64_t ticks, int32_t kind);
    int32_t Day();
    bool Equals(uType* __type, uObject* obj) { bool __retval; return DateTime__Equals_fn(this, __type, obj, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return DateTime__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Hour();
    ::g::Uno::Time::ZonedDateTime* InternalTimeOrDefault();
    int32_t Minute();
    int32_t Month();
    int32_t Second();
    int64_t Ticks();
    uString* ToString(uType* __type) { uString* __retval; return DateTime__ToString_fn(this, __type, &__retval), __retval; }
    int32_t Year();
};

DateTime DateTime__New1(int64_t ticks, int32_t kind);
bool DateTime__op_Equality(DateTime x, DateTime y);
::g::Uno::Time::Instant DateTime__DotNetTimeBase();
::g::Uno::Time::Duration DateTime__DotNetTimeOffset();
// }

}} // ::g::Uno
