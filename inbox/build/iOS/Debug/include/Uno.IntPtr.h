// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IntPtr.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct IntPtr :9
// {
uStructType* IntPtr_typeof();
void IntPtr__Equals_fn(void** __this, uType* __type, uObject* o, bool* __retval);
void IntPtr__GetHashCode_fn(void** __this, uType* __type, int32_t* __retval);
void IntPtr__op_Addition_fn(void** pointer, int32_t* offset, void** __retval);
void IntPtr__op_Equality_fn(void** left, void** right, bool* __retval);
void IntPtr__op_Inequality_fn(void** left, void** right, bool* __retval);
void IntPtr__ToString_fn(void** __this, uType* __type, uString** __retval);

struct IntPtr
{
    static void* Zero_;
    static void*& Zero() { return Zero_; }

    static bool Equals(void* __this, uType* __type, uObject* o) { bool __retval; return IntPtr__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(void* __this, uType* __type) { int32_t __retval; return IntPtr__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(void* __this, uType* __type) { uString* __retval; return IntPtr__ToString_fn(&__this, __type, &__retval), __retval; }
    static void* op_Addition(void* pointer, int32_t offset);
    static bool op_Equality(void* left, void* right);
    static bool op_Inequality(void* left, void* right);
};
// }

}} // ::g::Uno
