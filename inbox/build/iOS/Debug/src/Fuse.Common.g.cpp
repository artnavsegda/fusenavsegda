// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseCommon_bundle.h>
#include <Fuse.Common.Blitter.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Common{

// /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Blitter.uno
// ----------------------------------------------------------------

// internal sealed class Blitter :6
// {
// static generated Blitter() :6
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::FuseCommon_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Blitter, Blit_v_254ef0e5_1_8_1), 0,
        ::TYPES[0/*float2[]*/], offsetof(Blitter, Blit_verts_254ef0e5_1_7_5), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Blitter, Fill_v_181ef612_1_8_1), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Blitter, _draw_254ef0e5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Blitter, _draw_181ef612), 0,
        type, (uintptr_t)&Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Common.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :6
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D texture, Uno.Graphics.SamplerState samplerState, bool preMultiplied, Uno.Rect textureRect, float3x3 textureTransform, Uno.Rect localRect, float4x4 localToClipTransform, float4 color, [Uno.Graphics.PolygonFace cullFace]) :25
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Graphics::SamplerState* samplerState, bool* preMultiplied, ::g::Uno::Rect* textureRect, ::g::Uno::Float3x3* textureTransform, ::g::Uno::Rect* localRect, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float4* color, int32_t* cullFace)
{
    __this->Blit(texture, *samplerState, *preMultiplied, *textureRect, *textureTransform, *localRect, *localToClipTransform, *color, *cullFace);
}

// public void Blit(texture2D texture, Uno.Rect rect, float4x4 localToClipTransform, [float opacity], [bool flipY], [Uno.Graphics.PolygonFace cullFace]) :10
void Blitter__Blit1_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* localToClipTransform, float* opacity, bool* flipY, int32_t* cullFace)
{
    __this->Blit1(texture, *rect, *localToClipTransform, *opacity, *flipY, *cullFace);
}

// private generated void init_DrawCalls() :6
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :6
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :6
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D texture, Uno.Graphics.SamplerState samplerState, bool preMultiplied, Uno.Rect textureRect, float3x3 textureTransform, Uno.Rect localRect, float4x4 localToClipTransform, float4 color, [Uno.Graphics.PolygonFace cullFace]) [instance] :25
void Blitter::Blit(::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Graphics::SamplerState samplerState, bool preMultiplied, ::g::Uno::Rect textureRect, ::g::Uno::Float3x3 textureTransform, ::g::Uno::Rect localRect, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float4 color, int32_t cullFace)
{
    int32_t srcRGB, dstRGB;
    int32_t srcA, dstA;

    if (preMultiplied)
    {
        srcRGB = 1;
        dstRGB = 3;
        srcA = 7;
        dstA = 1;
        color = ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__New2(color.X, color.Y, color.Z), color.W), color.W);
    }
    else
    {
        srcRGB = 2;
        dstRGB = 3;
        srcA = 1;
        dstA = 3;
    }

    ::g::Uno::Float4x4 positionTranslation = ::g::Uno::Matrix::Translation(localRect.Minimum().X, localRect.Minimum().Y, 0.0f);
    ::g::Uno::Float4x4 positionScaling = ::g::Uno::Matrix::Scaling1(localRect.Size().X, localRect.Size().Y, 1.0f);
    ::g::Uno::Float4x4 positionMatrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Mul8(positionScaling, positionTranslation), localToClipTransform);
    ::g::Uno::Float3x3 textureTranslation = ::g::Uno::Float3x3__Identity();
    textureTranslation.M31 = textureRect.Minimum().X;
    textureTranslation.M32 = textureRect.Minimum().Y;
    ::g::Uno::Float3x3 textureScaling = ::g::Uno::Float3x3__Identity();
    textureScaling.M11 = textureRect.Size().X;
    textureScaling.M22 = textureRect.Size().Y;
    ::g::Uno::Float3x3 textureMatrix = ::g::Uno::Matrix::Mul4(::g::Uno::Matrix::Mul4(textureScaling, textureTranslation), textureTransform);
    _draw_254ef0e5.BlendEnabled(true);
    _draw_254ef0e5.DepthTestEnabled(false);
    _draw_254ef0e5.CullFace(cullFace);
    _draw_254ef0e5.BlendSrcRgb(srcRGB);
    _draw_254ef0e5.BlendSrcAlpha(srcA);
    _draw_254ef0e5.BlendDstRgb(dstRGB);
    _draw_254ef0e5.BlendDstAlpha(dstA);
    _draw_254ef0e5.Use();
    _draw_254ef0e5.Attrib1(0, 2, Blit_v_254ef0e5_1_8_1, 8, 0);
    _draw_254ef0e5.Uniform12(1, positionMatrix);
    _draw_254ef0e5.Uniform8(2, textureMatrix);
    _draw_254ef0e5.Uniform10(3, color);
    _draw_254ef0e5.Sampler3(4, texture, samplerState);
    _draw_254ef0e5.DrawArrays(uPtr(Blit_verts_254ef0e5_1_7_5)->Length());
}

// public void Blit(texture2D texture, Uno.Rect rect, float4x4 localToClipTransform, [float opacity], [bool flipY], [Uno.Graphics.PolygonFace cullFace]) [instance] :10
void Blitter::Blit1(::g::Uno::Graphics::Texture2D* texture, ::g::Uno::Rect rect, ::g::Uno::Float4x4 localToClipTransform, float opacity, bool flipY, int32_t cullFace)
{
    ::g::Uno::Float3x3 textureTransform = ::g::Uno::Float3x3__Identity();

    if (flipY)
    {
        textureTransform.M22 = -1.0f;
        textureTransform.M32 = 1.0f;
    }

    Blit(texture, ::g::Uno::Graphics::SamplerState__LinearClamp(), true, ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f)), textureTransform, rect, localToClipTransform, ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, opacity), 0);
}

// private generated void init_DrawCalls() [instance] :6
void Blitter::init_DrawCalls()
{
    uArray* verts_254ef0e5_1_7_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_254ef0e5_1_8_1 = ::g::Uno::Graphics::VertexBuffer::New3(verts_254ef0e5_1_7_0, 0);
    Blit_verts_254ef0e5_1_7_5 = verts_254ef0e5_1_7_0;
    Fill_v_181ef612_1_8_1 = ::g::Uno::Graphics::VertexBuffer::New3(verts_254ef0e5_1_7_0, 0);
    _draw_254ef0e5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseCommon_bundle::Blitter8f469d0c());
    _draw_181ef612 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseCommon_bundle::Blitter23d242c5());
}

// public generated Blitter New() [static] :6
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Common
