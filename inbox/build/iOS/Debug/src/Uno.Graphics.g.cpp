// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLIntegerName.h>
#include <OpenGL.GLRenderbufferHandle.h>
#include <OpenGL.GLStringName.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.FormatException.h>
#include <Uno.Graphics.BlendEquation.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.CompareFunc.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PolygonWinding.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.TextureAddressMode.h>
#include <Uno.Graphics.TextureFilter.h>
#include <Uno.Graphics.TextureHelpers.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <Uno.Runtime.InteropServices.GCHandle.h>
#include <Uno.Runtime.InteropServices.GCHandleType.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UShort.h>
static uString* STRINGS[12];
static uType* TYPES[2];

namespace g{
namespace Uno{
namespace Graphics{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum BlendEquation :78
uEnumType* BlendEquation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.BlendEquation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Add", 0LL,
        "Subtract", 1LL,
        "ReverseSubtract", 2LL,
        "Min", 3LL,
        "Max", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum BlendOperand :64
uEnumType* BlendOperand_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.BlendOperand", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcAlpha", 2LL,
        "OneMinusSrcAlpha", 3LL,
        "SrcColor", 4LL,
        "OneMinusSrcColor", 5LL,
        "DstAlpha", 6LL,
        "OneMinusDstAlpha", 7LL,
        "DstColor", 8LL,
        "OneMinusDstColor", 9LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum BufferUsage :5
uEnumType* BufferUsage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.BufferUsage", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Immutable", 0LL,
        "Dynamic", 1LL,
        "Stream", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum CompareFunc :87
uEnumType* CompareFunc_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.CompareFunc", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Always", 0LL,
        "Less", 1LL,
        "LessOrEqual", 2LL,
        "Equal", 3LL,
        "NotEqual", 4LL,
        "GreaterOrEqual", 5LL,
        "Greater", 6LL,
        "Never", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/DeviceBuffer.uno
// -------------------------------------------------------------------------------------

// public abstract class DeviceBuffer :8
// {
static void DeviceBuffer_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" was disposed");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(DeviceBuffer_type, interface0));
    type->SetFields(0,
        ::g::OpenGL::GLBufferHandle_typeof(), offsetof(DeviceBuffer, _GLBufferHandle), 0,
        ::g::OpenGL::GLBufferTarget_typeof(), offsetof(DeviceBuffer, _GLBufferTarget), 0,
        ::g::Uno::Bool_typeof(), offsetof(DeviceBuffer, _IsDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(DeviceBuffer, _SizeInBytes), 0,
        ::g::Uno::Graphics::BufferUsage_typeof(), offsetof(DeviceBuffer, _Usage), 0);
}

DeviceBuffer_type* DeviceBuffer_typeof()
{
    static uSStrong<DeviceBuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DeviceBuffer);
    options.TypeSize = sizeof(DeviceBuffer_type);
    type = (DeviceBuffer_type*)uClassType::New("Uno.Graphics.DeviceBuffer", options);
    type->fp_build_ = DeviceBuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))DeviceBuffer__Dispose_fn;
    return type;
}

// internal DeviceBuffer(Uno.Graphics.BufferUsage usage) :52
void DeviceBuffer__ctor__fn(DeviceBuffer* __this, int32_t* usage)
{
    __this->ctor_(*usage);
}

// protected void CheckDisposed() :131
void DeviceBuffer__CheckDisposed_fn(DeviceBuffer* __this)
{
    __this->CheckDisposed();
}

// public void Dispose() :63
void DeviceBuffer__Dispose_fn(DeviceBuffer* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLBufferHandle get_GLBufferHandle() :30
void DeviceBuffer__get_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* __retval)
{
    *__retval = __this->GLBufferHandle();
}

// private generated extern void set_GLBufferHandle(OpenGL.GLBufferHandle value) :31
void DeviceBuffer__set_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* value)
{
    __this->GLBufferHandle(*value);
}

// public generated extern OpenGL.GLBufferTarget get_GLBufferTarget() :24
void DeviceBuffer__get_GLBufferTarget_fn(DeviceBuffer* __this, int32_t* __retval)
{
    *__retval = __this->GLBufferTarget();
}

// private generated extern void set_GLBufferTarget(OpenGL.GLBufferTarget value) :25
void DeviceBuffer__set_GLBufferTarget_fn(DeviceBuffer* __this, int32_t* value)
{
    __this->GLBufferTarget(*value);
}

// protected extern void GLInit(OpenGL.GLBufferTarget target) :34
void DeviceBuffer__GLInit_fn(DeviceBuffer* __this, int32_t* target)
{
    __this->GLInit(*target);
}

// public generated bool get_IsDisposed() :59
void DeviceBuffer__get_IsDisposed_fn(DeviceBuffer* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :60
void DeviceBuffer__set_IsDisposed_fn(DeviceBuffer* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public generated int get_SizeInBytes() :12
void DeviceBuffer__get_SizeInBytes_fn(DeviceBuffer* __this, int32_t* __retval)
{
    *__retval = __this->SizeInBytes();
}

// private generated void set_SizeInBytes(int value) :13
void DeviceBuffer__set_SizeInBytes_fn(DeviceBuffer* __this, int32_t* value)
{
    __this->SizeInBytes(*value);
}

// public void Update(byte[] data) :99
void DeviceBuffer__Update_fn(DeviceBuffer* __this, uArray* data)
{
    __this->Update(data);
}

// public void Update(Uno.Array data, int elementSize) :76
void DeviceBuffer__Update1_fn(DeviceBuffer* __this, uArray* data, int32_t* elementSize)
{
    __this->Update1(data, *elementSize);
}

// public void Update(Uno.Buffer data) :105
void DeviceBuffer__Update2_fn(DeviceBuffer* __this, ::g::Uno::Buffer* data)
{
    __this->Update2(data);
}

// public generated Uno.Graphics.BufferUsage get_Usage() :18
void DeviceBuffer__get_Usage_fn(DeviceBuffer* __this, int32_t* __retval)
{
    *__retval = __this->Usage();
}

// private generated void set_Usage(Uno.Graphics.BufferUsage value) :19
void DeviceBuffer__set_Usage_fn(DeviceBuffer* __this, int32_t* value)
{
    __this->Usage(*value);
}

// internal DeviceBuffer(Uno.Graphics.BufferUsage usage) [instance] :52
void DeviceBuffer::ctor_(int32_t usage)
{
    Usage(usage);
}

// protected void CheckDisposed() [instance] :131
void DeviceBuffer::CheckDisposed()
{
    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::g::Uno::String::op_Addition(::g::Uno::Object::GetType(this), ::STRINGS[0/*" was disposed"*/])));
}

// public void Dispose() [instance] :63
void DeviceBuffer::Dispose()
{
    if (IsDisposed())
        return;

    ::g::OpenGL::GL::DeleteBuffer(GLBufferHandle());
    IsDisposed(true);
}

// public generated extern OpenGL.GLBufferHandle get_GLBufferHandle() [instance] :30
uint32_t DeviceBuffer::GLBufferHandle()
{
    return _GLBufferHandle;
}

// private generated extern void set_GLBufferHandle(OpenGL.GLBufferHandle value) [instance] :31
void DeviceBuffer::GLBufferHandle(uint32_t value)
{
    _GLBufferHandle = value;
}

// public generated extern OpenGL.GLBufferTarget get_GLBufferTarget() [instance] :24
int32_t DeviceBuffer::GLBufferTarget()
{
    return _GLBufferTarget;
}

