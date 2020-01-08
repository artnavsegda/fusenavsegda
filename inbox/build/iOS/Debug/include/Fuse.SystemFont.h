// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/SystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Font.h>
namespace g{namespace Fuse{struct SystemFont;}}

namespace g{
namespace Fuse{

// public sealed class SystemFont :36
// {
uType* SystemFont_typeof();
void SystemFont__ctor_2_fn(SystemFont* __this, uString* family, int32_t* style, int32_t* weight);
void SystemFont__New3_fn(uString* family, int32_t* style, int32_t* weight, SystemFont** __retval);

struct SystemFont : ::g::Fuse::Font
{
    void ctor_2(uString* family, int32_t style, int32_t weight);
    static SystemFont* New3(uString* family, int32_t style, int32_t weight);
};
// }

}} // ::g::Fuse
