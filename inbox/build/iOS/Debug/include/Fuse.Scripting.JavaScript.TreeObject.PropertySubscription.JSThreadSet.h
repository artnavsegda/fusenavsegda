// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject__PropertySubscription__JSThreadSet;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeObject.PropertySubscription.JSThreadSet :27
// {
uType* TreeObject__PropertySubscription__JSThreadSet_typeof();
void TreeObject__PropertySubscription__JSThreadSet__ctor__fn(TreeObject__PropertySubscription__JSThreadSet* __this, ::g::Fuse::Scripting::Object* obj, uString* key, uObject* value);
void TreeObject__PropertySubscription__JSThreadSet__New1_fn(::g::Fuse::Scripting::Object* obj, uString* key, uObject* value, TreeObject__PropertySubscription__JSThreadSet** __retval);
void TreeObject__PropertySubscription__JSThreadSet__Perform_fn(TreeObject__PropertySubscription__JSThreadSet* __this, ::g::Fuse::Scripting::Context* context);

struct TreeObject__PropertySubscription__JSThreadSet : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> _obj;
    uStrong<uString*> _key;
    uStrong<uObject*> _value;

    void ctor_(::g::Fuse::Scripting::Object* obj, uString* key, uObject* value);
    void Perform(::g::Fuse::Scripting::Context* context);
    static TreeObject__PropertySubscription__JSThreadSet* New1(::g::Fuse::Scripting::Object* obj, uString* key, uObject* value);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
