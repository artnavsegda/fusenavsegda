// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/CalendarSystem.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct WeekYearCalculator;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class CalendarSystem :6
// {
uType* CalendarSystem_typeof();
void CalendarSystem__ctor__fn(CalendarSystem* __this, uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t* minDaysInFirstWeek);
void CalendarSystem__GetDayOfMonth_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void CalendarSystem__GetHourOfDay_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void CalendarSystem__GetInstant_fn(CalendarSystem* __this, int32_t* year, int32_t* monthOfYear, int32_t* dayOfMonth, int32_t* hourOfDay, int32_t* minuteOfHour, ::g::Uno::Time::Instant* __retval);
void CalendarSystem__GetMinuteOfHour_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void CalendarSystem__GetMonthOfYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void CalendarSystem__GetSecondOfMinute_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void CalendarSystem__GetYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void CalendarSystem__get_Iso_fn(CalendarSystem** __retval);
void CalendarSystem__New1_fn(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t* minDaysInFirstWeek, CalendarSystem** __retval);
void CalendarSystem__ToString_fn(CalendarSystem* __this, uString** __retval);

struct CalendarSystem : uObject
{
    static uSStrong<CalendarSystem*> _gregorianCalendarSystem_;
    static uSStrong<CalendarSystem*>& _gregorianCalendarSystem() { return _gregorianCalendarSystem_; }
    uStrong< ::g::Uno::Time::Calendars::YearMonthDayCalculator*> _yearMonthDayCalculator;
    uStrong< ::g::Uno::Time::Calendars::WeekYearCalculator*> _weekYearCalculator;
    uStrong<uString*> _id;
    uStrong<uString*> _name;
    uStrong<uArray*> _eras;
    int32_t _minYear;
    int32_t _maxYear;
    int64_t _minTicks;
    int64_t _maxTicks;

    void ctor_(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t minDaysInFirstWeek);
    int32_t GetDayOfMonth(::g::Uno::Time::Instant instant);
    int32_t GetHourOfDay(::g::Uno::Time::Instant instant);
    ::g::Uno::Time::Instant GetInstant(int32_t year, int32_t monthOfYear, int32_t dayOfMonth, int32_t hourOfDay, int32_t minuteOfHour);
    int32_t GetMinuteOfHour(::g::Uno::Time::Instant instant);
    int32_t GetMonthOfYear(::g::Uno::Time::Instant instant);
    int32_t GetSecondOfMinute(::g::Uno::Time::Instant instant);
    int32_t GetYear(::g::Uno::Time::Instant instant);
    static CalendarSystem* New1(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int32_t minDaysInFirstWeek);
    static CalendarSystem* Iso();
};
// }

}}} // ::g::Uno::Time
