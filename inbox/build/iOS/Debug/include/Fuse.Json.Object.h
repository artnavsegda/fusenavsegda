// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Json.Parse.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Json__Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{

// internal sealed class Json.Object :55
// {
struct Json__Object_type : uType
{
    ::g::Fuse::IObject interface0;
};

Json__Object_type* Json__Object_typeof();
void Json__Object__ctor__fn(Json__Object* __this, ::g::Uno::Collections::Dictionary* dict);
void Json__Object__ContainsKey_fn(Json__Object* __this, uString* key, bool* __retval);
void Json__Object__get_Item_fn(Json__Object* __this, uString* key, uObject** __retval);
void Json__Object__get_Keys_fn(Json__Object* __this, uArray** __retval);
void Json__Object__New1_fn(::g::Uno::Collections::Dictionary* dict, Json__Object** __retval);

struct Json__Object : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _dict;

    void ctor_(::g::Uno::Collections::Dictionary* dict);
    bool ContainsKey(uString* key);
    uObject* Item(uString* key);
    uArray* Keys();
    static Json__Object* New1(::g::Uno::Collections::Dictionary* dict);
};
// }

}} // ::g::Fuse
