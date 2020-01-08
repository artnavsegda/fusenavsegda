// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription__ReplaceAllExclusiveOperation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.Subscription.ReplaceAllExclusiveOperation :140
// {
uType* Observable__Subscription__ReplaceAllExclusiveOperation_typeof();
void Observable__Subscription__ReplaceAllExclusiveOperation__ctor__fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t* origin);
void Observable__Subscription__ReplaceAllExclusiveOperation__New1_fn(uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t* origin, Observable__Subscription__ReplaceAllExclusiveOperation** __retval);
void Observable__Subscription__ReplaceAllExclusiveOperation__Perform_fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context);

struct Observable__Subscription__ReplaceAllExclusiveOperation : uObject
{
    uStrong<uObject*> Worker;
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    uStrong<uArray*> NewValues;
    int32_t Origin;

    void ctor_(uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t origin);
    void Perform(::g::Fuse::Scripting::Context* context);
    static Observable__Subscription__ReplaceAllExclusiveOperation* New1(uObject* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int32_t origin);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
