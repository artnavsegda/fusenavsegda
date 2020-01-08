// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScript.Dependencies.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__Dependency;}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ModuleInstance;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct RootableScriptModule;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public partial sealed class JavaScript :10
// {
struct JavaScript_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Scripting::IModuleProvider interface7;
    ::g::Fuse::Reactive::ValueForwarder__IValueListener interface8;
    ::g::Fuse::Node__ISiblingDataProvider interface9;
    ::g::Fuse::Reactive::IContext interface10;
};

JavaScript_type* JavaScript_typeof();
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable);
void JavaScript__get_Dependencies_fn(JavaScript* __this, uObject** __retval);
void JavaScript__DispatchEvaluate_fn(JavaScript* __this);
void JavaScript__DispatchEvaluateIfDependenciesReady_fn(JavaScript* __this);
void JavaScript__DisposeDependencySubscriptions_fn(JavaScript* __this);
void JavaScript__DisposeModuleInstance_fn(JavaScript* __this);
void JavaScript__DisposeSubscription_fn(JavaScript* __this);
void JavaScript__EnsureVMStarted_fn();
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval);
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value);
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value);
void JavaScript__FuseNodeISiblingDataProviderTryGetDataProvider_fn(JavaScript* __this, int32_t* type, uObject** provider, int32_t* __retval);
void JavaScript__FuseReactiveIContextget_Node_fn(JavaScript* __this, ::g::Fuse::Node** __retval);
void JavaScript__FuseReactiveIContextSubscribe_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);
void JavaScript__FuseReactiveIContextSubscribeResource_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval);
void JavaScript__FuseReactiveValueForwarderIValueListenerLostValue_fn(JavaScript* __this);
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data);
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval);
void JavaScript__get_LineNumber_fn(JavaScript* __this, int32_t* __retval);
void JavaScript__set_LineNumber_fn(JavaScript* __this, int32_t* value);
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval);
void JavaScript__OnBeforeSubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this);
void JavaScript__OnRooted_fn(JavaScript* __this);
void JavaScript__OnUnrooted_fn(JavaScript* __this);
void JavaScript__get_ScriptModule_fn(JavaScript* __this, ::g::Fuse::Scripting::JavaScript::RootableScriptModule** __retval);
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc);
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data);
void JavaScript__SubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this);

struct JavaScript : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::Collections::List*> _dependencies;
    uStrong< ::g::Fuse::Scripting::JavaScript::ModuleInstance*> _moduleInstance;
    bool _preserveModuleInstance;
    static int32_t _javaScriptCounter_;
    static int32_t& _javaScriptCounter() { return _javaScriptCounter_; }
    static uSStrong< ::g::Fuse::Scripting::JavaScript::ThreadWorker*> Worker_;
    static uSStrong< ::g::Fuse::Scripting::JavaScript::ThreadWorker*>& Worker() { return Worker_; }
    uStrong< ::g::Uno::UX::NameTable*> _nameTable;
    uStrong< ::g::Fuse::Scripting::JavaScript::RootableScriptModule*> _scriptModule;
    uStrong<uObject*> _currentDc;
    uStrong<uObject*> _sub;
    uStrong<uObject*> _siblingData;

    void ctor_3(::g::Uno::UX::NameTable* nameTable);
    uObject* Dependencies();
    void DispatchEvaluate();
    void DispatchEvaluateIfDependenciesReady();
    void DisposeDependencySubscriptions();
    void DisposeModuleInstance();
    void DisposeSubscription();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    int32_t LineNumber();
    void LineNumber(int32_t value);
    void OnBeforeSubscribeToDependenciesAndDispatchEvaluate();
    ::g::Fuse::Scripting::JavaScript::RootableScriptModule* ScriptModule();
    void SetDataContext(uObject* newDc);
    void SetSiblingData(uObject* data);
    void SubscribeToDependenciesAndDispatchEvaluate();
    static void EnsureVMStarted();
    static JavaScript* New2(::g::Uno::UX::NameTable* nameTable);
};
// }

}}} // ::g::Fuse::Reactive
