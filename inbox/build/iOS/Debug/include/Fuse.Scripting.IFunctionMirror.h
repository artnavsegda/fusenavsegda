// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract interface IFunctionMirror :18
// {
uInterfaceType* IFunctionMirror_typeof();

struct IFunctionMirror
{
    void(*fp_get_Function)(uObject*, ::g::Fuse::Scripting::Function**);
    static ::g::Fuse::Scripting::Function* Function(const uInterface& __this) { ::g::Fuse::Scripting::Function* __retval; return __this.VTable<IFunctionMirror>()->fp_get_Function(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
