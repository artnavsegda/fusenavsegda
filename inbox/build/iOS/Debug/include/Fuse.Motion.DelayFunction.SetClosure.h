// This file was generated based on /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DelayFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Motion{struct DelayFunction__SetClosure;}}}
namespace g{namespace Fuse{namespace Motion{struct DelayFunction__Subscription;}}}

namespace g{
namespace Fuse{
namespace Motion{

// private sealed class DelayFunction.SetClosure :46
// {
uType* DelayFunction__SetClosure_typeof();
void DelayFunction__SetClosure__ctor__fn(DelayFunction__SetClosure* __this, ::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v);
void DelayFunction__SetClosure__New1_fn(::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v, DelayFunction__SetClosure** __retval);
void DelayFunction__SetClosure__Run_fn(DelayFunction__SetClosure* __this);

struct DelayFunction__SetClosure : uObject
{
    uStrong< ::g::Fuse::Motion::DelayFunction__Subscription*> _sub;
    uStrong<uObject*> _v;

    void ctor_(::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v);
    void Run();
    static DelayFunction__SetClosure* New1(::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v);
};
// }

}}} // ::g::Fuse::Motion
