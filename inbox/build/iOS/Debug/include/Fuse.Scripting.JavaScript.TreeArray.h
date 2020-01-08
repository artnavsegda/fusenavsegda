// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.JavaScript.ArrayMirror.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeArray;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeArray__ArraySubscription;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class TreeArray :9
// {
struct TreeArray_type : ::g::Fuse::Scripting::ListMirror_type
{
    ::g::Fuse::Reactive::IObservableArray interface2;
};

TreeArray_type* TreeArray_typeof();
void TreeArray__ctor_5_fn(TreeArray* __this, ::g::Fuse::Scripting::Array* arr);
void TreeArray__Add_fn(TreeArray* __this, uObject* value);
void TreeArray__InsertAt_fn(TreeArray* __this, int32_t* index, uObject* value);
void TreeArray__New3_fn(::g::Fuse::Scripting::Array* arr, TreeArray** __retval);
void TreeArray__RemoveAt_fn(TreeArray* __this, int32_t* index);
void TreeArray__ReplaceAll_fn(TreeArray* __this, uObject* newValues, TreeArray__ArraySubscription* exclude);
void TreeArray__Set1_fn(TreeArray* __this, int32_t* index, uObject* newValue);
void TreeArray__Subscribe_fn(TreeArray* __this, uObject* observer, uObject** __retval);

struct TreeArray : ::g::Fuse::Scripting::JavaScript::ArrayMirror
{
    void ctor_5(::g::Fuse::Scripting::Array* arr);
    void Add(uObject* value);
    void InsertAt(int32_t index, uObject* value);
    void RemoveAt(int32_t index);
    void ReplaceAll(uObject* newValues, TreeArray__ArraySubscription* exclude);
    void Set1(int32_t index, uObject* newValue);
    uObject* Subscribe(uObject* observer);
    static TreeArray* New3(::g::Fuse::Scripting::Array* arr);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
