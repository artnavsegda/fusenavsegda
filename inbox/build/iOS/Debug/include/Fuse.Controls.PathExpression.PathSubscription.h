// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/Shapes/PathExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionListener.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct PathExpression;}}}
namespace g{namespace Fuse{namespace Controls{struct PathExpression__PathSubscription;}}}
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class PathExpression.PathSubscription :35
// {
::g::Fuse::Reactive::ExpressionListener_type* PathExpression__PathSubscription_typeof();
void PathExpression__PathSubscription__ctor_3_fn(PathExpression__PathSubscription* __this, ::g::Fuse::Controls::PathExpression* expr, uObject* context, uObject* listener);
void PathExpression__PathSubscription__Dispose_fn(PathExpression__PathSubscription* __this);
void PathExpression__PathSubscription__New1_fn(::g::Fuse::Controls::PathExpression* expr, uObject* context, uObject* listener, PathExpression__PathSubscription** __retval);
void PathExpression__PathSubscription__OnArguments_fn(PathExpression__PathSubscription* __this, uArray* args);
void PathExpression__PathSubscription__OnDataCleared_fn(PathExpression__PathSubscription* __this);
void PathExpression__PathSubscription__SegmentsChanged_fn(PathExpression__PathSubscription* __this);
void PathExpression__PathSubscription__SwitchPath_fn(PathExpression__PathSubscription* __this, ::g::Fuse::Controls::SegmentedShape* path);
void PathExpression__PathSubscription__UpdateValue_fn(PathExpression__PathSubscription* __this);

struct PathExpression__PathSubscription : ::g::Fuse::Reactive::ExpressionListener
{
    uStrong<uObject*> _listener1;
    uStrong< ::g::Fuse::Controls::PathExpression*> _expr;
    uStrong< ::g::Fuse::Controls::SegmentedShape*> _path;
    uStrong<uObject*> _param;

    void ctor_3(::g::Fuse::Controls::PathExpression* expr, uObject* context, uObject* listener);
    void SegmentsChanged();
    void SwitchPath(::g::Fuse::Controls::SegmentedShape* path);
    void UpdateValue();
    static PathExpression__PathSubscription* New1(::g::Fuse::Controls::PathExpression* expr, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Controls
