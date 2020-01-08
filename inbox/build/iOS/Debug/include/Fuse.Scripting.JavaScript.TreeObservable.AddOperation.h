// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.TreeObservable.ValueOperation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__AddOperation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeObservable.AddOperation :212
// {
::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__AddOperation_typeof();
void TreeObservable__AddOperation__ctor_2_fn(TreeObservable__AddOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
void TreeObservable__AddOperation__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args, TreeObservable__AddOperation** __retval);
void TreeObservable__AddOperation__Perform1_fn(TreeObservable__AddOperation* __this, uObject* dc);
void TreeObservable__AddOperation__get_SpecialArgCount_fn(TreeObservable__AddOperation* __this, int32_t* __retval);

struct TreeObservable__AddOperation : ::g::Fuse::Scripting::JavaScript::TreeObservable__ValueOperation
{
    void ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
    static TreeObservable__AddOperation* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
