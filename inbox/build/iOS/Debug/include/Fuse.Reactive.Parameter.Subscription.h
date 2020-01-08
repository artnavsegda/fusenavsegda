// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Parameter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Parameter;}}}
namespace g{namespace Fuse{namespace Reactive{struct Parameter__Subscription;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Parameter.Subscription :31
// {
::g::Fuse::Reactive::InnerListener_type* Parameter__Subscription_typeof();
void Parameter__Subscription__ctor_1_fn(Parameter__Subscription* __this, ::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener);
void Parameter__Subscription__Dispose_fn(Parameter__Subscription* __this);
void Parameter__Subscription__New1_fn(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener, Parameter__Subscription** __retval);
void Parameter__Subscription__OnLostData_fn(Parameter__Subscription* __this, uObject* source);
void Parameter__Subscription__OnNewData_fn(Parameter__Subscription* __this, uObject* source, uObject* obj);
void Parameter__Subscription__OnParameterChanged_fn(Parameter__Subscription* __this, uObject* sender, ::g::Uno::EventArgs* args);
void Parameter__Subscription__UnsubscribeVisual_fn(Parameter__Subscription* __this);

struct Parameter__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong< ::g::Fuse::Reactive::Parameter*> _parameter;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _sub;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_1(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener);
    void OnParameterChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void UnsubscribeVisual();
    static Parameter__Subscription* New1(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