// private generated extern void set_GLBufferTarget(OpenGL.GLBufferTarget value) [instance] :25
void DeviceBuffer::GLBufferTarget(int32_t value)
{
    _GLBufferTarget = value;
}

// protected extern void GLInit(OpenGL.GLBufferTarget target) [instance] :34
void DeviceBuffer::GLInit(int32_t target)
{
    GLBufferTarget(target);
    GLBufferHandle(::g::OpenGL::GL::CreateBuffer());
}

// public generated bool get_IsDisposed() [instance] :59
bool DeviceBuffer::IsDisposed()
{
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :60
void DeviceBuffer::IsDisposed(bool value)
{
    _IsDisposed = value;
}

// public generated int get_SizeInBytes() [instance] :12
int32_t DeviceBuffer::SizeInBytes()
{
    return _SizeInBytes;
}

// private generated void set_SizeInBytes(int value) [instance] :13
void DeviceBuffer::SizeInBytes(int32_t value)
{
    _SizeInBytes = value;
}

// public void Update(byte[] data) [instance] :99
void DeviceBuffer::Update(uArray* data)
{
    Update1(data, 1);
}

// public void Update(Uno.Array data, int elementSize) [instance] :76
void DeviceBuffer::Update1(uArray* data, int32_t elementSize)
{
    CheckDisposed();
    int32_t sizeInBytes = uPtr(data)->Length() * elementSize;
    ::g::Uno::Runtime::InteropServices::GCHandle pin = ::g::Uno::Runtime::InteropServices::GCHandle__Alloc1(data, 3);
    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), GLBufferHandle());

    if (sizeInBytes <= SizeInBytes())
        ::g::OpenGL::GL::BufferSubData1(GLBufferTarget(), 0, sizeInBytes, pin.AddrOfPinnedObject());
    else
    {
        ::g::OpenGL::GL::BufferData2(GLBufferTarget(), sizeInBytes, pin.AddrOfPinnedObject(), ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBufferUsage(Usage()));
        SizeInBytes(sizeInBytes);
    }

    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), ::g::OpenGL::GLBufferHandle::Zero_);
    pin.Free();
}

// public void Update(Uno.Buffer data) [instance] :105
void DeviceBuffer::Update2(::g::Uno::Buffer* data)
{
    CheckDisposed();
    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), GLBufferHandle());

    if (uPtr(data)->SizeInBytes() <= SizeInBytes())
        ::g::OpenGL::GL::BufferSubData2(GLBufferTarget(), 0, data);
    else
    {
        ::g::OpenGL::GL::BufferData3(GLBufferTarget(), data, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBufferUsage(Usage()));
        SizeInBytes(uPtr(data)->SizeInBytes());
    }

    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), ::g::OpenGL::GLBufferHandle::Zero_);
}

// public generated Uno.Graphics.BufferUsage get_Usage() [instance] :18
int32_t DeviceBuffer::Usage()
{
    return _Usage;
}

// private generated void set_Usage(Uno.Graphics.BufferUsage value) [instance] :19
void DeviceBuffer::Usage(int32_t value)
{
    _Usage = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum Format :123
uEnumType* Format_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.Format", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Unknown", 0LL,
        "L8", 1LL,
        "LA88", 2LL,
        "RGBA8888", 3LL,
        "RGBA4444", 4LL,
        "RGBA5551", 5LL,
        "RGB565", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/FormatHelpers.uno
// --------------------------------------------------------------------------------------

// public static class FormatHelpers :5
// {
static void FormatHelpers_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Invalid format <");
    ::STRINGS[2] = uString::Const(">");
}

uClassType* FormatHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.FormatHelpers", options);
    type->fp_build_ = FormatHelpers_build;
    return type;
}

// public static int GetStrideInBytes(Uno.Graphics.Format format) :7
void FormatHelpers__GetStrideInBytes_fn(int32_t* format, int32_t* __retval)
{
    *__retval = FormatHelpers::GetStrideInBytes(*format);
}

// public static int GetStrideInBytes(Uno.Graphics.Format format) [static] :7
int32_t FormatHelpers::GetStrideInBytes(int32_t format)
{
    switch (format)
    {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 4;
        case 4:
            return 2;
        case 5:
            return 2;
        case 6:
            return 2;
    }

    U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Invalid for...*/], uBox<int32_t>(::g::Uno::Graphics::Format_typeof(), format)), ::STRINGS[2/*">"*/])));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Framebuffer.uno
// ------------------------------------------------------------------------------------

// public sealed class Framebuffer :11
// {
static void Framebuffer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Framebuffer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(Framebuffer, _ColorBuffer), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(Framebuffer, _RenderTarget), 0);
}

Framebuffer_type* Framebuffer_typeof()
{
    static uSStrong<Framebuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Framebuffer);
    options.TypeSize = sizeof(Framebuffer_type);
    type = (Framebuffer_type*)uClassType::New("framebuffer", options);
    type->fp_build_ = Framebuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Framebuffer__Dispose_fn;
    return type;
}

// public Framebuffer(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :46
void Framebuffer__ctor__fn(Framebuffer* __this, ::g::Uno::Int2* size, int32_t* format, int32_t* flags)
{
    __this->ctor_(*size, *format, *flags);
}

// public generated texture2D get_ColorBuffer() :15
void Framebuffer__get_ColorBuffer_fn(Framebuffer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->ColorBuffer();
}

// private generated void set_ColorBuffer(texture2D value) :16
void Framebuffer__set_ColorBuffer_fn(Framebuffer* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->ColorBuffer(value);
}

// public void Dispose() :52
void Framebuffer__Dispose_fn(Framebuffer* __this)
{
    __this->Dispose();
}

// public Uno.Graphics.Format get_Format() :43
void Framebuffer__get_Format_fn(Framebuffer* __this, int32_t* __retval)
{
    *__retval = __this->Format();
}

// public bool get_HasDepth() :32
void Framebuffer__get_HasDepth_fn(Framebuffer* __this, bool* __retval)
{
    *__retval = __this->HasDepth();
}

// public Framebuffer New(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :46
void Framebuffer__New1_fn(::g::Uno::Int2* size, int32_t* format, int32_t* flags, Framebuffer** __retval)
{
    *__retval = Framebuffer::New1(*size, *format, *flags);
}

