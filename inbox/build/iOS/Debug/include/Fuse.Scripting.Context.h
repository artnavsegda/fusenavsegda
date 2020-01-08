// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.10.0-rc1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Context :23
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Scripting::Context*);
    void(*fp_Evaluate)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**);
    void(*fp_get_GlobalObject)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**);
    void(*fp_Reflect)(::g::Fuse::Scripting::Context*, uObject*, uObject**);
    void(*fp_get_ThreadWorker)(::g::Fuse::Scripting::Context*, uObject**);
    void(*fp_Unwrap)(::g::Fuse::Scripting::Context*, uObject*, uObject**);
    void(*fp_Wrap)(::g::Fuse::Scripting::Context*, uObject*, uObject**);
};

Context_type* Context_typeof();
void Context__ctor__fn(Context* __this);
void Context__CallbackToFunction_fn(Context* __this, uDelegate* c, ::g::Fuse::Scripting::Function** __retval);
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr);
void Context__Invoke1_fn(Context* __this, uDelegate* action);
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval);
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable);
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable);
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval);
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result);
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval);

struct Context : uObject
{
    uStrong<uObject*> _moduleResults;
    uStrong< ::g::Fuse::Scripting::Function*> _identity;
    uStrong< ::g::Fuse::Scripting::Function*> _parseJson;
    uStrong< ::g::Fuse::Scripting::Function*> _newObject;
    uStrong< ::g::Fuse::Scripting::Function*> _newArray;

    void ctor_();
    ::g::Fuse::Scripting::Function* CallbackToFunction(uDelegate* c);
    void DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr);
    void Dispose() { (((Context_type*)__type)->fp_Dispose)(this); }
    uObject* Evaluate(uString* fileName, uString* code) { uObject* __retval; return (((Context_type*)__type)->fp_Evaluate)(this, fileName, code, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* GlobalObject() { ::g::Fuse::Scripting::Object* __retval; return (((Context_type*)__type)->fp_get_GlobalObject)(this, &__retval), __retval; }
    void Invoke1(uDelegate* action);
    ::g::Fuse::Scripting::Array* NewArray(uArray* values);
    ::g::Fuse::Scripting::Object* NewObject();
    void ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable);
    void ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable);
    uObject* ParseJson(uString* json);
    uObject* Reflect(uObject* obj) { uObject* __retval; return (((Context_type*)__type)->fp_Reflect)(this, obj, &__retval), __retval; }
    void RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result);
    uObject* ThreadWorker() { uObject* __retval; return (((Context_type*)__type)->fp_get_ThreadWorker)(this, &__retval), __retval; }
    ::g::Fuse::Scripting::ModuleResult* TryGetGlobalModuleResult(uString* id);
    uObject* Unwrap(uObject* obj) { uObject* __retval; return (((Context_type*)__type)->fp_Unwrap)(this, obj, &__retval), __retval; }
    uObject* Wrap(uObject* obj) { uObject* __retval; return (((Context_type*)__type)->fp_Wrap)(this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
