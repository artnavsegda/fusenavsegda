// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__Operation;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__Operation__PerformClosure;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeObservable.Operation.PerformClosure :140
// {
uType* TreeObservable__Operation__PerformClosure_typeof();
void TreeObservable__Operation__PerformClosure__ctor__fn(TreeObservable__Operation__PerformClosure* __this, ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc);
void TreeObservable__Operation__PerformClosure__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc, TreeObservable__Operation__PerformClosure** __retval);
void TreeObservable__Operation__PerformClosure__Perform_fn(TreeObservable__Operation__PerformClosure* __this);

struct TreeObservable__Operation__PerformClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*> _operation;
    uStrong<uObject*> _dc;

    void ctor_(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc);
    void Perform();
    static TreeObservable__Operation__PerformClosure* New1(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation* operation, uObject* dc);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