// public generated Uno.Graphics.RenderTarget get_RenderTarget() :21
void Framebuffer__get_RenderTarget_fn(Framebuffer* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// private generated void set_RenderTarget(Uno.Graphics.RenderTarget value) :22
void Framebuffer__set_RenderTarget_fn(Framebuffer* __this, ::g::Uno::Graphics::RenderTarget* value)
{
    __this->RenderTarget(value);
}

// public int2 get_Size() :27
void Framebuffer__get_Size_fn(Framebuffer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public Framebuffer(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :46
void Framebuffer::ctor_(::g::Uno::Int2 size, int32_t format, int32_t flags)
{
    ColorBuffer(::g::Uno::Graphics::Texture2D::New1(size, format, (flags & 2) == 2));
    RenderTarget(::g::Uno::Graphics::RenderTarget::Create(ColorBuffer(), 0, (flags & 1) == 1));
}

// public generated texture2D get_ColorBuffer() [instance] :15
::g::Uno::Graphics::Texture2D* Framebuffer::ColorBuffer()
{
    return _ColorBuffer;
}

// private generated void set_ColorBuffer(texture2D value) [instance] :16
void Framebuffer::ColorBuffer(::g::Uno::Graphics::Texture2D* value)
{
    _ColorBuffer = value;
}

// public void Dispose() [instance] :52
void Framebuffer::Dispose()
{
    uPtr(ColorBuffer())->Dispose();
    uPtr(RenderTarget())->Dispose();
}

// public Uno.Graphics.Format get_Format() [instance] :43
int32_t Framebuffer::Format()
{
    return uPtr(ColorBuffer())->Format();
}

// public bool get_HasDepth() [instance] :32
bool Framebuffer::HasDepth()
{
    return uPtr(RenderTarget())->HasDepth();
}

// public generated Uno.Graphics.RenderTarget get_RenderTarget() [instance] :21
::g::Uno::Graphics::RenderTarget* Framebuffer::RenderTarget()
{
    return _RenderTarget;
}

// private generated void set_RenderTarget(Uno.Graphics.RenderTarget value) [instance] :22
void Framebuffer::RenderTarget(::g::Uno::Graphics::RenderTarget* value)
{
    _RenderTarget = value;
}

// public int2 get_Size() [instance] :27
::g::Uno::Int2 Framebuffer::Size()
{
    return uPtr(RenderTarget())->Size();
}

// public Framebuffer New(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :46
Framebuffer* Framebuffer::New1(::g::Uno::Int2 size, int32_t format, int32_t flags)
{
    Framebuffer* obj1 = (Framebuffer*)uNew(Framebuffer_typeof());
    obj1->ctor_(size, format, flags);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Framebuffer.uno
// ------------------------------------------------------------------------------------

// public enum FramebufferFlags :4
uEnumType* FramebufferFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.FramebufferFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "DepthBuffer", 1LL,
        "Mipmap", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/IndexBuffer.uno
// ------------------------------------------------------------------------------------

// public sealed class IndexBuffer :6
// {
static void IndexBuffer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer_type, interface0));
    type->SetFields(5);
}

::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof()
{
    static uSStrong< ::g::Uno::Graphics::DeviceBuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::DeviceBuffer_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IndexBuffer);
    options.TypeSize = sizeof(::g::Uno::Graphics::DeviceBuffer_type);
    type = (::g::Uno::Graphics::DeviceBuffer_type*)uClassType::New("Uno.Graphics.IndexBuffer", options);
    type->fp_build_ = IndexBuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Graphics::DeviceBuffer__Dispose_fn;
    return type;
}

// public IndexBuffer(byte[] data, Uno.Graphics.BufferUsage usage) :23
void IndexBuffer__ctor_1_fn(IndexBuffer* __this, uArray* data, int32_t* usage)
{
    __this->ctor_1(data, *usage);
}

// public IndexBuffer(Uno.Buffer data, Uno.Graphics.BufferUsage usage) :36
void IndexBuffer__ctor_3_fn(IndexBuffer* __this, ::g::Uno::Buffer* data, int32_t* usage)
{
    __this->ctor_3(data, *usage);
}

// public IndexBuffer(Uno.Graphics.BufferUsage usage) :8
void IndexBuffer__ctor_4_fn(IndexBuffer* __this, int32_t* usage)
{
    __this->ctor_4(*usage);
}

// public IndexBuffer(ushort[] data, Uno.Graphics.BufferUsage usage) :29
void IndexBuffer__ctor_5_fn(IndexBuffer* __this, uArray* data, int32_t* usage)
{
    __this->ctor_5(data, *usage);
}

// public IndexBuffer New(byte[] data, Uno.Graphics.BufferUsage usage) :23
void IndexBuffer__New1_fn(uArray* data, int32_t* usage, IndexBuffer** __retval)
{
    *__retval = IndexBuffer::New1(data, *usage);
}

// public IndexBuffer New(Uno.Buffer data, Uno.Graphics.BufferUsage usage) :36
void IndexBuffer__New3_fn(::g::Uno::Buffer* data, int32_t* usage, IndexBuffer** __retval)
{
    *__retval = IndexBuffer::New3(data, *usage);
}

// public IndexBuffer New(ushort[] data, Uno.Graphics.BufferUsage usage) :29
void IndexBuffer__New5_fn(uArray* data, int32_t* usage, IndexBuffer** __retval)
{
    *__retval = IndexBuffer::New5(data, *usage);
}

// public void Update(ushort[] data) :42
void IndexBuffer__Update3_fn(IndexBuffer* __this, uArray* data)
{
    __this->Update3(data);
}

// public IndexBuffer(byte[] data, Uno.Graphics.BufferUsage usage) [instance] :23
void IndexBuffer::ctor_1(uArray* data, int32_t usage)
{
    ctor_4(usage);
    Update(data);
}

// public IndexBuffer(Uno.Buffer data, Uno.Graphics.BufferUsage usage) [instance] :36
void IndexBuffer::ctor_3(::g::Uno::Buffer* data, int32_t usage)
{
    ctor_4(usage);
    Update2(data);
}

// public IndexBuffer(Uno.Graphics.BufferUsage usage) [instance] :8
void IndexBuffer::ctor_4(int32_t usage)
{
    ctor_(usage);
    GLInit(34963);
}

// public IndexBuffer(ushort[] data, Uno.Graphics.BufferUsage usage) [instance] :29
void IndexBuffer::ctor_5(uArray* data, int32_t usage)
{
    ctor_4(usage);
    Update3(data);
}

// public void Update(ushort[] data) [instance] :42
void IndexBuffer::Update3(uArray* data)
{
    Update1(data, 2);
}

// public IndexBuffer New(byte[] data, Uno.Graphics.BufferUsage usage) [static] :23
IndexBuffer* IndexBuffer::New1(uArray* data, int32_t usage)
{
    IndexBuffer* obj3 = (IndexBuffer*)uNew(IndexBuffer_typeof());
    obj3->ctor_1(data, usage);
    return obj3;
}

// public IndexBuffer New(Uno.Buffer data, Uno.Graphics.BufferUsage usage) [static] :36
IndexBuffer* IndexBuffer::New3(::g::Uno::Buffer* data, int32_t usage)
{
    IndexBuffer* obj5 = (IndexBuffer*)uNew(IndexBuffer_typeof());
    obj5->ctor_3(data, usage);
    return obj5;
}

