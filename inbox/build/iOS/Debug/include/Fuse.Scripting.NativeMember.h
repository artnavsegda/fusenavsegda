// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/NativeMember.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class NativeMember :6
// {
struct NativeMember_type : uType
{
    void(*fp_CreateObject)(::g::Fuse::Scripting::NativeMember*, ::g::Fuse::Scripting::Context*, uObject**);
};

NativeMember_type* NativeMember_typeof();
void NativeMember__ctor__fn(NativeMember* __this, uString* name);
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context);
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval);
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value);
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval);
void NativeMember__set_Name_fn(NativeMember* __this, uString* value);
void NativeMember__get_ThreadWorker_fn(NativeMember* __this, uObject** __retval);
void NativeMember__set_ThreadWorker_fn(NativeMember* __this, uObject* value);

struct NativeMember : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Fuse::Scripting::Object*> _ModuleObject;
    uStrong<uString*> _Name;
    uStrong<uObject*> _ThreadWorker;

    void ctor_(uString* name);
    void Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context);
    uObject* CreateObject(::g::Fuse::Scripting::Context* context) { uObject* __retval; return (((NativeMember_type*)__type)->fp_CreateObject)(this, context, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* ModuleObject();
    void ModuleObject(::g::Fuse::Scripting::Object* value);
    uString* Name();
    void Name(uString* value);
    uObject* ThreadWorker();
    void ThreadWorker(uObject* value);
};
// }

}}} // ::g::Fuse::Scripting
