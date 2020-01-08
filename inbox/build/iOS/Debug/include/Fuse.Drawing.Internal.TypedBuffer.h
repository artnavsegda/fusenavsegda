// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.10.0-rc1/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct TypedBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public class TypedBuffer :20
// {
uType* TypedBuffer_typeof();
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int32_t* typeSize1, int32_t* initSize);
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this);
void TypedBuffer__Count_fn(TypedBuffer* __this, int32_t* __retval);
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval);
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval);
void TypedBuffer__Init_fn(TypedBuffer* __this, int32_t* initSize);
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int32_t* bu);
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int32_t* bu);

struct TypedBuffer : uObject
{
    uStrong<uArray*> back;
    int32_t typeSize;
    int32_t capacity;
    int32_t size;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> deviceIndex;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> deviceVertex;

    void ctor_1(int32_t typeSize1, int32_t initSize);
    void CheckGrow();
    int32_t Count();
    ::g::Uno::Graphics::IndexBuffer* GetDeviceIndex();
    ::g::Uno::Graphics::VertexBuffer* GetDeviceVertex();
    void Init(int32_t initSize);
    void InitDeviceIndex(int32_t bu);
    void InitDeviceVertex(int32_t bu);
};
// }

}}}} // ::g::Fuse::Drawing::Internal
