// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__Operation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private abstract class TreeObservable.Operation :115
// {
struct TreeObservable__Operation_type : uType
{
    void(*fp_Perform1)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, uObject*);
    void(*fp_get_SpecialArgCount)(::g::Fuse::Scripting::JavaScript::TreeObservable__Operation*, int32_t*);
};

TreeObservable__Operation_type* TreeObservable__Operation_typeof();
void TreeObservable__Operation__ctor__fn(TreeObservable__Operation* __this, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
void TreeObservable__Operation__Perform_fn(TreeObservable__Operation* __this, ::g::Fuse::Scripting::Context* context);
void TreeObservable__Operation__Perform2_fn(TreeObservable__Operation* __this, uObject* dc, int32_t* pos);

struct TreeObservable__Operation : uObject
{
    uStrong< ::g::Fuse::Scripting::JavaScript::TreeObservable*> TreeObservable;
    uStrong<uArray*> Arguments;

    void ctor_(::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
    void Perform(::g::Fuse::Scripting::Context* context);
    void Perform1(uObject* dc) { (((TreeObservable__Operation_type*)__type)->fp_Perform1)(this, dc); }
    void Perform2(uObject* dc, int32_t pos);
    int32_t SpecialArgCount() { int32_t __retval; return (((TreeObservable__Operation_type*)__type)->fp_get_SpecialArgCount)(this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
