// This file was generated based on /usr/local/share/uno/Packages/Uno.Collections/1.10.0-rc1/Extensions/EnumerableExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct EnumerableExtensions;}}}

namespace g{
namespace Uno{
namespace Collections{

// public static class EnumerableExtensions :3
// {
uClassType* EnumerableExtensions_typeof();
void EnumerableExtensions__All_fn(uType* __type, uObject* self, uDelegate* where, bool* __retval);
void EnumerableExtensions__FirstOrDefault_fn(uType* __type, uObject* self, uTRef __retval);
void EnumerableExtensions__IndexOf_fn(uType* __type, uObject* self, void* element, int32_t* __retval);
void EnumerableExtensions__OfType_fn(uType* __type, uObject* self, uObject** __retval);
void EnumerableExtensions__Select_fn(uType* __type, uObject* self, uDelegate* func, uObject** __retval);
void EnumerableExtensions__SequenceEqual_fn(uType* __type, uObject* first, uObject* second, bool* __retval);
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval);

struct EnumerableExtensions : uObject
{
    static bool All(uType* __type, uObject* self, uDelegate* where);
    template<class T>
    static T FirstOrDefault(uType* __type, uObject* self) { T __retval; return EnumerableExtensions__FirstOrDefault_fn(__type, self, &__retval), __retval; }
    template<class T>
    static int32_t IndexOf(uType* __type, uObject* self, T element) { int32_t __retval; return EnumerableExtensions__IndexOf_fn(__type, self, uConstrain(__type->U(0), element), &__retval), __retval; }
    static uObject* OfType(uType* __type, uObject* self);
    static uObject* Select(uType* __type, uObject* self, uDelegate* func);
    static bool SequenceEqual(uType* __type, uObject* first, uObject* second);
    static uArray* ToArray(uType* __type, uObject* self);
};
// }

}}} // ::g::Uno::Collections
