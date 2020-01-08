// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IThreadWorker :10
// {
uInterfaceType* IThreadWorker_typeof();

struct IThreadWorker
{
    void(*fp_Invoke1)(uObject*, uDelegate*);
    static void Invoke1(const uInterface& __this, uDelegate* action) { __this.VTable<IThreadWorker>()->fp_Invoke1(__this, action); }
};
// }

}}} // ::g::Fuse::Scripting
