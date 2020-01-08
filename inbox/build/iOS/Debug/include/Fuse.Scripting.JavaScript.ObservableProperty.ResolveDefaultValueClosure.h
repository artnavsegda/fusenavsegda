// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ObservableProperty;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ObservableProperty__ResolveDefaultValueClosure;}}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class ObservableProperty.ResolveDefaultValueClosure :72
// {
uType* ObservableProperty__ResolveDefaultValueClosure_typeof();
void ObservableProperty__ResolveDefaultValueClosure__ctor__fn(ObservableProperty__ResolveDefaultValueClosure* __this, ::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value);
void ObservableProperty__ResolveDefaultValueClosure__IsDefault_fn(uType* __type, uObject* value, uType* t, bool* __retval);
void ObservableProperty__ResolveDefaultValueClosure__IsDefaultValueForType_fn(uObject* value, uType* t, bool* __retval);
void ObservableProperty__ResolveDefaultValueClosure__New1_fn(::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value, ObservableProperty__ResolveDefaultValueClosure** __retval);
void ObservableProperty__ResolveDefaultValueClosure__Perform_fn(ObservableProperty__ResolveDefaultValueClosure* __this);

struct ObservableProperty__ResolveDefaultValueClosure : uObject
{
    uStrong< ::g::Uno::UX::Property*> _property;
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _value;
    uStrong<uDelegate*> _pushValueOnJSThread;

    void ctor_(::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value);
    void Perform();
    static bool IsDefault(uType* __type, uObject* value, uType* t);
    static bool IsDefaultValueForType(uObject* value, uType* t);
    static ObservableProperty__ResolveDefaultValueClosure* New1(::g::Fuse::Scripting::JavaScript::ObservableProperty* op, uObject* value);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
