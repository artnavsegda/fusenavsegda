// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Member.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.IPropertyObserver.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Member;}}}
namespace g{namespace Fuse{namespace Reactive{struct Member__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Member.Subscription :30
// {
struct Member__Subscription_type : ::g::Fuse::Reactive::InnerListener_type
{
    ::g::Fuse::Reactive::IPropertyObserver interface2;
    ::g::Fuse::Reactive::IWriteable interface3;
};

Member__Subscription_type* Member__Subscription_typeof();
void Member__Subscription__ctor_1_fn(Member__Subscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
void Member__Subscription__Dispose_fn(Member__Subscription* __this);
void Member__Subscription__DisposeObservableObjectSubscription_fn(Member__Subscription* __this);
void Member__Subscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(Member__Subscription* __this, uObject* sub, uString* propName, uObject* newValue);
void Member__Subscription__FuseReactiveIWriteableTrySetExclusive_fn(Member__Subscription* __this, uObject* newObj, bool* __retval);
void Member__Subscription__New1_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__Subscription** __retval);
void Member__Subscription__OnLostData_fn(Member__Subscription* __this, uObject* source);
void Member__Subscription__OnNewData_fn(Member__Subscription* __this, uObject* source, uObject* obj);

struct Member__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong< ::g::Fuse::Reactive::Member*> _member;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _objectSub;
    uStrong<uObject*> _obsObjSub;

    void ctor_1(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
    void DisposeObservableObjectSubscription();
    static Member__Subscription* New1(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
