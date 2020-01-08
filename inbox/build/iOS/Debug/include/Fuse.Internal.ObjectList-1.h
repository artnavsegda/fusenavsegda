// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Internal/ObjectList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.ObjectList-1.Node.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Internal{struct ObjectList__Enumerator;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class ObjectList<T> :13
// {
struct ObjectList_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

ObjectList_type* ObjectList_typeof();
void ObjectList__ctor__fn(ObjectList* __this, int32_t* equality);
void ObjectList__Add_fn(ObjectList* __this, uObject* value);
void ObjectList__AllocNext_fn(ObjectList* __this, int32_t* __retval);
void ObjectList__CleanupVersion_fn(ObjectList* __this);
void ObjectList__Clear_fn(ObjectList* __this);
void ObjectList__CollapseNode_fn(ObjectList* __this, int32_t* q);
void ObjectList__Contains_fn(ObjectList* __this, uObject* value, bool* __retval);
void ObjectList__get_Count_fn(ObjectList* __this, int32_t* __retval);
void ObjectList__Equals2_fn(ObjectList* __this, uObject* a, uObject* b, bool* __retval);
void ObjectList__GetEnumerator_fn(ObjectList* __this, uObject** __retval);
void ObjectList__GetEnumeratorStruct_fn(ObjectList* __this, bool* versionLock, ObjectList__Enumerator* __retval);
void ObjectList__Grow_fn(ObjectList* __this, int32_t* ncap);
void ObjectList__Insert_fn(ObjectList* __this, int32_t* index, uObject* value);
void ObjectList__get_Item_fn(ObjectList* __this, int32_t* index, uObject** __retval);
void ObjectList__Lock_fn(ObjectList* __this, int8_t* __retval);
void ObjectList__New1_fn(uType* __type, int32_t* equality, ObjectList** __retval);
void ObjectList__NodeAt_fn(ObjectList* __this, int32_t* index, int32_t* __retval);
void ObjectList__NodeFor_fn(ObjectList* __this, uObject* value, int32_t* __retval);
void ObjectList__Order_fn(ObjectList* __this);
void ObjectList__Remove_fn(ObjectList* __this, uObject* value, bool* __retval);
void ObjectList__RemoveAt_fn(ObjectList* __this, int32_t* index);
void ObjectList__RemoveNode_fn(ObjectList* __this, int32_t* q);
void ObjectList__Unalloc_fn(ObjectList* __this, int32_t* q);
void ObjectList__Unlock_fn(ObjectList* __this);

struct ObjectList : uObject
{
    uStrong<uArray*> _nodes;
    int32_t _capacity;
    int32_t _size;
    bool _ordered;
    int32_t _nodeHead;
    int32_t _nodeTail;
    int32_t _free;
    int8_t _lockVersion;
    int8_t _lockCount;
    int32_t _equality;

    void ctor_(int32_t equality);
    void Add(uObject* value);
    int32_t AllocNext();
    void CleanupVersion();
    void Clear();
    void CollapseNode(int32_t q);
    bool Contains(uObject* value);
    int32_t Count();
    bool Equals2(uObject* a, uObject* b);
    uObject* GetEnumerator();
    ObjectList__Enumerator GetEnumeratorStruct(bool versionLock);
    void Grow(int32_t ncap);
    void Insert(int32_t index, uObject* value);
    uObject* Item(int32_t index);
    int8_t Lock();
    int32_t NodeAt(int32_t index);
    int32_t NodeFor(uObject* value);
    void Order();
    bool Remove(uObject* value);
    void RemoveAt(int32_t index);
    void RemoveNode(int32_t q);
    void Unalloc(int32_t q);
    void Unlock();
    static ObjectList* New1(uType* __type, int32_t equality);
};
// }

}}} // ::g::Fuse::Internal
