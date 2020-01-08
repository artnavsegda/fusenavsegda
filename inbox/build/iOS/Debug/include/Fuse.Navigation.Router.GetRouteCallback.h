// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.10.0-rc1/Router.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router__GetRouteCallback;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class Router.GetRouteCallback :323
// {
uType* Router__GetRouteCallback_typeof();
void Router__GetRouteCallback__ctor__fn(Router__GetRouteCallback* __this, uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback);
void Router__GetRouteCallback__New1_fn(uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback, Router__GetRouteCallback** __retval);
void Router__GetRouteCallback__RunJS_fn(Router__GetRouteCallback* __this, ::g::Fuse::Scripting::Context* context);
void Router__GetRouteCallback__RunUI_fn(Router__GetRouteCallback* __this);
void Router__GetRouteCallback__ToArray_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Array** __retval);

struct Router__GetRouteCallback : uObject
{
    uStrong<uObject*> _threadWorker;
    uStrong< ::g::Fuse::Navigation::Router*> _router;
    uStrong< ::g::Fuse::Scripting::Function*> _callback;
    uStrong< ::g::Fuse::Navigation::Route*> _route;

    void ctor_(uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback);
    void RunJS(::g::Fuse::Scripting::Context* context);
    void RunUI();
    static Router__GetRouteCallback* New1(uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback);
    static ::g::Fuse::Scripting::Array* ToArray(::g::Fuse::Scripting::Context* context, ::g::Fuse::Navigation::Route* route);
};
// }

}}} // ::g::Fuse::Navigation
