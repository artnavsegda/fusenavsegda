// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/ItemsWindowList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowListItem;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface ItemsWindowList<T>.IListener :15
// {
uInterfaceType* ItemsWindowList__IListener_typeof();

struct ItemsWindowList__IListener
{
    void(*fp_AddedWindowItem)(uObject*, int32_t*, ::g::Fuse::Reactive::WindowListItem*);
    void(*fp_OnCurrentDataChanged)(uObject*, ::g::Fuse::Reactive::WindowListItem*, uObject*);
    void(*fp_RemovedWindowItem)(uObject*, ::g::Fuse::Reactive::WindowListItem*);
    void(*fp_SetFailed)(uObject*, uString*);
    void(*fp_SetValid)(uObject*);
    static void AddedWindowItem(const uInterface& __this, int32_t windowIndex, ::g::Fuse::Reactive::WindowListItem* windowItem) { __this.VTable<ItemsWindowList__IListener>()->fp_AddedWindowItem(__this, &windowIndex, windowItem); }
    static void OnCurrentDataChanged(const uInterface& __this, ::g::Fuse::Reactive::WindowListItem* windowItem, uObject* oldData) { __this.VTable<ItemsWindowList__IListener>()->fp_OnCurrentDataChanged(__this, windowItem, oldData); }
    static void RemovedWindowItem(const uInterface& __this, ::g::Fuse::Reactive::WindowListItem* windowItem) { __this.VTable<ItemsWindowList__IListener>()->fp_RemovedWindowItem(__this, windowItem); }
    static void SetFailed(const uInterface& __this, uString* message) { __this.VTable<ItemsWindowList__IListener>()->fp_SetFailed(__this, message); }
    static void SetValid(const uInterface& __this) { __this.VTable<ItemsWindowList__IListener>()->fp_SetValid(__this); }
};
// }

}}} // ::g::Fuse::Reactive
