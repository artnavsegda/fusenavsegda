// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/LayoutFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction__Subscription;}}}
namespace g{namespace Fuse{struct LostMarginBoxArgs;}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class LayoutFunction.Subscription :37
// {
::g::Fuse::Reactive::InnerListener_type* LayoutFunction__Subscription_typeof();
void LayoutFunction__Subscription__ctor_1_fn(LayoutFunction__Subscription* __this, ::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener);
void LayoutFunction__Subscription__Dispose_fn(LayoutFunction__Subscription* __this);
void LayoutFunction__Subscription__New1_fn(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener, LayoutFunction__Subscription** __retval);
void LayoutFunction__Subscription__OnLostData_fn(LayoutFunction__Subscription* __this, uObject* source);
void LayoutFunction__Subscription__OnLostMarginBox_fn(LayoutFunction__Subscription* __this, uObject* sender, ::g::Fuse::LostMarginBoxArgs* args);
void LayoutFunction__Subscription__OnNewData_fn(LayoutFunction__Subscription* __this, uObject* source, uObject* elmObj);
void LayoutFunction__Subscription__OnPlaced_fn(LayoutFunction__Subscription* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void LayoutFunction__Subscription__UnsubscribeElement_fn(LayoutFunction__Subscription* __this);

struct LayoutFunction__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong< ::g::Fuse::Elements::LayoutFunction*> _lf;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _sub;
    uStrong< ::g::Fuse::Elements::Element*> _element;

    void ctor_1(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener);
    void OnLostMarginBox(uObject* sender, ::g::Fuse::LostMarginBoxArgs* args);
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    void UnsubscribeElement();
    static LayoutFunction__Subscription* New1(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Elements