// public IndexBuffer New(ushort[] data, Uno.Graphics.BufferUsage usage) [static] :29
IndexBuffer* IndexBuffer::New5(uArray* data, int32_t usage)
{
    IndexBuffer* obj4 = (IndexBuffer*)uNew(IndexBuffer_typeof());
    obj4->ctor_5(data, usage);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum IndexType :21
uEnumType* IndexType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.IndexType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Undefined", 0LL,
        "Byte", 1LL,
        "UShort", 2LL,
        "UInt", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum PolygonFace :109
uEnumType* PolygonFace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.PolygonFace", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Front", 1LL,
        "Back", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum PolygonWinding :117
uEnumType* PolygonWinding_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.PolygonWinding", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Clockwise", 0LL,
        "CounterClockwise", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum PrimitiveType :12
uEnumType* PrimitiveType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.PrimitiveType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Triangles", 1LL,
        "Lines", 2LL,
        "Points", 3LL,
        "TriangleStrip", 4LL,
        "LineStrip", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/RenderTarget.uno
// -------------------------------------------------------------------------------------

// public sealed class RenderTarget :8
// {
static void RenderTarget_build(uType* type)
{
    ::STRINGS[3] = uString::Const("RenderTarget");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(RenderTarget_type, interface0));
    type->SetFields(0,
        ::g::OpenGL::GLRenderbufferHandle_typeof(), offsetof(RenderTarget, _GLDepthBufferHandle), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(RenderTarget, _GLFramebufferHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(RenderTarget, _HasDepth), 0,
        ::g::Uno::Bool_typeof(), offsetof(RenderTarget, _IsDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(RenderTarget, _OwnsGLDepthBufferHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(RenderTarget, _OwnsGLFramebufferHandle), 0,
        ::g::Uno::Int2_typeof(), offsetof(RenderTarget, _Size), 0);
}

RenderTarget_type* RenderTarget_typeof()
{
    static uSStrong<RenderTarget_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RenderTarget);
    options.TypeSize = sizeof(RenderTarget_type);
    type = (RenderTarget_type*)uClassType::New("Uno.Graphics.RenderTarget", options);
    type->fp_build_ = RenderTarget_build;
    type->fp_ctor_ = (void*)RenderTarget__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RenderTarget__Dispose_fn;
    return type;
}

// internal RenderTarget() :46
void RenderTarget__ctor__fn(RenderTarget* __this)
{
    __this->ctor_();
}

// public static Uno.Graphics.RenderTarget Create(texture2D texture, int mip, bool depth) :51
void RenderTarget__Create_fn(::g::Uno::Graphics::Texture2D* texture, int32_t* mip, bool* depth, RenderTarget** __retval)
{
    *__retval = RenderTarget::Create(texture, *mip, *depth);
}

// public void Dispose() :74
void RenderTarget__Dispose_fn(RenderTarget* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLRenderbufferHandle get_GLDepthBufferHandle() :30
void RenderTarget__get_GLDepthBufferHandle_fn(RenderTarget* __this, uint32_t* __retval)
{
    *__retval = __this->GLDepthBufferHandle();
}

// internal generated extern void set_GLDepthBufferHandle(OpenGL.GLRenderbufferHandle value) :31
void RenderTarget__set_GLDepthBufferHandle_fn(RenderTarget* __this, uint32_t* value)
{
    __this->GLDepthBufferHandle(*value);
}

// public generated extern OpenGL.GLFramebufferHandle get_GLFramebufferHandle() :24
void RenderTarget__get_GLFramebufferHandle_fn(RenderTarget* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebufferHandle();
}

// internal generated extern void set_GLFramebufferHandle(OpenGL.GLFramebufferHandle value) :25
void RenderTarget__set_GLFramebufferHandle_fn(RenderTarget* __this, uint32_t* value)
{
    __this->GLFramebufferHandle(*value);
}

// public generated bool get_HasDepth() :18
void RenderTarget__get_HasDepth_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->HasDepth();
}

// internal generated void set_HasDepth(bool value) :19
void RenderTarget__set_HasDepth_fn(RenderTarget* __this, bool* value)
{
    __this->HasDepth(*value);
}

// public generated bool get_IsDisposed() :70
void RenderTarget__get_IsDisposed_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :71
void RenderTarget__set_IsDisposed_fn(RenderTarget* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// internal RenderTarget New() :46
void RenderTarget__New1_fn(RenderTarget** __retval)
{
    *__retval = RenderTarget::New1();
}

// internal generated extern bool get_OwnsGLDepthBufferHandle() :42
void RenderTarget__get_OwnsGLDepthBufferHandle_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->OwnsGLDepthBufferHandle();
}

// internal generated extern void set_OwnsGLDepthBufferHandle(bool value) :43
void RenderTarget__set_OwnsGLDepthBufferHandle_fn(RenderTarget* __this, bool* value)
{
    __this->OwnsGLDepthBufferHandle(*value);
}

// internal generated extern bool get_OwnsGLFramebufferHandle() :36
void RenderTarget__get_OwnsGLFramebufferHandle_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->OwnsGLFramebufferHandle();
}

// internal generated extern void set_OwnsGLFramebufferHandle(bool value) :37
void RenderTarget__set_OwnsGLFramebufferHandle_fn(RenderTarget* __this, bool* value)
{
    __this->OwnsGLFramebufferHandle(*value);
}

// public generated int2 get_Size() :12
void RenderTarget__get_Size_fn(RenderTarget* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// internal generated void set_Size(int2 value) :13
void RenderTarget__set_Size_fn(RenderTarget* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// internal RenderTarget() [instance] :46
void RenderTarget::ctor_()
{
}

// public void Dispose() [instance] :74
void RenderTarget::Dispose()
{
    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[3/*"RenderTarget"*/]));
    else
    {
        if (OwnsGLDepthBufferHandle() && ::g::OpenGL::GLRenderbufferHandle::op_Inequality(GLDepthBufferHandle(), ::g::OpenGL::GLRenderbufferHandle::Zero_))
            ::g::OpenGL::GL::DeleteRenderbuffer(GLDepthBufferHandle());

        if (OwnsGLFramebufferHandle() && ::g::OpenGL::GLFramebufferHandle::op_Inequality(GLFramebufferHandle(), ::g::OpenGL::GLFramebufferHandle::Zero_))
            ::g::OpenGL::GL::DeleteFramebuffer(GLFramebufferHandle());
    }

    IsDisposed(true);
}

// public generated extern OpenGL.GLRenderbufferHandle get_GLDepthBufferHandle() [instance] :30
uint32_t RenderTarget::GLDepthBufferHandle()
{
    return _GLDepthBufferHandle;
}

// internal generated extern void set_GLDepthBufferHandle(OpenGL.GLRenderbufferHandle value) [instance] :31
void RenderTarget::GLDepthBufferHandle(uint32_t value)
{
    _GLDepthBufferHandle = value;
}

// public generated extern OpenGL.GLFramebufferHandle get_GLFramebufferHandle() [instance] :24
uint32_t RenderTarget::GLFramebufferHandle()
{
    return _GLFramebufferHandle;
}

// internal generated extern void set_GLFramebufferHandle(OpenGL.GLFramebufferHandle value) [instance] :25
void RenderTarget::GLFramebufferHandle(uint32_t value)
{
    _GLFramebufferHandle = value;
}

// public generated bool get_HasDepth() [instance] :18
bool RenderTarget::HasDepth()
{
    return _HasDepth;
}

// internal generated void set_HasDepth(bool value) [instance] :19
void RenderTarget::HasDepth(bool value)
{
    _HasDepth = value;
}

// public generated bool get_IsDisposed() [instance] :70
bool RenderTarget::IsDisposed()
{
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :71
void RenderTarget::IsDisposed(bool value)
{
    _IsDisposed = value;
}

// internal generated extern bool get_OwnsGLDepthBufferHandle() [instance] :42
bool RenderTarget::OwnsGLDepthBufferHandle()
{
    return _OwnsGLDepthBufferHandle;
}

// internal generated extern void set_OwnsGLDepthBufferHandle(bool value) [instance] :43
void RenderTarget::OwnsGLDepthBufferHandle(bool value)
{
    _OwnsGLDepthBufferHandle = value;
}

// internal generated extern bool get_OwnsGLFramebufferHandle() [instance] :36
bool RenderTarget::OwnsGLFramebufferHandle()
{
    return _OwnsGLFramebufferHandle;
}

// internal generated extern void set_OwnsGLFramebufferHandle(bool value) [instance] :37
void RenderTarget::OwnsGLFramebufferHandle(bool value)
{
    _OwnsGLFramebufferHandle = value;
}

// public generated int2 get_Size() [instance] :12
::g::Uno::Int2 RenderTarget::Size()
{
    return _Size;
}

// internal generated void set_Size(int2 value) [instance] :13
void RenderTarget::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public static Uno.Graphics.RenderTarget Create(texture2D texture, int mip, bool depth) [static] :51
RenderTarget* RenderTarget::Create(::g::Uno::Graphics::Texture2D* texture, int32_t mip, bool depth)
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::CreateRenderTarget(3553, uPtr(texture)->GLTextureHandle(), mip, ::g::Uno::Graphics::TextureHelpers::GetMipSize(texture, mip), depth);
}

// internal RenderTarget New() [static] :46
RenderTarget* RenderTarget::New1()
{
    RenderTarget* obj1 = (RenderTarget*)uNew(RenderTarget_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/SamplerState.uno
// -------------------------------------------------------------------------------------

// public struct SamplerState :21
// {
static void SamplerState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Graphics::TextureFilter_typeof(), offsetof(SamplerState, MinFilter), 0,
        ::g::Uno::Graphics::TextureFilter_typeof(), offsetof(SamplerState, MagFilter), 0,
        ::g::Uno::Graphics::TextureAddressMode_typeof(), offsetof(SamplerState, AddressU), 0,
        ::g::Uno::Graphics::TextureAddressMode_typeof(), offsetof(SamplerState, AddressV), 0,
        ::g::Uno::Graphics::TextureAddressMode_typeof(), offsetof(SamplerState, AddressW), 0);
}

uStructType* SamplerState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.Alignment = alignof(SamplerState);
    options.ValueSize = sizeof(SamplerState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.SamplerState", options);
    type->fp_build_ = SamplerState_build;
    return type;
}

// public SamplerState(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) :49
void SamplerState__ctor_1_fn(SamplerState* __this, int32_t* minFilter, int32_t* magFilter, int32_t* addressMode)
{
    __this->ctor_1(*minFilter, *magFilter, *addressMode);
}

// public static Uno.Graphics.SamplerState get_LinearClamp() :84
void SamplerState__get_LinearClamp_fn(SamplerState* __retval)
{
    *__retval = SamplerState__LinearClamp();
}

// public static Uno.Graphics.SamplerState get_LinearWrap() :79
void SamplerState__get_LinearWrap_fn(SamplerState* __retval)
{
    *__retval = SamplerState__LinearWrap();
}

// public Uno.Graphics.TextureFilter get_MinFilterNoMipmap() :31
void SamplerState__get_MinFilterNoMipmap_fn(SamplerState* __this, int32_t* __retval)
{
    *__retval = __this->MinFilterNoMipmap();
}

// public static Uno.Graphics.SamplerState get_NearestClamp() :74
void SamplerState__get_NearestClamp_fn(SamplerState* __retval)
{
    *__retval = SamplerState__NearestClamp();
}

// public SamplerState New(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) :49
void SamplerState__New1_fn(int32_t* minFilter, int32_t* magFilter, int32_t* addressMode, SamplerState* __retval)
{
    *__retval = SamplerState__New1(*minFilter, *magFilter, *addressMode);
}

// public static Uno.Graphics.SamplerState get_TrilinearClamp() :94
void SamplerState__get_TrilinearClamp_fn(SamplerState* __retval)
{
    *__retval = SamplerState__TrilinearClamp();
}

// public SamplerState(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) [instance] :49
void SamplerState::ctor_1(int32_t minFilter, int32_t magFilter, int32_t addressMode)
{
    MinFilter = minFilter;
    MagFilter = magFilter;
    AddressU = addressMode;
    AddressV = addressMode;
    AddressW = addressMode;
}

// public Uno.Graphics.TextureFilter get_MinFilterNoMipmap() [instance] :31
int32_t SamplerState::MinFilterNoMipmap()
{
    switch (MinFilter)
    {
        case 9984:
        case 9985:
            return 9728;
        case 9986:
        case 9987:
            return 9729;
        default:
            return MinFilter;
    }
}

// public SamplerState New(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) [static] :49
SamplerState SamplerState__New1(int32_t minFilter, int32_t magFilter, int32_t addressMode)
{
    SamplerState obj1;
    obj1.ctor_1(minFilter, magFilter, addressMode);
    return obj1;
}

// public static Uno.Graphics.SamplerState get_LinearClamp() [static] :84
SamplerState SamplerState__LinearClamp()
{
    return SamplerState__New1(9729, 9729, 33071);
}

// public static Uno.Graphics.SamplerState get_LinearWrap() [static] :79
SamplerState SamplerState__LinearWrap()
{
    return SamplerState__New1(9729, 9729, 10497);
}

// public static Uno.Graphics.SamplerState get_NearestClamp() [static] :74
SamplerState SamplerState__NearestClamp()
{
    return SamplerState__New1(9728, 9728, 33071);
}

// public static Uno.Graphics.SamplerState get_TrilinearClamp() [static] :94
SamplerState SamplerState__TrilinearClamp()
{
    return SamplerState__New1(9987, 9729, 33071);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Texture2D.uno
// ----------------------------------------------------------------------------------

// public intrinsic sealed class Texture2D :10
// {
static void Texture2D_build(uType* type)
{
    ::STRINGS[4] = uString::Const("OpenGL ES ");
    ::STRINGS[5] = uString::Const("**** Invalid version string: ");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Texture2D.uno");
    ::STRINGS[7] = uString::Const("Texture2D");
    ::STRINGS[8] = uString::Const("Texture does not support mipmap");
    ::STRINGS[9] = uString::Const("Texture is immutable and cannot be updated");
    ::STRINGS[10] = uString::Const("GL_OES_texture_npot");
    ::TYPES[0] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[1] = ::g::Uno::FormatException_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Texture2D_type, interface0));
    type->SetFields(0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(Texture2D, _Format), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(Texture2D, _GLTextureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(Texture2D, _IsDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(Texture2D, _MipCount), 0,
        ::g::Uno::Int2_typeof(), offsetof(Texture2D, _Size), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&Texture2D::_maxSize_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Texture2D::_haveNonPow2SupportValid_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Texture2D::_haveNonPow2Support_, uFieldFlagsStatic);
}

Texture2D_type* Texture2D_typeof()
{
    static uSStrong<Texture2D_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Texture2D);
    options.TypeSize = sizeof(Texture2D_type);
    type = (Texture2D_type*)uClassType::New("Uno.Graphics.Texture2D", options);
    type->fp_build_ = Texture2D_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Texture2D__Dispose_fn;
    return type;
}

// public Texture2D(int2 size, Uno.Graphics.Format format, bool mipmap) :133
void Texture2D__ctor__fn(Texture2D* __this, ::g::Uno::Int2* size, int32_t* format, bool* mipmap)
{
    __this->ctor_(*size, *format, *mipmap);
}

// public extern Texture2D(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) :125
void Texture2D__ctor_1_fn(Texture2D* __this, uint32_t* handle, ::g::Uno::Int2* size, int32_t* mipCount, int32_t* format)
{
    __this->ctor_1(*handle, *size, *mipCount, *format);
}

// private static extern bool CheckExtensionSupport(string extensionName) :76
void Texture2D__CheckExtensionSupport_fn(uString* extensionName, bool* __retval)
{
    *__retval = Texture2D::CheckExtensionSupport(extensionName);
}

// private static extern bool CheckGLES3Support() :57
void Texture2D__CheckGLES3Support_fn(bool* __retval)
{
    *__retval = Texture2D::CheckGLES3Support();
}

// public void Dispose() :153
void Texture2D__Dispose_fn(Texture2D* __this)
{
    __this->Dispose();
}

// public generated Uno.Graphics.Format get_Format() :115
void Texture2D__get_Format_fn(Texture2D* __this, int32_t* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :116
void Texture2D__set_Format_fn(Texture2D* __this, int32_t* value)
{
    __this->Format(*value);
}

// public void GenerateMipmap() :349
void Texture2D__GenerateMipmap_fn(Texture2D* __this)
{
    __this->GenerateMipmap();
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() :121
void Texture2D__get_GLTextureHandle_fn(Texture2D* __this, uint32_t* __retval)
{
    *__retval = __this->GLTextureHandle();
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) :122
void Texture2D__set_GLTextureHandle_fn(Texture2D* __this, uint32_t* value)
{
    __this->GLTextureHandle(*value);
}

// public static bool get_HaveNonPow2Support() :91
void Texture2D__get_HaveNonPow2Support_fn(bool* __retval)
{
    *__retval = Texture2D::HaveNonPow2Support();
}

// public generated bool get_IsDisposed() :149
void Texture2D__get_IsDisposed_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :150
void Texture2D__set_IsDisposed_fn(Texture2D* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public bool get_IsMipmap() :340
void Texture2D__get_IsMipmap_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->IsMipmap();
}

// public bool get_IsPow2() :335
void Texture2D__get_IsPow2_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->IsPow2();
}

// public static int get_MaxSize() :44
void Texture2D__get_MaxSize_fn(int32_t* __retval)
{
    *__retval = Texture2D::MaxSize();
}

// public generated int get_MipCount() :109
void Texture2D__get_MipCount_fn(Texture2D* __this, int32_t* __retval)
{
    *__retval = __this->MipCount();
}

// private generated void set_MipCount(int value) :110
void Texture2D__set_MipCount_fn(Texture2D* __this, int32_t* value)
{
    __this->MipCount(*value);
}

// public Texture2D New(int2 size, Uno.Graphics.Format format, bool mipmap) :133
void Texture2D__New1_fn(::g::Uno::Int2* size, int32_t* format, bool* mipmap, Texture2D** __retval)
{
    *__retval = Texture2D::New1(*size, *format, *mipmap);
}

// public extern Texture2D New(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) :125
void Texture2D__New2_fn(uint32_t* handle, ::g::Uno::Int2* size, int32_t* mipCount, int32_t* format, Texture2D** __retval)
{
    *__retval = Texture2D::New2(*handle, *size, *mipCount, *format);
}

// public generated int2 get_Size() :37
void Texture2D__get_Size_fn(Texture2D* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :38
void Texture2D__set_Size_fn(Texture2D* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public bool get_SupportsMipmap() :346
void Texture2D__get_SupportsMipmap_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->SupportsMipmap();
}

// public void Update(byte[] mip0) :197
void Texture2D__Update_fn(Texture2D* __this, uArray* mip0)
{
    __this->Update(mip0);
}

// public void Update(Uno.Buffer mip0) :221
void Texture2D__Update3_fn(Texture2D* __this, ::g::Uno::Buffer* mip0)
{
    __this->Update3(mip0);
}

int32_t Texture2D::_maxSize_;
bool Texture2D::_haveNonPow2SupportValid_;
bool Texture2D::_haveNonPow2Support_;

// public Texture2D(int2 size, Uno.Graphics.Format format, bool mipmap) [instance] :133
void Texture2D::ctor_(::g::Uno::Int2 size, int32_t format, bool mipmap)
{
    GLTextureHandle(::g::OpenGL::GL::CreateTexture());
    Size(size);
    Format(format);
    MipCount(mipmap ? ::g::Uno::Graphics::TextureHelpers::GetMipCount1(size) : 1);
    Update(NULL);
}

// public extern Texture2D(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) [instance] :125
void Texture2D::ctor_1(uint32_t handle, ::g::Uno::Int2 size, int32_t mipCount, int32_t format)
{
    GLTextureHandle(handle);
    Size(size);
    MipCount(mipCount);
    Format(format);
}

// public void Dispose() [instance] :153
void Texture2D::Dispose()
{
    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[7/*"Texture2D"*/]));
    else
        ::g::OpenGL::GL::DeleteTexture(GLTextureHandle());

    IsDisposed(true);
}

// public generated Uno.Graphics.Format get_Format() [instance] :115
int32_t Texture2D::Format()
{
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :116
void Texture2D::Format(int32_t value)
{
    _Format = value;
}

// public void GenerateMipmap() [instance] :349
void Texture2D::GenerateMipmap()
{
    if (!IsMipmap())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[8/*"Texture doe...*/]));
    else
    {
        ::g::OpenGL::GL::BindTexture(3553, GLTextureHandle());
        ::g::OpenGL::GL::GenerateMipmap(3553);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    }
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() [instance] :121
uint32_t Texture2D::GLTextureHandle()
{
    return _GLTextureHandle;
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) [instance] :122
void Texture2D::GLTextureHandle(uint32_t value)
{
    _GLTextureHandle = value;
}

// public generated bool get_IsDisposed() [instance] :149
bool Texture2D::IsDisposed()
{
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :150
void Texture2D::IsDisposed(bool value)
{
    _IsDisposed = value;
}

// public bool get_IsMipmap() [instance] :340
bool Texture2D::IsMipmap()
{
    return (MipCount() > 1) && IsPow2();
}

// public bool get_IsPow2() [instance] :335
bool Texture2D::IsPow2()
{
    return ::g::Uno::Math::IsPow2(Size().X) && ::g::Uno::Math::IsPow2(Size().Y);
}

// public generated int get_MipCount() [instance] :109
int32_t Texture2D::MipCount()
{
    return _MipCount;
}

// private generated void set_MipCount(int value) [instance] :110
void Texture2D::MipCount(int32_t value)
{
    _MipCount = value;
}

// public generated int2 get_Size() [instance] :37
::g::Uno::Int2 Texture2D::Size()
{
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :38
void Texture2D::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public bool get_SupportsMipmap() [instance] :346
bool Texture2D::SupportsMipmap()
{
    return IsMipmap();
}

// public void Update(byte[] mip0) [instance] :197
void Texture2D::Update(uArray* mip0)
{
    if (Format() == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"Texture is ...*/]));
    else
    {
        ::g::OpenGL::GL::ActiveTexture(33984);
        ::g::OpenGL::GL::BindTexture(3553, GLTextureHandle());
        ::g::OpenGL::GL::TexParameter(3553, 10240, 9729);
        ::g::OpenGL::GL::TexParameter(3553, 10241, 9729);
        ::g::OpenGL::GL::TexParameter(3553, 10242, 33071);
        ::g::OpenGL::GL::TexParameter(3553, 10243, 33071);
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::TexImage2DFromBytes(3553, Size().X, Size().Y, 0, Format(), mip0);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    }
}

// public void Update(Uno.Buffer mip0) [instance] :221
void Texture2D::Update3(::g::Uno::Buffer* mip0)
{
    if (Format() == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"Texture is ...*/]));
    else
    {
        ::g::OpenGL::GL::ActiveTexture(33984);
        ::g::OpenGL::GL::BindTexture(3553, GLTextureHandle());
        ::g::OpenGL::GL::TexParameter(3553, 10240, 9729);
        ::g::OpenGL::GL::TexParameter(3553, 10241, 9729);
        ::g::OpenGL::GL::TexParameter(3553, 10242, 33071);
        ::g::OpenGL::GL::TexParameter(3553, 10243, 33071);
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::TexImage2DFromBuffer(3553, Size().X, Size().Y, 0, Format(), mip0);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    }
}

// private static extern bool CheckExtensionSupport(string extensionName) [static] :76
bool Texture2D::CheckExtensionSupport(uString* extensionName)
{
    uArray* extensions = ::g::Uno::String::Split(uPtr(::g::OpenGL::GL::GetString(7939)), uArray::Init<int32_t>(::TYPES[0/*char[]*/], 1, ' '));

    for (int32_t index2 = 0, length3 = uPtr(extensions)->Length(); index2 < length3; ++index2)
    {
        uString* e = uPtr(extensions)->Strong<uString*>(index2);

        if (::g::Uno::String::Equals2(uPtr(e), extensionName))
            return true;
    }

    return false;
}

// private static extern bool CheckGLES3Support() [static] :57
bool Texture2D::CheckGLES3Support()
{
    uString* versionString = ::g::OpenGL::GL::GetString(7938);

    if (::g::Uno::String::StartsWith(uPtr(versionString), ::STRINGS[4/*"OpenGL ES "*/]))
    {
        uString* majorVersionString = uPtr(::g::Uno::String::Split(uPtr(::g::Uno::String::Substring(uPtr(versionString), 10)), uArray::Init<int32_t>(::TYPES[0/*char[]*/], 1, '.')))->Strong<uString*>(0);

        try
        {
            {
                return ::g::Uno::Int::Parse(majorVersionString) >= 3;
            }
        }

        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[1/*Uno.FormatException*/]))
            {
                ::g::Uno::FormatException* e = (::g::Uno::FormatException*)__t.Exception;
                ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::STRINGS[5/*"**** Invali...*/], versionString), 0, ::STRINGS[6/*"/usr/local/...*/], 69);
            }
            else             throw __t;
        }
    }

    return false;
}

