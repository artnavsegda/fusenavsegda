// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__RemoveRange;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.RemoveRange :590
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__RemoveRange_typeof();
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, int32_t* count);
void Observable__RemoveRange__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t* index, int32_t* count, Observable__RemoveRange** __retval);
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub);

struct Observable__RemoveRange : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    int32_t _index;
    int32_t _count;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, int32_t count);
    static Observable__RemoveRange* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, int32_t index, int32_t count);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
