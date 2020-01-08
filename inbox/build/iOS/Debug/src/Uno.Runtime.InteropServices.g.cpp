// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Runtime.InteropServices.GCHandle.h>
#include <Uno.Runtime.InteropServices.GCHandleType.h>
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/InteropServices/GCHandle.uno
// ------------------------------------------------------------------------------------------------

// public struct GCHandle :7
// {
static void GCHandle_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Array_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(GCHandle, _Target), 0);
}

uStructType* GCHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(GCHandle);
    options.ValueSize = sizeof(GCHandle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.InteropServices.GCHandle", options);
    type->fp_build_ = GCHandle_build;
    return type;
}

// private extern GCHandle(object target) :11
void GCHandle__ctor_1_fn(GCHandle* __this, uObject* target)
{
    __this->ctor_1(target);
}

// public Uno.IntPtr AddrOfPinnedObject() :72
void GCHandle__AddrOfPinnedObject_fn(GCHandle* __this, void** __retval)
{
    *__retval = __this->AddrOfPinnedObject();
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) :21
void GCHandle__Alloc1_fn(uObject* target, int32_t* type, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc1(target, *type);
}

// public void Free() :35
void GCHandle__Free_fn(GCHandle* __this)
{
    __this->Free();
}

// private extern GCHandle New(object target) :11
void GCHandle__New1_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__New1(target);
}

// public generated object get_Target() :9
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(object value) :9
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value)
{
    __this->Target(value);
}

// private extern GCHandle(object target) [instance] :11
void GCHandle::ctor_1(uObject* target)
{
    Target(target);
}

// public Uno.IntPtr AddrOfPinnedObject() [instance] :72
void* GCHandle::AddrOfPinnedObject()
{
    uObject* obj = Target();
    uArray* arr = uAs<uArray*>(obj, ::TYPES[0/*Uno.Array*/]);
    return (arr != NULL) ? arr->Ptr() : obj;
}

// public void Free() [instance] :35
void GCHandle::Free()
{
    ::uRelease(Target());
}

// public generated object get_Target() [instance] :9
uObject* GCHandle::Target()
{
    return _Target;
}

// private generated void set_Target(object value) [instance] :9
void GCHandle::Target(uObject* value)
{
    _Target = value;
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) [static] :21
GCHandle GCHandle__Alloc1(uObject* target, int32_t type)
{
    ::uRetain(target);
    return GCHandle__New1(target);
}

// private extern GCHandle New(object target) [static] :11
GCHandle GCHandle__New1(uObject* target)
{
    GCHandle obj1;
    obj1.ctor_1(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/InteropServices/GCHandleType.uno
// ----------------------------------------------------------------------------------------------------

// public enum GCHandleType :6
uEnumType* GCHandleType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.InteropServices.GCHandleType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 2LL,
        "Pinned", 3LL);
    return type;
}

}}}} // ::g::Uno::Runtime::InteropServices
