// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Buffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace InteropServices{struct GCHandle;}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte4;}}

namespace g{
namespace Uno{

// public sealed class Buffer :8
// {
uType* Buffer_typeof();
void Buffer__ctor__fn(Buffer* __this, uArray* data);
void Buffer__ctor_2_fn(Buffer* __this, uArray* data, int32_t* offset, int32_t* sizeInBytes);
void Buffer__ctor_3_fn(Buffer* __this, int32_t* sizeInBytes);
void Buffer__get_ByteOffset_fn(Buffer* __this, int32_t* __retval);
void Buffer__get_Item_fn(Buffer* __this, int32_t* offset, uint8_t* __retval);
void Buffer__set_Item_fn(Buffer* __this, int32_t* offset, uint8_t* value);
void Buffer__New1_fn(uArray* data, Buffer** __retval);
void Buffer__New3_fn(uArray* data, int32_t* offset, int32_t* sizeInBytes, Buffer** __retval);
void Buffer__New4_fn(int32_t* sizeInBytes, Buffer** __retval);
void Buffer__PinPtr_fn(Buffer* __this, ::g::Uno::Runtime::InteropServices::GCHandle* pin, void** __retval);
void Buffer__Set2_fn(Buffer* __this, int32_t* offset, ::g::Uno::Byte4* value);
void Buffer__Set4_fn(Buffer* __this, int32_t* offset, float* value, bool* littleEndian);
void Buffer__Set23_fn(Buffer* __this, int32_t* offset, uint16_t* value, bool* littleEndian);
void Buffer__get_SizeInBytes_fn(Buffer* __this, int32_t* __retval);

struct Buffer : uObject
{
    int32_t _offset;
    int32_t _sizeInBytes;
    uStrong<uArray*> _data;

    void ctor_(uArray* data);
    void ctor_2(uArray* data, int32_t offset, int32_t sizeInBytes);
    void ctor_3(int32_t sizeInBytes);
    int32_t ByteOffset();
    uint8_t Item(int32_t offset);
    void Item(int32_t offset, uint8_t value);
    void* PinPtr(::g::Uno::Runtime::InteropServices::GCHandle* pin);
    void Set2(int32_t offset, ::g::Uno::Byte4 value);
    void Set4(int32_t offset, float value, bool littleEndian);
    void Set23(int32_t offset, uint16_t value, bool littleEndian);
    int32_t SizeInBytes();
    static Buffer* New1(uArray* data);
    static Buffer* New3(uArray* data, int32_t offset, int32_t sizeInBytes);
    static Buffer* New4(int32_t sizeInBytes);
};
// }

}} // ::g::Uno
