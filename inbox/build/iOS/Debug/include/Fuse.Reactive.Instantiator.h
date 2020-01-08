// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.ItemsWindowList-1.IListener.h>
#include <Fuse.Reactive.WindowItem.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Reactive{struct ItemsWindowList;}}}
namespace g{namespace Fuse{namespace Reactive{struct TemplateMatch;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public partial class Instantiator :116
// {
struct Instantiator_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Node__ISubtreeDataProvider interface7;
    ::g::Fuse::IDeferred interface8;
    ::g::Fuse::Reactive::ItemsWindowList__IListener interface9;
};

Instantiator_type* Instantiator_typeof();
void Instantiator__ctor_3_fn(Instantiator* __this);
void Instantiator__AddMatchingTemplates_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* item, ::g::Fuse::Reactive::TemplateMatch* f, bool* __retval);
void Instantiator__AddTemplate_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* item, ::g::Uno::UX::Template* f);
void Instantiator__BroadcastDataChange1_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi, uObject* oldData);
void Instantiator__CleanupWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi);
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n);
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi, int32_t* windowIndex);
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval);
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this);
void Instantiator__get_DataCount_fn(Instantiator* __this, int32_t* __retval);
void Instantiator__DataIndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int32_t* __retval);
void Instantiator__get_Defaults_fn(Instantiator* __this, int32_t* __retval);
void Instantiator__set_Defaults_fn(Instantiator* __this, int32_t* value);
void Instantiator__get_Defer_fn(Instantiator* __this, int32_t* __retval);
void Instantiator__set_Defer_fn(Instantiator* __this, int32_t* value);
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval);
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value);
void Instantiator__DisposeWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi);
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval);
void Instantiator__FuseNodeISubtreeDataProviderTryGetDataProvider_fn(Instantiator* __this, ::g::Fuse::Node* n, int32_t* type, uObject** provider, int32_t* __retval);
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerAddedWindowItem_fn(Instantiator* __this, int32_t* windowIndex, ::g::Fuse::Reactive::WindowItem* wi);
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerOnCurrentDataChanged_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi, uObject* oldData);
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerRemovedWindowItem_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi);
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetFailed_fn(Instantiator* __this, uString* message);
void Instantiator__FuseReactiveItemsWindowListFuseReactiveWindowItemIListenerSetValid_fn(Instantiator* __this);
void Instantiator__GetAvailableNodes_fn(Instantiator* __this, ::g::Fuse::Reactive::TemplateMatch* f, uObject* id, ::g::Fuse::Reactive::WindowItem** __retval);
void Instantiator__GetDataTemplate_fn(Instantiator* __this, uObject* data, ::g::Fuse::Reactive::TemplateMatch* __retval);
void Instantiator__GetItems_fn(Instantiator* __this, uObject** __retval);
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int32_t* windowIndex, ::g::Fuse::Node** __retval);
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval);
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval);
void Instantiator__get_Limit_fn(Instantiator* __this, int32_t* __retval);
void Instantiator__set_Limit_fn(Instantiator* __this, int32_t* value);
void Instantiator__get_Match_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_Match_fn(Instantiator* __this, uString* value);
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Offset_fn(Instantiator* __this, int32_t* __retval);
void Instantiator__set_Offset_fn(Instantiator* __this, int32_t* value);
void Instantiator__OnRooted_fn(Instantiator* __this);
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory);
void Instantiator__OnUnrooted_fn(Instantiator* __this);
void Instantiator__OnUpdatedWindowItems_fn(Instantiator* __this);
void Instantiator__PostUpdatedWindowItems_fn(Instantiator* __this);
void Instantiator__PrepareDataContext_fn(Instantiator* __this, ::g::Fuse::Reactive::WindowItem* wi);
void Instantiator__PrepareWindowItem_fn(Instantiator* __this, int32_t* windowIndex, ::g::Fuse::Reactive::WindowItem* wi);
void Instantiator__RecreateTemplates_fn(Instantiator* __this);
void Instantiator__RemoveAvailableItems_fn(Instantiator* __this);
void Instantiator__RemoveAvailableItemsAction_fn(Instantiator* __this);
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n);
void Instantiator__get_Reuse_fn(Instantiator* __this, int32_t* __retval);
void Instantiator__set_Reuse_fn(Instantiator* __this, int32_t* value);
void Instantiator__ScheduleRemoveAvailableItems_fn(Instantiator* __this);
void Instantiator__SetItems_fn(Instantiator* __this, uObject* value);
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval);
void Instantiator__add_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value);
void Instantiator__remove_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value);

