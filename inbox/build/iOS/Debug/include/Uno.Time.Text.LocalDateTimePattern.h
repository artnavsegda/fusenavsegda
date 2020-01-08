// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/Text/LocalDateTimePattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDateTimePattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDateTimePattern__LocalDateTimeBucket;}}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class LocalDateTimePattern :3
// {
uType* LocalDateTimePattern_typeof();
void LocalDateTimePattern__ctor__fn(LocalDateTimePattern* __this);
void LocalDateTimePattern__Format_fn(LocalDateTimePattern* __this, ::g::Uno::Time::LocalDateTime* value, uString** __retval);
void LocalDateTimePattern__get_GeneralIsoPattern_fn(LocalDateTimePattern** __retval);
void LocalDateTimePattern__GetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__GetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__GetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__GetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__GetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__GetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__GetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* __retval);
void LocalDateTimePattern__New1_fn(LocalDateTimePattern** __retval);
void LocalDateTimePattern__SetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* day);
void LocalDateTimePattern__SetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* hour);
void LocalDateTimePattern__SetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* minute);
void LocalDateTimePattern__SetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* month);
void LocalDateTimePattern__SetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* second);
void LocalDateTimePattern__SetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* sign);
void LocalDateTimePattern__SetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int32_t* year);

struct LocalDateTimePattern : uObject
{
    static uSStrong<LocalDateTimePattern*> General_;
    static uSStrong<LocalDateTimePattern*>& General() { return General_; }
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;

    void ctor_();
    uString* Format(::g::Uno::Time::LocalDateTime value);
    int32_t GetDay(LocalDateTimePattern__LocalDateTimeBucket* value);
    int32_t GetHour(LocalDateTimePattern__LocalDateTimeBucket* value);
    int32_t GetMinute(LocalDateTimePattern__LocalDateTimeBucket* value);
    int32_t GetMonth(LocalDateTimePattern__LocalDateTimeBucket* value);
    int32_t GetSecond(LocalDateTimePattern__LocalDateTimeBucket* value);
    int32_t GetSign(LocalDateTimePattern__LocalDateTimeBucket* value);
    int32_t GetYear(LocalDateTimePattern__LocalDateTimeBucket* value);
    void SetDay(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t day);
    void SetHour(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t hour);
    void SetMinute(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t minute);
    void SetMonth(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t month);
    void SetSecond(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t second);
    void SetSign(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t sign);
    void SetYear(LocalDateTimePattern__LocalDateTimeBucket* value, int32_t year);
    static LocalDateTimePattern* New1();
    static LocalDateTimePattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
