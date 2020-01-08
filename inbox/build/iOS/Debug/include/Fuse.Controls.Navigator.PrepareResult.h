// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.10.0-rc1/Navigator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__PrepareResult;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private struct Navigator.PrepareResult :177
// {
uStructType* Navigator__PrepareResult_typeof();

struct Navigator__PrepareResult
{
    int32_t Routing;
    bool UsedPrepared;
    uStrong< ::g::Fuse::Controls::Navigator__NavPage*> Page;
};
// }

}}} // ::g::Fuse::Controls
