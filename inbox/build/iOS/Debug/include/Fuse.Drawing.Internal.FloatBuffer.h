// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.10.0-rc1/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal.TypedBuffer.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct FloatBuffer;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class FloatBuffer :135
// {
uType* FloatBuffer_typeof();
void FloatBuffer__ctor_2_fn(FloatBuffer* __this);
void FloatBuffer__Append1_fn(FloatBuffer* __this, float* value);
void FloatBuffer__New3_fn(FloatBuffer** __retval);
void FloatBuffer__Set_fn(FloatBuffer* __this, int32_t* offset, float* value);

struct FloatBuffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    void ctor_2();
    void Append1(float value);
    void Set(int32_t offset, float value);
    static FloatBuffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
