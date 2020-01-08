// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowListItem;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract class WindowListItem :10
// {
::g::Fuse::Reactive::ValueObserver_type* WindowListItem_typeof();
void WindowListItem__ctor_1_fn(WindowListItem* __this);
void WindowListItem__Create_fn(uType* __type, uObject* owner, uObject* id, uObject* data, WindowListItem** __retval);
void WindowListItem__get_CurrentData_fn(WindowListItem* __this, uObject** __retval);
void WindowListItem__get_Data_fn(WindowListItem* __this, uObject** __retval);
void WindowListItem__set_Data_fn(WindowListItem* __this, uObject* value);
void WindowListItem__Dispose_fn(WindowListItem* __this);
void WindowListItem__get_Id_fn(WindowListItem* __this, uObject** __retval);
void WindowListItem__set_Id_fn(WindowListItem* __this, uObject* value);
void WindowListItem__LostData_fn(WindowListItem* __this);
void WindowListItem__PushData_fn(WindowListItem* __this, uObject* newValue);

struct WindowListItem : ::g::Fuse::Reactive::ValueObserver
{
    uStrong<uObject*> _owner;
    uStrong<uObject*> _curData;
    uStrong<uObject*> _data;
    uStrong<uObject*> _Id;

    void ctor_1();
    uObject* CurrentData();
    uObject* Data();
    void Data(uObject* value);
    uObject* Id();
    void Id(uObject* value);
    static WindowListItem* Create(uType* __type, uObject* owner, uObject* id, uObject* data);
};
// }

}}} // ::g::Fuse::Reactive
