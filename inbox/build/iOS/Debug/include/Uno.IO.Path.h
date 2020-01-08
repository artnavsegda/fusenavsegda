// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/Path.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct Path;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class Path :7
// {
uClassType* Path_typeof();
void Path__Combine_fn(uString* path1, uString* path2, uString** __retval);
void Path__CombineInternal_fn(uString* a, uString* b, uString** __retval);
void Path__GetDirectoryName_fn(uString* path, uString** __retval);
void Path__GetDirectorySeparatorChar_fn(char16_t* __retval);
void Path__GetDirectorySeparatorChars_fn(uArray** __retval);
void Path__GetFullPath_fn(uString* filename, uString** __retval);
void Path__GetPathSeparator_fn(char16_t* __retval);
void Path__GetVolumeSeparatorChar_fn(char16_t* __retval);
void Path__IsDirectorySeparator_fn(char16_t* ch, bool* __retval);
void Path__IsPathRooted_fn(uString* path, bool* __retval);
void Path__NormalizePathSeparators_fn(uString* path, uString** __retval);

struct Path : uObject
{
    static char16_t DirectorySeparatorChar_;
    static char16_t& DirectorySeparatorChar() { return Path_typeof()->Init(), DirectorySeparatorChar_; }
    static char16_t AltDirectorySeparatorChar_;
    static char16_t& AltDirectorySeparatorChar() { return Path_typeof()->Init(), AltDirectorySeparatorChar_; }
    static char16_t PathSeparator_;
    static char16_t& PathSeparator() { return Path_typeof()->Init(), PathSeparator_; }
    static char16_t VolumeSeparatorChar_;
    static char16_t& VolumeSeparatorChar() { return Path_typeof()->Init(), VolumeSeparatorChar_; }
    static uSStrong<uArray*> DirectorySeparatorChars_;
    static uSStrong<uArray*>& DirectorySeparatorChars() { return Path_typeof()->Init(), DirectorySeparatorChars_; }

    static uString* Combine(uString* path1, uString* path2);
    static uString* CombineInternal(uString* a, uString* b);
    static uString* GetDirectoryName(uString* path);
    static char16_t GetDirectorySeparatorChar();
    static uArray* GetDirectorySeparatorChars();
    static uString* GetFullPath(uString* filename);
    static char16_t GetPathSeparator();
    static char16_t GetVolumeSeparatorChar();
    static bool IsDirectorySeparator(char16_t ch);
    static bool IsPathRooted(uString* path);
    static uString* NormalizePathSeparators(uString* path);
};
// }

}}} // ::g::Uno::IO
