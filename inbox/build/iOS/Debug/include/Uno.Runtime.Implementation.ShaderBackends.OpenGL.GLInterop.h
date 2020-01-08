// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLInterop.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLInterop;}}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public static extern class GLInterop :7
// {
uClassType* GLInterop_typeof();
void GLInterop__ToGLBlendEquation_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLBlendingFactor_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLBufferUsage_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLCullFaceMode_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLDepthFunction_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLFrontFaceDirection_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLIndexType_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLPrimitiveType_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToGLVertexAttributeType_fn(int32_t* x, int32_t* componentCount, int32_t* componentType, bool* normalized);
void GLInterop__ToUnoGraphicsBlendEquation_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToUnoGraphicsBlendOperand_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToUnoGraphicsCompareFunc_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToUnoGraphicsPolygonFace_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToUnoGraphicsPolygonWinding_fn(int32_t* x, int32_t* __retval);
void GLInterop__ToUnoGraphicsPrimitiveType_fn(int32_t* x, int32_t* __retval);

struct GLInterop : uObject
{
    static int32_t ToGLBlendEquation(int32_t x);
    static int32_t ToGLBlendingFactor(int32_t x);
    static int32_t ToGLBufferUsage(int32_t x);
    static int32_t ToGLCullFaceMode(int32_t x);
    static int32_t ToGLDepthFunction(int32_t x);
    static int32_t ToGLFrontFaceDirection(int32_t x);
    static int32_t ToGLIndexType(int32_t x);
    static int32_t ToGLPrimitiveType(int32_t x);
    static void ToGLVertexAttributeType(int32_t x, int32_t* componentCount, int32_t* componentType, bool* normalized);
    static int32_t ToUnoGraphicsBlendEquation(int32_t x);
    static int32_t ToUnoGraphicsBlendOperand(int32_t x);
    static int32_t ToUnoGraphicsCompareFunc(int32_t x);
    static int32_t ToUnoGraphicsPolygonFace(int32_t x);
    static int32_t ToUnoGraphicsPolygonWinding(int32_t x);
    static int32_t ToUnoGraphicsPrimitiveType(int32_t x);
};
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
