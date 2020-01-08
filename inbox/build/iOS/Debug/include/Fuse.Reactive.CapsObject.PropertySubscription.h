// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IPropertySubscription.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct CapsObject;}}}
namespace g{namespace Fuse{namespace Reactive{struct CapsObject__PropertySubscription;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class CapsObject.PropertySubscription :54
// {
struct CapsObject__PropertySubscription_type : uType
{
    ::g::Fuse::Reactive::IPropertySubscription interface0;
    ::g::Uno::UX::IPropertyListener interface1;
    ::g::Uno::IDisposable interface2;
};

CapsObject__PropertySubscription_type* CapsObject__PropertySubscription_typeof();
void CapsObject__PropertySubscription__ctor__fn(CapsObject__PropertySubscription* __this, ::g::Fuse::Reactive::CapsObject* dc, uObject* observer);
void CapsObject__PropertySubscription__Dispose_fn(CapsObject__PropertySubscription* __this);
void CapsObject__PropertySubscription__New1_fn(::g::Fuse::Reactive::CapsObject* dc, uObject* observer, CapsObject__PropertySubscription** __retval);
void CapsObject__PropertySubscription__OnPropertyChanged_fn(CapsObject__PropertySubscription* __this, ::g::Uno::UX::PropertyObject* ignore, ::g::Uno::UX::Selector* name);
void CapsObject__PropertySubscription__TrySetExclusive_fn(CapsObject__PropertySubscription* __this, uString* propertyName, uObject* newValue, bool* __retval);

struct CapsObject__PropertySubscription : uObject
{
    uStrong< ::g::Fuse::Reactive::CapsObject*> _caps;
    uStrong<uObject*> _observer;

    void ctor_(::g::Fuse::Reactive::CapsObject* dc, uObject* observer);
    void Dispose();
    void OnPropertyChanged(::g::Uno::UX::PropertyObject* ignore, ::g::Uno::UX::Selector name);
    bool TrySetExclusive(uString* propertyName, uObject* newValue);
    static CapsObject__PropertySubscription* New1(::g::Fuse::Reactive::CapsObject* dc, uObject* observer);
};
// }

}}} // ::g::Fuse::Reactive
