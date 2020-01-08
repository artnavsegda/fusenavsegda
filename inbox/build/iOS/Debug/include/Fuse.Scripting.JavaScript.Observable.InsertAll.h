// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ArrayMirror;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__InsertAll;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.InsertAll :646
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__InsertAll_typeof();
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items);
void Observable__InsertAll__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items, Observable__InsertAll** __retval);
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub);
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this);

struct Observable__InsertAll : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    int32_t _index;
    uStrong< ::g::Fuse::Scripting::JavaScript::ArrayMirror*> _items;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items);
    static Observable__InsertAll* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, ::g::Fuse::Scripting::JavaScript::ArrayMirror* items);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
