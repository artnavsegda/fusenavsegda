// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TypeWrapper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct JSContext;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TypeWrapper;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal static class TypeWrapper :11
// {
uClassType* TypeWrapper_typeof();
void TypeWrapper__ToArray_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval);
void TypeWrapper__ToArray1_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval);
void TypeWrapper__ToArray2_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval);
void TypeWrapper__ToArray3_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval);
void TypeWrapper__ToArray4_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval);
void TypeWrapper__ToArray5_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval);
void TypeWrapper__Unwrap_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* dc, uObject** __retval);
void TypeWrapper__Wrap_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj, uObject** __retval);
void TypeWrapper__WrapScriptClass_fn(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj, uObject** __retval);

struct TypeWrapper : uObject
{
    static ::g::Fuse::Scripting::Array* ToArray(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float2 v);
    static ::g::Fuse::Scripting::Array* ToArray1(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float3 v);
    static ::g::Fuse::Scripting::Array* ToArray2(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Float4 v);
    static ::g::Fuse::Scripting::Array* ToArray3(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int2 v);
    static ::g::Fuse::Scripting::Array* ToArray4(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int3 v);
    static ::g::Fuse::Scripting::Array* ToArray5(::g::Fuse::Scripting::JavaScript::JSContext* context, ::g::Uno::Int4 v);
    static uObject* Unwrap(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* dc);
    static uObject* Wrap(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj);
    static uObject* WrapScriptClass(::g::Fuse::Scripting::JavaScript::JSContext* context, uObject* obj);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
