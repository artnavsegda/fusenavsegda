// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/Text/PatternPart.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Char.h>
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct SeparatorPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class SeparatorPart<T> :184
// {
::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof();
void SeparatorPart__ctor_1_fn(SeparatorPart* __this, bool* obligatory, bool* show, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__ctor_2_fn(SeparatorPart* __this, bool* obligatory, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__New1_fn(uType* __type, bool* obligatory, bool* show, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval);
void SeparatorPart__New2_fn(uType* __type, bool* obligatory, char16_t* separator, int32_t* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval);
void SeparatorPart__Write_fn(SeparatorPart* __this, void* value, uString** __retval);

struct SeparatorPart : ::g::Uno::Time::Text::PatternPart
{
    char16_t _separator;
    bool _show;

    void ctor_1(bool obligatory, bool show, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified);
    void ctor_2(bool obligatory, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified);
    static SeparatorPart* New1(uType* __type, bool obligatory, bool show, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified);
    static SeparatorPart* New2(uType* __type, bool obligatory, char16_t separator, int32_t skipNextPartsCountIfThisNotSpecified);
};
// }

}}}} // ::g::Uno::Time::Text
