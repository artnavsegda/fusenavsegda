// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Visual.FastProperties2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty2Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty2Link :26
// {
uType* FastProperty2Link_typeof();
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int32_t* p);

struct FastProperty2Link : uObject
{
    int32_t Property;
    uStrong<FastProperty2Link*> Next;

    void ctor_(int32_t p);
};
// }

}} // ::g::Fuse