struct Instantiator : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    uStrong<uDelegate*> _completedRemove;
    uStrong<uObject*> _templates;
    uStrong< ::g::Uno::Collections::RootableList*> _rootTemplates;
    int32_t _defer;
    int32_t _reuse;
    float _deferredPriority;
    uWeak<uObject*> _weakTemplateSource;
    uStrong<uObject*> _templateSource;
    uStrong<uString*> _templateKey;
    uStrong<uString*> _matchKey;
    uStrong<uString*> _match;
    int32_t _defaults;
    uStrong< ::g::Uno::Collections::Dictionary*> _dataMap;
    bool _pendingNew;
    uStrong< ::g::Uno::Collections::Dictionary*> _availableItemsById;
    uStrong< ::g::Fuse::Internal::ObjectList*> _availableItems;
    bool _pendingAvailableItems;
    uStrong< ::g::Fuse::Reactive::ItemsWindowList*> _watcher;
    bool _pendingUpdateWindowItems;
    uStrong<uDelegate*> UpdatedWindowItems1;

    void ctor_3();
    bool AddMatchingTemplates(::g::Fuse::Reactive::WindowItem* item, ::g::Fuse::Reactive::TemplateMatch f);
    void AddTemplate(::g::Fuse::Reactive::WindowItem* item, ::g::Uno::UX::Template* f);
    void BroadcastDataChange1(::g::Fuse::Reactive::WindowItem* wi, uObject* oldData);
    void CleanupWindowItem(::g::Fuse::Reactive::WindowItem* wi);
    void CompletedRemove(::g::Fuse::Node* n);
    void CompleteWindowItem(::g::Fuse::Reactive::WindowItem* wi, int32_t windowIndex);
    bool CompleteWindowItems(bool one);
    void CompleteWindowItemsAction();
    int32_t DataCount();
    int32_t DataIndexOfChild(::g::Fuse::Node* child);
    int32_t Defaults();
    void Defaults(int32_t value);
    int32_t Defer();
    void Defer(int32_t value);
    float DeferredPriority();
    void DeferredPriority(float value);
    void DisposeWindowItem(::g::Fuse::Reactive::WindowItem* wi);
    ::g::Fuse::Reactive::WindowItem* GetAvailableNodes(::g::Fuse::Reactive::TemplateMatch f, uObject* id);
    ::g::Fuse::Reactive::TemplateMatch GetDataTemplate(uObject* data);
    uObject* GetItems();
    ::g::Fuse::Node* GetLastNodeFromIndex(int32_t windowIndex);
    bool HasLimit();
    int32_t Limit();
    void Limit(int32_t value);
    uString* Match();
    void Match(uString* value);
    uString* MatchKey();
    void MatchKey(uString* value);
    int32_t Offset();
    void Offset(int32_t value);
    void OnTemplatesChanged(::g::Uno::UX::Template* factory);
    void OnUpdatedWindowItems();
    void PostUpdatedWindowItems();
    void PrepareDataContext(::g::Fuse::Reactive::WindowItem* wi);
    void PrepareWindowItem(int32_t windowIndex, ::g::Fuse::Reactive::WindowItem* wi);
    void RecreateTemplates();
    void RemoveAvailableItems();
    void RemoveAvailableItemsAction();
    void RemoveFromParent(::g::Fuse::Node* n);
    int32_t Reuse();
    void Reuse(int32_t value);
    void ScheduleRemoveAvailableItems();
    void SetItems(uObject* value);
    uString* TemplateKey();
    void TemplateKey(uString* value);
    uObject* Templates();
    void add_UpdatedWindowItems(uDelegate* value);
    void remove_UpdatedWindowItems(uDelegate* value);
};
// }

}}} // ::g::Fuse::Reactive
