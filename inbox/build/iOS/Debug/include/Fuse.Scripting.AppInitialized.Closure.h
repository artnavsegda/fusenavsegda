// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/AppInitialized.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct AppInitialized__Closure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class AppInitialized.Closure :36
// {
uType* AppInitialized__Closure_typeof();
void AppInitialized__Closure__ctor__fn(AppInitialized__Closure* __this, uObject* worker, uDelegate* action);
void AppInitialized__Closure__New1_fn(uObject* worker, uDelegate* action, AppInitialized__Closure** __retval);
void AppInitialized__Closure__Run_fn(AppInitialized__Closure* __this);
void AppInitialized__Closure__RunJS_fn(AppInitialized__Closure* __this, ::g::Fuse::Scripting::Context* context);

struct AppInitialized__Closure : uObject
{
    uStrong<uObject*> _worker;
    uStrong<uDelegate*> _action;

    void ctor_(uObject* worker, uDelegate* action);
    void Run();
    void RunJS(::g::Fuse::Scripting::Context* context);
    static AppInitialized__Closure* New1(uObject* worker, uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
