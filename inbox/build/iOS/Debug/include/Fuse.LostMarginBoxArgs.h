// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Visual.Layout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct LostMarginBoxArgs;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// internal sealed class LostMarginBoxArgs :85
// {
uType* LostMarginBoxArgs_typeof();
void LostMarginBoxArgs__ctor_1_fn(LostMarginBoxArgs* __this, ::g::Fuse::Visual* elm);
void LostMarginBoxArgs__New2_fn(::g::Fuse::Visual* elm, LostMarginBoxArgs** __retval);
void LostMarginBoxArgs__get_Visual_fn(LostMarginBoxArgs* __this, ::g::Fuse::Visual** __retval);
void LostMarginBoxArgs__set_Visual_fn(LostMarginBoxArgs* __this, ::g::Fuse::Visual* value);

struct LostMarginBoxArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_1(::g::Fuse::Visual* elm);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static LostMarginBoxArgs* New2(::g::Fuse::Visual* elm);
};
// }

}} // ::g::Fuse
