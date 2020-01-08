// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__NewAt;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.NewAt :486
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__NewAt_typeof();
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* newValue);
void Observable__NewAt__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* newValue, Observable__NewAt** __retval);
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub);
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this);

struct Observable__NewAt : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    int32_t _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* newValue);
    static Observable__NewAt* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* newValue);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
