// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptMethod<T>.ArgumentMirrorClosure<T>.CallWithArgumentsClosure :221
// {
uType* ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure_typeof();
void ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure__ctor__fn(ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure* __this, uDelegate* action, void* obj, uArray* args);
void ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure__New1_fn(uType* __type, uDelegate* action, void* obj, uArray* args, ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure** __retval);
void ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure__Run_fn(ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure* __this);

struct ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure : uObject
{
    uStrong<uDelegate*> _action;
    uTField _obj() { return __type->Field(this, 1); }
    uStrong<uArray*> _args;

    template<class T>
    void ctor_(uDelegate* action, T obj, uArray* args) { ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure__ctor__fn(this, action, uConstrain(__type->T(1), obj), args); }
    void Run();
    template<class T>
    static ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure* New1(uType* __type, uDelegate* action, T obj, uArray* args) { ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure* __retval; return ScriptMethod1__ArgumentMirrorClosure__CallWithArgumentsClosure__New1_fn(__type, action, uConstrain(__type->T(1), obj), args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
