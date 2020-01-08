// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Node.Bindings.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__NodeDataSubscription;}}
namespace g{namespace Fuse{struct Properties;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public interfacemodifiers class Node :10
// {
struct Node_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Fuse::Scripting::IScriptObject interface1;
    ::g::Fuse::IProperties interface2;
    ::g::Fuse::INotifyUnrooted interface3;
    ::g::Fuse::ISourceLocation interface4;
    ::g::Uno::Collections::ICollection interface5;
    ::g::Uno::Collections::IEnumerable interface6;
    void(*fp_GetLastNodeInGroup)(::g::Fuse::Node*, ::g::Fuse::Node**);
    void(*fp_OnRooted)(::g::Fuse::Node*);
    void(*fp_OnUnrooted)(::g::Fuse::Node*);
    void(*fp_SoftDispose)(::g::Fuse::Node*);
    void(*fp_TryGetResource)(::g::Fuse::Node*, uString*, uDelegate*, uObject**, bool*);
};

Node_type* Node_typeof();
void Node__ctor_1_fn(Node* __this);
void Node___createWatcher_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args, uObject** __retval);
void Node___destroyWatcher_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args, uObject** __retval);
void Node__AcquireData_fn(Node* __this, int32_t* type, uString* key, uObject* data, uObject** result, uObject** provider, bool* __retval);
void Node__Add_fn(Node* __this, ::g::Fuse::Binding* item);
void Node__AddDataListener_fn(Node* __this, int32_t* type, uString* key, uObject* listener);
void Node__get_Binding_fn(Node* __this, ::g::Fuse::Binding** __retval);
void Node__get_BindingList_fn(Node* __this, ::g::Uno::Collections::List** __retval);
void Node__get_Bindings_fn(Node* __this, uObject** __retval);
void Node__BroadcastDataChange_fn(Node* __this, uObject* oldData, uObject* newData);
void Node__CaptureRooting_fn(bool* __retval);
void Node__CheckDataKey_fn(Node* __this, uString* key, bool* __retval);
void Node__Contains_fn(uArray* strs, uString* s, bool* __retval);
void Node__get_ContextParent_fn(Node* __this, Node** __retval);
void Node__DistanceTo_fn(Node* __this, Node* obj, int32_t* reference, int32_t* __retval);
void Node__FindBehavior_fn(Node* __this, uType* __type, Node** __retval);
void Node__FindByType_fn(Node* __this, uType* __type, uObject** __retval);
void Node__FindNodeByName_fn(Node* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, Node** __retval);
void Node__FuseINotifyUnrootedadd_Unrooted_fn(Node* __this, uDelegate* value);
void Node__FuseINotifyUnrootedremove_Unrooted_fn(Node* __this, uDelegate* value);
void Node__FuseISourceLocationget_SourceNearest_fn(Node* __this, uObject** __retval);
void Node__FuseScriptingIScriptObjectget_ScriptContext_fn(Node* __this, ::g::Fuse::Scripting::Context** __retval);
void Node__FuseScriptingIScriptObjectget_ScriptObject_fn(Node* __this, uObject** __retval);
void Node__FuseScriptingIScriptObjectSetScriptObject_fn(Node* __this, uObject* obj, ::g::Fuse::Scripting::Context* context);
void Node__GetLastNodeInGroup_fn(Node* __this, Node** __retval);
void Node__GetNearestAncestorOfType_fn(Node* __this, uType* __type, uObject** __retval);
void Node__HasInSubtree_fn(Node* __this, Node* c, bool* __retval);
void Node__Insert_fn(Node* __this, int32_t* index, ::g::Fuse::Binding* item);
void Node__get_IsPreservedRootFrame_fn(Node* __this, bool* __retval);
void Node__IsRootCapture_fn(int32_t* index, bool* __retval);
void Node__get_IsRootingCompleted_fn(Node* __this, bool* __retval);
void Node__get_IsRootingStarted_fn(Node* __this, bool* __retval);
void Node__get_IsUnrooted_fn(Node* __this, bool* __retval);
void Node__get_IsUnrooting_fn(Node* __this, bool* __retval);
void Node__LaterReleaseRooting_fn();
void Node__MakeBindingList_fn(Node* __this, ::g::Fuse::Binding* newItem);
void Node__get_Name_fn(Node* __this, ::g::Uno::UX::Selector* __retval);
void Node__set_Name_fn(Node* __this, ::g::Uno::UX::Selector* value);
void Node__NextSibling_fn(Node* __this, uType* __type, Node** __retval);
void Node__get_NodeDepth_fn(Node* __this, int32_t* __retval);
void Node__OnDataChanged_fn(Node* __this, uString* key, uObject* newValue);
void Node__OnRooted_fn(Node* __this);
void Node__OnUnrooted_fn(Node* __this);
void Node__get_Parent_fn(Node* __this, ::g::Fuse::Visual** __retval);
void Node__PreviousSibling_fn(Node* __this, uType* __type, Node** __retval);
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval);
void Node__Relate_fn(::g::Fuse::Visual* parent, Node* child);
void Node__ReleaseRooting_fn(bool* captured);
void Node__Remove_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval);
void Node__RemoveDataListener_fn(Node* __this, int32_t* type, uString* key, uObject* listener);
void Node__Root_fn(Node* __this, ::g::Fuse::Binding* b);
void Node__RootBindings_fn(Node* __this);
void Node__get_RootCaptureIndex_fn(int32_t* __retval);
void Node__add_RootingCompleted_fn(Node* __this, uDelegate* value);
void Node__remove_RootingCompleted_fn(Node* __this, uDelegate* value);
void Node__RootInternal_fn(Node* __this, ::g::Fuse::Visual* parent);
void Node__RootInternalImpl_fn(Node* __this, ::g::Fuse::Visual* parent);
void Node__SoftDispose_fn(Node* __this);
void Node__get_SourceFileName_fn(Node* __this, uString** __retval);
void Node__set_SourceFileName_fn(Node* __this, uString* value);
void Node__get_SourceLineNumber_fn(Node* __this, int32_t* __retval);
void Node__set_SourceLineNumber_fn(Node* __this, int32_t* value);
void Node__SubscribeData_fn(Node* __this, uString* key, uObject* listener, Node__NodeDataSubscription** __retval);
void Node__SubscribePrimeDataContext_fn(Node* __this, uObject* listener, Node__NodeDataSubscription** __retval);
void Node__ToString_fn(Node* __this, uString** __retval);
void Node__TryFindData_fn(Node* __this, int32_t* type, uString* key, uObject** result, uObject** provider, bool* __retval);
void Node__TryGetPrimeDataContext_fn(Node* __this, uObject** result, bool* __retval);
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval);
void Node__UnoCollectionsICollectionFuseBindingClear_fn(Node* __this);
void Node__UnoCollectionsICollectionFuseBindingContains_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval);
void Node__UnoCollectionsICollectionFuseBindingget_Count_fn(Node* __this, int32_t* __retval);
void Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn(Node* __this, uObject** __retval);
void Node__UnoCollectionsIListFuseBindingget_Item_fn(Node* __this, int32_t* index, ::g::Fuse::Binding** __retval);
void Node__UnoCollectionsIListFuseBindingRemoveAt_fn(Node* __this, int32_t* index);
void Node__Unrelate_fn(::g::Fuse::Visual* parent, Node* child);
void Node__Unroot_fn(Node* __this, ::g::Fuse::Binding* b);
void Node__UnrootBindings_fn(Node* __this);
void Node__add_Unrooted_fn(Node* __this, uDelegate* value);
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value);
void Node__UnrootInternal_fn(Node* __this);

