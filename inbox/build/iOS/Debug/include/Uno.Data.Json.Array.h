// This file was generated based on /usr/local/share/uno/Packages/Uno.Data.Json/1.10.0-rc1/Source/JsonValue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Json.Value.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Array;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class Array :90
// {
uType* Array_typeof();
void Array__ctor_1_fn(Array* __this);
void Array__Add_fn(Array* __this, ::g::Uno::Data::Json::Value* v);
void Array__get_Count_fn(Array* __this, int32_t* __retval);
void Array__get_Item_fn(Array* __this, int32_t* index, ::g::Uno::Data::Json::Value** __retval);
void Array__New1_fn(Array** __retval);

struct Array : ::g::Uno::Data::Json::Value
{
    uStrong< ::g::Uno::Collections::List*> _values;

    void ctor_1();
    void Add(::g::Uno::Data::Json::Value* v);
    int32_t Count();
    ::g::Uno::Data::Json::Value* Item(int32_t index);
    static Array* New1();
};
// }

}}}} // ::g::Uno::Data::Json
