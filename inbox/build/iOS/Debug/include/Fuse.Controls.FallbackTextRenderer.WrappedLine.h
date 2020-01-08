// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/WrappedLine.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WrappedLine;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class WrappedLine :6
// {
uType* WrappedLine_typeof();
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int32_t* lineTextStartOffset, float* yOffset, float* lineWidth);
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int32_t* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval);
void WrappedLine__New1_fn(uString* text, int32_t* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval);

struct WrappedLine : uObject
{
    uStrong<uString*> Text;
    int32_t LineTextStartOffset;
    float YOffset;
    float LineWidth;

    void ctor_(uString* text, int32_t lineTextStartOffset, float yOffset, float lineWidth);
    float GetXOffset(int32_t textAlignment, float boundsWidth, float absoluteZoom);
    static WrappedLine* New1(uString* text, int32_t lineTextStartOffset, float yOffset, float lineWidth);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