// public Texture2D New(int2 size, Uno.Graphics.Format format, bool mipmap) [static] :133
Texture2D* Texture2D::New1(::g::Uno::Int2 size, int32_t format, bool mipmap)
{
    Texture2D* obj5 = (Texture2D*)uNew(Texture2D_typeof());
    obj5->ctor_(size, format, mipmap);
    return obj5;
}

// public extern Texture2D New(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) [static] :125
Texture2D* Texture2D::New2(uint32_t handle, ::g::Uno::Int2 size, int32_t mipCount, int32_t format)
{
    Texture2D* obj4 = (Texture2D*)uNew(Texture2D_typeof());
    obj4->ctor_1(handle, size, mipCount, format);
    return obj4;
}

// public static bool get_HaveNonPow2Support() [static] :91
bool Texture2D::HaveNonPow2Support()
{
    if (!Texture2D::_haveNonPow2SupportValid_)
    {
        Texture2D::_haveNonPow2Support_ = (Texture2D::CheckGLES3Support() || Texture2D::CheckExtensionSupport(::STRINGS[10/*"GL_OES_text...*/]));
        Texture2D::_haveNonPow2SupportValid_ = true;
    }

    return Texture2D::_haveNonPow2Support_;
}

// public static int get_MaxSize() [static] :44
int32_t Texture2D::MaxSize()
{
    if (Texture2D::_maxSize_ == 0)
        Texture2D::_maxSize_ = ::g::OpenGL::GL::GetInteger1(3379);

    return Texture2D::_maxSize_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/SamplerState.uno
// -------------------------------------------------------------------------------------

// public enum TextureAddressMode :15
uEnumType* TextureAddressMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.TextureAddressMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Wrap", 10497LL,
        "Clamp", 33071LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/SamplerState.uno
// -------------------------------------------------------------------------------------

// public enum TextureFilter :4
uEnumType* TextureFilter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.TextureFilter", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/TextureHelpers.uno
// ---------------------------------------------------------------------------------------

// public static class TextureHelpers :5
// {
static void TextureHelpers_build(uType* type)
{
}

uClassType* TextureHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.TextureHelpers", options);
    type->fp_build_ = TextureHelpers_build;
    return type;
}

