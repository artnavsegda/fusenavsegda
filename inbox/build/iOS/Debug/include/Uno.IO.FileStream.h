// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/FileStream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <cstdio>
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct FileStream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class FileStream :40
// {
::g::Uno::IO::Stream_type* FileStream_typeof();
void FileStream__ctor_1_fn(FileStream* __this, uString* filename, int32_t* mode);
void FileStream__ctor_2_fn(FileStream* __this, FILE** fp, bool* canRead, bool* canWrite);
void FileStream__CheckDisposed_fn(FileStream* __this);
void FileStream__Dispose1_fn(FileStream* __this, bool* disposing);
void FileStream__Flush_fn(FileStream* __this);
void FileStream__GetNativeFileMode_fn(FileStream* __this, uString* filename, int32_t* mode, uString** __retval);
void FileStream__get_Length_fn(FileStream* __this, int64_t* __retval);
void FileStream__New1_fn(uString* filename, int32_t* mode, FileStream** __retval);
void FileStream__New2_fn(FILE** fp, bool* canRead, bool* canWrite, FileStream** __retval);
void FileStream__Read_fn(FileStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval);
void FileStream__Seek_fn(FileStream* __this, int64_t* byteOffset, int32_t* origin, int64_t* __retval);
void FileStream__Write_fn(FileStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount);

struct FileStream : ::g::Uno::IO::Stream
{
    FILE* _fp;
    bool _canRead;
    bool _canWrite;

    void ctor_1(uString* filename, int32_t mode);
    void ctor_2(FILE* fp, bool canRead, bool canWrite);
    void CheckDisposed();
    uString* GetNativeFileMode(uString* filename, int32_t mode);
    int64_t Seek(int64_t byteOffset, int32_t origin);
    static FileStream* New1(uString* filename, int32_t mode);
    static FileStream* New2(FILE* fp, bool canRead, bool canWrite);
};
// }

}}} // ::g::Uno::IO
