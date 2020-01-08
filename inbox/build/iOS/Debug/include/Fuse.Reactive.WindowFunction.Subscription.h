// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Window.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowCaps;}}}
namespace g{namespace Fuse{namespace Reactive{struct WindowFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct WindowFunction__Subscription;}}}
namespace g{namespace Fuse{struct RootViewport;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class WindowFunction.Subscription :43
// {
struct WindowFunction__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

WindowFunction__Subscription_type* WindowFunction__Subscription_typeof();
void WindowFunction__Subscription__ctor__fn(WindowFunction__Subscription* __this, ::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener);
void WindowFunction__Subscription__Dispose_fn(WindowFunction__Subscription* __this);
void WindowFunction__Subscription__Init_fn(WindowFunction__Subscription* __this);
void WindowFunction__Subscription__New1_fn(::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener, WindowFunction__Subscription** __retval);

struct WindowFunction__Subscription : uObject
{
    uStrong< ::g::Fuse::Reactive::WindowFunction*> _func;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::RootViewport*> _rootViewport;
    uStrong< ::g::Fuse::Reactive::WindowCaps*> _windowCaps;

    void ctor_(::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener);
    void Dispose();
    void Init();
    static WindowFunction__Subscription* New1(::g::Fuse::Reactive::WindowFunction* func, ::g::Fuse::RootViewport* rv, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
