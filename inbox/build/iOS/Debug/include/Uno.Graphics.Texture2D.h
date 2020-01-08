// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/Texture2D.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Graphics{

// public intrinsic sealed class Texture2D :10
// {
struct Texture2D_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Texture2D_type* Texture2D_typeof();
void Texture2D__ctor__fn(Texture2D* __this, ::g::Uno::Int2* size, int32_t* format, bool* mipmap);
void Texture2D__ctor_1_fn(Texture2D* __this, uint32_t* handle, ::g::Uno::Int2* size, int32_t* mipCount, int32_t* format);
void Texture2D__CheckExtensionSupport_fn(uString* extensionName, bool* __retval);
void Texture2D__CheckGLES3Support_fn(bool* __retval);
void Texture2D__Dispose_fn(Texture2D* __this);
void Texture2D__get_Format_fn(Texture2D* __this, int32_t* __retval);
void Texture2D__set_Format_fn(Texture2D* __this, int32_t* value);
void Texture2D__GenerateMipmap_fn(Texture2D* __this);
void Texture2D__get_GLTextureHandle_fn(Texture2D* __this, uint32_t* __retval);
void Texture2D__set_GLTextureHandle_fn(Texture2D* __this, uint32_t* value);
void Texture2D__get_HaveNonPow2Support_fn(bool* __retval);
void Texture2D__get_IsDisposed_fn(Texture2D* __this, bool* __retval);
void Texture2D__set_IsDisposed_fn(Texture2D* __this, bool* value);
void Texture2D__get_IsMipmap_fn(Texture2D* __this, bool* __retval);
void Texture2D__get_IsPow2_fn(Texture2D* __this, bool* __retval);
void Texture2D__get_MaxSize_fn(int32_t* __retval);
void Texture2D__get_MipCount_fn(Texture2D* __this, int32_t* __retval);
void Texture2D__set_MipCount_fn(Texture2D* __this, int32_t* value);
void Texture2D__New1_fn(::g::Uno::Int2* size, int32_t* format, bool* mipmap, Texture2D** __retval);
void Texture2D__New2_fn(uint32_t* handle, ::g::Uno::Int2* size, int32_t* mipCount, int32_t* format, Texture2D** __retval);
void Texture2D__get_Size_fn(Texture2D* __this, ::g::Uno::Int2* __retval);
void Texture2D__set_Size_fn(Texture2D* __this, ::g::Uno::Int2* value);
void Texture2D__get_SupportsMipmap_fn(Texture2D* __this, bool* __retval);
void Texture2D__Update_fn(Texture2D* __this, uArray* mip0);
void Texture2D__Update3_fn(Texture2D* __this, ::g::Uno::Buffer* mip0);

struct Texture2D : uObject
{
    static int32_t _maxSize_;
    static int32_t& _maxSize() { return _maxSize_; }
    static bool _haveNonPow2SupportValid_;
    static bool& _haveNonPow2SupportValid() { return _haveNonPow2SupportValid_; }
    static bool _haveNonPow2Support_;
    static bool& _haveNonPow2Support() { return _haveNonPow2Support_; }
    int32_t _Format;
    uint32_t _GLTextureHandle;
    bool _IsDisposed;
    int32_t _MipCount;
    ::g::Uno::Int2 _Size;

    void ctor_(::g::Uno::Int2 size, int32_t format, bool mipmap);
    void ctor_1(uint32_t handle, ::g::Uno::Int2 size, int32_t mipCount, int32_t format);
    void Dispose();
    int32_t Format();
    void Format(int32_t value);
    void GenerateMipmap();
    uint32_t GLTextureHandle();
    void GLTextureHandle(uint32_t value);
    bool IsDisposed();
    void IsDisposed(bool value);
    bool IsMipmap();
    bool IsPow2();
    int32_t MipCount();
    void MipCount(int32_t value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    bool SupportsMipmap();
    void Update(uArray* mip0);
    void Update3(::g::Uno::Buffer* mip0);
    static bool CheckExtensionSupport(uString* extensionName);
    static bool CheckGLES3Support();
    static Texture2D* New1(::g::Uno::Int2 size, int32_t format, bool mipmap);
    static Texture2D* New2(uint32_t handle, ::g::Uno::Int2 size, int32_t mipCount, int32_t format);
    static bool HaveNonPow2Support();
    static int32_t MaxSize();
};
// }

}}} // ::g::Uno::Graphics
