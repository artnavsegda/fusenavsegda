// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.JavaScript.ObjectMirror.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject__PropertySubscription;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal class TreeObject :8
// {
struct TreeObject_type : ::g::Fuse::Scripting::JavaScript::ObjectMirror_type
{
    ::g::Fuse::Reactive::IObservableObject interface2;
};

TreeObject_type* TreeObject_typeof();
void TreeObject__ctor_4_fn(TreeObject* __this, ::g::Fuse::Scripting::Object* obj);
void TreeObject__New3_fn(::g::Fuse::Scripting::Object* obj, TreeObject** __retval);
void TreeObject__get_ReflectedRaw_fn(TreeObject* __this, uObject** __retval);
void TreeObject__Set_fn(TreeObject* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
void TreeObject__Set1_fn(TreeObject* __this, uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude);
void TreeObject__Subscribe_fn(TreeObject* __this, uObject* observer, uObject** __retval);

struct TreeObject : ::g::Fuse::Scripting::JavaScript::ObjectMirror
{
    uStrong<uObject*> _rawOverride;

    void ctor_4(::g::Fuse::Scripting::Object* obj);
    void Set1(uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude);
    uObject* Subscribe(uObject* observer);
    static TreeObject* New3(::g::Fuse::Scripting::Object* obj);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
