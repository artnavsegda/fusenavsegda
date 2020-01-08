// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObjectMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.ValueMirror.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ObjectMirror;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal class ObjectMirror :6
// {
struct ObjectMirror_type : ::g::Fuse::Scripting::ValueMirror_type
{
    ::g::Fuse::IObject interface1;
    void(*fp_Set)(::g::Fuse::Scripting::JavaScript::ObjectMirror*, ::g::Fuse::Scripting::Context*, uObject*, ::g::Fuse::Scripting::Object*);
};

ObjectMirror_type* ObjectMirror_typeof();
void ObjectMirror__ctor_2_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__ctor_3_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval);
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval);
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval);
void ObjectMirror__New1_fn(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval);
void ObjectMirror__Set_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this);

struct ObjectMirror : ::g::Fuse::Scripting::ValueMirror
{
    uStrong< ::g::Uno::Collections::Dictionary*> _props;
    bool _hasUnsubscribed;

    void ctor_2(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
    void ctor_3(::g::Fuse::Scripting::Object* obj);
    bool ContainsKey(uString* key);
    uObject* Item(uString* key);
    uArray* Keys();
    void Set(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj) { (((ObjectMirror_type*)__type)->fp_Set)(this, context, mirror, obj); }
    static ObjectMirror* New1(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
    static void Set(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj) { ObjectMirror__Set_fn(__this, context, mirror, obj); }
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
