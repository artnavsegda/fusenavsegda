// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/StringBuilder.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Uno{
namespace Text{

// public sealed class StringBuilder :7
// {
uType* StringBuilder_typeof();
void StringBuilder__ctor__fn(StringBuilder* __this);
void StringBuilder__Append_fn(StringBuilder* __this, char16_t* c, StringBuilder** __retval);
void StringBuilder__Append1_fn(StringBuilder* __this, uArray* chars, StringBuilder** __retval);
void StringBuilder__Append2_fn(StringBuilder* __this, uString* str, StringBuilder** __retval);
void StringBuilder__AppendLine_fn(StringBuilder* __this, uString* str, StringBuilder** __retval);
void StringBuilder__get_Length_fn(StringBuilder* __this, int32_t* __retval);
void StringBuilder__get_MaxCapacity_fn(StringBuilder* __this, int32_t* __retval);
void StringBuilder__New1_fn(StringBuilder** __retval);
void StringBuilder__ToString_fn(StringBuilder* __this, uString** __retval);

struct StringBuilder : uObject
{
    int32_t _totalLength;
    uStrong< ::g::Uno::Collections::List*> _strings;

    void ctor_();
    StringBuilder* Append(char16_t c);
    StringBuilder* Append1(uArray* chars);
    StringBuilder* Append2(uString* str);
    StringBuilder* AppendLine(uString* str);
    int32_t Length();
    int32_t MaxCapacity();
    static StringBuilder* New1();
};
// }

}}} // ::g::Uno::Text
