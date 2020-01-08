// This file was generated based on /usr/local/share/uno/Packages/Uno.Collections/1.10.0-rc1/ObservableList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class ObservableList<T> :6
// {
struct ObservableList_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

ObservableList_type* ObservableList_typeof();
void ObservableList__ctor__fn(ObservableList* __this, uDelegate* added, uDelegate* removed);
void ObservableList__Add_fn(ObservableList* __this, void* item);
void ObservableList__Clear_fn(ObservableList* __this);
void ObservableList__Contains_fn(ObservableList* __this, void* item, bool* __retval);
void ObservableList__get_Count_fn(ObservableList* __this, int32_t* __retval);
void ObservableList__GetEnumerator_fn(ObservableList* __this, uObject** __retval);
void ObservableList__Insert_fn(ObservableList* __this, int32_t* index, void* item);
void ObservableList__get_Item_fn(ObservableList* __this, int32_t* index, uTRef __retval);
void ObservableList__New1_fn(uType* __type, uDelegate* added, uDelegate* removed, ObservableList** __retval);
void ObservableList__Remove_fn(ObservableList* __this, void* item, bool* __retval);
void ObservableList__RemoveAt_fn(ObservableList* __this, int32_t* index);

struct ObservableList : uObject
{
    uStrong< ::g::Uno::Collections::List*> _items;
    uStrong<uDelegate*> _added;
    uStrong<uDelegate*> _removed;

    void ctor_(uDelegate* added, uDelegate* removed);
    template<class T>
    void Add(T item) { ObservableList__Add_fn(this, uConstrain(__type->T(0), item)); }
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return ObservableList__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int32_t Count();
    uObject* GetEnumerator();
    template<class T>
    void Insert(int32_t index, T item) { ObservableList__Insert_fn(this, &index, uConstrain(__type->T(0), item)); }
    template<class T>
    T Item(int32_t index) { T __retval; return ObservableList__get_Item_fn(this, &index, &__retval), __retval; }
    template<class T>
    bool Remove(T item) { bool __retval; return ObservableList__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    void RemoveAt(int32_t index);
    static ObservableList* New1(uType* __type, uDelegate* added, uDelegate* removed);
};
// }

}}} // ::g::Uno::Collections
