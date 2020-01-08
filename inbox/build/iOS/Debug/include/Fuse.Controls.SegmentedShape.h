// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/Shapes/SegmentedShape.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSplitter;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class SegmentedShape :21
// {
struct SegmentedShape_type : ::g::Fuse::Controls::Shape_type
{
    void(*fp_GetSegments)(::g::Fuse::Controls::SegmentedShape*, uObject**);
};

SegmentedShape_type* SegmentedShape_typeof();
void SegmentedShape__CreatePartialSurfacePath_fn(SegmentedShape* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void SegmentedShape__CreateSurfacePath_fn(SegmentedShape* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void SegmentedShape__get_EffectivePathEnd_fn(SegmentedShape* __this, float* __retval);
void SegmentedShape__InvalidateSurfacePath_fn(SegmentedShape* __this);
void SegmentedShape__get_PathEnd_fn(SegmentedShape* __this, float* __retval);
void SegmentedShape__set_PathEnd_fn(SegmentedShape* __this, float* value);
void SegmentedShape__get_PathMeasureMode_fn(SegmentedShape* __this, int32_t* __retval);
void SegmentedShape__set_PathMeasureMode_fn(SegmentedShape* __this, int32_t* value);
void SegmentedShape__get_PathStart_fn(SegmentedShape* __this, float* __retval);
void SegmentedShape__set_PathStart_fn(SegmentedShape* __this, float* value);
void SegmentedShape__PointAtDistance_fn(SegmentedShape* __this, float* distance, ::g::Uno::Float2* __retval);
void SegmentedShape__PointAtTime_fn(SegmentedShape* __this, float* time, ::g::Uno::Float2* __retval);
void SegmentedShape__get_Segments_fn(SegmentedShape* __this, uObject** __retval);
void SegmentedShape__add_SegmentsChanged_fn(SegmentedShape* __this, uDelegate* value);
void SegmentedShape__remove_SegmentsChanged_fn(SegmentedShape* __this, uDelegate* value);
void SegmentedShape__get_Splitter_fn(SegmentedShape* __this, ::g::Fuse::Drawing::LineSplitter** __retval);
void SegmentedShape__TangentAtDistance_fn(SegmentedShape* __this, float* distance, ::g::Uno::Float2* __retval);
void SegmentedShape__TangentAtTime_fn(SegmentedShape* __this, float* time, ::g::Uno::Float2* __retval);

struct SegmentedShape : ::g::Fuse::Controls::Shape
{
    float _pathStart;
    float _pathEnd;
    float _pathLength;
    bool _hasPathLength;
    static ::g::Uno::UX::Selector NamePathStart_;
    static ::g::Uno::UX::Selector& NamePathStart() { return SegmentedShape_typeof()->Init(), NamePathStart_; }
    static ::g::Uno::UX::Selector NamePathEnd_;
    static ::g::Uno::UX::Selector& NamePathEnd() { return SegmentedShape_typeof()->Init(), NamePathEnd_; }
    static ::g::Uno::UX::Selector NamePathLength_;
    static ::g::Uno::UX::Selector& NamePathLength() { return SegmentedShape_typeof()->Init(), NamePathLength_; }
    int32_t _pathMeasureMode;
    uStrong<uObject*> _segments;
    uStrong< ::g::Fuse::Drawing::LineSplitter*> _splitter;
    uStrong<uDelegate*> SegmentsChanged1;

    ::g::Fuse::Drawing::SurfacePath* CreatePartialSurfacePath(::g::Fuse::Drawing::Surface* surface);
    float EffectivePathEnd();
    uObject* GetSegments() { uObject* __retval; return (((SegmentedShape_type*)__type)->fp_GetSegments)(this, &__retval), __retval; }
    float PathEnd();
    void PathEnd(float value);
    int32_t PathMeasureMode();
    void PathMeasureMode(int32_t value);
    float PathStart();
    void PathStart(float value);
    ::g::Uno::Float2 PointAtDistance(float distance);
    ::g::Uno::Float2 PointAtTime(float time);
    uObject* Segments();
    void add_SegmentsChanged(uDelegate* value);
    void remove_SegmentsChanged(uDelegate* value);
    ::g::Fuse::Drawing::LineSplitter* Splitter();
    ::g::Uno::Float2 TangentAtDistance(float distance);
    ::g::Uno::Float2 TangentAtTime(float time);
};
// }

}}} // ::g::Fuse::Controls
