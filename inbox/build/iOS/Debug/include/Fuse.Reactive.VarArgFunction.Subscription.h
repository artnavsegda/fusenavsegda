// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionSubscriber.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// protected abstract class VarArgFunction.Subscription :32
// {
struct VarArgFunction__Subscription_type : ::g::Fuse::Reactive::ExpressionSubscriber_type
{
    void(*fp_OnNewArguments)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*);
    void(*fp_OnNewPartialArguments)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*);
};

VarArgFunction__Subscription_type* VarArgFunction__Subscription_typeof();
void VarArgFunction__Subscription__ctor_2_fn(VarArgFunction__Subscription* __this, ::g::Fuse::Reactive::VarArgFunction* func);
void VarArgFunction__Subscription__ClearData_fn(VarArgFunction__Subscription* __this);
void VarArgFunction__Subscription__Dispose_fn(VarArgFunction__Subscription* __this);
void VarArgFunction__Subscription__OnArguments_fn(VarArgFunction__Subscription* __this, uArray* args);
void VarArgFunction__Subscription__OnClearData_fn(VarArgFunction__Subscription* __this);
void VarArgFunction__Subscription__OnNewArguments_fn(VarArgFunction__Subscription* __this, uArray* args);
void VarArgFunction__Subscription__OnNewPartialArguments_fn(VarArgFunction__Subscription* __this, uArray* args);

struct VarArgFunction__Subscription : ::g::Fuse::Reactive::ExpressionSubscriber
{
    uStrong< ::g::Fuse::Reactive::VarArgFunction*> _func;
    uStrong<uObject*> _context;

    void ctor_2(::g::Fuse::Reactive::VarArgFunction* func);
    void ClearData();
    void OnNewArguments(uArray* args) { (((VarArgFunction__Subscription_type*)__type)->fp_OnNewArguments)(this, args); }
    void OnNewPartialArguments(uArray* args) { (((VarArgFunction__Subscription_type*)__type)->fp_OnNewPartialArguments)(this, args); }
    static void OnNewArguments(VarArgFunction__Subscription* __this, uArray* args) { VarArgFunction__Subscription__OnNewArguments_fn(__this, args); }
    static void OnNewPartialArguments(VarArgFunction__Subscription* __this, uArray* args) { VarArgFunction__Subscription__OnNewPartialArguments_fn(__this, args); }
};
// }

}}} // ::g::Fuse::Reactive
