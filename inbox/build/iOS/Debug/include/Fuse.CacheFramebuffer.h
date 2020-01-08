// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/CacheFramebuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct CacheFramebuffer;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{

// internal sealed class CacheFramebuffer :8
// {
uType* CacheFramebuffer_typeof();
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, int32_t* width, int32_t* height, int32_t* format, int32_t* flags);
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this);
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this);
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this);
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int32_t* __retval);
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int32_t* value);
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int32_t* __retval);
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int32_t* value);
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval);
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int32_t* __retval);
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int32_t* __retval);
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int32_t* value);
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval);
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval);
void CacheFramebuffer__New1_fn(int32_t* width, int32_t* height, int32_t* format, int32_t* flags, CacheFramebuffer** __retval);
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this);
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate);
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int32_t* __retval);
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int32_t* value);

struct CacheFramebuffer : uObject
{
    bool _isPinned;
    uStrong< ::g::Uno::Graphics::Framebuffer*> _fb;
    bool _isContentValid;
    int32_t _lastFrameUsed;
    int32_t _Flags;
    int32_t _Format;
    int32_t _Height;
    int32_t _Width;

    void ctor_(int32_t width, int32_t height, int32_t format, int32_t flags);
    void Collect();
    void Dispose();
    void EnsurePinned();
    int32_t Flags();
    void Flags(int32_t value);
    int32_t Format();
    void Format(int32_t value);
    ::g::Uno::Graphics::Framebuffer* Framebuffer();
    int32_t FramesSinceLastUse();
    int32_t Height();
    void Height(int32_t value);
    bool IsContentValid();
    bool IsPinned();
    void Pin();
    void Unpin(bool validate);
    int32_t Width();
    void Width(int32_t value);
    static CacheFramebuffer* New1(int32_t width, int32_t height, int32_t format, int32_t flags);
};
// }

}} // ::g::Fuse