struct Node : ::g::Uno::UX::PropertyObject
{
    uStrong<uObject*> _bindings;
    static uSStrong<uObject*> _emptyBindings_;
    static uSStrong<uObject*>& _emptyBindings() { return Node_typeof()->Init(), _emptyBindings_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _dataListeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _dataListeners() { return Node_typeof()->Init(), _dataListeners_; }
    ::g::Uno::UX::Selector _name;
    int32_t _rootStage;
    static int32_t _rootCaptureIndex_;
    static int32_t& _rootCaptureIndex() { return Node_typeof()->Init(), _rootCaptureIndex_; }
    static bool _hasRootCapture_;
    static bool& _hasRootCapture() { return Node_typeof()->Init(), _hasRootCapture_; }
    static uSStrong<uDelegate*> _laterReleaseRooting_;
    static uSStrong<uDelegate*>& _laterReleaseRooting() { return Node_typeof()->Init(), _laterReleaseRooting_; }
    int32_t _preservedRootFrame;
    uStrong< ::g::Fuse::Scripting::Context*> _scriptContext;
    uStrong<uObject*> _scriptObject;
    uStrong< ::g::Fuse::Properties*> _properties;
    uStrong< ::g::Fuse::Visual*> _parent;
    uWeak<Node*> OverrideContextParent;
    uStrong<Node*> _nextSibling;
    int32_t _parentID;
    void* _previousSibling;
    uStrong<uString*> _SourceFileName;
    int32_t _SourceLineNumber;
    uStrong<uDelegate*> RootingCompleted1;
    uStrong<uDelegate*> Unrooted1;

    void ctor_1();
    bool AcquireData(int32_t type, uString* key, uObject* data, uObject** result, uObject** provider);
    void Add(::g::Fuse::Binding* item);
    void AddDataListener(int32_t type, uString* key, uObject* listener);
    ::g::Fuse::Binding* Binding();
    ::g::Uno::Collections::List* BindingList();
    uObject* Bindings();
    void BroadcastDataChange(uObject* oldData, uObject* newData);
    bool CheckDataKey(uString* key);
    Node* ContextParent();
    int32_t DistanceTo(Node* obj, int32_t reference);
    Node* FindBehavior(uType* __type);
    uObject* FindByType(uType* __type);
    Node* FindNodeByName(::g::Uno::UX::Selector name, uDelegate* acceptor);
    Node* GetLastNodeInGroup() { Node* __retval; return (((Node_type*)__type)->fp_GetLastNodeInGroup)(this, &__retval), __retval; }
    uObject* GetNearestAncestorOfType(uType* __type);
    bool HasInSubtree(Node* c);
    void Insert(int32_t index, ::g::Fuse::Binding* item);
    bool IsPreservedRootFrame();
    bool IsRootingCompleted();
    bool IsRootingStarted();
    bool IsUnrooted();
    bool IsUnrooting();
    void MakeBindingList(::g::Fuse::Binding* newItem);
    ::g::Uno::UX::Selector Name();
    void Name(::g::Uno::UX::Selector value);
    Node* NextSibling(uType* __type);
    int32_t NodeDepth();
    void OnDataChanged(uString* key, uObject* newValue);
    void OnRooted() { (((Node_type*)__type)->fp_OnRooted)(this); }
    void OnUnrooted() { (((Node_type*)__type)->fp_OnUnrooted)(this); }
    ::g::Fuse::Visual* Parent();
    Node* PreviousSibling(uType* __type);
    ::g::Fuse::Properties* Properties();
    bool Remove(::g::Fuse::Binding* item);
    void RemoveDataListener(int32_t type, uString* key, uObject* listener);
    void Root(::g::Fuse::Binding* b);
    void RootBindings();
    void add_RootingCompleted(uDelegate* value);
    void remove_RootingCompleted(uDelegate* value);
    void RootInternal(::g::Fuse::Visual* parent);
    void RootInternalImpl(::g::Fuse::Visual* parent);
    void SoftDispose() { (((Node_type*)__type)->fp_SoftDispose)(this); }
    uString* SourceFileName();
    void SourceFileName(uString* value);
    int32_t SourceLineNumber();
    void SourceLineNumber(int32_t value);
    Node__NodeDataSubscription* SubscribeData(uString* key, uObject* listener);
    Node__NodeDataSubscription* SubscribePrimeDataContext(uObject* listener);
    bool TryFindData(int32_t type, uString* key, uObject** result, uObject** provider);
    bool TryGetPrimeDataContext(uObject** result);
    bool TryGetResource(uString* key, uDelegate* acceptor, uObject** resource) { bool __retval; return (((Node_type*)__type)->fp_TryGetResource)(this, key, acceptor, resource, &__retval), __retval; }
    void Unroot(::g::Fuse::Binding* b);
    void UnrootBindings();
    void add_Unrooted(uDelegate* value);
    void remove_Unrooted(uDelegate* value);
    void UnrootInternal();
    static uObject* _createWatcher(::g::Fuse::Scripting::Context* c, Node* n, uArray* args);
    static uObject* _destroyWatcher(::g::Fuse::Scripting::Context* c, Node* n, uArray* args);
    static bool CaptureRooting();
    static bool Contains(uArray* strs, uString* s);
    static Node* GetLastNodeInGroup(Node* __this) { Node* __retval; return Node__GetLastNodeInGroup_fn(__this, &__retval), __retval; }
    static bool IsRootCapture(int32_t index);
    static void LaterReleaseRooting();
    static void OnRooted(Node* __this) { Node__OnRooted_fn(__this); }
    static void OnUnrooted(Node* __this) { Node__OnUnrooted_fn(__this); }
    static void Relate(::g::Fuse::Visual* parent, Node* child);
    static void ReleaseRooting(bool captured);
    static void SoftDispose(Node* __this) { Node__SoftDispose_fn(__this); }
    static bool TryGetResource(Node* __this, uString* key, uDelegate* acceptor, uObject** resource) { bool __retval; return Node__TryGetResource_fn(__this, key, acceptor, resource, &__retval), __retval; }
    static void Unrelate(::g::Fuse::Visual* parent, Node* child);
    static int32_t RootCaptureIndex();
};
// }

}} // ::g::Fuse
