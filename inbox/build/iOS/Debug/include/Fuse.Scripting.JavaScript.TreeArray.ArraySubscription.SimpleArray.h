// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeArray__ArraySubscription__SimpleArray;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class TreeArray.ArraySubscription.SimpleArray :142
// {
struct TreeArray__ArraySubscription__SimpleArray_type : uType
{
    ::g::Fuse::IArray interface0;
};

TreeArray__ArraySubscription__SimpleArray_type* TreeArray__ArraySubscription__SimpleArray_typeof();
void TreeArray__ArraySubscription__SimpleArray__ctor__fn(TreeArray__ArraySubscription__SimpleArray* __this, uArray* values);
void TreeArray__ArraySubscription__SimpleArray__get_Item_fn(TreeArray__ArraySubscription__SimpleArray* __this, int32_t* index, uObject** __retval);
void TreeArray__ArraySubscription__SimpleArray__get_Length_fn(TreeArray__ArraySubscription__SimpleArray* __this, int32_t* __retval);
void TreeArray__ArraySubscription__SimpleArray__New1_fn(uArray* values, TreeArray__ArraySubscription__SimpleArray** __retval);

struct TreeArray__ArraySubscription__SimpleArray : uObject
{
    uStrong<uArray*> _values;

    void ctor_(uArray* values);
    uObject* Item(int32_t index);
    int32_t Length();
    static TreeArray__ArraySubscription__SimpleArray* New1(uArray* values);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
