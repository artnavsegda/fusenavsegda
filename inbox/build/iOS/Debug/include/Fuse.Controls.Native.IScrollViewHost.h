// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IScrollViewHost :123
// {
uInterfaceType* IScrollViewHost_typeof();

struct IScrollViewHost
{
    void(*fp_get_ContentSize)(uObject*, ::g::Uno::Float2*);
    void(*fp_OnScrollPositionChanged)(uObject*, ::g::Uno::Float2*);
    static ::g::Uno::Float2 ContentSize(const uInterface& __this);
    static void OnScrollPositionChanged(const uInterface& __this, ::g::Uno::Float2 newScrollPosition);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline ::g::Uno::Float2 IScrollViewHost::ContentSize(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<IScrollViewHost>()->fp_get_ContentSize(__this, &__retval), __retval; }
inline void IScrollViewHost::OnScrollPositionChanged(const uInterface& __this, ::g::Uno::Float2 newScrollPosition) { __this.VTable<IScrollViewHost>()->fp_OnScrollPositionChanged(__this, &newScrollPosition); }
// }

}}}} // ::g::Fuse::Controls::Native
