// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/FormatHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Graphics{struct FormatHelpers;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public static class FormatHelpers :5
// {
uClassType* FormatHelpers_typeof();
void FormatHelpers__GetStrideInBytes_fn(int32_t* format, int32_t* __retval);

struct FormatHelpers : uObject
{
    static int32_t GetStrideInBytes(int32_t format);
};
// }

}}} // ::g::Uno::Graphics
