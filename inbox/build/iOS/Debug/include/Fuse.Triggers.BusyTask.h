// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.10.0-rc1/BusyTask.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class BusyTask :50
// {
uType* BusyTask_typeof();
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n, int32_t* type, int32_t* act, uString* message);
void BusyTask__AddListener_fn(::g::Fuse::Node* n, uDelegate* handler);
void BusyTask__done_fn(BusyTask* bt);
void BusyTask__Done_fn(BusyTask* __this);
void BusyTask__GetBusyActivity_fn(::g::Fuse::Node* n, int32_t* match, int32_t* __retval);
void BusyTask__IsBusyHandled_fn(::g::Fuse::Node* n, int32_t* activity, bool* __retval);
void BusyTask__New1_fn(::g::Fuse::Node* n, int32_t* type, int32_t* act, uString* message, BusyTask** __retval);
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n);
void BusyTask__OnRooted_fn(BusyTask* __this);
void BusyTask__OnUnrooted_fn(BusyTask* __this);
void BusyTask__RemoveListener_fn(::g::Fuse::Node* n, uDelegate* handler);
void BusyTask__SetBusy_fn(::g::Fuse::Node* n, BusyTask** bt, int32_t* act, uString* message);
void BusyTask__SetNodeActivity_fn(BusyTask* __this, ::g::Fuse::Node* n, int32_t* act, uString* message);

struct BusyTask : uObject
{
    uStrong< ::g::Fuse::Node*> _node;
    static uSStrong< ::g::Uno::Collections::List*> _tasks_;
    static uSStrong< ::g::Uno::Collections::List*>& _tasks() { return BusyTask_typeof()->Init(), _tasks_; }
    int32_t _type;
    int32_t _activity;
    uStrong<uString*> _message;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return BusyTask_typeof()->Init(), _listeners_; }

    void ctor_(::g::Fuse::Node* n, int32_t type, int32_t act, uString* message);
    void Done();
    void OnRooted();
    void OnUnrooted();
    void SetNodeActivity(::g::Fuse::Node* n, int32_t act, uString* message);
    static void AddListener(::g::Fuse::Node* n, uDelegate* handler);
    static void done(BusyTask* bt);
    static int32_t GetBusyActivity(::g::Fuse::Node* n, int32_t match);
    static bool IsBusyHandled(::g::Fuse::Node* n, int32_t activity);
    static BusyTask* New1(::g::Fuse::Node* n, int32_t type, int32_t act, uString* message);
    static void OnBusyChanged(::g::Fuse::Node* n);
    static void RemoveListener(::g::Fuse::Node* n, uDelegate* handler);
    static void SetBusy(::g::Fuse::Node* n, BusyTask** bt, int32_t act, uString* message);
};
// }

}}} // ::g::Fuse::Triggers
