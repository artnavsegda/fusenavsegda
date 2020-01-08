// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Operation;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// public abstract class Observable.Operation :364
// {
struct Observable__Operation_type : uType
{
    void(*fp_OnPerform)(::g::Fuse::Scripting::JavaScript::Observable__Operation*, uObject*);
    void(*fp_Unsubscribe)(::g::Fuse::Scripting::JavaScript::Observable__Operation*);
};

Observable__Operation_type* Observable__Operation_typeof();
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Scripting::JavaScript::Observable* observable);
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Scripting::JavaScript::Observable** __retval);
void Observable__Operation__Perform_fn(Observable__Operation* __this);
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this);

struct Observable__Operation : uObject
{
    uStrong< ::g::Fuse::Scripting::JavaScript::Observable*> _observable;
    bool _isPerformed;

    void ctor_(::g::Fuse::Scripting::JavaScript::Observable* observable);
    ::g::Fuse::Scripting::JavaScript::Observable* Observable();
    void OnPerform(uObject* sub) { (((Observable__Operation_type*)__type)->fp_OnPerform)(this, sub); }
    void Perform();
    void Unsubscribe() { (((Observable__Operation_type*)__type)->fp_Unsubscribe)(this); }
    static void Unsubscribe(Observable__Operation* __this) { Observable__Operation__Unsubscribe_fn(__this); }
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
