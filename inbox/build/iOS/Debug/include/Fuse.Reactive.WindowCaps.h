// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Window.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Reactive.CapsObject.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowCaps;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class WindowCaps :83
// {
::g::Fuse::Reactive::CapsObject_type* WindowCaps_typeof();
void WindowCaps__ctor_2_fn(WindowCaps* __this, ::g::Fuse::RootViewport* rv);
void WindowCaps__Attach_fn(::g::Fuse::RootViewport* target, WindowCaps** __retval);
void WindowCaps__AttachFrom_fn(::g::Fuse::Node* node, WindowCaps** __retval);
void WindowCaps__Detach_fn(WindowCaps* __this);
void WindowCaps__New3_fn(::g::Fuse::RootViewport* rv, WindowCaps** __retval);
void WindowCaps__OnMarginsChanged_fn(WindowCaps* __this);
void WindowCaps__OnResized_fn(WindowCaps* __this);
void WindowCaps__OnResizedRV_fn(WindowCaps* __this, ::g::Uno::Float2* ignore);
void WindowCaps__Unroot_fn(WindowCaps* __this);
void WindowCaps__UpdateMargins_fn(WindowCaps* __this);

struct WindowCaps : ::g::Fuse::Reactive::CapsObject
{
    uStrong< ::g::Fuse::RootViewport*> _rootViewport;
    int32_t _attachCount;
    static uSStrong<WindowCaps*> _singleton_;
    static uSStrong<WindowCaps*>& _singleton() { return WindowCaps_typeof()->Init(), _singleton_; }
    static ::g::Uno::UX::Selector NameWidth_;
    static ::g::Uno::UX::Selector& NameWidth() { return WindowCaps_typeof()->Init(), NameWidth_; }
    static ::g::Uno::UX::Selector NameHeight_;
    static ::g::Uno::UX::Selector& NameHeight() { return WindowCaps_typeof()->Init(), NameHeight_; }
    static ::g::Uno::UX::Selector NameSize_;
    static ::g::Uno::UX::Selector& NameSize() { return WindowCaps_typeof()->Init(), NameSize_; }
    static ::g::Uno::UX::Selector NamePixelsPerPoint_;
    static ::g::Uno::UX::Selector& NamePixelsPerPoint() { return WindowCaps_typeof()->Init(), NamePixelsPerPoint_; }
    static ::g::Uno::UX::Selector NamePixelsPerOSPoint_;
    static ::g::Uno::UX::Selector& NamePixelsPerOSPoint() { return WindowCaps_typeof()->Init(), NamePixelsPerOSPoint_; }
    static ::g::Uno::UX::Selector NameSafeMargins_;
    static ::g::Uno::UX::Selector& NameSafeMargins() { return WindowCaps_typeof()->Init(), NameSafeMargins_; }
    static ::g::Uno::UX::Selector NameDeviceMargins_;
    static ::g::Uno::UX::Selector& NameDeviceMargins() { return WindowCaps_typeof()->Init(), NameDeviceMargins_; }
    static ::g::Uno::UX::Selector NameStaticMargins_;
    static ::g::Uno::UX::Selector& NameStaticMargins() { return WindowCaps_typeof()->Init(), NameStaticMargins_; }

    void ctor_2(::g::Fuse::RootViewport* rv);
    void Detach();
    void OnMarginsChanged();
    void OnResized();
    void OnResizedRV(::g::Uno::Float2 ignore);
    void Unroot();
    void UpdateMargins();
    static WindowCaps* Attach(::g::Fuse::RootViewport* target);
    static WindowCaps* AttachFrom(::g::Fuse::Node* node);
    static WindowCaps* New3(::g::Fuse::RootViewport* rv);
};
// }

}}} // ::g::Fuse::Reactive
