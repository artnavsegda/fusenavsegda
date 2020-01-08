// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
static uType* TYPES[2];

namespace g{
namespace ObjC{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/ObjC.uno
// --------------------------------------------------------------------------------------------------------------

// public extern struct ID :10
// {
static void ID_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
}

uStructType* ID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::id);
    options.ValueSize = sizeof(::id);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.ID", options);
    type->fp_build_ = ID_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ID__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))ID__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object o) :15
void ID__Equals_fn(::id* __this, uType* __type, uObject* o, bool* __retval)
{
    return *__retval = uIs(o, __type) && ID::op_Equality(*__this, uUnbox< ::id>(__type, o)), void();
}

// public override sealed int GetHashCode() :20
void ID__GetHashCode_fn(::id* __this, uType* __type, int32_t* __retval)
{
    return *__retval = ::g::Uno::IntPtr::GetHashCode((__bridge void*)*__this, ::TYPES[0/*Uno.IntPtr*/]), void();
}

// public static ObjC.ID get_Null() :13
void ID__get_Null_fn(::id* __retval)
{
    *__retval = ID::Null();
}

// public static operator ==(ObjC.ID a, ObjC.ID b) :25
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Equality(*a, *b);
}

// public static operator ==(ObjC.ID a, ObjC.ID b) [static] :25
bool ID::op_Equality(::id a, ::id b)
{
    return a == b;
}

// public static ObjC.ID get_Null() [static] :13
::id ID::Null()
{
    return nil;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Compiler/ExportTargetInterop/Foreign/ObjC/ObjC.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed extern class Object :37
// {
// ~Object() :53
static void Object__Finalize_fn(Object* __this)
{
    __this->Handle = ::g::ObjC::ID::Null();
}

static void Object_build(uType* type)
{
    ::TYPES[1] = ::g::ObjC::ID_typeof();
    type->SetFields(0,
        ::TYPES[1/*ObjC.ID*/], offsetof(Object, Handle), 0);
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("ObjC.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Object__GetHashCode_fn;
    return type;
}

// private Object(ObjC.ID handle) :41
void Object__ctor_1_fn(Object* __this, ::id* handle)
{
    __this->ctor_1(*handle);
}

// private static ObjC.Object Create(ObjC.ID handle) :48
void Object__Create_fn(::id* handle, Object** __retval)
{
    *__retval = Object::Create(*handle);
}

// public override sealed bool Equals(object x) :58
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval)
{
    Object* o = uAs<Object*>(x, __this->__type);
    return *__retval = (o != NULL) && ::g::ObjC::ID::op_Equality(uPtr(o)->Handle, __this->Handle), void();
}

// private static ObjC.ID GetHandle(ObjC.Object o) :69
void Object__GetHandle_fn(Object* o, ::id* __retval)
{
    *__retval = Object::GetHandle(o);
}

// public override sealed int GetHashCode() :64
void Object__GetHashCode_fn(Object* __this, int32_t* __retval)
{
    return *__retval = ::g::ObjC::ID::GetHashCode(__this->Handle, ::TYPES[1/*ObjC.ID*/]), void();
}

// private Object New(ObjC.ID handle) :41
void Object__New2_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New2(*handle);
}

// private Object(ObjC.ID handle) [instance] :41
void Object::ctor_1(::id handle)
{
    Handle = handle;
}

// private static ObjC.Object Create(ObjC.ID handle) [static] :48
Object* Object::Create(::id handle)
{
    return ::g::ObjC::ID::op_Equality(handle, ::g::ObjC::ID::Null()) ? uCast<Object*>(NULL, Object_typeof()) : (Object*)Object::New2(handle);
}

// private static ObjC.ID GetHandle(ObjC.Object o) [static] :69
::id Object::GetHandle(Object* o)
{
    return (o == NULL) ? ::g::ObjC::ID::Null() : uPtr(o)->Handle;
}

// private Object New(ObjC.ID handle) [static] :41
Object* Object::New2(::id handle)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

}} // ::g::ObjC
