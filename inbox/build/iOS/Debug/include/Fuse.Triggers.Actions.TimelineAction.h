// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.10.0-rc1/Actions/TimelineAction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TimelineAction;}}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class TimelineAction :32
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TimelineAction_typeof();
void TimelineAction__get_How_fn(TimelineAction* __this, int32_t* __retval);
void TimelineAction__set_How_fn(TimelineAction* __this, int32_t* value);
void TimelineAction__Perform_fn(TimelineAction* __this, ::g::Fuse::Node* target);
void TimelineAction__get_Progress_fn(TimelineAction* __this, double* __retval);
void TimelineAction__set_Progress_fn(TimelineAction* __this, double* value);
void TimelineAction__get_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline** __retval);
void TimelineAction__set_Target_fn(TimelineAction* __this, ::g::Fuse::Triggers::Timeline* value);

struct TimelineAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    int32_t _How;
    double _Progress;
    uStrong< ::g::Fuse::Triggers::Timeline*> _Target;

    int32_t How();
    void How(int32_t value);
    double Progress();
    void Progress(double value);
    ::g::Fuse::Triggers::Timeline* Target();
    void Target(::g::Fuse::Triggers::Timeline* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
