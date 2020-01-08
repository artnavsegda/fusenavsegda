// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/GraphicsView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct GraphicsView;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class GraphicsView :18
// {
struct GraphicsView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_4_fn(GraphicsView* __this, ::g::Fuse::Visual* visual);
void GraphicsView__BeginDraw_fn(::g::ObjC::Object* handle, int32_t* x, int32_t* y, bool* __retval);
void GraphicsView__CreateContainer_fn(::g::ObjC::Object** __retval);
void GraphicsView__CreateGlkView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval);
void GraphicsView__CreateHitSurface_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval);
void GraphicsView__DeleteDrawable_fn(::g::ObjC::Object* handle);
void GraphicsView__Dispose_fn(GraphicsView* __this);
void GraphicsView__EndDraw_fn(::g::ObjC::Object* handle);
void GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn(GraphicsView* __this);
void GraphicsView__get_HitTestHandle_fn(GraphicsView* __this, ::g::ObjC::Object** __retval);
void GraphicsView__New3_fn(::g::Fuse::Visual* visual, GraphicsView** __retval);

struct GraphicsView : ::g::Fuse::Controls::Native::iOS::View
{
    uStrong< ::g::Fuse::Visual*> _visual;
    uStrong< ::g::ObjC::Object*> _glkViewHandle;
    uStrong< ::g::ObjC::Object*> _hitSurface;

    void ctor_4(::g::Fuse::Visual* visual);
    static bool BeginDraw(::g::ObjC::Object* handle, int32_t x, int32_t y);
    static ::g::ObjC::Object* CreateContainer();
    static ::g::ObjC::Object* CreateGlkView(::g::ObjC::Object* container);
    static ::g::ObjC::Object* CreateHitSurface(::g::ObjC::Object* container);
    static void DeleteDrawable(::g::ObjC::Object* handle);
    static void EndDraw(::g::ObjC::Object* handle);
    static GraphicsView* New3(::g::Fuse::Visual* visual);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
