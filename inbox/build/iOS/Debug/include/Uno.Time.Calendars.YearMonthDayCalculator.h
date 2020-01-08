// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/Calendars/YearMonthDayCalculator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator;}}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal abstract class YearMonthDayCalculator :3
// {
struct YearMonthDayCalculator_type : uType
{
    void(*fp_CalculateStartOfYearDays)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int32_t*, int32_t*);
    void(*fp_GetDaysInMonth)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int32_t*, int32_t*, int32_t*);
    void(*fp_GetInstant)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int32_t*, int32_t*, int32_t*, ::g::Uno::Time::Instant*);
    void(*fp_GetMonthOfYear1)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, ::g::Uno::Time::Instant*, int32_t*, int32_t*);
    void(*fp_GetStartOfYearInTicks)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int32_t*, int64_t*);
    void(*fp_GetTicksFromStartOfYearToStartOfMonth)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int32_t*, int32_t*, int64_t*);
    void(*fp_IsLeapYear)(::g::Uno::Time::Calendars::YearMonthDayCalculator*, int32_t*, bool*);
};

YearMonthDayCalculator_type* YearMonthDayCalculator_typeof();
void YearMonthDayCalculator__ctor__fn(YearMonthDayCalculator* __this, int32_t* minYear, int32_t* maxYear, int32_t* monthsInYear, int64_t* averageTicksPerYear, int64_t* ticksAtStartOfYear1, uArray* eras);
void YearMonthDayCalculator__get_Eras_fn(YearMonthDayCalculator* __this, uArray** __retval);
void YearMonthDayCalculator__GetDayOfMonth_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void YearMonthDayCalculator__GetDayOfMonth1_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int32_t* year, int32_t* month, int32_t* __retval);
void YearMonthDayCalculator__GetInstant_fn(YearMonthDayCalculator* __this, int32_t* year, int32_t* monthOfYear, int32_t* dayOfMonth, ::g::Uno::Time::Instant* __retval);
void YearMonthDayCalculator__GetMaxMonth_fn(YearMonthDayCalculator* __this, int32_t* year, int32_t* __retval);
void YearMonthDayCalculator__GetMonthOfYear_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void YearMonthDayCalculator__GetStartOfYearInTicks_fn(YearMonthDayCalculator* __this, int32_t* year, int64_t* __retval);
void YearMonthDayCalculator__GetTicksInYear_fn(YearMonthDayCalculator* __this, int32_t* year, int64_t* __retval);
void YearMonthDayCalculator__GetYear_fn(YearMonthDayCalculator* __this, ::g::Uno::Time::Instant* instant, int32_t* __retval);
void YearMonthDayCalculator__GetYearMonthDayTicks_fn(YearMonthDayCalculator* __this, int32_t* year, int32_t* month, int32_t* dayOfMonth, int64_t* __retval);
void YearMonthDayCalculator__GetYearMonthTicks_fn(YearMonthDayCalculator* __this, int32_t* year, int32_t* month, int64_t* __retval);
void YearMonthDayCalculator__get_MaxYear_fn(YearMonthDayCalculator* __this, int32_t* __retval);
void YearMonthDayCalculator__get_MinYear_fn(YearMonthDayCalculator* __this, int32_t* __retval);

struct YearMonthDayCalculator : uObject
{
    int32_t _minYear;
    int32_t _maxYear;
    int32_t _monthsInYear;
    int64_t _averageTicksPerYear;
    int64_t _ticksAtStartOfYear1;
    uStrong<uArray*> _eras;

    void ctor_(int32_t minYear, int32_t maxYear, int32_t monthsInYear, int64_t averageTicksPerYear, int64_t ticksAtStartOfYear1, uArray* eras);
    int32_t CalculateStartOfYearDays(int32_t year) { int32_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_CalculateStartOfYearDays)(this, &year, &__retval), __retval; }
    uArray* Eras();
    int32_t GetDayOfMonth(::g::Uno::Time::Instant instant);
    int32_t GetDayOfMonth1(::g::Uno::Time::Instant instant, int32_t year, int32_t month);
    int32_t GetDaysInMonth(int32_t year, int32_t month) { int32_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetDaysInMonth)(this, &year, &month, &__retval), __retval; }
    ::g::Uno::Time::Instant GetInstant(int32_t year, int32_t monthOfYear, int32_t dayOfMonth);
    int32_t GetMaxMonth(int32_t year);
    int32_t GetMonthOfYear(::g::Uno::Time::Instant instant);
    int32_t GetMonthOfYear1(::g::Uno::Time::Instant instant, int32_t year);
    int64_t GetStartOfYearInTicks(int32_t year) { int64_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetStartOfYearInTicks)(this, &year, &__retval), __retval; }
    int64_t GetTicksFromStartOfYearToStartOfMonth(int32_t year, int32_t month) { int64_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetTicksFromStartOfYearToStartOfMonth)(this, &year, &month, &__retval), __retval; }
    int64_t GetTicksInYear(int32_t year);
    int32_t GetYear(::g::Uno::Time::Instant instant);
    int64_t GetYearMonthDayTicks(int32_t year, int32_t month, int32_t dayOfMonth);
    int64_t GetYearMonthTicks(int32_t year, int32_t month);
    bool IsLeapYear(int32_t year) { bool __retval; return (((YearMonthDayCalculator_type*)__type)->fp_IsLeapYear)(this, &year, &__retval), __retval; }
    int32_t MaxYear();
    int32_t MinYear();
    static ::g::Uno::Time::Instant GetInstant(YearMonthDayCalculator* __this, int32_t year, int32_t monthOfYear, int32_t dayOfMonth);
    static int64_t GetStartOfYearInTicks(YearMonthDayCalculator* __this, int32_t year) { int64_t __retval; return YearMonthDayCalculator__GetStartOfYearInTicks_fn(__this, &year, &__retval), __retval; }
};

}}}} // ::g::Uno::Time::Calendars

#include <Uno.Time.Instant.h>

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

inline ::g::Uno::Time::Instant YearMonthDayCalculator::GetInstant(int32_t year, int32_t monthOfYear, int32_t dayOfMonth) { ::g::Uno::Time::Instant __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetInstant)(this, &year, &monthOfYear, &dayOfMonth, &__retval), __retval; }
inline int32_t YearMonthDayCalculator::GetMonthOfYear1(::g::Uno::Time::Instant instant, int32_t year) { int32_t __retval; return (((YearMonthDayCalculator_type*)__type)->fp_GetMonthOfYear1)(this, &instant, &year, &__retval), __retval; }
inline ::g::Uno::Time::Instant YearMonthDayCalculator::GetInstant(YearMonthDayCalculator* __this, int32_t year, int32_t monthOfYear, int32_t dayOfMonth) { ::g::Uno::Time::Instant __retval; return YearMonthDayCalculator__GetInstant_fn(__this, &year, &monthOfYear, &dayOfMonth, &__retval), __retval; }
// }

}}}} // ::g::Uno::Time::Calendars
