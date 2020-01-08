// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/Calendars/TimeOfDayCalculator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct TimeOfDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal static class TimeOfDayCalculator :3
// {
uClassType* TimeOfDayCalculator_typeof();
void TimeOfDayCalculator__GetHourOfDay_fn(::g::Uno::Time::Instant* instant, int32_t* __retval);
void TimeOfDayCalculator__GetHourOfDayFromTickOfDay_fn(int64_t* tickOfDay, int32_t* __retval);
void TimeOfDayCalculator__GetMinuteOfHour_fn(::g::Uno::Time::Instant* instant, int32_t* __retval);
void TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay_fn(int64_t* tickOfDay, int32_t* __retval);
void TimeOfDayCalculator__GetSecondOfMinute_fn(::g::Uno::Time::Instant* instant, int32_t* __retval);
void TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay_fn(int64_t* tickOfDay, int32_t* __retval);
void TimeOfDayCalculator__GetTickOfDay_fn(::g::Uno::Time::Instant* instant, int64_t* __retval);
void TimeOfDayCalculator__GetTicks_fn(int32_t* hourOfDay, int32_t* minuteOfHour, int64_t* __retval);

struct TimeOfDayCalculator : uObject
{
    static int32_t GetHourOfDay(::g::Uno::Time::Instant instant);
    static int32_t GetHourOfDayFromTickOfDay(int64_t tickOfDay);
    static int32_t GetMinuteOfHour(::g::Uno::Time::Instant instant);
    static int32_t GetMinuteOfHourFromTickOfDay(int64_t tickOfDay);
    static int32_t GetSecondOfMinute(::g::Uno::Time::Instant instant);
    static int32_t GetSecondOfMinuteFromTickOfDay(int64_t tickOfDay);
    static int64_t GetTickOfDay(::g::Uno::Time::Instant instant);
    static int64_t GetTicks(int32_t hourOfDay, int32_t minuteOfHour);
};
// }

}}}} // ::g::Uno::Time::Calendars
