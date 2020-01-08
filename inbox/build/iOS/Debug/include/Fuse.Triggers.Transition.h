// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.10.0-rc1/Transition.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct Transition;}}}
namespace g{namespace Fuse{namespace Triggers{struct TransitionGroup;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class Transition :200
// {
::g::Fuse::Triggers::Trigger_type* Transition_typeof();
void Transition__ctor_5_fn(Transition* __this);
void Transition__AddUseTransition_fn(Transition* __this);
void Transition__get_AutoRelease_fn(Transition* __this, bool* __retval);
void Transition__set_AutoRelease_fn(Transition* __this, bool* value);
void Transition__get_Direction_fn(Transition* __this, int32_t* __retval);
void Transition__set_Direction_fn(Transition* __this, int32_t* value);
void Transition__get_Mode_fn(Transition* __this, int32_t* __retval);
void Transition__set_Mode_fn(Transition* __this, int32_t* value);
void Transition__New2_fn(Transition** __retval);
void Transition__OnPageProgressChanged_fn(Transition* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args);
void Transition__OnPlayStateChanged_fn(Transition* __this, int32_t* state);
void Transition__OnProgressChanged_fn(Transition* __this);
void Transition__OnRooted_fn(Transition* __this);
void Transition__OnUnrooted_fn(Transition* __this);
void Transition__Priority_fn(Transition* __this, bool* isActive, bool* isBackward, uString* newPath, uString* oldPath, int32_t* mode, uString* operationStyle, int32_t* __retval);
void Transition__QuickDeactivate_fn(Transition* __this);
void Transition__get_Style_fn(Transition* __this, uString** __retval);
void Transition__set_Style_fn(Transition* __this, uString* value);
void Transition__get_UseTransition_fn(Transition* __this, int32_t* __retval);
void Transition__set_UseTransition_fn(Transition* __this, int32_t* value);

struct Transition : ::g::Fuse::Triggers::Trigger
{
    ::g::Fuse::Internal::MiniList _to;
    ::g::Fuse::Internal::MiniList _from;
    int32_t _direction;
    bool _autoRelease;
    int32_t _mode;
    uStrong<uString*> _style;
    int32_t _useTransition;
    uStrong< ::g::Fuse::Triggers::TransitionGroup*> _group;
    uStrong< ::g::Fuse::Animations::Animator*> _useAnimator;
    bool IsSelected;

    void ctor_5();
    void AddUseTransition();
    bool AutoRelease();
    void AutoRelease(bool value);
    int32_t Direction();
    void Direction(int32_t value);
    int32_t Mode();
    void Mode(int32_t value);
    void OnPageProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args);
    int32_t Priority(bool isActive, bool isBackward, uString* newPath, uString* oldPath, int32_t mode, uString* operationStyle);
    void QuickDeactivate();
    uString* Style();
    void Style(uString* value);
    int32_t UseTransition();
    void UseTransition(int32_t value);
    static Transition* New2();
};
// }

}}} // ::g::Fuse::Triggers
