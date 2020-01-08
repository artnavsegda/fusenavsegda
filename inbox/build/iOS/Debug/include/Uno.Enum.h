// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Enum.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public abstract class Enum :7
// {
uType* Enum_typeof();
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval);
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval);
void Enum__ToString_fn(uObject* __this, uString** __retval);

struct Enum
{
    static uObject* Parse(uType* type, uString* str);
    static uObject* Parse1(uType* type, uString* str, bool ignoreCase);
};
// }

}} // ::g::Uno
