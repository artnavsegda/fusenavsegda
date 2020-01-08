// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Diagnostics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface ISourceLocation :19
// {
uInterfaceType* ISourceLocation_typeof();

struct ISourceLocation
{
    void(*fp_get_SourceFileName)(uObject*, uString**);
    void(*fp_get_SourceLineNumber)(uObject*, int32_t*);
    void(*fp_get_SourceNearest)(uObject*, uObject**);
    static uString* SourceFileName(const uInterface& __this) { uString* __retval; return __this.VTable<ISourceLocation>()->fp_get_SourceFileName(__this, &__retval), __retval; }
    static int32_t SourceLineNumber(const uInterface& __this) { int32_t __retval; return __this.VTable<ISourceLocation>()->fp_get_SourceLineNumber(__this, &__retval), __retval; }
    static uObject* SourceNearest(const uInterface& __this) { uObject* __retval; return __this.VTable<ISourceLocation>()->fp_get_SourceNearest(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
