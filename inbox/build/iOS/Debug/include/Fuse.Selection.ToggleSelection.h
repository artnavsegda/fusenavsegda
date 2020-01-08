// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.10.0-rc1/ToggleSelection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Selection{struct ToggleSelection;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class ToggleSelection :26
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof();
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int32_t* __retval);
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int32_t* value);
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target);

struct ToggleSelection : ::g::Fuse::Triggers::Actions::TriggerAction
{
    int32_t _mode;

    int32_t Mode();
    void Mode(int32_t value);
};
// }

}}} // ::g::Fuse::Selection