// public static int GetMipCount(int2 size) :41
void TextureHelpers__GetMipCount1_fn(::g::Uno::Int2* size, int32_t* __retval)
{
    *__retval = TextureHelpers::GetMipCount1(*size);
}

// public static int2 GetMipSize(texture2D texture, int mip) :7
void TextureHelpers__GetMipSize_fn(::g::Uno::Graphics::Texture2D* texture, int32_t* mip, ::g::Uno::Int2* __retval)
{
    *__retval = TextureHelpers::GetMipSize(texture, *mip);
}

// public static int GetMipCount(int2 size) [static] :41
int32_t TextureHelpers::GetMipCount1(::g::Uno::Int2 size)
{
    int32_t result = 0;

    do
    {
        result++;
        size.X = (size.X >> 1);
        size.Y = (size.Y >> 1);
    }
    while ((size.X > 0) && (size.Y > 0));

    return result;
}

// public static int2 GetMipSize(texture2D texture, int mip) [static] :7
::g::Uno::Int2 TextureHelpers::GetMipSize(::g::Uno::Graphics::Texture2D* texture, int32_t mip)
{
    ::g::Uno::Int2 size = uPtr(texture)->Size();

    if (mip > 0)
    {
        size.X = (size.X >> mip);
        size.Y = (size.Y >> mip);

        if (size.X < 0)
            size.X = 1;

        if (size.Y < 0)
            size.Y = 1;
    }

    return size;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/VertexAttributeInfo.uno
// --------------------------------------------------------------------------------------------

// public struct VertexAttributeInfo :3
// {
static void VertexAttributeInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(VertexAttributeInfo, Type), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(VertexAttributeInfo, Buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(VertexAttributeInfo, BufferStride), 0,
        ::g::Uno::Int_typeof(), offsetof(VertexAttributeInfo, BufferOffset), 0);
}

