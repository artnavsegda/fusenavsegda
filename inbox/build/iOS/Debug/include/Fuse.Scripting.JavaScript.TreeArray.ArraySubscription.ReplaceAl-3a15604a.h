// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeArray__ArraySubscription__ReplaceAllOperation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeArray.ArraySubscription.ReplaceAllOperation :63
// {
uType* TreeArray__ArraySubscription__ReplaceAllOperation_typeof();
void TreeArray__ArraySubscription__ReplaceAllOperation__ctor__fn(TreeArray__ArraySubscription__ReplaceAllOperation* __this, ::g::Fuse::Scripting::Array* target, uObject* newValues);
void TreeArray__ArraySubscription__ReplaceAllOperation__New1_fn(::g::Fuse::Scripting::Array* target, uObject* newValues, TreeArray__ArraySubscription__ReplaceAllOperation** __retval);
void TreeArray__ArraySubscription__ReplaceAllOperation__Perform_fn(TreeArray__ArraySubscription__ReplaceAllOperation* __this, ::g::Fuse::Scripting::Context* context);

struct TreeArray__ArraySubscription__ReplaceAllOperation : uObject
{
    uStrong< ::g::Fuse::Scripting::Array*> _target;
    uStrong<uObject*> _newValues;

    void ctor_(::g::Fuse::Scripting::Array* target, uObject* newValues);
    void Perform(::g::Fuse::Scripting::Context* context);
    static TreeArray__ArraySubscription__ReplaceAllOperation* New1(::g::Fuse::Scripting::Array* target, uObject* newValues);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
