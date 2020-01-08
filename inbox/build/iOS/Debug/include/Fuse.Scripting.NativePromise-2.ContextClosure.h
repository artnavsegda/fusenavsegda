// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/NativePromise.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativePromise__ContextClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativePromise<T, TJSResult>.ContextClosure :71
// {
uType* NativePromise__ContextClosure_typeof();
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, uDelegate* factory, uDelegate* converter);
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void NativePromise__ContextClosure__New1_fn(uType* __type, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval);

struct NativePromise__ContextClosure : uObject
{
    uStrong<uDelegate*> _factory;
    uStrong<uDelegate*> _converter;

    void ctor_(uDelegate* factory, uDelegate* converter);
    uObject* CreatePromise(::g::Fuse::Scripting::Context* context, uArray* args);
    static NativePromise__ContextClosure* New1(uType* __type, uDelegate* factory, uDelegate* converter);
};
// }

}}} // ::g::Fuse::Scripting
