// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/WindowList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Reactive{struct WindowList;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract class WindowList<T> :95
// {
struct WindowList_type : uType
{
    void(*fp_CreateWindowItem)(::g::Fuse::Reactive::WindowList*, int32_t*, uObject**);
    void(*fp_GetDataCount)(::g::Fuse::Reactive::WindowList*, int32_t*);
    void(*fp_OnAddedWindowItem)(::g::Fuse::Reactive::WindowList*, int32_t*, uObject*);
    void(*fp_OnErrorMessageChanged)(::g::Fuse::Reactive::WindowList*, uString*);
    void(*fp_OnRemovedWindowItem)(::g::Fuse::Reactive::WindowList*, uObject*);
};

WindowList_type* WindowList_typeof();
void WindowList__ctor__fn(WindowList* __this);
void WindowList__CalcOffsetLimitCountOf_fn(WindowList* __this, int32_t* length, int32_t* __retval);
void WindowList__ClearError_fn(WindowList* __this);
void WindowList__DataToWindowIndex_fn(WindowList* __this, int32_t* dataIndex, int32_t* __retval);
void WindowList__get_ErrorMessage_fn(WindowList* __this, uString** __retval);
void WindowList__set_ErrorMessage_fn(WindowList* __this, uString* value);
void WindowList__GetWindowItem_fn(WindowList* __this, int32_t* i, uObject** __retval);
void WindowList__GetWindowItemIndex_fn(WindowList* __this, uObject* item, int32_t* __retval);
void WindowList__get_HasLimit_fn(WindowList* __this, bool* __retval);
void WindowList__InsertedDataAt_fn(WindowList* __this, int32_t* dataIndex);
void WindowList__InsertWindowItem_fn(WindowList* __this, int32_t* windowIndex, int32_t* dataIndex);
void WindowList__get_Limit_fn(WindowList* __this, int32_t* __retval);
void WindowList__set_Limit_fn(WindowList* __this, int32_t* value);
void WindowList__get_Offset_fn(WindowList* __this, int32_t* __retval);
void WindowList__set_Offset_fn(WindowList* __this, int32_t* value);
void WindowList__RemoveAll_fn(WindowList* __this);
void WindowList__RemovedDataAt_fn(WindowList* __this, int32_t* dataIndex);
void WindowList__SetError_fn(WindowList* __this, uString* msg);
void WindowList__TrimAndPad_fn(WindowList* __this);
void WindowList__get_WindowItemCount_fn(WindowList* __this, int32_t* __retval);

struct WindowList : uObject
{
    int32_t _offset;
    int32_t _limit;
    bool _hasLimit;
    uStrong< ::g::Fuse::Internal::ObjectList*> _windowItems;
    uStrong<uString*> _errorMessage;

    void ctor_();
    int32_t CalcOffsetLimitCountOf(int32_t length);
    void ClearError();
    uObject* CreateWindowItem(int32_t dataIndex) { uObject* __retval; return (((WindowList_type*)__type)->fp_CreateWindowItem)(this, &dataIndex, &__retval), __retval; }
    int32_t DataToWindowIndex(int32_t dataIndex);
    uString* ErrorMessage();
    void ErrorMessage(uString* value);
    int32_t GetDataCount() { int32_t __retval; return (((WindowList_type*)__type)->fp_GetDataCount)(this, &__retval), __retval; }
    uObject* GetWindowItem(int32_t i);
    int32_t GetWindowItemIndex(uObject* item);
    bool HasLimit();
    void InsertedDataAt(int32_t dataIndex);
    void InsertWindowItem(int32_t windowIndex, int32_t dataIndex);
    int32_t Limit();
    void Limit(int32_t value);
    int32_t Offset();
    void Offset(int32_t value);
    void OnAddedWindowItem(int32_t windowIndex, uObject* wi) { (((WindowList_type*)__type)->fp_OnAddedWindowItem)(this, &windowIndex, wi); }
    void OnErrorMessageChanged(uString* _errorMessage1) { (((WindowList_type*)__type)->fp_OnErrorMessageChanged)(this, _errorMessage1); }
    void OnRemovedWindowItem(uObject* wi) { (((WindowList_type*)__type)->fp_OnRemovedWindowItem)(this, wi); }
    void RemoveAll();
    void RemovedDataAt(int32_t dataIndex);
    void SetError(uString* msg);
    void TrimAndPad();
    int32_t WindowItemCount();
};
// }

}}} // ::g::Fuse::Reactive
