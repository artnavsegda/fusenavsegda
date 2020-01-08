// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.JavaScript.IMirror.h>
#include <Fuse.Scripting.JavaScript.TreeObject.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class TreeObservable :8
// {
struct TreeObservable_type : ::g::Fuse::Scripting::JavaScript::TreeObject_type
{
    ::g::Fuse::Scripting::JavaScript::IMirror interface3;
};

TreeObservable_type* TreeObservable_typeof();
void TreeObservable__ctor_5_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj);
void TreeObservable__Add_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TreeObservable__GetId_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, int64_t* __retval);
void TreeObservable__InsertAt_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TreeObservable__New4_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, TreeObservable** __retval);
void TreeObservable__NullifyCallbacks_fn(TreeObservable* __this);
void TreeObservable__Reflect_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, uObject** __retval);
void TreeObservable__RemoveAt_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TreeObservable__Set2_fn(TreeObservable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void TreeObservable__Subscribe1_fn(TreeObservable* __this);
void TreeObservable__Unsubscribe_fn(TreeObservable* __this);

struct TreeObservable : ::g::Fuse::Scripting::JavaScript::TreeObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _reflections;

    void ctor_5(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj);
    uObject* Add(::g::Fuse::Scripting::Context* context, uArray* args);
    int64_t GetId(::g::Fuse::Scripting::Context* context, uObject* obj);
    uObject* InsertAt(::g::Fuse::Scripting::Context* context, uArray* args);
    void NullifyCallbacks();
    uObject* Reflect(::g::Fuse::Scripting::Context* context, uObject* obj);
    uObject* RemoveAt(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Set2(::g::Fuse::Scripting::Context* context, uArray* args);
    void Subscribe1();
    static TreeObservable* New4(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
