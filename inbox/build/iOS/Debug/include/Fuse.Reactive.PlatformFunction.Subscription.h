// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/PlatformFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct PlatformFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct PlatformFunction__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class PlatformFunction.Subscription :33
// {
struct PlatformFunction__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

PlatformFunction__Subscription_type* PlatformFunction__Subscription_typeof();
void PlatformFunction__Subscription__ctor__fn(PlatformFunction__Subscription* __this, ::g::Fuse::Reactive::PlatformFunction* func, uObject* listener);
void PlatformFunction__Subscription__Dispose_fn(PlatformFunction__Subscription* __this);
void PlatformFunction__Subscription__Init_fn(PlatformFunction__Subscription* __this);
void PlatformFunction__Subscription__New1_fn(::g::Fuse::Reactive::PlatformFunction* func, uObject* listener, PlatformFunction__Subscription** __retval);

struct PlatformFunction__Subscription : uObject
{
    uStrong< ::g::Fuse::Reactive::PlatformFunction*> _func;
    uStrong<uObject*> _listener;

    void ctor_(::g::Fuse::Reactive::PlatformFunction* func, uObject* listener);
    void Dispose();
    void Init();
    static PlatformFunction__Subscription* New1(::g::Fuse::Reactive::PlatformFunction* func, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
