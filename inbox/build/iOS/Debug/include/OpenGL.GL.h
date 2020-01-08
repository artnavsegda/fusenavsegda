// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/OpenGL/GL.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace OpenGL{struct GL;}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float2x2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace OpenGL{

// public static extern class GL :10
// {
uClassType* GL_typeof();
void GL__ActiveTexture_fn(int32_t* texture);
void GL__AttachShader_fn(uint32_t* program, uint32_t* shader);
void GL__BindBuffer_fn(int32_t* target, uint32_t* buffer);
void GL__BindFramebuffer_fn(int32_t* target, uint32_t* fb);
void GL__BindRenderbuffer_fn(int32_t* target, uint32_t* renderbuffer);
void GL__BindTexture_fn(int32_t* target, uint32_t* texture);
void GL__BlendFuncSeparate_fn(int32_t* srcRGB, int32_t* dstRGB, int32_t* srcAlpha, int32_t* dstAlpha);
void GL__BufferData2_fn(int32_t* target, int32_t* sizeInBytes, void** data, int32_t* usage);
void GL__BufferData3_fn(int32_t* target, ::g::Uno::Buffer* data, int32_t* usage);
void GL__BufferSubData1_fn(int32_t* target, int32_t* offset, int32_t* sizeInBytes, void** data);
void GL__BufferSubData2_fn(int32_t* target, int32_t* offset, ::g::Uno::Buffer* data);
void GL__CheckFramebufferStatus_fn(int32_t* target, int32_t* __retval);
void GL__Clear_fn(int32_t* mask);
void GL__ClearColor_fn(float* red, float* green, float* blue, float* alpha);
void GL__ClearDepth_fn(float* depth);
void GL__ColorMask_fn(bool* red, bool* green, bool* blue, bool* alpha);
void GL__CompileShader_fn(uint32_t* shader);
void GL__CreateBuffer_fn(uint32_t* __retval);
void GL__CreateFramebuffer_fn(uint32_t* __retval);
void GL__CreateProgram_fn(uint32_t* __retval);
void GL__CreateRenderbuffer_fn(uint32_t* __retval);
void GL__CreateShader_fn(int32_t* type, uint32_t* __retval);
void GL__CreateTexture_fn(uint32_t* __retval);
void GL__CullFace_fn(int32_t* mode);
void GL__DeleteBuffer_fn(uint32_t* buffer);
void GL__DeleteFramebuffer_fn(uint32_t* fb);
void GL__DeleteProgram_fn(uint32_t* program);
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer);
void GL__DeleteShader_fn(uint32_t* shader);
void GL__DeleteTexture_fn(uint32_t* texture);
void GL__DepthFunc_fn(int32_t* func);
void GL__DepthMask_fn(bool* flag);
void GL__DetachShader_fn(uint32_t* program, uint32_t* shader);
void GL__Disable_fn(int32_t* cap);
void GL__DisableVertexAttribArray_fn(int32_t* index);
void GL__DrawArrays_fn(int32_t* mode, int32_t* first, int32_t* count);
void GL__DrawElements_fn(int32_t* mode, int32_t* count, int32_t* type, int32_t* offset);
void GL__Enable_fn(int32_t* cap);
void GL__EnableVertexAttribArray_fn(int32_t* index);
void GL__Finish_fn();
void GL__FramebufferRenderbuffer_fn(int32_t* target, int32_t* attachment, int32_t* renderbuffertarget, uint32_t* renderbuffer);
void GL__FramebufferTexture2D_fn(int32_t* target, int32_t* attachment, int32_t* textarget, uint32_t* texture, int32_t* level);
void GL__FrontFace_fn(int32_t* mode);
void GL__GenerateMipmap_fn(int32_t* target);
void GL__GetAttribLocation_fn(uint32_t* program, uString* name, int32_t* __retval);
void GL__GetError_fn(int32_t* __retval);
void GL__GetFramebufferBinding_fn(uint32_t* __retval);
void GL__GetInteger_fn(int32_t* name, ::g::Uno::Int4* __retval);
void GL__GetInteger1_fn(int32_t* name, int32_t* __retval);
void GL__GetProgramInfoLog_fn(uint32_t* program, uString** __retval);
void GL__GetProgramParameter_fn(uint32_t* program, int32_t* pname, int32_t* __retval);
void GL__GetRenderbufferBinding_fn(uint32_t* __retval);
void GL__GetShaderInfoLog_fn(uint32_t* shader, uString** __retval);
void GL__GetShaderParameter_fn(uint32_t* shader, int32_t* pname, int32_t* __retval);
void GL__GetString_fn(int32_t* name, uString** __retval);
void GL__GetUniformLocation_fn(uint32_t* program, uString* name, int32_t* __retval);
void GL__LineWidth_fn(float* width);
void GL__LinkProgram_fn(uint32_t* program);
void GL__PixelStore_fn(int32_t* pname, int32_t* param);
void GL__RenderbufferStorage_fn(int32_t* target, int32_t* internalFormat, int32_t* width, int32_t* height);
void GL__Scissor_fn(int32_t* x, int32_t* y, int32_t* width, int32_t* height);
void GL__ShaderSource_fn(uint32_t* shader, uString* source);
void GL__TexImage2D2_fn(int32_t* target, int32_t* level, int32_t* internalFormat, int32_t* width, int32_t* height, int32_t* border, int32_t* format, int32_t* type, void** data);
void GL__TexParameter_fn(int32_t* target, int32_t* pname, int32_t* param);
void GL__Uniform1_fn(int32_t* location, float* value);
void GL__Uniform11_fn(int32_t* location, uArray* value);
void GL__Uniform12_fn(int32_t* location, int32_t* value);
void GL__Uniform2_fn(int32_t* location, ::g::Uno::Float2* value);
void GL__Uniform21_fn(int32_t* location, uArray* value);
void GL__Uniform3_fn(int32_t* location, ::g::Uno::Float3* value);
void GL__Uniform4_fn(int32_t* location, ::g::Uno::Float4* value);
void GL__Uniform41_fn(int32_t* location, uArray* value);
void GL__UniformMatrix2_fn(int32_t* location, bool* transpose, ::g::Uno::Float2x2* value);
void GL__UniformMatrix3_fn(int32_t* location, bool* transpose, ::g::Uno::Float3x3* value);
void GL__UniformMatrix4_fn(int32_t* location, bool* transpose, ::g::Uno::Float4x4* value);
void GL__UseProgram_fn(uint32_t* program);
void GL__VertexAttribPointer_fn(int32_t* index, int32_t* size, int32_t* type, bool* normalized, int32_t* stride, int32_t* offset);
void GL__Viewport_fn(int32_t* x, int32_t* y, int32_t* width, int32_t* height);

