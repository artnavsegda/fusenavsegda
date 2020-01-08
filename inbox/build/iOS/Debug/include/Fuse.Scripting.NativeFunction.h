// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/NativeFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeMember.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeFunction;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class NativeFunction :8
// {
::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof();
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback);
void NativeFunction__CreateObject_fn(NativeFunction* __this, ::g::Fuse::Scripting::Context* context, uObject** __retval);
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval);

struct NativeFunction : ::g::Fuse::Scripting::NativeMember
{
    uStrong<uDelegate*> _nativeCallback;

    void ctor_1(uString* name, uDelegate* callback);
    static NativeFunction* New1(uString* name, uDelegate* callback);
};
// }

}}} // ::g::Fuse::Scripting
