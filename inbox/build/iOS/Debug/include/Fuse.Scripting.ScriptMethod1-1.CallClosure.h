// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1__CallClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptMethod<T>.CallClosure :261
// {
uType* ScriptMethod1__CallClosure_typeof();
void ScriptMethod1__CallClosure__ctor_1_fn(ScriptMethod1__CallClosure* __this, uDelegate* method, void* obj);
void ScriptMethod1__CallClosure__New2_fn(uType* __type, uDelegate* method, void* obj, ScriptMethod1__CallClosure** __retval);
void ScriptMethod1__CallClosure__Run_fn(ScriptMethod1__CallClosure* __this);

struct ScriptMethod1__CallClosure : uObject
{
    uStrong<uDelegate*> _method;
    uTField _obj() { return __type->Field(this, 1); }
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong<uDelegate*> _oldMethod;

    template<class T>
    void ctor_1(uDelegate* method, T obj) { ScriptMethod1__CallClosure__ctor_1_fn(this, method, uConstrain(__type->T(0), obj)); }
    void Run();
    template<class T>
    static ScriptMethod1__CallClosure* New2(uType* __type, uDelegate* method, T obj) { ScriptMethod1__CallClosure* __retval; return ScriptMethod1__CallClosure__New2_fn(__type, method, uConstrain(__type->T(0), obj), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
