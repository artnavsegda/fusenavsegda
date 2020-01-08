// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Environment.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Environment;}}

namespace g{
namespace Uno{

// public static class Environment :8
// {
uClassType* Environment_typeof();
void Environment__get_NewLine_fn(uString** __retval);

struct Environment : uObject
{
    static uString* NewLine();
};
// }

}} // ::g::Uno
