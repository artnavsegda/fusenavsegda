// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Reactive.CapsObject.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DeviceCaps;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DeviceCaps :114
// {
::g::Fuse::Reactive::CapsObject_type* DeviceCaps_typeof();
void DeviceCaps__ctor_2_fn(DeviceCaps* __this);
void DeviceCaps__New3_fn(DeviceCaps** __retval);

struct DeviceCaps : ::g::Fuse::Reactive::CapsObject
{
    static ::g::Uno::UX::Selector NameIsAndroid_;
    static ::g::Uno::UX::Selector& NameIsAndroid() { return DeviceCaps_typeof()->Init(), NameIsAndroid_; }
    static ::g::Uno::UX::Selector NameIsIOS_;
    static ::g::Uno::UX::Selector& NameIsIOS() { return DeviceCaps_typeof()->Init(), NameIsIOS_; }
    static ::g::Uno::UX::Selector NameIsMac_;
    static ::g::Uno::UX::Selector& NameIsMac() { return DeviceCaps_typeof()->Init(), NameIsMac_; }
    static ::g::Uno::UX::Selector NameIsWindows_;
    static ::g::Uno::UX::Selector& NameIsWindows() { return DeviceCaps_typeof()->Init(), NameIsWindows_; }
    static ::g::Uno::UX::Selector NameIsPreview_;
    static ::g::Uno::UX::Selector& NameIsPreview() { return DeviceCaps_typeof()->Init(), NameIsPreview_; }
    static ::g::Uno::UX::Selector NameOSVersion_;
    static ::g::Uno::UX::Selector& NameOSVersion() { return DeviceCaps_typeof()->Init(), NameOSVersion_; }
    static ::g::Uno::UX::Selector NameAPILevel_;
    static ::g::Uno::UX::Selector& NameAPILevel() { return DeviceCaps_typeof()->Init(), NameAPILevel_; }
    static uSStrong<DeviceCaps*> Device_;
    static uSStrong<DeviceCaps*>& Device() { return DeviceCaps_typeof()->Init(), Device_; }

    void ctor_2();
    static DeviceCaps* New3();
};
// }

}}} // ::g::Fuse::Reactive
