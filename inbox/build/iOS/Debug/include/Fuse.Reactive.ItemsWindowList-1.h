// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/ItemsWindowList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.WindowList-1.h>
#include <Fuse.Reactive.WindowListItem.h>
#include <Fuse.Reactive.WindowListItem.IDataWatcher.h>
namespace g{namespace Fuse{namespace Reactive{struct ItemsWindowList;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal partial sealed class ItemsWindowList<T> :12
// {
struct ItemsWindowList_type : ::g::Fuse::Reactive::WindowList_type
{
    ::g::Fuse::Reactive::IObserver interface0;
    ::g::Fuse::Reactive::WindowListItem__IDataWatcher interface1;
};

ItemsWindowList_type* ItemsWindowList_typeof();
void ItemsWindowList__ctor_1_fn(ItemsWindowList* __this, uObject* listener);
void ItemsWindowList__CreateWindowItem_fn(ItemsWindowList* __this, int32_t* dataIndex, ::g::Fuse::Reactive::WindowListItem** __retval);
void ItemsWindowList__DisposeItemsSubscription_fn(ItemsWindowList* __this);
void ItemsWindowList__FuseReactiveIObserverOnAdd_fn(ItemsWindowList* __this, uObject* addedValue);
void ItemsWindowList__FuseReactiveIObserverOnClear_fn(ItemsWindowList* __this);
void ItemsWindowList__FuseReactiveIObserverOnFailed_fn(ItemsWindowList* __this, uString* message);
void ItemsWindowList__FuseReactiveIObserverOnInsertAt_fn(ItemsWindowList* __this, int32_t* index, uObject* value);
void ItemsWindowList__FuseReactiveIObserverOnNewAll_fn(ItemsWindowList* __this, uObject* values);
void ItemsWindowList__FuseReactiveIObserverOnNewAt_fn(ItemsWindowList* __this, int32_t* index, uObject* value);
void ItemsWindowList__FuseReactiveIObserverOnRemoveAt_fn(ItemsWindowList* __this, int32_t* index);
void ItemsWindowList__FuseReactiveIObserverOnSet_fn(ItemsWindowList* __this, uObject* newValue);
void ItemsWindowList__FuseReactiveWindowListItemIDataWatcherOnCurrentDataChanged_fn(ItemsWindowList* __this, ::g::Fuse::Reactive::WindowListItem* item, uObject* oldData);
void ItemsWindowList__GetData_fn(ItemsWindowList* __this, int32_t* dataIndex, uObject** __retval);
void ItemsWindowList__GetDataCount_fn(ItemsWindowList* __this, int32_t* __retval);
void ItemsWindowList__GetDataId_fn(ItemsWindowList* __this, uObject* data, uObject** __retval);
void ItemsWindowList__GetDataKey_fn(ItemsWindowList* __this, uObject* data, uString* key, uObject** __retval);
void ItemsWindowList__GetItems_fn(ItemsWindowList* __this, uObject** __retval);
void ItemsWindowList__get_IdentityKey_fn(ItemsWindowList* __this, uString** __retval);
void ItemsWindowList__set_IdentityKey_fn(ItemsWindowList* __this, uString* value);
void ItemsWindowList__ItemsChanged_fn(ItemsWindowList* __this);
void ItemsWindowList__New1_fn(uType* __type, uObject* listener, ItemsWindowList** __retval);
void ItemsWindowList__OnAddedWindowItem_fn(ItemsWindowList* __this, int32_t* windowIndex, ::g::Fuse::Reactive::WindowListItem* wi);
void ItemsWindowList__OnErrorMessageChanged_fn(ItemsWindowList* __this, uString* _errorMessage1);
void ItemsWindowList__OnRemovedWindowItem_fn(ItemsWindowList* __this, ::g::Fuse::Reactive::WindowListItem* wi);
void ItemsWindowList__PatchTo_fn(ItemsWindowList* __this, uObject* values);
void ItemsWindowList__Repopulate_fn(ItemsWindowList* __this);
void ItemsWindowList__Rooted_fn(ItemsWindowList* __this);
void ItemsWindowList__SetItems_fn(ItemsWindowList* __this, uObject* value);
void ItemsWindowList__TryUpdateAt_fn(ItemsWindowList* __this, int32_t* dataIndex, uObject* newData, bool* __retval);
void ItemsWindowList__Unrooted_fn(ItemsWindowList* __this);

struct ItemsWindowList : ::g::Fuse::Reactive::WindowList
{
    uWeak<uObject*> _listener;
    int32_t Identity;
    uStrong<uString*> _identityKey;
    uStrong<uObject*> _items;
    uStrong<uObject*> _itemsSubscription;
    bool _isRooted;

    void ctor_1(uObject* listener);
    void DisposeItemsSubscription();
    uObject* GetData(int32_t dataIndex);
    uObject* GetDataId(uObject* data);
    uObject* GetDataKey(uObject* data, uString* key);
    uObject* GetItems();
    uString* IdentityKey();
    void IdentityKey(uString* value);
    void ItemsChanged();
    void PatchTo(uObject* values);
    void Repopulate();
    void Rooted();
    void SetItems(uObject* value);
    bool TryUpdateAt(int32_t dataIndex, uObject* newData);
    void Unrooted();
    static ItemsWindowList* New1(uType* __type, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
