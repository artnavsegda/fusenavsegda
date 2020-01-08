// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct JSContext__ReadonlyPropertyClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptReadonlyProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class JSContext.ReadonlyPropertyClosure :244
// {
uType* JSContext__ReadonlyPropertyClosure_typeof();
void JSContext__ReadonlyPropertyClosure__ctor__fn(JSContext__ReadonlyPropertyClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant);
void JSContext__ReadonlyPropertyClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, JSContext__ReadonlyPropertyClosure** __retval);

struct JSContext__ReadonlyPropertyClosure : uObject
{
    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant);
    static JSContext__ReadonlyPropertyClosure* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
