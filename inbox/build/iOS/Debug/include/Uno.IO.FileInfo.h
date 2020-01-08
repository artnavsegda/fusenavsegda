// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/FileInfo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IO.FileSystemInfo.h>
namespace g{namespace Uno{namespace IO{struct FileInfo;}}}
namespace g{namespace Uno{namespace IO{struct FileStatus;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class FileInfo :5
// {
::g::Uno::IO::FileSystemInfo_type* FileInfo_typeof();
void FileInfo__ctor_1_fn(FileInfo* __this, uString* originalPath);
void FileInfo__get_Length_fn(FileInfo* __this, int64_t* __retval);
void FileInfo__LoadStatus_fn(FileInfo* __this, ::g::Uno::IO::FileStatus** __retval);
void FileInfo__New1_fn(uString* originalPath, FileInfo** __retval);

struct FileInfo : ::g::Uno::IO::FileSystemInfo
{
    void ctor_1(uString* originalPath);
    int64_t Length();
    static FileInfo* New1(uString* originalPath);
};
// }

}}} // ::g::Uno::IO
