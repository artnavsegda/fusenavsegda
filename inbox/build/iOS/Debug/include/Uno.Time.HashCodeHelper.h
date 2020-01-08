// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Time/Utilities/HashcodeHelper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct HashCodeHelper;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class HashCodeHelper :3
// {
uClassType* HashCodeHelper_typeof();
void HashCodeHelper__Hash_fn(uType* __type, int32_t* code, void* value, int32_t* __retval);
void HashCodeHelper__Initialize_fn(int32_t* __retval);
void HashCodeHelper__MakeHash_fn(int32_t* code, int32_t* value, int32_t* __retval);

struct HashCodeHelper : uObject
{
    template<class T>
    static int32_t Hash(uType* __type, int32_t code, T value) { int32_t __retval; return HashCodeHelper__Hash_fn(__type, &code, uConstrain(__type->U(0), value), &__retval), __retval; }
    static int32_t Initialize();
    static int32_t MakeHash(int32_t code, int32_t value);
};
// }

}}} // ::g::Uno::Time
