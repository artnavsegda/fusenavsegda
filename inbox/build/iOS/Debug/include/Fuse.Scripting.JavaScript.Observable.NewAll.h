// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ArrayMirror;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__NewAll;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.NewAll :516
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__NewAll_typeof();
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t* origin);
void Observable__NewAll__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t* origin, Observable__NewAll** __retval);
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub);
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this);

struct Observable__NewAll : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    uStrong< ::g::Fuse::Scripting::JavaScript::ArrayMirror*> _newValues;
    int32_t _origin;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t origin);
    static Observable__NewAll* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, ::g::Fuse::Scripting::JavaScript::ArrayMirror* newValues, int32_t origin);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
