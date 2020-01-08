// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/iOSDevice.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct OSVersion;}}

namespace g{
namespace Fuse{

// public sealed extern class OSVersion :8
// {
uType* OSVersion_typeof();
void OSVersion__ctor__fn(OSVersion* __this, int32_t* major, int32_t* minor, int32_t* patch);
void OSVersion__New1_fn(int32_t* major, int32_t* minor, int32_t* patch, OSVersion** __retval);
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval);

struct OSVersion : uObject
{
    int32_t Major;
    int32_t Minor;
    int32_t Patch;

    void ctor_(int32_t major, int32_t minor, int32_t patch);
    static OSVersion* New1(int32_t major, int32_t minor, int32_t patch);
};
// }

}} // ::g::Fuse
