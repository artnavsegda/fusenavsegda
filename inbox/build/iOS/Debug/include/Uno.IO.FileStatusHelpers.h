// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/FileStatusHelpers.Unix.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct FileStatus;}}}
namespace g{namespace Uno{namespace IO{struct FileStatusHelpers;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Uno{
namespace IO{

// internal static extern class FileStatusHelpers :10
// {
uClassType* FileStatusHelpers_typeof();
void FileStatusHelpers__GetFileStatus_fn(uString* path, ::g::Uno::IO::FileStatus** __retval);
void FileStatusHelpers__UnixTimeToZoned_fn(int64_t* sec, ::g::Uno::Time::ZonedDateTime** __retval);

struct FileStatusHelpers : uObject
{
    static ::g::Uno::IO::FileStatus* GetFileStatus(uString* path);
    static ::g::Uno::Time::ZonedDateTime* UnixTimeToZoned(int64_t sec);
};
// }

}}} // ::g::Uno::IO
