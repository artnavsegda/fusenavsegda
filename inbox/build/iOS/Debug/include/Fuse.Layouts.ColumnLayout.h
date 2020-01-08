// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.10.0-rc1/Layouts/ColumnLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct ColumnLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class ColumnLayout :28
// {
::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();
void ColumnLayout__Arrange_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval);
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int32_t* __retval);
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int32_t* value);
void ColumnLayout__get_ColumnSize_fn(ColumnLayout* __this, float* __retval);
void ColumnLayout__set_ColumnSize_fn(ColumnLayout* __this, float* value);
void ColumnLayout__get_ColumnSpacing_fn(ColumnLayout* __this, float* __retval);
void ColumnLayout__set_ColumnSpacing_fn(ColumnLayout* __this, float* value);
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ColumnLayout__get_ItemSpacing_fn(ColumnLayout* __this, float* __retval);
void ColumnLayout__set_ItemSpacing_fn(ColumnLayout* __this, float* value);
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int32_t* __retval);
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval);
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int32_t* __retval);
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int32_t* value);
void ColumnLayout__get_Sizing_fn(ColumnLayout* __this, int32_t* __retval);
void ColumnLayout__set_Sizing_fn(ColumnLayout* __this, int32_t* value);

struct ColumnLayout : ::g::Fuse::Layouts::Layout
{
    int32_t _orientation;
    bool _hasColumnCount;
    int32_t _columnCount;
    bool _hasColumnSize;
    float _columnSize;
    float _columnSpacing;
    float _itemSpacing;
    int32_t _sizing;

    ::g::Uno::Float2 Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding);
    int32_t ColumnCount();
    void ColumnCount(int32_t value);
    float ColumnSize();
    void ColumnSize(float value);
    float ColumnSpacing();
    void ColumnSpacing(float value);
    float ItemSpacing();
    void ItemSpacing(float value);
    int32_t LeastAt(uArray* c);
    float Max(uArray* c);
    int32_t Orientation();
    void Orientation(int32_t value);
    int32_t Sizing();
    void Sizing(int32_t value);
};
// }

}}} // ::g::Fuse::Layouts