uStructType* VertexAttributeInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(VertexAttributeInfo);
    options.ValueSize = sizeof(VertexAttributeInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.VertexAttributeInfo", options);
    type->fp_build_ = VertexAttributeInfo_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Enums.uno
// ------------------------------------------------------------------------------

// public enum VertexAttributeType :29
uEnumType* VertexAttributeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.VertexAttributeType", ::g::Uno::Int_typeof(), 21);
    type->SetLiterals(
        "Undefined", 0LL,
        "Float", 1LL,
        "Float2", 2LL,
        "Float3", 3LL,
        "Float4", 4LL,
        "Short", 5LL,
        "ShortNormalized", 6LL,
        "Short2", 7LL,
        "Short2Normalized", 8LL,
        "Short4", 9LL,
        "Short4Normalized", 10LL,
        "UShort", 11LL,
        "UShortNormalized", 12LL,
        "UShort2", 13LL,
        "UShort2Normalized", 14LL,
        "UShort4", 15LL,
        "UShort4Normalized", 16LL,
        "SByte4", 17LL,
        "SByte4Normalized", 18LL,
        "Byte4", 19LL,
        "Byte4Normalized", 20LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/VertexBuffer.uno
// -------------------------------------------------------------------------------------

// public sealed class VertexBuffer :6
// {
static void VertexBuffer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer_type, interface0));
    type->SetFields(5);
}

::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof()
{
    static uSStrong< ::g::Uno::Graphics::DeviceBuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::DeviceBuffer_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VertexBuffer);
    options.TypeSize = sizeof(::g::Uno::Graphics::DeviceBuffer_type);
    type = (::g::Uno::Graphics::DeviceBuffer_type*)uClassType::New("Uno.Graphics.VertexBuffer", options);
    type->fp_build_ = VertexBuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Graphics::DeviceBuffer__Dispose_fn;
    return type;
}

