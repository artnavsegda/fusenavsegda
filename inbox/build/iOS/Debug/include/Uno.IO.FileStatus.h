// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/FileStatus.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct FileStatus;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Uno{
namespace IO{

// internal sealed class FileStatus :6
// {
uType* FileStatus_typeof();
void FileStatus__ctor__fn(FileStatus* __this);
void FileStatus__ctor_1_fn(FileStatus* __this, int64_t* length, int32_t* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc);
void FileStatus__get_Attributes_fn(FileStatus* __this, int32_t* __retval);
void FileStatus__get_Exists_fn(FileStatus* __this, bool* __retval);
void FileStatus__get_LastAccessTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileStatus__get_LastWriteTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval);
void FileStatus__get_Length_fn(FileStatus* __this, int64_t* __retval);
void FileStatus__New1_fn(FileStatus** __retval);
void FileStatus__New2_fn(int64_t* length, int32_t* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc, FileStatus** __retval);

struct FileStatus : uObject
{
    static ::g::Uno::Time::Instant FileTimeEpoch_;
    static ::g::Uno::Time::Instant& FileTimeEpoch() { return FileStatus_typeof()->Init(), FileTimeEpoch_; }
    bool _exists;
    int64_t _length;
    int32_t _attributes;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _creationTimeUtc;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _lastAccessTimeUtc;
    uStrong< ::g::Uno::Time::ZonedDateTime*> _lastWriteTimeUtc;

    void ctor_();
    void ctor_1(int64_t length, int32_t attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc);
    int32_t Attributes();
    bool Exists();
    ::g::Uno::Time::ZonedDateTime* LastAccessTimeUtc();
    ::g::Uno::Time::ZonedDateTime* LastWriteTimeUtc();
    int64_t Length();
    static FileStatus* New1();
    static FileStatus* New2(int64_t length, int32_t attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc);
};
// }

}}} // ::g::Uno::IO
