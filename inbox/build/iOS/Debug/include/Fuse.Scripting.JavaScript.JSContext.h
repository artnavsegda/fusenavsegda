// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.JavaScript.IMirror.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ClassInstance;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct JSContext;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// public abstract class JSContext :10
// {
struct JSContext_type : ::g::Fuse::Scripting::Context_type
{
    ::g::Fuse::Scripting::JavaScript::IMirror interface1;
};

JSContext_type* JSContext_typeof();
void JSContext__ctor_1_fn(JSContext* __this);
void JSContext__Create_fn(JSContext** __retval);
void JSContext__CreateMirror_fn(JSContext* __this, uObject* obj, uObject** __retval);
void JSContext__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval);
void JSContext__FuseScriptingJavaScriptIMirrorReflect_fn(JSContext* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, uObject** __retval);
void JSContext__get_FuseJS_fn(JSContext* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval);
void JSContext__set_FuseJS_fn(JSContext* __this, ::g::Fuse::Reactive::FuseJS::Builtins* value);
void JSContext__GetClass_fn(JSContext* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void JSContext__GetClassInstance_fn(JSContext* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Scripting::JavaScript::ClassInstance** __retval);
void JSContext__GetClassInstance1_fn(JSContext* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Scripting::JavaScript::ClassInstance** __retval);
void JSContext__Reflect_fn(JSContext* __this, uObject* obj, uObject** __retval);
void JSContext__RegisterClass_fn(JSContext* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void JSContext__get_ThreadWorker_fn(JSContext* __this, uObject** __retval);
void JSContext__Unwrap_fn(JSContext* __this, uObject* obj, uObject** __retval);
void JSContext__Wrap_fn(JSContext* __this, uObject* obj, uObject** __retval);

struct JSContext : ::g::Fuse::Scripting::Context
{
    uStrong< ::g::Uno::Collections::Dictionary*> _registeredClasses;
    uStrong< ::g::Fuse::PropertyHandle*> _classInstanceProperty;
    uStrong< ::g::Fuse::Scripting::Function*> _setSuperclass;
    int32_t _reflectionDepth;
    uStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> _FuseJS;

    void ctor_1();
    uObject* CreateMirror(uObject* obj);
    ::g::Fuse::Reactive::FuseJS::Builtins* FuseJS();
    void FuseJS(::g::Fuse::Reactive::FuseJS::Builtins* value);
    ::g::Fuse::Scripting::Function* GetClass(::g::Fuse::Scripting::ScriptClass* sc);
    ::g::Fuse::Scripting::JavaScript::ClassInstance* GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable);
    ::g::Fuse::Scripting::JavaScript::ClassInstance* GetClassInstance1(::g::Uno::UX::NameTable* scope);
    ::g::Fuse::Scripting::Function* RegisterClass(::g::Fuse::Scripting::ScriptClass* sc);
    static JSContext* Create();
    static ::g::Uno::UX::NameTable* FindRootTable(::g::Uno::UX::NameTable* names);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
