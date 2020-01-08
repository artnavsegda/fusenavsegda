// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowListItem;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface WindowListItem.IDataWatcher :13
// {
uInterfaceType* WindowListItem__IDataWatcher_typeof();

struct WindowListItem__IDataWatcher
{
    void(*fp_OnCurrentDataChanged)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*);
    static void OnCurrentDataChanged(const uInterface& __this, ::g::Fuse::Reactive::WindowListItem* item, uObject* oldData) { __this.VTable<WindowListItem__IDataWatcher>()->fp_OnCurrentDataChanged(__this, item, oldData); }
};
// }

}}} // ::g::Fuse::Reactive
