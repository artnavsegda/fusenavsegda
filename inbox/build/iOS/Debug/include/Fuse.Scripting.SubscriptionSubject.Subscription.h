// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/SubscriptionSubject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct SubscriptionSubject;}}}
namespace g{namespace Fuse{namespace Scripting{struct SubscriptionSubject__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// protected internal abstract class SubscriptionSubject.Subscription :14
// {
struct SubscriptionSubject__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

SubscriptionSubject__Subscription_type* SubscriptionSubject__Subscription_typeof();
void SubscriptionSubject__Subscription__ctor__fn(SubscriptionSubject__Subscription* __this, ::g::Fuse::Scripting::SubscriptionSubject* s);
void SubscriptionSubject__Subscription__Dispose_fn(SubscriptionSubject__Subscription* __this);
void SubscriptionSubject__Subscription__get_Next_fn(SubscriptionSubject__Subscription* __this, SubscriptionSubject__Subscription** __retval);
void SubscriptionSubject__Subscription__get_SubscriptionSubject_fn(SubscriptionSubject__Subscription* __this, ::g::Fuse::Scripting::SubscriptionSubject** __retval);

struct SubscriptionSubject__Subscription : uObject
{
    uStrong<SubscriptionSubject__Subscription*> _next;
    uStrong<SubscriptionSubject__Subscription*> _prev;
    uStrong< ::g::Fuse::Scripting::SubscriptionSubject*> _s;

    void ctor_(::g::Fuse::Scripting::SubscriptionSubject* s);
    void Dispose();
    SubscriptionSubject__Subscription* Next();
    ::g::Fuse::Scripting::SubscriptionSubject* SubscriptionSubject();
};
// }

}}} // ::g::Fuse::Scripting
