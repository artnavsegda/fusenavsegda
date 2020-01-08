// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Collections/IList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IList<T> :6
// {
uInterfaceType* IList_typeof();

struct IList
{
    void(*fp_Insert)(uObject*, int32_t*, void*);
    void(*fp_get_Item)(uObject*, int32_t*, uTRef);
    void(*fp_RemoveAt)(uObject*, int32_t*);
    template<class T>
    static void Insert(const uInterface& __this, int32_t index, T item) { __this.VTable<IList>()->fp_Insert(__this, &index, uConstrain(__this->__type->GetBase(IList_typeof())->T(0), item)); }
    static void Insert_ex(const uInterface& __this, int32_t* index, void* item) { __this.VTable<IList>()->fp_Insert(__this, index, item); }
    template<class T>
    static T Item(const uInterface& __this, int32_t index) { T __retval; return __this.VTable<IList>()->fp_get_Item(__this, &index, &__retval), __retval; }
    static void get_Item_ex(const uInterface& __this, int32_t* index, uTRef __retval) { __this.VTable<IList>()->fp_get_Item(__this, index, __retval); }
    static void RemoveAt(const uInterface& __this, int32_t index) { __this.VTable<IList>()->fp_RemoveAt(__this, &index); }
};
// }

}}} // ::g::Uno::Collections
