// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.TreeObservable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__RemoveAtOperation;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeObservable.RemoveAtOperation :243
// {
::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__RemoveAtOperation_typeof();
void TreeObservable__RemoveAtOperation__ctor_1_fn(TreeObservable__RemoveAtOperation* __this, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
void TreeObservable__RemoveAtOperation__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__RemoveAtOperation** __retval);
void TreeObservable__RemoveAtOperation__Perform1_fn(TreeObservable__RemoveAtOperation* __this, uObject* dc);
void TreeObservable__RemoveAtOperation__get_SpecialArgCount_fn(TreeObservable__RemoveAtOperation* __this, int32_t* __retval);

struct TreeObservable__RemoveAtOperation : ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation
{
    int32_t _index;

    void ctor_1(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
    static TreeObservable__RemoveAtOperation* New1(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
