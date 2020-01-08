// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/File.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct File;}}}
namespace g{namespace Uno{namespace IO{struct FileStream;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class File :14
// {
uClassType* File_typeof();
void File__AppendAllText_fn(uString* filename, uString* contents);
void File__Copy_fn(uString* sourceFile, uString* destinationFile);
void File__Copy1_fn(uString* sourceFile, uString* destinationFile, bool* overwrite);
void File__Delete_fn(uString* filename);
void File__Exists_fn(uString* filename, bool* __retval);
void File__Move_fn(uString* oldName, uString* newName);
void File__Open_fn(uString* filename, int32_t* filemode, ::g::Uno::IO::FileStream** __retval);
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::FileStream** __retval);
void File__ReadAllBytes_fn(uString* filename, uArray** __retval);
void File__ReadAllText_fn(uString* filename, uString** __retval);
void File__WriteAllBytes_fn(uString* filename, uArray* bytes);
void File__WriteAllText_fn(uString* filename, uString* text);

struct File : uObject
{
    static void AppendAllText(uString* filename, uString* contents);
    static void Copy(uString* sourceFile, uString* destinationFile);
    static void Copy1(uString* sourceFile, uString* destinationFile, bool overwrite);
    static void Delete(uString* filename);
    static bool Exists(uString* filename);
    static void Move(uString* oldName, uString* newName);
    static ::g::Uno::IO::FileStream* Open(uString* filename, int32_t filemode);
    static ::g::Uno::IO::FileStream* OpenRead(uString* filename);
    static uArray* ReadAllBytes(uString* filename);
    static uString* ReadAllText(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
    static void WriteAllText(uString* filename, uString* text);
};
// }

}}} // ::g::Uno::IO
