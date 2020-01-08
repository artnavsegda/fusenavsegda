// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.10.0-rc1/LineSegment.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public struct LineSegment :37
// {
uStructType* LineSegment_typeof();
void LineSegment__deCasteljau_fn(uArray* pts, float* t, uArray** __retval);
void LineSegment__DirectionAtTime_fn(LineSegment* __this, ::g::Uno::Float2* from, float* t, ::g::Uno::Float2* __retval);
void LineSegment__EstimateLength_fn(LineSegment* __this, ::g::Uno::Float2* from, float* __retval);
void LineSegment__get_HasTo_fn(LineSegment* __this, bool* __retval);
void LineSegment__get_IsDrawing_fn(LineSegment* __this, bool* __retval);
void LineSegment__PointAtTime_fn(LineSegment* __this, ::g::Uno::Float2* from, float* t, ::g::Uno::Float2* __retval);
void LineSegment__Scale_fn(LineSegment* __this, ::g::Uno::Float2* factor);
void LineSegment__SplitAtTime_fn(LineSegment* __this, ::g::Uno::Float2* from, float* t, LineSegment* left, LineSegment* right);
void LineSegment__Translate_fn(LineSegment* __this, ::g::Uno::Float2* offset);

struct LineSegment
{
    ::g::Uno::Float2 To;
    ::g::Uno::Float2 A;
    ::g::Uno::Float2 B;
    int32_t Flags;
    int32_t Type;

    ::g::Uno::Float2 DirectionAtTime(::g::Uno::Float2 from, float t);
    float EstimateLength(::g::Uno::Float2 from);
    bool HasTo();
    bool IsDrawing();
    ::g::Uno::Float2 PointAtTime(::g::Uno::Float2 from, float t);
    void Scale(::g::Uno::Float2 factor);
    void SplitAtTime(::g::Uno::Float2 from, float t, LineSegment* left, LineSegment* right);
    void Translate(::g::Uno::Float2 offset);
    static uArray* deCasteljau(uArray* pts, float t);
};
// }

}}} // ::g::Fuse::Drawing
