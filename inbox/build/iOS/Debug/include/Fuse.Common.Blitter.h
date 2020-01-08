// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Blitter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Common{struct Blitter;}}}
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Common{

// internal sealed class Blitter :6
// {
uType* Blitter_typeof();
void Blitter__ctor__fn(Blitter* __this);
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Graphics::SamplerState* samplerState, bool* preMultiplied, ::g::Uno::Rect* textureRect, ::g::Uno::Float3x3* textureTransform, ::g::Uno::Rect* localRect, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float4* color, int32_t* cullFace);
void Blitter__Blit1_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* localToClipTransform, float* opacity, bool* flipY, int32_t* cullFace);
void Blitter__init_DrawCalls_fn(Blitter* __this);
void Blitter__New1_fn(Blitter** __retval);

struct Blitter : uObject
{
    static uSStrong<Blitter*> Singleton_;
    static uSStrong<Blitter*>& Singleton() { return Blitter_typeof()->Init(), Singleton_; }
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_v_254ef0e5_1_8_1;
    uStrong<uArray*> Blit_verts_254ef0e5_1_7_5;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Fill_v_181ef612_1_8_1;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_254ef0e5;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_181ef612;

    void ctor_();
    void Blit(::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Graphics::SamplerState samplerState, bool preMultiplied, ::g::Uno::Rect textureRect, ::g::Uno::Float3x3 textureTransform, ::g::Uno::Rect localRect, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float4 color, int32_t cullFace);
    void Blit1(::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Rect rect, ::g::Uno::Float4x4 localToClipTransform, float opacity, bool flipY, int32_t cullFace);
    void init_DrawCalls();
    static Blitter* New1();
};
// }

}}} // ::g::Fuse::Common
