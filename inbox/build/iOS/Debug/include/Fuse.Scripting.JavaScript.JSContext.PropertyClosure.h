// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct JSContext__PropertyClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class JSContext.PropertyClosure :266
// {
uType* JSContext__PropertyClosure_typeof();
void JSContext__PropertyClosure__ctor__fn(JSContext__PropertyClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p);
void JSContext__PropertyClosure__GetObservable_fn(JSContext__PropertyClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void JSContext__PropertyClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, JSContext__PropertyClosure** __retval);

struct JSContext__PropertyClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::ScriptProperty*> _p;

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p);
    uObject* GetObservable(::g::Fuse::Scripting::Context* context, uArray* args);
    static JSContext__PropertyClosure* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
