// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/.uno/package.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct FuseCommon_bundle;}

namespace g{

// public static generated class FuseCommon_bundle :0
// {
uClassType* FuseCommon_bundle_typeof();

struct FuseCommon_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Blitter23d242c5_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& Blitter23d242c5() { return FuseCommon_bundle_typeof()->Init(), Blitter23d242c5_; }
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Blitter8f469d0c_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& Blitter8f469d0c() { return FuseCommon_bundle_typeof()->Init(), Blitter8f469d0c_; }
};
// }

} // ::g
