// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.TreeObservable.ValueOperation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__InsertAtOperation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeObservable.InsertAtOperation :226
// {
::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__InsertAtOperation_typeof();
void TreeObservable__InsertAtOperation__ctor_2_fn(TreeObservable__InsertAtOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
void TreeObservable__InsertAtOperation__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__InsertAtOperation** __retval);
void TreeObservable__InsertAtOperation__Perform1_fn(TreeObservable__InsertAtOperation* __this, uObject* dc);
void TreeObservable__InsertAtOperation__get_SpecialArgCount_fn(TreeObservable__InsertAtOperation* __this, int32_t* __retval);

struct TreeObservable__InsertAtOperation : ::g::Fuse::Scripting::JavaScript::TreeObservable__ValueOperation
{
    int32_t _index;

    void ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
    static TreeObservable__InsertAtOperation* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
