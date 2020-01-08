// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Internal/ObjectList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList__Node;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct ObjectList<T>.Node :15
// {
uStructType* ObjectList__Node_typeof();
void ObjectList__Node__Clear_fn(ObjectList__Node* __this, uType* __type);

struct ObjectList__Node
{
    uStrong<uObject*> Value;
    int32_t Next;
    int32_t Prev;
    int8_t AddVersion;
    int8_t RemoveVersion;
    int32_t Ordered;

    void Clear(uType* __type);
};
// }

}}} // ::g::Fuse::Internal
