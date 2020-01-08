// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/TreeObservable/TreeArray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Scripting.SubscriptionSubject.Subscription.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ArrayMirror;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeArray__ArraySubscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class TreeArray.ArraySubscription :18
// {
struct TreeArray__ArraySubscription_type : ::g::Fuse::Scripting::SubscriptionSubject__Subscription_type
{
    ::g::Fuse::Reactive::ISubscription interface1;
};

TreeArray__ArraySubscription_type* TreeArray__ArraySubscription_typeof();
void TreeArray__ArraySubscription__ctor_1_fn(TreeArray__ArraySubscription* __this, ::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer);
void TreeArray__ArraySubscription__FuseReactiveISubscriptionReplaceAllExclusive_fn(TreeArray__ArraySubscription* __this, uObject* values);
void TreeArray__ArraySubscription__FuseReactiveISubscriptionSetExclusive_fn(TreeArray__ArraySubscription* __this, uObject* newValue);
void TreeArray__ArraySubscription__New1_fn(::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer, TreeArray__ArraySubscription** __retval);
void TreeArray__ArraySubscription__OnAdd_fn(TreeArray__ArraySubscription* __this, uObject* newValue);
void TreeArray__ArraySubscription__OnInsertAt_fn(TreeArray__ArraySubscription* __this, int32_t* index, uObject* newValue);
void TreeArray__ArraySubscription__OnRemoveAt_fn(TreeArray__ArraySubscription* __this, int32_t* index);
void TreeArray__ArraySubscription__OnReplaceAll_fn(TreeArray__ArraySubscription* __this, uObject* values, TreeArray__ArraySubscription* exclude);
void TreeArray__ArraySubscription__OnReplaceAt_fn(TreeArray__ArraySubscription* __this, int32_t* index, uObject* newValue);
void TreeArray__ArraySubscription__ReplaceAllExclusive_fn(TreeArray__ArraySubscription* __this, uObject* values);

struct TreeArray__ArraySubscription : ::g::Fuse::Scripting::SubscriptionSubject__Subscription
{
    uStrong<uObject*> _observer;

    void ctor_1(::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer);
    void OnAdd(uObject* newValue);
    void OnInsertAt(int32_t index, uObject* newValue);
    void OnRemoveAt(int32_t index);
    void OnReplaceAll(uObject* values, TreeArray__ArraySubscription* exclude);
    void OnReplaceAt(int32_t index, uObject* newValue);
    void ReplaceAllExclusive(uObject* values);
    static TreeArray__ArraySubscription* New1(::g::Fuse::Scripting::JavaScript::ArrayMirror* am, uObject* observer);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
