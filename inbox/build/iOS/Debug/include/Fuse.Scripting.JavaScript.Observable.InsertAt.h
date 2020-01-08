// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__InsertAt;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.InsertAt :618
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__InsertAt_typeof();
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* value);
void Observable__InsertAt__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, uObject* value, Observable__InsertAt** __retval);
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub);
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this);

struct Observable__InsertAt : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    int32_t _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* value);
    static Observable__InsertAt* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, uObject* value);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