// public VertexBuffer(byte[] data, Uno.Graphics.BufferUsage usage) :23
void VertexBuffer__ctor_1_fn(VertexBuffer* __this, uArray* data, int32_t* usage)
{
    __this->ctor_1(data, *usage);
}

// public VertexBuffer(float2[] data, Uno.Graphics.BufferUsage usage) :35
void VertexBuffer__ctor_3_fn(VertexBuffer* __this, uArray* data, int32_t* usage)
{
    __this->ctor_3(data, *usage);
}

// public VertexBuffer(float3[] data, Uno.Graphics.BufferUsage usage) :41
void VertexBuffer__ctor_4_fn(VertexBuffer* __this, uArray* data, int32_t* usage)
{
    __this->ctor_4(data, *usage);
}

// public VertexBuffer(Uno.Graphics.BufferUsage usage) :8
void VertexBuffer__ctor_8_fn(VertexBuffer* __this, int32_t* usage)
{
    __this->ctor_8(*usage);
}

// public VertexBuffer New(byte[] data, Uno.Graphics.BufferUsage usage) :23
void VertexBuffer__New1_fn(uArray* data, int32_t* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New1(data, *usage);
}

// public VertexBuffer New(float2[] data, Uno.Graphics.BufferUsage usage) :35
void VertexBuffer__New3_fn(uArray* data, int32_t* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New3(data, *usage);
}

// public VertexBuffer New(float3[] data, Uno.Graphics.BufferUsage usage) :41
void VertexBuffer__New4_fn(uArray* data, int32_t* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New4(data, *usage);
}

// public VertexBuffer New(Uno.Graphics.BufferUsage usage) :8
void VertexBuffer__New8_fn(int32_t* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New8(*usage);
}

// public void Update(float2[] data) :65
void VertexBuffer__Update4_fn(VertexBuffer* __this, uArray* data)
{
    __this->Update4(data);
}

// public void Update(float3[] data) :70
void VertexBuffer__Update5_fn(VertexBuffer* __this, uArray* data)
{
    __this->Update5(data);
}

// public VertexBuffer(byte[] data, Uno.Graphics.BufferUsage usage) [instance] :23
void VertexBuffer::ctor_1(uArray* data, int32_t usage)
{
    ctor_8(usage);
    Update(data);
}

// public VertexBuffer(float2[] data, Uno.Graphics.BufferUsage usage) [instance] :35
void VertexBuffer::ctor_3(uArray* data, int32_t usage)
{
    ctor_8(usage);
    Update4(data);
}

// public VertexBuffer(float3[] data, Uno.Graphics.BufferUsage usage) [instance] :41
void VertexBuffer::ctor_4(uArray* data, int32_t usage)
{
    ctor_8(usage);
    Update5(data);
}

// public VertexBuffer(Uno.Graphics.BufferUsage usage) [instance] :8
void VertexBuffer::ctor_8(int32_t usage)
{
    ctor_(usage);
    GLInit(34962);
}

// public void Update(float2[] data) [instance] :65
void VertexBuffer::Update4(uArray* data)
{
    Update1(data, 8);
}

// public void Update(float3[] data) [instance] :70
void VertexBuffer::Update5(uArray* data)
{
    Update1(data, 12);
}

// public VertexBuffer New(byte[] data, Uno.Graphics.BufferUsage usage) [static] :23
VertexBuffer* VertexBuffer::New1(uArray* data, int32_t usage)
{
    VertexBuffer* obj3 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj3->ctor_1(data, usage);
    return obj3;
}

// public VertexBuffer New(float2[] data, Uno.Graphics.BufferUsage usage) [static] :35
VertexBuffer* VertexBuffer::New3(uArray* data, int32_t usage)
{
    VertexBuffer* obj5 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj5->ctor_3(data, usage);
    return obj5;
}

// public VertexBuffer New(float3[] data, Uno.Graphics.BufferUsage usage) [static] :41
VertexBuffer* VertexBuffer::New4(uArray* data, int32_t usage)
{
    VertexBuffer* obj6 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj6->ctor_4(data, usage);
    return obj6;
}

// public VertexBuffer New(Uno.Graphics.BufferUsage usage) [static] :8
VertexBuffer* VertexBuffer::New8(int32_t usage)
{
    VertexBuffer* obj1 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj1->ctor_8(usage);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/VideoTexture.uno
// -------------------------------------------------------------------------------------

// public intrinsic sealed class VideoTexture :9
// {
static void VideoTexture_build(uType* type)
{
    ::STRINGS[11] = uString::Const("VideoTexture");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(VideoTexture_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(VideoTexture, IsMipmap), 0,
        ::g::Uno::Bool_typeof(), offsetof(VideoTexture, IsPow2), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(VideoTexture, _GLTextureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(VideoTexture, _IsDisposed), 0);
}

VideoTexture_type* VideoTexture_typeof()
{
    static uSStrong<VideoTexture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoTexture);
    options.TypeSize = sizeof(VideoTexture_type);
    type = (VideoTexture_type*)uClassType::New("Uno.Graphics.VideoTexture", options);
    type->fp_build_ = VideoTexture_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoTexture__Dispose_fn;
    return type;
}

// public extern VideoTexture(OpenGL.GLTextureHandle handle) :23
void VideoTexture__ctor__fn(VideoTexture* __this, uint32_t* handle)
{
    __this->ctor_(*handle);
}

// public void Dispose() :34
void VideoTexture__Dispose_fn(VideoTexture* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() :19
void VideoTexture__get_GLTextureHandle_fn(VideoTexture* __this, uint32_t* __retval)
{
    *__retval = __this->GLTextureHandle();
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) :20
void VideoTexture__set_GLTextureHandle_fn(VideoTexture* __this, uint32_t* value)
{
    __this->GLTextureHandle(*value);
}

// public generated bool get_IsDisposed() :30
void VideoTexture__get_IsDisposed_fn(VideoTexture* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :31
void VideoTexture__set_IsDisposed_fn(VideoTexture* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public extern VideoTexture New(OpenGL.GLTextureHandle handle) :23
void VideoTexture__New1_fn(uint32_t* handle, VideoTexture** __retval)
{
    *__retval = VideoTexture::New1(*handle);
}

// public extern VideoTexture(OpenGL.GLTextureHandle handle) [instance] :23
void VideoTexture::ctor_(uint32_t handle)
{
    GLTextureHandle(handle);
}

// public void Dispose() [instance] :34
void VideoTexture::Dispose()
{
    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[11/*"VideoTexture"*/]));
    else
        ::g::OpenGL::GL::DeleteTexture(GLTextureHandle());

    IsDisposed(true);
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() [instance] :19
uint32_t VideoTexture::GLTextureHandle()
{
    return _GLTextureHandle;
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) [instance] :20
void VideoTexture::GLTextureHandle(uint32_t value)
{
    _GLTextureHandle = value;
}

// public generated bool get_IsDisposed() [instance] :30
bool VideoTexture::IsDisposed()
{
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :31
void VideoTexture::IsDisposed(bool value)
{
    _IsDisposed = value;
}

// public extern VideoTexture New(OpenGL.GLTextureHandle handle) [static] :23
VideoTexture* VideoTexture::New1(uint32_t handle)
{
    VideoTexture* obj1 = (VideoTexture*)uNew(VideoTexture_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}} // ::g::Uno::Graphics
