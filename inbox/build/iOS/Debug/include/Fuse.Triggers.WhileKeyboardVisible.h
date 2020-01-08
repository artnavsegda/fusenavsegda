// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/WhileKeyboardVisible.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowCaps;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileKeyboardVisible :12
// {
struct WhileKeyboardVisible_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface9;
};

WhileKeyboardVisible_type* WhileKeyboardVisible_typeof();
void WhileKeyboardVisible__CheckActivation_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileKeyboardVisible* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* name);

struct WhileKeyboardVisible : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Reactive::WindowCaps*> _caps;
    static uSStrong<uObject*> Keyboard_;
    static uSStrong<uObject*>& Keyboard() { return WhileKeyboardVisible_typeof()->Init(), Keyboard_; }

    void CheckActivation();
};
// }

}}} // ::g::Fuse::Triggers
