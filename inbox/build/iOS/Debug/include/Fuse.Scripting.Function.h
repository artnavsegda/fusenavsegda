// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/Types.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Function :65
// {
struct Function_type : uType
{
    void(*fp_Call)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Context*, uArray*, uObject**);
    void(*fp_Construct)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Context*, uArray*, ::g::Fuse::Scripting::Object**);
    void(*fp_Equals2)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*);
};

Function_type* Function_typeof();
void Function__ctor__fn(Function* __this);
void Function__CallDiscardingResult_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args);
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval);
void Function__GetHashCode_fn(Function* __this, int32_t* __retval);

struct Function : uObject
{
    void ctor_();
    uObject* Call(::g::Fuse::Scripting::Context* context, uArray* args) { uObject* __retval; return (((Function_type*)__type)->fp_Call)(this, context, args, &__retval), __retval; }
    void CallDiscardingResult(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Fuse::Scripting::Object* Construct(::g::Fuse::Scripting::Context* context, uArray* args) { ::g::Fuse::Scripting::Object* __retval; return (((Function_type*)__type)->fp_Construct)(this, context, args, &__retval), __retval; }
    bool Equals2(Function* f) { bool __retval; return (((Function_type*)__type)->fp_Equals2)(this, f, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
