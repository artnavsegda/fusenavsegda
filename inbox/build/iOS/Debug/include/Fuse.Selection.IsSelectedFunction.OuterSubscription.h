// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.10.0-rc1/IsSelected.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.VarArgFunction.Subscription.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Selection{struct IsSelectedFunction;}}}
namespace g{namespace Fuse{namespace Selection{struct IsSelectedFunction__OuterSubscription;}}}
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Selection{

// private sealed class IsSelectedFunction.OuterSubscription :38
// {
struct IsSelectedFunction__OuterSubscription_type : ::g::Fuse::Reactive::VarArgFunction__Subscription_type
{
    ::g::Uno::UX::IPropertyListener interface2;
};

IsSelectedFunction__OuterSubscription_type* IsSelectedFunction__OuterSubscription_typeof();
void IsSelectedFunction__OuterSubscription__ctor_4_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from);
void IsSelectedFunction__OuterSubscription__CleanListener_fn(IsSelectedFunction__OuterSubscription* __this);
void IsSelectedFunction__OuterSubscription__CleanPending_fn(IsSelectedFunction__OuterSubscription* __this);
void IsSelectedFunction__OuterSubscription__Dispose_fn(IsSelectedFunction__OuterSubscription* __this);
void IsSelectedFunction__OuterSubscription__New1_fn(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from, IsSelectedFunction__OuterSubscription** __retval);
void IsSelectedFunction__OuterSubscription__NewNode_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Fuse::Node* from);
void IsSelectedFunction__OuterSubscription__OnNewArguments_fn(IsSelectedFunction__OuterSubscription* __this, uArray* args);
void IsSelectedFunction__OuterSubscription__OnPendingRooted_fn(IsSelectedFunction__OuterSubscription* __this);
void IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn(IsSelectedFunction__OuterSubscription* __this, uObject* s, uObject* args);
void IsSelectedFunction__OuterSubscription__PushNewValue_fn(IsSelectedFunction__OuterSubscription* __this);
void IsSelectedFunction__OuterSubscription__UnoUXIPropertyListenerOnPropertyChanged_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct IsSelectedFunction__OuterSubscription : ::g::Fuse::Reactive::VarArgFunction__Subscription
{
    uStrong< ::g::Fuse::Selection::IsSelectedFunction*> _expr;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Node*> _from;
    uStrong< ::g::Fuse::Node*> _curFrom;
    uStrong< ::g::Fuse::Selection::Selection*> _selection;
    uStrong< ::g::Fuse::Selection::Selectable*> _selectable;
    uStrong< ::g::Fuse::Node*> _pendingNode;

    void ctor_4(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from);
    void CleanListener();
    void CleanPending();
    void NewNode(::g::Fuse::Node* from);
    void OnPendingRooted();
    void OnSelectionChanged(uObject* s, uObject* args);
    void PushNewValue();
    static IsSelectedFunction__OuterSubscription* New1(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from);
};
// }

}}} // ::g::Fuse::Selection
