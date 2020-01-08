// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ArrayMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.ListMirror.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ArrayMirror;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal class ArrayMirror :6
// {
::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof();
void ArrayMirror__ctor_3_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Array* obj);
void ArrayMirror__ctor_4_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int32_t* index, uObject** __retval);
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval);
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int32_t* __retval);
void ArrayMirror__New2_fn(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval);
void ArrayMirror__Set_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this);

struct ArrayMirror : ::g::Fuse::Scripting::ListMirror
{
    uStrong< ::g::Uno::Collections::List*> _items;
    bool _hasUnsubscribed;

    void ctor_3(::g::Fuse::Scripting::Array* obj);
    void ctor_4(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
    uArray* ItemsReadonly();
    void Set(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
    static ArrayMirror* New2(::g::Fuse::Scripting::Context* context, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
