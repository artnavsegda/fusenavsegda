// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Layouts/WrapLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class WrapLayout :17
// {
::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();
void WrapLayout__Arrange_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval);
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int32_t* __retval);
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int32_t* value);
void WrapLayout__GetContentSize_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void WrapLayout__get_IsVert_fn(WrapLayout* __this, bool* __retval);
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval);
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value);
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval);
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value);
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int32_t* __retval);
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int32_t* value);
void WrapLayout__get_RowAlignment_fn(WrapLayout* __this, int32_t* __retval);
void WrapLayout__set_RowAlignment_fn(WrapLayout* __this, int32_t* value);

struct WrapLayout : ::g::Fuse::Layouts::Layout
{
    bool _hasItemHeight;
    float _itemHeight;
    bool _hasItemWidth;
    float _itemWidth;
    int32_t _orientation;
    int32_t _flowDirection;
    int32_t _rowAlignment;

    ::g::Uno::Float2 Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding);
    int32_t FlowDirection();
    void FlowDirection(int32_t value);
    bool IsVert();
    float ItemHeight();
    void ItemHeight(float value);
    float ItemWidth();
    void ItemWidth(float value);
    int32_t Orientation();
    void Orientation(int32_t value);
    int32_t RowAlignment();
    void RowAlignment(int32_t value);
};
// }

}}} // ::g::Fuse::Layouts
