// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DelayFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionListener.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Motion{struct DelayFunction;}}}
namespace g{namespace Fuse{namespace Motion{struct DelayFunction__Subscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Motion{

// private sealed class DelayFunction.Subscription :27
// {
::g::Fuse::Reactive::ExpressionListener_type* DelayFunction__Subscription_typeof();
void DelayFunction__Subscription__ctor_3_fn(DelayFunction__Subscription* __this, ::g::Fuse::Motion::DelayFunction* source, uObject* listener);
void DelayFunction__Subscription__New1_fn(::g::Fuse::Motion::DelayFunction* source, uObject* listener, DelayFunction__Subscription** __retval);
void DelayFunction__Subscription__OnArguments_fn(DelayFunction__Subscription* __this, uArray* args);
void DelayFunction__Subscription__SetData1_fn(DelayFunction__Subscription* __this, uObject* value);

struct DelayFunction__Subscription : ::g::Fuse::Reactive::ExpressionListener
{
    void ctor_3(::g::Fuse::Motion::DelayFunction* source, uObject* listener);
    void SetData1(uObject* value);
    static DelayFunction__Subscription* New1(::g::Fuse::Motion::DelayFunction* source, uObject* listener);
};
// }

}}} // ::g::Fuse::Motion
