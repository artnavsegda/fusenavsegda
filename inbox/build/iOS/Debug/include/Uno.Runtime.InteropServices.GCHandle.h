// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/InteropServices/GCHandle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Runtime{namespace InteropServices{struct GCHandle;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// public struct GCHandle :7
// {
uStructType* GCHandle_typeof();
void GCHandle__ctor_1_fn(GCHandle* __this, uObject* target);
void GCHandle__AddrOfPinnedObject_fn(GCHandle* __this, void** __retval);
void GCHandle__Alloc1_fn(uObject* target, int32_t* type, GCHandle* __retval);
void GCHandle__Free_fn(GCHandle* __this);
void GCHandle__New1_fn(uObject* target, GCHandle* __retval);
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval);
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value);

struct GCHandle
{
    uStrong<uObject*> _Target;

    void ctor_1(uObject* target);
    void* AddrOfPinnedObject();
    void Free();
    uObject* Target();
    void Target(uObject* value);
};

GCHandle GCHandle__Alloc1(uObject* target, int32_t type);
GCHandle GCHandle__New1(uObject* target);
// }

}}}} // ::g::Uno::Runtime::InteropServices
