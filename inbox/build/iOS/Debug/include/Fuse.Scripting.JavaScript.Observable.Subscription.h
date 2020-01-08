// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Scripting.DiagnosticSubject.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// public sealed class Observable.Subscription :51
// {
struct Observable__Subscription_type : uType
{
    ::g::Fuse::Reactive::ISubscription interface0;
    ::g::Uno::IDisposable interface1;
};

Observable__Subscription_type* Observable__Subscription_typeof();
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs);
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Context* context);
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this);
void Observable__Subscription__FuseReactiveISubscriptionReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues);
void Observable__Subscription__FuseReactiveISubscriptionSetExclusive_fn(Observable__Subscription* __this, uObject* newValue);
void Observable__Subscription__New2_fn(::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs, Observable__Subscription** __retval);
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval);
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval);
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value);
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Context* context, uObject* newValue);
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int32_t* origin, bool* __retval);

struct Observable__Subscription : ::g::Fuse::Scripting::DiagnosticSubject
{
    static int32_t _counter_;
    static int32_t& _counter() { return Observable__Subscription_typeof()->Init(), _counter_; }
    int32_t _origin;
    uStrong< ::g::Fuse::Scripting::JavaScript::Observable*> _om;
    uStrong<uObject*> _obs;
    bool _Removed;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs);
    void ClearExclusive(::g::Fuse::Scripting::Context* context);
    void Dispose();
    uObject* Observer();
    bool Removed();
    void Removed(bool value);
    void SetExclusive(::g::Fuse::Scripting::Context* context, uObject* newValue);
    bool ShouldSend(int32_t origin);
    static Observable__Subscription* New2(::g::Fuse::Scripting::JavaScript::Observable* om, uObject* obs);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
