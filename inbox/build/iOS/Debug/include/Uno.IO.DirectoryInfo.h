// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/DirectoryInfo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IO.FileSystemInfo.h>
namespace g{namespace Uno{namespace IO{struct DirectoryInfo;}}}
namespace g{namespace Uno{namespace IO{struct FileStatus;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class DirectoryInfo :5
// {
::g::Uno::IO::FileSystemInfo_type* DirectoryInfo_typeof();
void DirectoryInfo__ctor_1_fn(DirectoryInfo* __this, uString* originalPath);
void DirectoryInfo__LoadStatus_fn(DirectoryInfo* __this, ::g::Uno::IO::FileStatus** __retval);
void DirectoryInfo__New1_fn(uString* originalPath, DirectoryInfo** __retval);

struct DirectoryInfo : ::g::Uno::IO::FileSystemInfo
{
    void ctor_1(uString* originalPath);
    static DirectoryInfo* New1(uString* originalPath);
};
// }

}}} // ::g::Uno::IO
