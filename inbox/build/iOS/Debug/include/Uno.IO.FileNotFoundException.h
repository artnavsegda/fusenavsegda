// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/IOException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IO.IOException.h>
namespace g{namespace Uno{namespace IO{struct FileNotFoundException;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class FileNotFoundException :24
// {
::g::Uno::Exception_type* FileNotFoundException_typeof();
void FileNotFoundException__ctor_4_fn(FileNotFoundException* __this, uString* message, uString* filename);
void FileNotFoundException__get_FileName_fn(FileNotFoundException* __this, uString** __retval);
void FileNotFoundException__set_FileName_fn(FileNotFoundException* __this, uString* value);
void FileNotFoundException__New5_fn(uString* message, uString* filename, FileNotFoundException** __retval);

struct FileNotFoundException : ::g::Uno::IO::IOException
{
    uStrong<uString*> _FileName;

    void ctor_4(uString* message, uString* filename);
    uString* FileName();
    void FileName(uString* value);
    static FileNotFoundException* New5(uString* message, uString* filename);
};
// }

}}} // ::g::Uno::IO
