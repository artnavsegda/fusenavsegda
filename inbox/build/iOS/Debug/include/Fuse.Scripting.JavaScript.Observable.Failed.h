// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Failed;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.Failed :464
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Failed_typeof();
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message);
void Observable__Failed__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message, Observable__Failed** __retval);
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub);

struct Observable__Failed : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    uStrong<uString*> _message;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message);
    static Observable__Failed* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, uString* message);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
