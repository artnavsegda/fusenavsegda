// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Clear;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.Clear :442
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Clear_typeof();
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* origin);
void Observable__Clear__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* origin, Observable__Clear** __retval);
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub);

struct Observable__Clear : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    int32_t _origin;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t origin);
    static Observable__Clear* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t origin);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
