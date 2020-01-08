// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/NativeEventEmitterModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEventEmitterModule__ActionClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEventEmitterModule.ActionClosure :127
// {
uType* NativeEventEmitterModule__ActionClosure_typeof();
void NativeEventEmitterModule__ActionClosure__ctor__fn(NativeEventEmitterModule__ActionClosure* __this, uDelegate* action, ::g::Fuse::Scripting::Object* arg);
void NativeEventEmitterModule__ActionClosure__New1_fn(uDelegate* action, ::g::Fuse::Scripting::Object* arg, NativeEventEmitterModule__ActionClosure** __retval);
void NativeEventEmitterModule__ActionClosure__Run_fn(NativeEventEmitterModule__ActionClosure* __this, ::g::Fuse::Scripting::Context* context);

struct NativeEventEmitterModule__ActionClosure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Fuse::Scripting::Object*> _arg;

    void ctor_(uDelegate* action, ::g::Fuse::Scripting::Object* arg);
    void Run(::g::Fuse::Scripting::Context* context);
    static NativeEventEmitterModule__ActionClosure* New1(uDelegate* action, ::g::Fuse::Scripting::Object* arg);
};
// }

}}} // ::g::Fuse::Scripting
