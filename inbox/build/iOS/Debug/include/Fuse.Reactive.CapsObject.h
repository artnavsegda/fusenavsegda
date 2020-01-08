// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Device.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Reactive{struct CapsObject;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class CapsObject :7
// {
struct CapsObject_type : uType
{
    ::g::Fuse::Reactive::IObservableObject interface0;
    ::g::Uno::UX::IPropertyListener interface1;
    ::g::Fuse::IObject interface2;
};

CapsObject_type* CapsObject_typeof();
void CapsObject__ctor_1_fn(CapsObject* __this);
void CapsObject__ChangeProperty_fn(CapsObject* __this, ::g::Uno::UX::Selector* name, uObject* value);
void CapsObject__ContainsKey_fn(CapsObject* __this, uString* key, bool* __retval);
void CapsObject__FuseReactiveIObservableObjectSubscribe_fn(CapsObject* __this, uObject* observer, uObject** __retval);
void CapsObject__GetValue_fn(CapsObject* __this, uString* key, uObject** __retval);
void CapsObject__get_Item_fn(CapsObject* __this, uString* key, uObject** __retval);
void CapsObject__get_Keys_fn(CapsObject* __this, uArray** __retval);
void CapsObject__get_Props_fn(CapsObject* __this, ::g::Uno::Collections::Dictionary** __retval);
void CapsObject__UnoUXIPropertyListenerOnPropertyChanged_fn(CapsObject* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* name);

struct CapsObject : ::g::Uno::UX::PropertyObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _props;

    void ctor_1();
    void ChangeProperty(::g::Uno::UX::Selector name, uObject* value);
    bool ContainsKey(uString* key);
    uObject* GetValue(uString* key);
    uObject* Item(uString* key);
    uArray* Keys();
    ::g::Uno::Collections::Dictionary* Props();
};
// }

}}} // ::g::Fuse::Reactive
