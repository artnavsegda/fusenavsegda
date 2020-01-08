// This file was generated based on /usr/local/share/uno/Packages/Uno.Data.Json/1.10.0-rc1/Source/JsonValue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.Data.Json.AtomicValue-1.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct Boolean;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class Boolean :33
// {
uType* Boolean_typeof();
void Boolean__ctor_2_fn(Boolean* __this, bool* b);
void Boolean__New1_fn(bool* b, Boolean** __retval);

struct Boolean : ::g::Uno::Data::Json::AtomicValue
{
    static uSStrong<Boolean*> True_;
    static uSStrong<Boolean*>& True() { return Boolean_typeof()->Init(), True_; }
    static uSStrong<Boolean*> False_;
    static uSStrong<Boolean*>& False() { return Boolean_typeof()->Init(), False_; }

    void ctor_2(bool b);
    static Boolean* New1(bool b);
};
// }

}}}} // ::g::Uno::Data::Json
