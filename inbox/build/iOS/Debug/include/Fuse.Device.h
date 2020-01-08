// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/1.10.0-rc1/iOSApp.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Device;}}

namespace g{
namespace Fuse{

// internal static extern class Device :150
// {
uClassType* Device_typeof();
void Device__GetStatusBarOrientation_fn(int32_t* __retval);
void Device__get_StatusBarOrientation_fn(int32_t* __retval);

struct Device : uObject
{
    static int32_t GetStatusBarOrientation();
    static int32_t StatusBarOrientation();
};
// }

}} // ::g::Fuse
