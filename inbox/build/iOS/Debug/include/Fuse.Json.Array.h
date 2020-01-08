// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Json.Parse.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Json__Array;}}

namespace g{
namespace Fuse{

// private sealed class Json.Array :83
// {
struct Json__Array_type : uType
{
    ::g::Fuse::IArray interface0;
};

Json__Array_type* Json__Array_typeof();
void Json__Array__ctor__fn(Json__Array* __this, uArray* array);
void Json__Array__get_Item_fn(Json__Array* __this, int32_t* index, uObject** __retval);
void Json__Array__get_Length_fn(Json__Array* __this, int32_t* __retval);
void Json__Array__New1_fn(uArray* array, Json__Array** __retval);

struct Json__Array : uObject
{
    uStrong<uArray*> _array;

    void ctor_(uArray* array);
    uObject* Item(int32_t index);
    int32_t Length();
    static Json__Array* New1(uArray* array);
};
// }

}} // ::g::Fuse
