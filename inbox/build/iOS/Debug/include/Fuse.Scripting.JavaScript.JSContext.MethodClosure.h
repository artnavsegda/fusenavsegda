// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct JSContext__MethodClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class JSContext.MethodClosure :305
// {
uType* JSContext__MethodClosure_typeof();
void JSContext__MethodClosure__ctor__fn(JSContext__MethodClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m);
void JSContext__MethodClosure__Callback_fn(JSContext__MethodClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void JSContext__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* args, uArray** __retval);
void JSContext__MethodClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, JSContext__MethodClosure** __retval);

struct JSContext__MethodClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::ScriptMethod*> _m;
    static uSStrong<uArray*> _emptyArgs_;
    static uSStrong<uArray*>& _emptyArgs() { return JSContext__MethodClosure_typeof()->Init(), _emptyArgs_; }

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m);
    uObject* Callback(::g::Fuse::Scripting::Context* context, uArray* args);
    static uArray* CopyArgs(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* args);
    static JSContext__MethodClosure* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
