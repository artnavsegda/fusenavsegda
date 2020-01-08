// This file was generated based on /usr/local/share/uno/Packages/Uno.Data.Json/1.10.0-rc1/Source/JsonValue.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Json.Value.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Data{namespace Json{struct Object;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// internal sealed class Object :51
// {
uType* Object_typeof();
void Object__ctor_1_fn(Object* __this);
void Object__Add_fn(Object* __this, uString* key, ::g::Uno::Data::Json::Value* val);
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval);
void Object__get_Count_fn(Object* __this, int32_t* __retval);
void Object__get_Item_fn(Object* __this, uString* key, ::g::Uno::Data::Json::Value** __retval);
void Object__get_Keys_fn(Object* __this, uArray** __retval);
void Object__New1_fn(Object** __retval);

struct Object : ::g::Uno::Data::Json::Value
{
    uStrong< ::g::Uno::Collections::Dictionary*> _values;

    void ctor_1();
    void Add(uString* key, ::g::Uno::Data::Json::Value* val);
    bool ContainsKey(uString* key);
    int32_t Count();
    ::g::Uno::Data::Json::Value* Item(uString* key);
    uArray* Keys();
    static Object* New1();
};
// }

}}}} // ::g::Uno::Data::Json