struct GL : uObject
{
    static void ActiveTexture(int32_t texture);
    static void AttachShader(uint32_t program, uint32_t shader);
    static void BindBuffer(int32_t target, uint32_t buffer);
    static void BindFramebuffer(int32_t target, uint32_t fb);
    static void BindRenderbuffer(int32_t target, uint32_t renderbuffer);
    static void BindTexture(int32_t target, uint32_t texture);
    static void BlendFuncSeparate(int32_t srcRGB, int32_t dstRGB, int32_t srcAlpha, int32_t dstAlpha);
    static void BufferData2(int32_t target, int32_t sizeInBytes, void* data, int32_t usage);
    static void BufferData3(int32_t target, ::g::Uno::Buffer* data, int32_t usage);
    static void BufferSubData1(int32_t target, int32_t offset, int32_t sizeInBytes, void* data);
    static void BufferSubData2(int32_t target, int32_t offset, ::g::Uno::Buffer* data);
    static int32_t CheckFramebufferStatus(int32_t target);
    static void Clear(int32_t mask);
    static void ClearColor(float red, float green, float blue, float alpha);
    static void ClearDepth(float depth);
    static void ColorMask(bool red, bool green, bool blue, bool alpha);
    static void CompileShader(uint32_t shader);
    static uint32_t CreateBuffer();
    static uint32_t CreateFramebuffer();
    static uint32_t CreateProgram();
    static uint32_t CreateRenderbuffer();
    static uint32_t CreateShader(int32_t type);
    static uint32_t CreateTexture();
    static void CullFace(int32_t mode);
    static void DeleteBuffer(uint32_t buffer);
    static void DeleteFramebuffer(uint32_t fb);
    static void DeleteProgram(uint32_t program);
    static void DeleteRenderbuffer(uint32_t renderbuffer);
    static void DeleteShader(uint32_t shader);
    static void DeleteTexture(uint32_t texture);
    static void DepthFunc(int32_t func);
    static void DepthMask(bool flag);
    static void DetachShader(uint32_t program, uint32_t shader);
    static void Disable(int32_t cap);
    static void DisableVertexAttribArray(int32_t index);
    static void DrawArrays(int32_t mode, int32_t first, int32_t count);
    static void DrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset);
    static void Enable(int32_t cap);
    static void EnableVertexAttribArray(int32_t index);
    static void Finish();
    static void FramebufferRenderbuffer(int32_t target, int32_t attachment, int32_t renderbuffertarget, uint32_t renderbuffer);
    static void FramebufferTexture2D(int32_t target, int32_t attachment, int32_t textarget, uint32_t texture, int32_t level);
    static void FrontFace(int32_t mode);
    static void GenerateMipmap(int32_t target);
    static int32_t GetAttribLocation(uint32_t program, uString* name);
    static int32_t GetError();
    static uint32_t GetFramebufferBinding();
    static ::g::Uno::Int4 GetInteger(int32_t name);
    static int32_t GetInteger1(int32_t name);
    static uString* GetProgramInfoLog(uint32_t program);
    static int32_t GetProgramParameter(uint32_t program, int32_t pname);
    static uint32_t GetRenderbufferBinding();
    static uString* GetShaderInfoLog(uint32_t shader);
    static int32_t GetShaderParameter(uint32_t shader, int32_t pname);
    static uString* GetString(int32_t name);
    static int32_t GetUniformLocation(uint32_t program, uString* name);
    static void LineWidth(float width);
    static void LinkProgram(uint32_t program);
    static void PixelStore(int32_t pname, int32_t param);
    static void RenderbufferStorage(int32_t target, int32_t internalFormat, int32_t width, int32_t height);
    static void Scissor(int32_t x, int32_t y, int32_t width, int32_t height);
    static void ShaderSource(uint32_t shader, uString* source);
    static void TexImage2D2(int32_t target, int32_t level, int32_t internalFormat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, void* data);
    static void TexParameter(int32_t target, int32_t pname, int32_t param);
    static void Uniform1(int32_t location, float value);
    static void Uniform11(int32_t location, uArray* value);
    static void Uniform12(int32_t location, int32_t value);
    static void Uniform2(int32_t location, ::g::Uno::Float2 value);
    static void Uniform21(int32_t location, uArray* value);
    static void Uniform3(int32_t location, ::g::Uno::Float3 value);
    static void Uniform4(int32_t location, ::g::Uno::Float4 value);
    static void Uniform41(int32_t location, uArray* value);
    static void UniformMatrix2(int32_t location, bool transpose, ::g::Uno::Float2x2 value);
    static void UniformMatrix3(int32_t location, bool transpose, ::g::Uno::Float3x3 value);
    static void UniformMatrix4(int32_t location, bool transpose, ::g::Uno::Float4x4 value);
    static void UseProgram(uint32_t program);
    static void VertexAttribPointer(int32_t index, int32_t size, int32_t type, bool normalized, int32_t stride, int32_t offset);
    static void Viewport(int32_t x, int32_t y, int32_t width, int32_t height);
};
// }

}} // ::g::OpenGL
