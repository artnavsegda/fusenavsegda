// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionListener.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct ComputeExpression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ComputeExpression__Subscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class ComputeExpression.Subscription :329
// {
::g::Fuse::Reactive::ExpressionListener_type* ComputeExpression__Subscription_typeof();
void ComputeExpression__Subscription__ctor_3_fn(ComputeExpression__Subscription* __this, ::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener);
void ComputeExpression__Subscription__New1_fn(::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener, ComputeExpression__Subscription** __retval);
void ComputeExpression__Subscription__OnArguments_fn(ComputeExpression__Subscription* __this, uArray* args);
void ComputeExpression__Subscription__OnClearData_fn(ComputeExpression__Subscription* __this);

struct ComputeExpression__Subscription : ::g::Fuse::Reactive::ExpressionListener
{
    uStrong< ::g::Fuse::Reactive::ComputeExpression*> _expr;

    void ctor_3(::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener);
    static ComputeExpression__Subscription* New1(::g::Fuse::Reactive::ComputeExpression* expr, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
