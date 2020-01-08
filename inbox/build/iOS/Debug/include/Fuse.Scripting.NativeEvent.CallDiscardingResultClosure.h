// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/NativeEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent__CallDiscardingResultClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEvent.CallDiscardingResultClosure :30
// {
uType* NativeEvent__CallDiscardingResultClosure_typeof();
void NativeEvent__CallDiscardingResultClosure__ctor__fn(NativeEvent__CallDiscardingResultClosure* __this, ::g::Fuse::Scripting::Function* jsFunction, uArray* args);
void NativeEvent__CallDiscardingResultClosure__New1_fn(::g::Fuse::Scripting::Function* jsFunction, uArray* args, NativeEvent__CallDiscardingResultClosure** __retval);
void NativeEvent__CallDiscardingResultClosure__Run_fn(NativeEvent__CallDiscardingResultClosure* __this, ::g::Fuse::Scripting::Context* context);

struct NativeEvent__CallDiscardingResultClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _jsFunction;
    uStrong<uArray*> _args;

    void ctor_(::g::Fuse::Scripting::Function* jsFunction, uArray* args);
    void Run(::g::Fuse::Scripting::Context* context);
    static NativeEvent__CallDiscardingResultClosure* New1(::g::Fuse::Scripting::Function* jsFunction, uArray* args);
};
// }

}}} // ::g::Fuse::Scripting
