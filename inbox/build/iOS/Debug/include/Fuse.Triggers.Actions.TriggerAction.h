// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.10.0-rc1/Actions/TriggerAction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract class TriggerAction :30
// {
struct TriggerAction_type : uType
{
    ::g::Fuse::ISourceLocation interface0;
    void(*fp_OnUnrooted)(::g::Fuse::Triggers::Actions::TriggerAction*);
    void(*fp_Perform)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*);
};

TriggerAction_type* TriggerAction_typeof();
void TriggerAction__ctor_1_fn(TriggerAction* __this);
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval);
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value);
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval);
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value);
void TriggerAction__FuseISourceLocationget_SourceNearest_fn(TriggerAction* __this, uObject** __retval);
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval);
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value);
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval);
void TriggerAction__OnUnrooted_fn(TriggerAction* __this);
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target);
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval);
void TriggerAction__get_SourceFileName_fn(TriggerAction* __this, uString** __retval);
void TriggerAction__set_SourceFileName_fn(TriggerAction* __this, uString* value);
void TriggerAction__get_SourceLineNumber_fn(TriggerAction* __this, int32_t* __retval);
void TriggerAction__set_SourceLineNumber_fn(TriggerAction* __this, int32_t* value);
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval);
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value);
void TriggerAction__Unroot_fn(TriggerAction* __this);
void TriggerAction__get_When_fn(TriggerAction* __this, int32_t* __retval);
void TriggerAction__set_When_fn(TriggerAction* __this, int32_t* value);

struct TriggerAction : ::g::Uno::UX::PropertyObject
{
    int32_t _when;
    float _progress;
    bool _hasProgress;
    float _delay;
    bool _hasDelay;
    bool _isActive;
    uStrong<uString*> _SourceFileName;
    int32_t _SourceLineNumber;
    uStrong< ::g::Fuse::Node*> _TargetNode;

    void ctor_1();
    float AtProgress();
    void AtProgress(float value);
    float Delay();
    void Delay(float value);
    bool IsActive();
    void IsActive(bool value);
    bool IsProgressTriggered();
    void OnUnrooted() { (((TriggerAction_type*)__type)->fp_OnUnrooted)(this); }
    void Perform(::g::Fuse::Node* target) { (((TriggerAction_type*)__type)->fp_Perform)(this, target); }
    void PerformFromNode(::g::Fuse::Node* target);
    float ProgressWhen(float totalDuration);
    uString* SourceFileName();
    void SourceFileName(uString* value);
    int32_t SourceLineNumber();
    void SourceLineNumber(int32_t value);
    ::g::Fuse::Node* TargetNode();
    void TargetNode(::g::Fuse::Node* value);
    void Unroot();
    int32_t When();
    void When(int32_t value);
    static void OnUnrooted(TriggerAction* __this) { TriggerAction__OnUnrooted_fn(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
