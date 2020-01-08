// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLProgram.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram;}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public sealed extern class GLProgram :7
// {
uType* GLProgram_typeof();
void GLProgram__ctor__fn(GLProgram* __this, uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames);
void GLProgram__get_ConstantCount_fn(GLProgram* __this, int32_t* __retval);
void GLProgram__Create_fn(uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames, GLProgram** __retval);
void GLProgram__GetCompiledProgram_fn(GLProgram* __this, uArray* constStrings, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram** __retval);
void GLProgram__GetCompiledProgramInternal_fn(GLProgram* __this, uArray* constStrings, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram** __retval);
void GLProgram__New1_fn(uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames, GLProgram** __retval);

struct GLProgram : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _cachedPrograms;
    uStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*> _singleProgram;
    uStrong<uString*> _vsSource;
    uStrong<uString*> _fsSource;
    uStrong<uArray*> _constAttribAndUniformNames;
    int32_t _constCount;
    int32_t _attribCount;

    void ctor_(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
    int32_t ConstantCount();
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GetCompiledProgram(uArray* constStrings);
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GetCompiledProgramInternal(uArray* constStrings);
    static GLProgram* Create(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
    static GLProgram* New1(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
};
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
