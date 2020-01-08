// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/FileSystemInfo.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct FileStatus;}}}
namespace g{namespace Uno{namespace IO{struct FileSystemInfo;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class FileSystemInfo :7
// {
struct FileSystemInfo_type : uType
{
    void(*fp_LoadStatus)(::g::Uno::IO::FileSystemInfo*, ::g::Uno::IO::FileStatus**);
};

FileSystemInfo_type* FileSystemInfo_typeof();
void FileSystemInfo__ctor__fn(FileSystemInfo* __this, uString* originalPath);
void FileSystemInfo__ConvertTime_fn(uObject* time, ::g::Uno::Time::ZonedDateTime** __retval);
void FileSystemInfo__get_Exists_fn(FileSystemInfo* __this, bool* __retval);
void FileSystemInfo__get_FullName_fn(FileSystemInfo* __this, uString** __retval);
void FileSystemInfo__get_LastAccessTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileSystemInfo__get_LastWriteTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileSystemInfo__LoadStatus_fn(FileSystemInfo* __this, ::g::Uno::IO::FileStatus** __retval);
void FileSystemInfo__Refresh_fn(FileSystemInfo* __this);
void FileSystemInfo__get_Status_fn(FileSystemInfo* __this, ::g::Uno::IO::FileStatus** __retval);

struct FileSystemInfo : uObject
{
    uStrong<uString*> _fullPath;
    uStrong<uString*> _originalPath;
    uStrong< ::g::Uno::IO::FileStatus*> _status;

    void ctor_(uString* originalPath);
    bool Exists();
    uString* FullName();
    ::g::Uno::Time::ZonedDateTime* LastAccessTimeUtc();
    ::g::Uno::Time::ZonedDateTime* LastWriteTimeUtc();
    ::g::Uno::IO::FileStatus* LoadStatus() { ::g::Uno::IO::FileStatus* __retval; return (((FileSystemInfo_type*)__type)->fp_LoadStatus)(this, &__retval), __retval; }
    void Refresh();
    ::g::Uno::IO::FileStatus* Status();
    static ::g::Uno::Time::ZonedDateTime* ConvertTime(uObject* time);
    static ::g::Uno::IO::FileStatus* LoadStatus(FileSystemInfo* __this) { ::g::Uno::IO::FileStatus* __retval; return FileSystemInfo__LoadStatus_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::IO
