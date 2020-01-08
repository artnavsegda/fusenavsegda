// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject__SetClosure;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeObject.SetClosure :81
// {
uType* TreeObject__SetClosure_typeof();
void TreeObject__SetClosure__ctor__fn(TreeObject__SetClosure* __this, ::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool* hasRawOverride);
void TreeObject__SetClosure__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool* hasRawOverride, TreeObject__SetClosure** __retval);
void TreeObject__SetClosure__Perform_fn(TreeObject__SetClosure* __this);

struct TreeObject__SetClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::JavaScript::TreeObject*> _treeObject;
    uStrong< ::g::Uno::Collections::Dictionary*> _newProps;
    uStrong<uObject*> _rawOverride;
    bool _hasRawOverride;

    void ctor_(::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool hasRawOverride);
    void Perform();
    static TreeObject__SetClosure* New1(::g::Fuse::Scripting::JavaScript::TreeObject* treeObject, ::g::Uno::Collections::Dictionary* newProps, uObject* rawOverride, bool hasRawOverride);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
