// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1__ArgumentMirrorClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptMethod<T>.ArgumentMirrorClosure<T> :203
// {
uType* ScriptMethod1__ArgumentMirrorClosure_typeof();
void ScriptMethod1__ArgumentMirrorClosure__ctor__fn(ScriptMethod1__ArgumentMirrorClosure* __this, uDelegate* action);
void ScriptMethod1__ArgumentMirrorClosure__New1_fn(uType* __type, uDelegate* action, ScriptMethod1__ArgumentMirrorClosure** __retval);
void ScriptMethod1__ArgumentMirrorClosure__Run_fn(ScriptMethod1__ArgumentMirrorClosure* __this, ::g::Fuse::Scripting::Context* c, void* obj, uArray* args, uObject** __retval);

struct ScriptMethod1__ArgumentMirrorClosure : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    template<class T>
    uObject* Run(::g::Fuse::Scripting::Context* c, T obj, uArray* args) { uObject* __retval; return ScriptMethod1__ArgumentMirrorClosure__Run_fn(this, c, uConstrain(__type->T(1), obj), args, &__retval), __retval; }
    static ScriptMethod1__ArgumentMirrorClosure* New1(uType* __type, uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
