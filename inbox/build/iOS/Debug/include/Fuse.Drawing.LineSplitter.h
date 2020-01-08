// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.10.0-rc1/LineSplitter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.Drawing.LineSplitter.LSInfo.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSplitter;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSplitter__SegmentAt;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class LineSplitter :8
// {
uType* LineSplitter_typeof();
void LineSplitter__ctor__fn(LineSplitter* __this, uObject* segments);
void LineSplitter__CalcInfo_fn(LineSplitter* __this);
void LineSplitter__DirectionAtTime_fn(LineSplitter* __this, float* time, ::g::Uno::Float2* __retval);
void LineSplitter__DistanceToTime_fn(LineSplitter* __this, float* distance, float* __retval);
void LineSplitter__GetSegmentAtTime_fn(LineSplitter* __this, float* time, LineSplitter__SegmentAt* __retval);
void LineSplitter__New1_fn(uObject* segments, LineSplitter** __retval);
void LineSplitter__PointAtTime_fn(LineSplitter* __this, float* time, ::g::Uno::Float2* __retval);
void LineSplitter__SplitTime_fn(LineSplitter* __this, float* start, float* end, uObject* to);

struct LineSplitter : uObject
{
    uStrong< ::g::Uno::Collections::List*> _segments;
    uStrong< ::g::Uno::Collections::List*> _info;

    void ctor_(uObject* segments);
    void CalcInfo();
    ::g::Uno::Float2 DirectionAtTime(float time);
    float DistanceToTime(float distance);
    LineSplitter__SegmentAt GetSegmentAtTime(float time);
    ::g::Uno::Float2 PointAtTime(float time);
    void SplitTime(float start, float end, uObject* to);
    static LineSplitter* New1(uObject* segments);
};
// }

}}} // ::g::Fuse::Drawing
