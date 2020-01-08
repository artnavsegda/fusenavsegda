// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Context.h>
#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>
#include <CoreText/CoreText.h>
#include <Foundation/Foundation.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.iOS.CanvasViewGroup.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.GraphicsView.h>
#include <Fuse.Controls.Native.iOS.ImageView.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.RootInfo.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.Controls.Native.iOS.NSAttributedStringBuilder.h>
#include <Fuse.Controls.Native.iOS.ScrollView.h>
#include <Fuse.Controls.Native.iOS.TextView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.NativeRootViewport.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Font.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <GLKit/GLKit.h>
#include <iOS/CanvasViewGroup.h>
#include <iOS/Helpers.h>
#include <iOS/UIViewInputDispatch.h>
#include <ObjC.Object.h>
#include <OpenGLES/EAGL.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[7];
static uType* TYPES[17];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/CanvasViewGroup.uno
// -------------------------------------------------------------------------------------

// internal sealed extern class CanvasViewGroup :9
// {
static void CanvasViewGroup_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attempt to draw native canvas without surface");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/CanvasViewGroup.uno");
    ::STRINGS[2] = uString::Const("OnDraw");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IntPtr_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CanvasViewGroup_type, interface0),
        ::g::Fuse::Drawing::INativeSurfaceOwner_typeof(), offsetof(CanvasViewGroup_type, interface1));
    type->SetFields(9,
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(CanvasViewGroup, _surfaceDrawable), 0,
        ::g::Uno::Float_typeof(), offsetof(CanvasViewGroup, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::NativeSurface_typeof(), offsetof(CanvasViewGroup, _nativeSurface), 0);
}

CanvasViewGroup_type* CanvasViewGroup_typeof()
{
    static uSStrong<CanvasViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CanvasViewGroup);
    options.TypeSize = sizeof(CanvasViewGroup_type);
    type = (CanvasViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.CanvasViewGroup", options);
    type->fp_build_ = CanvasViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))CanvasViewGroup__Dispose_fn;
    type->interface1.fp_GetSurface = (void(*)(uObject*, ::g::Fuse::Drawing::Surface**))CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CanvasViewGroup__Dispose_fn;
    return type;
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :14
void CanvasViewGroup__ctor_2_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint)
{
    __this->ctor_2(surfaceDrawable, *pixelsPerPoint);
}

// private static ObjC.Object Create(float density) :63
void CanvasViewGroup__Create_fn(float* density, ::g::ObjC::Object** __retval)
{
    *__retval = CanvasViewGroup::Create(*density);
}

// public override sealed void Dispose() :22
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this)
{
    CanvasViewGroup::SetDrawCallback(__this->NativeHandle, NULL);
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->_nativeSurface = NULL;
}

// internal Fuse.Drawing.Surface Fuse.Drawing.INativeSurfaceOwner.GetSurface() :44
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval)
{
    if (__this->_nativeSurface == NULL)
    {
        CanvasViewGroup::SetDrawCallback(__this->NativeHandle, uDelegate::New(::TYPES[0/*Uno.Action<Uno.IntPtr>*/], (void*)CanvasViewGroup__OnDraw_fn, __this));
        __this->Invalidate();
        __this->_nativeSurface = ::g::Fuse::Drawing::NativeSurface::New1();
    }

    return *__retval = __this->_nativeSurface, void();
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) :14
void CanvasViewGroup__New3_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval)
{
    *__retval = CanvasViewGroup::New3(surfaceDrawable, *pixelsPerPoint);
}

// private void OnDraw(Uno.IntPtr cgContextRef) :29
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, void** cgContextRef)
{
    __this->OnDraw(*cgContextRef);
}

// private static void SetDrawCallback(ObjC.Object handle, Uno.Action<Uno.IntPtr> onDrawCallback) :56
void CanvasViewGroup__SetDrawCallback_fn(::g::ObjC::Object* handle, uDelegate* onDrawCallback)
{
    CanvasViewGroup::SetDrawCallback(handle, onDrawCallback);
}

// public CanvasViewGroup(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [instance] :14
void CanvasViewGroup::ctor_2(uObject* surfaceDrawable, float pixelsPerPoint)
{
    ctor_1(CanvasViewGroup::Create(pixelsPerPoint), false, 0, 1);
    NeedsRenderBounds = true;
    _surfaceDrawable = surfaceDrawable;
    _pixelsPerPoint = pixelsPerPoint;
}

// private void OnDraw(Uno.IntPtr cgContextRef) [instance] :29
void CanvasViewGroup::OnDraw(void* cgContextRef)
{
    if (_nativeSurface == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Attempt to ...*/], this, ::STRINGS[1/*"/usr/local/...*/], 33, ::STRINGS[2/*"OnDraw"*/]);
        return;
    }

    uPtr(_nativeSurface)->Begin1(cgContextRef, _pixelsPerPoint);
    uPtr(_nativeSurface)->DrawLocal(_surfaceDrawable);
    uPtr(_nativeSurface)->End();
}

// private static ObjC.Object Create(float density) [static] :63
::g::ObjC::Object* CanvasViewGroup::Create(float density)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (float density) -> ::id
        {
            ::CanvasViewGroup* cvg = [[::CanvasViewGroup alloc] initWithDensity:density];
            [cvg setOpaque:false];
            [cvg setMultipleTouchEnabled:true];
            return cvg;
        } (density));
        
    }
    
}

// public CanvasViewGroup New(Fuse.Drawing.ISurfaceDrawable surfaceDrawable, float pixelsPerPoint) [static] :14
CanvasViewGroup* CanvasViewGroup::New3(uObject* surfaceDrawable, float pixelsPerPoint)
{
    CanvasViewGroup* obj1 = (CanvasViewGroup*)uNew(CanvasViewGroup_typeof());
    obj1->ctor_2(surfaceDrawable, pixelsPerPoint);
    return obj1;
}

// private static void SetDrawCallback(ObjC.Object handle, Uno.Action<Uno.IntPtr> onDrawCallback) [static] :56
void CanvasViewGroup::SetDrawCallback(::g::ObjC::Object* handle, uDelegate* onDrawCallback)
{
    @autoreleasepool
    {
        [] (::id handle, ::uObjC::Function<void, void*> onDrawCallback) -> void
        {
            ::CanvasViewGroup* cvg = (::CanvasViewGroup*)handle;
            [cvg setOnDrawCallback:onDrawCallback];
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, void*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, void*>)nil : (^ void (void* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onDrawCallback]));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/Focus.uno
// ---------------------------------------------------------------------------

// internal static extern class FocusHelpers :51
// {
// static FocusHelpers() :54
static void FocusHelpers__cctor__fn(uType* __type)
{
    FocusHelpers::_keyboardView_ = ::g::Fuse::Controls::Native::iOS::KeyboardView::New1();
}

static void FocusHelpers_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::KeyboardView_typeof(), (uintptr_t)&FocusHelpers::_keyboardView_, uFieldFlagsStatic);
}

uClassType* FocusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers", options);
    type->fp_build_ = FocusHelpers_build;
    type->fp_cctor_ = FocusHelpers__cctor__fn;
    return type;
}

// public static ObjC.Object GetCurrentFirstResponder() :87
void FocusHelpers__GetCurrentFirstResponder_fn(::g::ObjC::Object** __retval)
{
    *__retval = FocusHelpers::GetCurrentFirstResponder();
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() :62
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval)
{
    *__retval = FocusHelpers::KeyboardView();
}

uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> FocusHelpers::_keyboardView_;

// public static ObjC.Object GetCurrentFirstResponder() [static] :87
::g::ObjC::Object* FocusHelpers::GetCurrentFirstResponder()
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            id responder = [UIResponder currentFirstResponder];
            if ([responder isKindOfClass: [::UIView class]])
            {
            	return responder;
            }
            else
            {
            	return nil;
            }
        } ());
        
    }
    
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() [static] :62
::g::Fuse::Controls::Native::iOS::KeyboardView* FocusHelpers::KeyboardView()
{
    FocusHelpers_typeof()->Init();
    return FocusHelpers::_keyboardView_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/FontCache.uno
// -------------------------------------------------------------------------------

// internal static extern class FontCache :14
// {
// static generated FontCache() :14
static void FontCache__cctor__fn(uType* __type)
{
    FontCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<Fuse.Internal.FontFaceDescriptor, Uno.Collections.Dictionary<float, ObjC.Object>>*/]));
}

static void FontCache_build(uType* type)
{
    ::STRINGS[3] = uString::Const("/tempFont");
    ::STRINGS[4] = uString::Const("data/");
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof(), NULL), NULL);
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Resources::SystemFileSource_typeof();
    ::TYPES[5] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetDependencies(
        ::g::Fuse::Internal::iOSSystemFont_typeof());
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.Dictionary<Fuse.Internal.FontFaceDescriptor, Uno.Collections.Dictionary<float, ObjC.Object>>*/], (uintptr_t)&FontCache::_cache_, uFieldFlagsStatic);
}

uClassType* FontCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FontCache", options);
    type->fp_build_ = FontCache_build;
    type->fp_cctor_ = FontCache__cctor__fn;
    return type;
}

// private static string BundleFilePath(string resource) :80
void FontCache__BundleFilePath_fn(uString* resource, uString** __retval)
{
    *__retval = FontCache::BundleFilePath(resource);
}

// public static ObjC.Object Get(Fuse.Internal.FontFaceDescriptor descriptor, float size) :19
void FontCache__Get_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float* size, ::g::ObjC::Object** __retval)
{
    *__retval = FontCache::Get(descriptor, *size);
}

// private static string GetOptionalPath(Uno.UX.FileSource fileSource) :65
void FontCache__GetOptionalPath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = FontCache::GetOptionalPath(fileSource);
}

// private static ObjC.Object UIFontWithDescriptorAndSize(ObjC.Object descriptor, float size) :86
void FontCache__UIFontWithDescriptorAndSize_fn(::g::ObjC::Object* descriptor, float* size, ::g::ObjC::Object** __retval)
{
    *__retval = FontCache::UIFontWithDescriptorAndSize(descriptor, *size);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FontCache::_cache_;

// private static string BundleFilePath(string resource) [static] :80
uString* FontCache::BundleFilePath(uString* resource)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* resource) -> ::NSString*
        {
            return [[NSBundle bundleForClass:[StrongUnoObject class]] pathForResource:resource ofType:nil];
        } (::uObjC::NativeString(resource)));
        
    }
    
}

// public static ObjC.Object Get(Fuse.Internal.FontFaceDescriptor descriptor, float size) [static] :19
::g::ObjC::Object* FontCache::Get(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float size)
{
    FontCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::Collections::Dictionary* sizeDict;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FontCache::_cache_), descriptor, (void**)(&sizeDict), &ret1), ret1))
    {
        ::g::ObjC::Object* result;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(sizeDict), uCRef(size), (void**)(&result), &ret2), ret2))
            return result;
    }
    else
    {
        sizeDict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<float, ObjC.Object>*/]);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(FontCache::_cache_), descriptor, sizeDict);
    }

    ::g::ObjC::Object* uifont;
    uString* path = FontCache::GetOptionalPath(uPtr(descriptor)->FileSource);

    if (::g::Uno::String::op_Inequality(path, NULL))
    {
        ::g::ObjC::Object* uifontdescriptor = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(path, uPtr(descriptor)->Index, uDelegate::New(::TYPES[3/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, uPtr(descriptor)));
        uifont = FontCache::UIFontWithDescriptorAndSize(uifontdescriptor, size);
    }
    else
    {
        path = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[3/*"/tempFont"*/]), uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Uno::Object::GetHashCode(uPtr(uPtr(descriptor)->FileSource))));
        ::g::Uno::IO::File::WriteAllBytes(path, uPtr(descriptor->FileSource)->ReadAllBytes());
        ::g::ObjC::Object* uifontdescriptor1 = ::g::Fuse::Internal::iOSSystemFont::GetMatchingUIFontDescriptor(path, descriptor->Index, uDelegate::New(::TYPES[3/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, descriptor));
        uifont = FontCache::UIFontWithDescriptorAndSize(uifontdescriptor1, size);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(sizeDict), uCRef(size), uifont);
    return uifont;
}

// private static string GetOptionalPath(Uno.UX.FileSource fileSource) [static] :65
uString* FontCache::GetOptionalPath(::g::Uno::UX::FileSource* fileSource)
{
    FontCache_typeof()->Init();

    if (uIs(fileSource, ::TYPES[4/*Fuse.Resources.SystemFileSource*/]))
        return uPtr(fileSource)->Name;
    else if (uIs(fileSource, ::TYPES[5/*Uno.UX.BundleFileSource*/]))
    {
        ::g::Uno::IO::BundleFile* bundleFile = uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[5/*Uno.UX.BundleFileSource*/]))->BundleFile;
        return FontCache::BundleFilePath(::g::Uno::String::op_Addition2(::STRINGS[4/*"data/"*/], uPtr(bundleFile)->BundlePath()));
    }

    return NULL;
}

// private static ObjC.Object UIFontWithDescriptorAndSize(ObjC.Object descriptor, float size) [static] :86
::g::ObjC::Object* FontCache::UIFontWithDescriptorAndSize(::g::ObjC::Object* descriptor, float size)
{
    FontCache_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id descriptor, float size) -> ::id
        {
            return [::UIFont fontWithDescriptor:(::UIFontDescriptor*)descriptor size:size];
        } (::g::ObjC::Object::GetHandle(descriptor), size));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/GraphicsView.uno
// ----------------------------------------------------------------------------------

// public sealed extern class GraphicsView :18
// {
static void GraphicsView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Visual_typeof(), offsetof(GraphicsView, _visual), 0,
        ::g::ObjC::Object_typeof(), offsetof(GraphicsView, _glkViewHandle), 0,
        ::g::ObjC::Object_typeof(), offsetof(GraphicsView, _hitSurface), 0);
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))GraphicsView__Dispose_fn;
    type->fp_get_HitTestHandle = (void(*)(::g::Fuse::Controls::Native::ViewHandle*, ::g::ObjC::Object**))GraphicsView__get_HitTestHandle_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))GraphicsView__Dispose_fn;
    return type;
}

// public GraphicsView(Fuse.Visual visual) :37
void GraphicsView__ctor_4_fn(GraphicsView* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(visual);
}

// private static bool BeginDraw(ObjC.Object handle, int x, int y) :90
void GraphicsView__BeginDraw_fn(::g::ObjC::Object* handle, int32_t* x, int32_t* y, bool* __retval)
{
    *__retval = GraphicsView::BeginDraw(handle, *x, *y);
}

// private static ObjC.Object CreateContainer() :50
void GraphicsView__CreateContainer_fn(::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateContainer();
}

// private static ObjC.Object CreateGlkView(ObjC.Object container) :71
void GraphicsView__CreateGlkView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateGlkView(container);
}

// private static ObjC.Object CreateHitSurface(ObjC.Object container) :57
void GraphicsView__CreateHitSurface_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = GraphicsView::CreateHitSurface(container);
}

// private static void DeleteDrawable(ObjC.Object handle) :129
void GraphicsView__DeleteDrawable_fn(::g::ObjC::Object* handle)
{
    GraphicsView::DeleteDrawable(handle);
}

// public override sealed void Dispose() :119
void GraphicsView__Dispose_fn(GraphicsView* __this)
{
    __this->_visual = NULL;
    GraphicsView::DeleteDrawable(__this->_glkViewHandle);
    __this->_hitSurface = NULL;
    __this->_glkViewHandle = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void EndDraw(ObjC.Object handle) :113
void GraphicsView__EndDraw_fn(::g::ObjC::Object* handle)
{
    GraphicsView::EndDraw(handle);
}

// private bool Fuse.Controls.Native.IGraphicsView.BeginDraw(int2 size) :85
void GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval)
{
    ::g::Uno::Int2 size_ = *size;
    return *__retval = GraphicsView::BeginDraw(__this->_glkViewHandle, size_.X, size_.Y), void();
}

// private void Fuse.Controls.Native.IGraphicsView.EndDraw() :87
void GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn(GraphicsView* __this)
{
    GraphicsView::EndDraw(__this->_glkViewHandle);
}

// public override sealed ObjC.Object get_HitTestHandle() :46
void GraphicsView__get_HitTestHandle_fn(GraphicsView* __this, ::g::ObjC::Object** __retval)
{
    return *__retval = __this->_hitSurface, void();
}

// public GraphicsView New(Fuse.Visual visual) :37
void GraphicsView__New3_fn(::g::Fuse::Visual* visual, GraphicsView** __retval)
{
    *__retval = GraphicsView::New3(visual);
}

// public GraphicsView(Fuse.Visual visual) [instance] :37
void GraphicsView::ctor_4(::g::Fuse::Visual* visual)
{
    ctor_2(GraphicsView::CreateContainer(), 0);
    _glkViewHandle = GraphicsView::CreateGlkView(NativeHandle);
    _hitSurface = GraphicsView::CreateHitSurface(NativeHandle);
    _visual = visual;
}

// private static bool BeginDraw(ObjC.Object handle, int x, int y) [static] :90
bool GraphicsView::BeginDraw(::g::ObjC::Object* handle, int32_t x, int32_t y)
{
    @autoreleasepool
    {
        return [] (::id handle, int32_t x, int32_t y) -> bool
        {
            if (x < 1 || y < 1)
            	return false;
            
            GLKView* glkView = (GLKView*)handle;
            EAGLContext* ctx = [[uContext sharedContext] glContext];
            
            [glkView setContext:ctx];
            [glkView bindDrawable];
            
            int w = (int)[glkView drawableWidth];
            int h = (int)[glkView drawableHeight];
            
            if (w < 1 || h < 1)
            {
            	// throw or something
            }
            
            return true;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static ObjC.Object CreateContainer() [static] :50
::g::ObjC::Object* GraphicsView::CreateContainer()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIView* view = [[UIView alloc] init];
            return view;
        } ());
        
    }
    
}

// private static ObjC.Object CreateGlkView(ObjC.Object container) [static] :71
::g::ObjC::Object* GraphicsView::CreateGlkView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* c = (UIView*)container;
            GLKView* view = [[GLKView alloc] init];
            view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
            [view setBackgroundColor: [UIColor colorWithRed:0.0f green: 0.0f blue:0.0f alpha:0.0f]];
            [view setDrawableDepthFormat:GLKViewDrawableDepthFormat16];
            [view setEnableSetNeedsDisplay:true];
            [view setMultipleTouchEnabled:true];
            [c addSubview: view];
            return view;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static ObjC.Object CreateHitSurface(ObjC.Object container) [static] :57
::g::ObjC::Object* GraphicsView::CreateHitSurface(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* c = (UIView*)container;
            UIControl* control = [[UIControl alloc] init];
            control.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            [[control layer] setAnchorPoint: { 0.0f, 0.0f }];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            [c addSubview: control];
            [c bringSubviewToFront: control];
            return control;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static void DeleteDrawable(ObjC.Object handle) [static] :129
void GraphicsView::DeleteDrawable(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            GLKView* glkView = (GLKView*)handle;
            [glkView deleteDrawable];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void EndDraw(ObjC.Object handle) [static] :113
void GraphicsView::EndDraw(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            GLKView* glkView = (GLKView*)handle;
            [glkView display];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public GraphicsView New(Fuse.Visual visual) [static] :37
GraphicsView* GraphicsView::New3(::g::Fuse::Visual* visual)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_4(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/ImageView.uno
// -------------------------------------------------------------------------------

// internal sealed extern class ImageView :14
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[5] = uString::Const(" not supported in native context");
    ::TYPES[6] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[7] = ::g::Uno::Action_typeof();
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[11] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[12] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::ObjC::Object_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::TYPES[12/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageView, _imageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageView, _tintColor), 0,
        ::TYPES[13/*ObjC.Object*/], offsetof(ImageView, _uiImageView), 0,
        ::TYPES[13/*ObjC.Object*/], offsetof(ImageView, _uiImageHandle), 0,
        ::TYPES[12/*Uno.IDisposable*/], offsetof(ImageView, _imageHandle), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.iOS.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New3_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface2.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :77
void ImageView__ctor_5_fn(ImageView* __this)
{
    __this->ctor_5();
}

// private static void ClearImage(ObjC.Object imageViewHandle) :253
void ImageView__ClearImage_fn(::g::ObjC::Object* imageViewHandle)
{
    ImageView::ClearImage(imageViewHandle);
}

// private static ObjC.Object Create() :260
void ImageView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ImageView::Create();
}

// private static ObjC.Object CreateImageView(ObjC.Object container) :271
void ImageView__CreateImageView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::CreateImageView(container);
}

// public override sealed void Dispose() :90
void ImageView__Dispose_fn(ImageView* __this)
{
    __this->ImageHandle(NULL);

    if ((__this->ImageSource() != NULL) && uIs((::g::Fuse::Resources::ImageSource*)__this->ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(__this->ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, __this));

    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static float GetImageHeight(ObjC.Object handle) :216
void ImageView__GetImageHeight_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageHeight(handle);
}

// private float2 GetImageSize() :199
void ImageView__GetImageSize_fn(ImageView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetImageSize();
}

// private static float GetImageWidth(ObjC.Object handle) :207
void ImageView__GetImageWidth_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageWidth(handle);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :104
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// private Fuse.Resources.ImageSource get_ImageSource() :43
void ImageView__get_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->ImageSource();
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :20
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :77
void ImageView__New3_fn(ImageView** __retval)
{
    *__retval = ImageView::New3();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) :133
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) :152
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private void OnMultiDensityImageSourceActiveChanged() :49
void ImageView__OnMultiDensityImageSourceActiveChanged_fn(ImageView* __this)
{
    __this->OnMultiDensityImageSourceActiveChanged();
}

// private static void SetAnchorPoint(ObjC.Object handle) :84
void ImageView__SetAnchorPoint_fn(::g::ObjC::Object* handle)
{
    ImageView::SetAnchorPoint(handle);
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) :193
void ImageView__SetBounds_fn(::g::ObjC::Object* handle, float* x, float* y, float* w, float* h)
{
    ImageView::SetBounds(handle, *x, *y, *w, *h);
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) :225
void ImageView__SetImage_fn(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    ImageView::SetImage(imageViewHandle, uiImageHandle);
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :176
void ImageView__SetTransform2_fn(::g::ObjC::Object* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    ImageView::SetTransform2(handle, *m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) :166
void ImageView__SetTransform3_fn(::g::ObjC::Object* handle, ::g::Uno::Float4x4* t)
{
    ImageView::SetTransform3(handle, *t);
}

// public void set_TintColor(float4 value) :60
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) :233
void ImageView__TintImage_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::TintImage(handle, *r, *g, *b, *a);
}

// private void UpdateImage() :67
void ImageView__UpdateImage_fn(ImageView* __this)
{
    __this->UpdateImage();
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :123
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage1(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :128
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage2(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :138
void ImageView__UpdateImage3_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage3(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :157
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance] :77
void ImageView::ctor_5()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_4(ImageView::Create());
    _uiImageView = ImageView::CreateImageView(Handle());
    ImageView::SetAnchorPoint(_uiImageView);
}

// private float2 GetImageSize() [instance] :199
::g::Uno::Float2 ImageView::GetImageSize()
{
    return ::g::Uno::Float2__New2(ImageView::GetImageWidth(_uiImageView), ImageView::GetImageHeight(_uiImageView));
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :104
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    if (_imageHandle != NULL)
    {
        ImageView::ClearImage(_uiImageView);
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[12/*Uno.IDisposable*/]));
        _imageHandle = NULL;
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        _uiImageHandle = uCast< ::g::ObjC::Object*>(uPtr(value)->Handle(), ::TYPES[13/*ObjC.Object*/]);
        UpdateImage();
    }
}

// private Fuse.Resources.ImageSource get_ImageSource() [instance] :43
::g::Fuse::Resources::ImageSource* ImageView::ImageSource()
{
    return _imageSource;
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :20
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))->remove_ActiveChanged(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));

    _imageSource = value;

    if (value == NULL)
        return;

    if (uIs(value, ::TYPES[10/*Fuse.Resources.FileImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[10/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[11/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[11/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))
    {
        uPtr(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))->add_ActiveChanged(uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)ImageView__OnMultiDensityImageSourceActiveChanged_fn, this));
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[5/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance] :133
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance] :152
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    ImageHandle(NULL);
}

// private void OnMultiDensityImageSourceActiveChanged() [instance] :49
void ImageView::OnMultiDensityImageSourceActiveChanged()
{
    if (uIs((::g::Fuse::Resources::ImageSource*)ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(ImageSource(), ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]));
}

// public void set_TintColor(float4 value) [instance] :60
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    UpdateImage();
}

// private void UpdateImage() [instance] :67
void ImageView::UpdateImage()
{
    ::g::Uno::Float4 c = _tintColor;
    ::g::ObjC::Object* imageHandle = (_uiImageHandle != NULL) ? (::g::ObjC::Object*)ImageView::TintImage(_uiImageHandle, c.X, c.Y, c.Z, c.W) : NULL;
    ImageView::SetImage(_uiImageView, imageHandle);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :123
void ImageView::UpdateImage1(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :128
void ImageView::UpdateImage2(::g::Fuse::Resources::HttpImageSource* http)
{
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[8/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[9/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :138
void ImageView::UpdateImage3(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    ::g::Fuse::Resources::ImageSource* active = uPtr(multi)->Active();

    if (active != NULL)
    {
        if (uIs(active, ::TYPES[10/*Fuse.Resources.FileImageSource*/]))
            UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(active, ::TYPES[10/*Fuse.Resources.FileImageSource*/]));
        else if (uIs(active, ::TYPES[11/*Fuse.Resources.HttpImageSource*/]))
            UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(active, ::TYPES[11/*Fuse.Resources.HttpImageSource*/]));
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(active, ::STRINGS[5/*" not suppor...*/])));
    }
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :157
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    ImageView::SetTransform3(_uiImageView, ::g::Uno::Float4x4__Identity());
    ::g::Uno::Float2 imageSize = GetImageSize();
    ImageView::SetBounds(_uiImageView, 0.0f, 0.0f, imageSize.X, imageSize.Y);
    ::g::Uno::Float4x4 imageTransform = ::g::Uno::Matrix::Compose(::g::Uno::Float3__New4(scale, 0.0f), ::g::Uno::Float4__Identity(), ::g::Uno::Float3__New4(origin, 0.0f));
    ImageView::SetTransform3(_uiImageView, imageTransform);
}

// private static void ClearImage(ObjC.Object imageViewHandle) [static] :253
void ImageView::ClearImage(::g::ObjC::Object* imageViewHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            [imageView setImage:nil];
        } (::g::ObjC::Object::GetHandle(imageViewHandle));
        
    }
    
}

// private static ObjC.Object Create() [static] :260
::g::ObjC::Object* ImageView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* uicontrol = [[UIControl alloc] init];
            [uicontrol setMultipleTouchEnabled:true];
            [uicontrol setAutoresizesSubviews:false];
            [uicontrol setTranslatesAutoresizingMaskIntoConstraints:false];
            [uicontrol setClipsToBounds:true];
            return uicontrol;
        } ());
        
    }
    
}

// private static ObjC.Object CreateImageView(ObjC.Object container) [static] :271
::g::ObjC::Object* ImageView::CreateImageView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIImageView* imageView = [[UIImageView alloc] init];
            [container addSubview:imageView];
            return imageView;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static float GetImageHeight(ObjC.Object handle) [static] :216
float ImageView::GetImageHeight(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.height
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static float GetImageWidth(ObjC.Object handle) [static] :207
float ImageView::GetImageWidth(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.width
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public ImageView New() [static] :77
ImageView* ImageView::New3()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void SetAnchorPoint(ObjC.Object handle) [static] :84
void ImageView::SetAnchorPoint(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) [static] :193
void ImageView::SetBounds(::g::ObjC::Object* handle, float x, float y, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setBounds: { { x, y }, { w, h } }];
        } (::g::ObjC::Object::GetHandle(handle), x, y, w, h);
        
    }
    
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) [static] :225
void ImageView::SetImage(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle, ::id uiImageHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            UIImage* image = (UIImage*)uiImageHandle;
            [imageView setImage:image];
        } (::g::ObjC::Object::GetHandle(imageViewHandle), ::g::ObjC::Object::GetHandle(uiImageHandle));
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :176
void ImageView::SetTransform2(::g::ObjC::Object* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (::id handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            ::UIView* view = (::UIView*)handle;
            [[view layer] setTransform:transform];
        } (::g::ObjC::Object::GetHandle(handle), m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) [static] :166
void ImageView::SetTransform3(::g::ObjC::Object* handle, ::g::Uno::Float4x4 t)
{
    ImageView::SetTransform2(handle, t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) [static] :233
::g::ObjC::Object* ImageView::TintImage(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, float r, float g, float b, float a) -> ::id
        {
            UIImage* image = (UIImage*)handle;
            UIGraphicsBeginImageContextWithOptions(image.size, NO, image.scale);
            CGRect imageRect = CGRectMake(0.0f, 0.0f, image.size.width, image.size.height);
            CGContextRef ctx = UIGraphicsGetCurrentContext();
            [[UIColor colorWithRed:r green:g blue:b alpha:a] setFill];
            CGContextTranslateCTM(ctx, 0, image.size.height);
            CGContextScaleCTM(ctx, 1.0, -1.0);
            CGContextSetBlendMode(ctx, kCGBlendModeMultiply);
            CGContextDrawImage(ctx, imageRect, image.CGImage);
            CGContextClipToMask(ctx, imageRect, image.CGImage);
            CGContextAddRect(ctx, imageRect);
            CGContextDrawPath(ctx, kCGPathFill);
            UIImage* result = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            return result;
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/InputDispatch.uno
// -----------------------------------------------------------------------------------

// internal static extern class InputDispatch :12
// {
// static generated InputDispatch() :12
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::TYPES[13/*ObjC.Object*/], NULL)));
}

static void InputDispatch_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL), (uintptr_t)&InputDispatch::_activePointers_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddInputHandler(Fuse.Visual owner, Fuse.Controls.Native.ViewHandle viewHandle) :53
void InputDispatch__AddInputHandler_fn(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::AddInputHandler(owner, viewHandle);
}

// private static bool CompareUITouch(ObjC.Object a, ObjC.Object b) :168
void InputDispatch__CompareUITouch_fn(::g::ObjC::Object* a, ::g::ObjC::Object* b, bool* __retval)
{
    *__retval = InputDispatch::CompareUITouch(a, b);
}

// private static void DeactivateTouch(ObjC.Object uiTouch) :128
void InputDispatch__DeactivateTouch_fn(::g::ObjC::Object* uiTouch)
{
    InputDispatch::DeactivateTouch(uiTouch);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :207
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static int GetPointIndex(ObjC.Object uiTouch) :108
void InputDispatch__GetPointIndex_fn(::g::ObjC::Object* uiTouch, int32_t* __retval)
{
    *__retval = InputDispatch::GetPointIndex(uiTouch);
}

// private static Fuse.Controls.Native.iOS.InputDispatch.RootInfo GetRootInfo(Fuse.Visual origin) :96
void InputDispatch__GetRootInfo_fn(::g::Fuse::Visual* origin, InputDispatch__RootInfo* __retval)
{
    *__retval = InputDispatch::GetRootInfo(origin);
}

// private static double GetTimestamp(ObjC.Object uiTouch) :161
void InputDispatch__GetTimestamp_fn(::g::ObjC::Object* uiTouch, double* __retval)
{
    *__retval = InputDispatch::GetTimestamp(uiTouch);
}

// private static float2 GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView) :140
void InputDispatch__GetWindowPoint_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Uno::Float2* __retval)
{
    *__retval = InputDispatch::GetWindowPoint(uiTouch, rootView);
}

// private static void GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView, float& x, float& y) :149
void InputDispatch__GetWindowPoint1_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y)
{
    InputDispatch::GetWindowPoint1(uiTouch, rootView, x, y);
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(ObjC.Object touches, ObjC.Object rootView) :173
void InputDispatch__MakePointerEventData_fn(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView, uArray** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(touches, rootView);
}

// private static Fuse.Input.PointerEventData NewPointerEventData(ObjC.Object uiTouch, ObjC.Object rootView) :182
void InputDispatch__NewPointerEventData_fn(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = InputDispatch::NewPointerEventData(uiTouch, rootView);
}

// private static int NSArrayCount(ObjC.Object nsArray) :196
void InputDispatch__NSArrayCount_fn(::g::ObjC::Object* nsArray, int32_t* __retval)
{
    *__retval = InputDispatch::NSArrayCount(nsArray);
}

// private static ObjC.Object NSArrayObjectAtIndex(ObjC.Object nsArray, int index) :202
void InputDispatch__NSArrayObjectAtIndex_fn(::g::ObjC::Object* nsArray, int32_t* index, ::g::ObjC::Object** __retval)
{
    *__retval = InputDispatch::NSArrayObjectAtIndex(nsArray, *index);
}

// public static void OnTouchesBegan(Fuse.Visual origin, ObjC.Object touches) :14
void InputDispatch__OnTouchesBegan_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesBegan(origin, touches);
}

// public static void OnTouchesCancelled(Fuse.Visual origin, ObjC.Object touches) :40
void InputDispatch__OnTouchesCancelled_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesCancelled(origin, touches);
}

// public static void OnTouchesEnded(Fuse.Visual origin, ObjC.Object touches) :28
void InputDispatch__OnTouchesEnded_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesEnded(origin, touches);
}

// public static void OnTouchesMoved(Fuse.Visual origin, ObjC.Object touches) :21
void InputDispatch__OnTouchesMoved_fn(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch::OnTouchesMoved(origin, touches);
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) :248
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancelled(visual, data);
}

// private static void RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) :224
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(root, data);
}

// private static void RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) :212
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(root, data);
}

// private static void RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) :236
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(root, data);
}

// public static void RemoveInputHandler(Fuse.Controls.Native.ViewHandle viewHandle) :78
void InputDispatch__RemoveInputHandler_fn(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch::RemoveInputHandler(viewHandle);
}

uSStrong< ::g::Uno::Collections::List*> InputDispatch::_activePointers_;

// public static void AddInputHandler(Fuse.Visual owner, Fuse.Controls.Native.ViewHandle viewHandle) [static] :53
void InputDispatch::AddInputHandler(::g::Fuse::Visual* owner, ::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (id<UnoObject> owner, id<UnoObject> viewHandle) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<::g::Fuse::Controls::Native::ViewHandle*>((viewHandle).unoObject, ::g::Fuse::Controls::Native::ViewHandle_typeof())->HitTestHandle()); }();
            addInputHandler(view, ^void(int type, id<UnoObject> visual, id touches) {
            	switch(type)
            	{
            		case EVENTTYPE_PRESSED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesBegan(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_MOVED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesMoved(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_RELEASED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesEnded(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		case EVENTTYPE_CANCELLED:
            			[&]() -> void { ::uForeignPool __foreignPool; InputDispatch::OnTouchesCancelled(uCast<::g::Fuse::Visual*>((visual).unoObject, ::g::Fuse::Visual_typeof()), ::g::ObjC::Object::Create(touches)); }();
            			break;
            		default:
            			break;
            	}
            }, owner);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: owner], [::StrongUnoObject strongUnoObjectWithUnoObject: viewHandle]);
        
    }
    
}

// private static bool CompareUITouch(ObjC.Object a, ObjC.Object b) [static] :168
bool InputDispatch::CompareUITouch(::g::ObjC::Object* a, ::g::ObjC::Object* b)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id a, ::id b) -> bool
        {
            return (UITouch*)a == (UITouch*)b;
        } (::g::ObjC::Object::GetHandle(a), ::g::ObjC::Object::GetHandle(b));
        
    }
    
}

// private static void DeactivateTouch(ObjC.Object uiTouch) [static] :128
void InputDispatch::DeactivateTouch(::g::ObjC::Object* uiTouch)
{
    InputDispatch_typeof()->Init();
    ::g::ObjC::Object* ret8;

    for (int32_t i = 0; i < uPtr(InputDispatch::_activePointers_)->Count(); i++)
        if (InputDispatch::CompareUITouch((::g::Uno::Collections::List__get_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(i), &ret8), ret8), uiTouch))
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(i), NULL);
            return;
        }
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :207
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static int GetPointIndex(ObjC.Object uiTouch) [static] :108
int32_t InputDispatch::GetPointIndex(::g::ObjC::Object* uiTouch)
{
    InputDispatch_typeof()->Init();
    ::g::ObjC::Object* ret9;
    int32_t firstUnused = -1;

    for (int32_t i = 0; i < uPtr(InputDispatch::_activePointers_)->Count(); ++i)
    {
        ::g::ObjC::Object* pointer = (::g::Uno::Collections::List__get_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(i), &ret9), ret9);

        if (InputDispatch::CompareUITouch(pointer, NULL) && (firstUnused < 0))
            firstUnused = i;
        else if (InputDispatch::CompareUITouch(pointer, uiTouch))
            return i;
    }

    if (firstUnused < 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(InputDispatch::_activePointers_), uiTouch);
        firstUnused = uPtr(InputDispatch::_activePointers_)->Count() - 1;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(InputDispatch::_activePointers_), uCRef<int32_t>(firstUnused), uiTouch);
    return firstUnused;
}

// private static Fuse.Controls.Native.iOS.InputDispatch.RootInfo GetRootInfo(Fuse.Visual origin) [static] :96
InputDispatch__RootInfo InputDispatch::GetRootInfo(::g::Fuse::Visual* origin)
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Visual* rootVisual = InputDispatch::FindRoot(origin);
    ::g::ObjC::Object* rootView = NULL;
    ::g::Fuse::Controls::Native::NativeRootViewport* rootViewport = uAs< ::g::Fuse::Controls::Native::NativeRootViewport*>(rootVisual, ::g::Fuse::Controls::Native::NativeRootViewport_typeof());

    if (rootViewport != NULL)
        rootView = uPtr(uPtr(rootViewport)->RootView())->NativeHandle;

    return InputDispatch__RootInfo__New1(rootVisual, rootView);
}

// private static double GetTimestamp(ObjC.Object uiTouch) [static] :161
double InputDispatch::GetTimestamp(::g::ObjC::Object* uiTouch)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id uiTouch) -> double
        {
            ::UITouch* touch = (::UITouch*)uiTouch;
            return [touch timestamp];
        } (::g::ObjC::Object::GetHandle(uiTouch));
        
    }
    
}

// private static float2 GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView) [static] :140
::g::Uno::Float2 InputDispatch::GetWindowPoint(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView)
{
    InputDispatch_typeof()->Init();
    float x;
    float y;
    InputDispatch::GetWindowPoint1(uiTouch, rootView, &x, &y);
    return ::g::Uno::Float2__New2(x, y);
}

// private static void GetWindowPoint(ObjC.Object uiTouch, ObjC.Object rootView, float& x, float& y) [static] :149
void InputDispatch::GetWindowPoint1(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView, float* x, float* y)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiTouch, ::id rootView, float* x, float* y) -> void
        {
            ::UITouch* touch = (::UITouch*)uiTouch;
            UIView* relativeView = (UIView*)rootView;
            UIWindow* window = [touch window];
            CGPoint location = [touch locationInView:window];
            CGPoint localLocation = [window convertPoint:location toView:relativeView];
            *x = (float)localLocation.x;
            *y = (float)localLocation.y;
        } (::g::ObjC::Object::GetHandle(uiTouch), ::g::ObjC::Object::GetHandle(rootView), x, y);
        
    }
    
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(ObjC.Object touches, ObjC.Object rootView) [static] :173
uArray* InputDispatch::MakePointerEventData(::g::ObjC::Object* touches, ::g::ObjC::Object* rootView)
{
    InputDispatch_typeof()->Init();
    int32_t count = InputDispatch::NSArrayCount(touches);
    uArray* data = uArray::New(::g::Fuse::Input::PointerEventData_typeof()->Array(), count);

    for (int32_t i = 0; i < count; i++)
        uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = InputDispatch::NewPointerEventData(InputDispatch::NSArrayObjectAtIndex(touches, i), rootView);

    return data;
}

// private static Fuse.Input.PointerEventData NewPointerEventData(ObjC.Object uiTouch, ObjC.Object rootView) [static] :182
::g::Fuse::Input::PointerEventData* InputDispatch::NewPointerEventData(::g::ObjC::Object* uiTouch, ::g::ObjC::Object* rootView)
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection7;
    int32_t pointIndex = InputDispatch::GetPointIndex(uiTouch);
    collection7 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection7)->PointIndex = pointIndex;
    uPtr(collection7)->WindowPoint = InputDispatch::GetWindowPoint(uiTouch, rootView);
    uPtr(collection7)->Timestamp = (InputDispatch::GetTimestamp(uiTouch) - ::g::Fuse::Time::FrameTimeBase());
    uPtr(collection7)->PointerType = 2;
    uPtr(collection7)->IsPrimary = (pointIndex == 0);
    return collection7;
}

// private static int NSArrayCount(ObjC.Object nsArray) [static] :196
int32_t InputDispatch::NSArrayCount(::g::ObjC::Object* nsArray)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id nsArray) -> int32_t
        {
            return (int)((NSArray*)nsArray).count;
        } (::g::ObjC::Object::GetHandle(nsArray));
        
    }
    
}

// private static ObjC.Object NSArrayObjectAtIndex(ObjC.Object nsArray, int index) [static] :202
::g::ObjC::Object* InputDispatch::NSArrayObjectAtIndex(::g::ObjC::Object* nsArray, int32_t index)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id nsArray, int32_t index) -> ::id
        {
            return [((NSArray*)nsArray) objectAtIndex:index];
        } (::g::ObjC::Object::GetHandle(nsArray), index));
        
    }
    
}

// public static void OnTouchesBegan(Fuse.Visual origin, ObjC.Object touches) [static] :14
void InputDispatch::OnTouchesBegan(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch_typeof()->Init();
    uArray* array1;
    int32_t index2;
    int32_t length3;
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);

    for (array1 = InputDispatch::MakePointerEventData(touches, rootInfo.RootView), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Input::PointerEventData* data = uPtr(array1)->Strong< ::g::Fuse::Input::PointerEventData*>(index2);
        InputDispatch::RaisePressed(rootInfo.RootVisual, data);
    }
}

// public static void OnTouchesCancelled(Fuse.Visual origin, ObjC.Object touches) [static] :40
void InputDispatch::OnTouchesCancelled(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch_typeof()->Init();
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);
    int32_t count = InputDispatch::NSArrayCount(touches);

    for (int32_t i = 0; i < count; i++)
    {
        ::g::ObjC::Object* uiTouch = InputDispatch::NSArrayObjectAtIndex(touches, i);
        InputDispatch::RaiseCancelled(rootInfo.RootVisual, InputDispatch::NewPointerEventData(uiTouch, rootInfo.RootView));
        InputDispatch::DeactivateTouch(uiTouch);
    }
}

// public static void OnTouchesEnded(Fuse.Visual origin, ObjC.Object touches) [static] :28
void InputDispatch::OnTouchesEnded(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch_typeof()->Init();
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);
    int32_t count = InputDispatch::NSArrayCount(touches);

    for (int32_t i = 0; i < count; i++)
    {
        ::g::ObjC::Object* uiTouch = InputDispatch::NSArrayObjectAtIndex(touches, i);
        InputDispatch::RaiseReleased(rootInfo.RootVisual, InputDispatch::NewPointerEventData(uiTouch, rootInfo.RootView));
        InputDispatch::DeactivateTouch(uiTouch);
    }
}

// public static void OnTouchesMoved(Fuse.Visual origin, ObjC.Object touches) [static] :21
void InputDispatch::OnTouchesMoved(::g::Fuse::Visual* origin, ::g::ObjC::Object* touches)
{
    InputDispatch_typeof()->Init();
    uArray* array4;
    int32_t index5;
    int32_t length6;
    InputDispatch__RootInfo rootInfo = InputDispatch::GetRootInfo(origin);

    for (array4 = InputDispatch::MakePointerEventData(touches, rootInfo.RootView), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
    {
        ::g::Fuse::Input::PointerEventData* data = uPtr(array4)->Strong< ::g::Fuse::Input::PointerEventData*>(index5);
        InputDispatch::RaiseMoved(rootInfo.RootVisual, data);
    }
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :248
void InputDispatch::RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        {
            ::g::Fuse::Input::Pointer::LoseCapture(uPtr(data)->PointIndex);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :224
void InputDispatch::RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        {
            bool args = ::g::Fuse::Input::Pointer::RaiseMoved(root, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :212
void InputDispatch::RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        {
            bool args = ::g::Fuse::Input::Pointer::RaisePressed(root, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :236
void InputDispatch::RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        {
            bool args = ::g::Fuse::Input::Pointer::RaiseReleased(root, data);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveInputHandler(Fuse.Controls.Native.ViewHandle viewHandle) [static] :78
void InputDispatch::RemoveInputHandler(::g::Fuse::Controls::Native::ViewHandle* viewHandle)
{
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (id<UnoObject> viewHandle) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<::g::Fuse::Controls::Native::ViewHandle*>((viewHandle).unoObject, ::g::Fuse::Controls::Native::ViewHandle_typeof())->HitTestHandle()); }();
            removeInputHandler(view);
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: viewHandle]);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/KeyboardView.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class KeyboardView :6
// {
static void KeyboardView_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(KeyboardView, _handle), 0);
}

uType* KeyboardView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(KeyboardView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.KeyboardView", options);
    type->fp_build_ = KeyboardView_build;
    type->fp_ctor_ = (void*)KeyboardView__New1_fn;
    return type;
}

// public KeyboardView() :21
void KeyboardView__ctor__fn(KeyboardView* __this)
{
    __this->ctor_();
}

// private static ObjC.Object Create() :28
void KeyboardView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = KeyboardView::Create();
}

// public ObjC.Object get_Handle() :10
void KeyboardView__get_Handle_fn(KeyboardView* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// public KeyboardView New() :21
void KeyboardView__New1_fn(KeyboardView** __retval)
{
    *__retval = KeyboardView::New1();
}

// public KeyboardView() [instance] :21
void KeyboardView::ctor_()
{
    _handle = KeyboardView::Create();
}

// public ObjC.Object get_Handle() [instance] :10
::g::ObjC::Object* KeyboardView::Handle()
{
    return _handle;
}

// private static ObjC.Object Create() [static] :28
::g::ObjC::Object* KeyboardView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[::KeyboardView alloc] init];
        } ());
        
    }
    
}

// public KeyboardView New() [static] :21
KeyboardView* KeyboardView::New1()
{
    KeyboardView* obj1 = (KeyboardView*)uNew(KeyboardView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/NSAttributedStringBuilder.uno
// -----------------------------------------------------------------------------------------------

// internal sealed extern class NSAttributedStringBuilder :7
// {
static void NSAttributedStringBuilder_build(uType* type)
{
    ::STRINGS[6] = uString::Const("");
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(NSAttributedStringBuilder, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(NSAttributedStringBuilder, _lineSpacing), 0,
        ::g::Uno::String_typeof(), offsetof(NSAttributedStringBuilder, _value), 0,
        ::g::ObjC::Object_typeof(), offsetof(NSAttributedStringBuilder, _font), 0,
        ::g::Fuse::Controls::TextAlignment_typeof(), offsetof(NSAttributedStringBuilder, _alignment), 0,
        ::g::Fuse::Controls::TextWrapping_typeof(), offsetof(NSAttributedStringBuilder, _textWrapping), 0);
}

uType* NSAttributedStringBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NSAttributedStringBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NSAttributedStringBuilder", options);
    type->fp_build_ = NSAttributedStringBuilder_build;
    type->fp_ctor_ = (void*)NSAttributedStringBuilder__New1_fn;
    return type;
}

// public NSAttributedStringBuilder() :17
void NSAttributedStringBuilder__ctor__fn(NSAttributedStringBuilder* __this)
{
    __this->ctor_();
}

// public ObjC.Object BuildAttributedString() :73
void NSAttributedStringBuilder__BuildAttributedString_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->BuildAttributedString();
}

// public ObjC.Object BuildAttributes() :78
void NSAttributedStringBuilder__BuildAttributes_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->BuildAttributes();
}

// private static ObjC.Object Create(string value, ObjC.Object attributes) :88
void NSAttributedStringBuilder__Create_fn(uString* value, ::g::ObjC::Object* attributes, ::g::ObjC::Object** __retval)
{
    *__retval = NSAttributedStringBuilder::Create(value, attributes);
}

// private int GetTextAlignment(Fuse.Controls.TextAlignment alignment) :61
void NSAttributedStringBuilder__GetTextAlignment_fn(NSAttributedStringBuilder* __this, int32_t* alignment, int32_t* __retval)
{
    *__retval = __this->GetTextAlignment(*alignment);
}

// public NSAttributedStringBuilder New() :17
void NSAttributedStringBuilder__New1_fn(NSAttributedStringBuilder** __retval)
{
    *__retval = NSAttributedStringBuilder::New1();
}

// private static ObjC.Object NewDictionary() :20
void NSAttributedStringBuilder__NewDictionary_fn(::g::ObjC::Object** __retval)
{
    *__retval = NSAttributedStringBuilder::NewDictionary();
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetFont(ObjC.Object font) :43
void NSAttributedStringBuilder__SetFont_fn(NSAttributedStringBuilder* __this, ::g::ObjC::Object* font, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetFont(font);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) :115
void NSAttributedStringBuilder__SetFont1_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    NSAttributedStringBuilder::SetFont1(handle, fontHandle);
}

// private static void SetForegroundColor(ObjC.Object handle, float r, float g, float b, float a) :94
void NSAttributedStringBuilder__SetForegroundColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    NSAttributedStringBuilder::SetForegroundColor(handle, *r, *g, *b, *a);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetLineSpacing(float lineSpacing) :37
void NSAttributedStringBuilder__SetLineSpacing_fn(NSAttributedStringBuilder* __this, float* lineSpacing, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetLineSpacing(*lineSpacing);
}

// private static void SetParagraphStyle(ObjC.Object handle, float lineSpacing, int textAlignment, bool wrapText) :102
void NSAttributedStringBuilder__SetParagraphStyle_fn(::g::ObjC::Object* handle, float* lineSpacing, int32_t* textAlignment, bool* wrapText)
{
    NSAttributedStringBuilder::SetParagraphStyle(handle, *lineSpacing, *textAlignment, *wrapText);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextAlignment(Fuse.Controls.TextAlignment alignment) :49
void NSAttributedStringBuilder__SetTextAlignment_fn(NSAttributedStringBuilder* __this, int32_t* alignment, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextAlignment(*alignment);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextColor(float4 color) :31
void NSAttributedStringBuilder__SetTextColor_fn(NSAttributedStringBuilder* __this, ::g::Uno::Float4* color, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextColor(*color);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextWrapping(Fuse.Controls.TextWrapping wrapping) :55
void NSAttributedStringBuilder__SetTextWrapping_fn(NSAttributedStringBuilder* __this, int32_t* wrapping, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextWrapping(*wrapping);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetValue(string value) :25
void NSAttributedStringBuilder__SetValue_fn(NSAttributedStringBuilder* __this, uString* value, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetValue(value);
}

// public NSAttributedStringBuilder() [instance] :17
void NSAttributedStringBuilder::ctor_()
{
    _color = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}

// public ObjC.Object BuildAttributedString() [instance] :73
::g::ObjC::Object* NSAttributedStringBuilder::BuildAttributedString()
{
    uString* ind1;
    return NSAttributedStringBuilder::Create((ind1 = _value, (ind1 != NULL) ? ind1 : ::STRINGS[6/*""*/]), BuildAttributes());
}

// public ObjC.Object BuildAttributes() [instance] :78
::g::ObjC::Object* NSAttributedStringBuilder::BuildAttributes()
{
    ::g::ObjC::Object* attributes = NSAttributedStringBuilder::NewDictionary();
    NSAttributedStringBuilder::SetForegroundColor(attributes, _color.X, _color.Y, _color.Z, _color.W);
    NSAttributedStringBuilder::SetParagraphStyle(attributes, _lineSpacing, GetTextAlignment(_alignment), _textWrapping == 1);
    NSAttributedStringBuilder::SetFont1(attributes, _font);
    return attributes;
}

// private int GetTextAlignment(Fuse.Controls.TextAlignment alignment) [instance] :61
int32_t NSAttributedStringBuilder::GetTextAlignment(int32_t alignment)
{
    int32_t nsAlignment = 0;

    switch (alignment)
    {
        case 0:
        {
            nsAlignment = NSTextAlignmentLeft;
            break;
        }
        case 1:
        {
            nsAlignment = NSTextAlignmentCenter;
            break;
        }
        case 2:
        {
            nsAlignment = NSTextAlignmentRight;
            break;
        }
    }

    return nsAlignment;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetFont(ObjC.Object font) [instance] :43
NSAttributedStringBuilder* NSAttributedStringBuilder::SetFont(::g::ObjC::Object* font)
{
    _font = font;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetLineSpacing(float lineSpacing) [instance] :37
NSAttributedStringBuilder* NSAttributedStringBuilder::SetLineSpacing(float lineSpacing)
{
    _lineSpacing = lineSpacing;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextAlignment(Fuse.Controls.TextAlignment alignment) [instance] :49
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextAlignment(int32_t alignment)
{
    _alignment = alignment;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextColor(float4 color) [instance] :31
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextColor(::g::Uno::Float4 color)
{
    _color = color;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextWrapping(Fuse.Controls.TextWrapping wrapping) [instance] :55
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextWrapping(int32_t wrapping)
{
    _textWrapping = wrapping;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetValue(string value) [instance] :25
NSAttributedStringBuilder* NSAttributedStringBuilder::SetValue(uString* value)
{
    _value = value;
    return this;
}

// private static ObjC.Object Create(string value, ObjC.Object attributes) [static] :88
::g::ObjC::Object* NSAttributedStringBuilder::Create(uString* value, ::g::ObjC::Object* attributes)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* value, ::id attributes) -> ::id
        {
            return [[NSAttributedString alloc] initWithString:value attributes:attributes];
        } (::uObjC::NativeString(value), ::g::ObjC::Object::GetHandle(attributes)));
        
    }
    
}

// public NSAttributedStringBuilder New() [static] :17
NSAttributedStringBuilder* NSAttributedStringBuilder::New1()
{
    NSAttributedStringBuilder* obj2 = (NSAttributedStringBuilder*)uNew(NSAttributedStringBuilder_typeof());
    obj2->ctor_();
    return obj2;
}

// private static ObjC.Object NewDictionary() [static] :20
::g::ObjC::Object* NSAttributedStringBuilder::NewDictionary()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[NSMutableDictionary alloc] init];
        } ());
        
    }
    
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static] :115
void NSAttributedStringBuilder::SetFont1(::g::ObjC::Object* handle, ::g::ObjC::Object* fontHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            auto font = (UIFont*)fontHandle;
            if (font != nil)
            	dict[NSFontAttributeName] = font;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(fontHandle));
        
    }
    
}

// private static void SetForegroundColor(ObjC.Object handle, float r, float g, float b, float a) [static] :94
void NSAttributedStringBuilder::SetForegroundColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            auto color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            dict[NSForegroundColorAttributeName] = color;
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetParagraphStyle(ObjC.Object handle, float lineSpacing, int textAlignment, bool wrapText) [static] :102
void NSAttributedStringBuilder::SetParagraphStyle(::g::ObjC::Object* handle, float lineSpacing, int32_t textAlignment, bool wrapText)
{
    @autoreleasepool
    {
        [] (::id handle, float lineSpacing, int32_t textAlignment, bool wrapText) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            auto paragraphStyle = [[NSMutableParagraphStyle alloc] init];
            paragraphStyle.lineSpacing = lineSpacing;
            paragraphStyle.alignment = (NSTextAlignment)textAlignment;
            paragraphStyle.lineBreakMode = wrapText
            	? NSLineBreakByWordWrapping
            	: NSLineBreakByTruncatingTail;
            dict[NSParagraphStyleAttributeName] = paragraphStyle;
        } (::g::ObjC::Object::GetHandle(handle), lineSpacing, textAlignment, wrapText);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/ScrollView.uno
// --------------------------------------------------------------------------------

// public sealed extern class ScrollView :16
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2));
    type->SetFields(10,
        ::g::ObjC::Object_typeof(), offsetof(ScrollView, _delegateHandle), 0,
        ::TYPES[15/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(ScrollView, _host), 0);
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__OnSizeChanged_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int32_t*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :32
void ScrollView__ctor_4_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_4(host);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) :54
void ScrollView__AddCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::AddCallback(handle, callback);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :23
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int32_t* value)
{
    __this->AllowedScrollDirections(*value);
}

// private static ObjC.Object Create() :45
void ScrollView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :38
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) :88
void ScrollView__GetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::GetContentOffset(handle, x, y);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :32
void ScrollView__New3_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New3(host);
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) :63
void ScrollView__OnScrollViewDidScroll_fn(ScrollView* __this, ::g::ObjC::Object* scrollViewHandle)
{
    __this->OnScrollViewDidScroll(scrollViewHandle);
}

// protected internal override sealed void OnSizeChanged() :71
void ScrollView__OnSizeChanged_fn(ScrollView* __this)
{
    ::g::Uno::Float2 contentSize = ::g::Fuse::Controls::Native::IScrollViewHost::ContentSize(uInterface(uPtr(__this->_host), ::TYPES[15/*Fuse.Controls.Native.IScrollViewHost*/]));
    ScrollView::SetContentSize(__this->Handle(), contentSize.X, contentSize.Y);
}

// public void set_ScrollPosition(float2 value) :28
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) :78
void ScrollView__SetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::SetContentOffset(handle, *x, *y);
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) :97
void ScrollView__SetContentSize_fn(::g::ObjC::Object* handle, float* w, float* h)
{
    ScrollView::SetContentSize(handle, *w, *h);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :32
void ScrollView::ctor_4(uObject* host)
{
    ctor_2(ScrollView::Create(), 0);
    _host = host;
    _delegateHandle = ScrollView::AddCallback(Handle(), uDelegate::New(::TYPES[14/*Uno.Action<ObjC.Object>*/], (void*)ScrollView__OnScrollViewDidScroll_fn, this));
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :23
void ScrollView::AllowedScrollDirections(int32_t value)
{
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) [instance] :63
void ScrollView::OnScrollViewDidScroll(::g::ObjC::Object* scrollViewHandle)
{
    float x = 0.0f;
    float y = 0.0f;
    ScrollView::GetContentOffset(Handle(), &x, &y);
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[15/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2(x, y));
}

// public void set_ScrollPosition(float2 value) [instance] :28
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ScrollView::SetContentOffset(Handle(), value.X, value.Y);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static] :54
::g::ObjC::Object* ScrollView::AddCallback(::g::ObjC::Object* handle, uDelegate* callback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<void, ::id> callback) -> ::id
        {
            ScrollViewDelegate* del = [[ScrollViewDelegate alloc] init];
            [del setDidScrollCallback: callback];
            ::UIScrollView* scrollView =  (::UIScrollView*)handle;
            [scrollView setDelegate:del];
            return del;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id>)nil : (^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::ObjC::Object::Create(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static ObjC.Object Create() [static] :45
::g::ObjC::Object* ScrollView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UIScrollView* scrollView = [[::UIScrollView alloc] init];
            [scrollView setMultipleTouchEnabled:true];
            [scrollView setOpaque:true];
            return  scrollView;
        } ());
        
    }
    
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) [static] :88
void ScrollView::GetContentOffset(::g::ObjC::Object* handle, float* x, float* y)
{
    @autoreleasepool
    {
        [] (::id handle, float* x, float* y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint offset = [scrollView contentOffset];
            *x = offset.x;
            *y = offset.y;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :32
ScrollView* ScrollView::New3(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_4(host);
    return obj1;
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) [static] :78
void ScrollView::SetContentOffset(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint p = { 0 };
            p.x = (CGFloat)x;
            p.y = (CGFloat)y;
            [scrollView setContentOffset:p];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) [static] :97
void ScrollView::SetContentSize(::g::ObjC::Object* handle, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float w, float h) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGSize size = { 0 };
            size.width = (CGFloat)w;
            size.height = (CGFloat)h;
            [scrollView setContentSize:size];
        } (::g::ObjC::Object::GetHandle(handle), w, h);
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/TextView.uno
// ------------------------------------------------------------------------------

// public sealed extern class TextView :9
// {
static void TextView_build(uType* type)
{
    ::TYPES[16] = ::g::Fuse::Controls::Native::ITextView_typeof();
    type->SetDependencies(
        ::g::Fuse::Controls::Native::iOS::FontCache_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface1),
        ::TYPES[16/*Fuse.Controls.Native.ITextView*/], offsetof(TextView_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof(), offsetof(TextView, _builder), 0,
        ::g::Uno::Float_typeof(), offsetof(TextView, _fontSize), 0,
        ::g::Fuse::Font_typeof(), offsetof(TextView, _font), 0);
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New3_fn;
    type->interface2.fp_set_Value = (void(*)(uObject*, uString*))TextView__FuseControlsNativeITextViewset_Value_fn;
    type->interface2.fp_set_MaxLength = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface2.fp_set_TextWrapping = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface2.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface2.fp_set_FontSize = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface2.fp_set_TextAlignment = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface2.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__FuseControlsNativeITextViewset_Font_fn;
    type->interface2.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface2.fp_set_TextTruncation = (void(*)(uObject*, int32_t*))TextView__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// public TextView() :14
void TextView__ctor_5_fn(TextView* __this)
{
    __this->ctor_5();
}

// public TextView(ObjC.Object handle) :12
void TextView__ctor_6_fn(TextView* __this, ::g::ObjC::Object* handle)
{
    __this->ctor_6(handle);
}

// private static ObjC.Object Create() :17
void TextView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = TextView::Create();
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :80
void TextView__FuseControlsNativeITextViewset_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;
    __this->_font = value;

    if (value == NULL)
        return;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        ::g::ObjC::Object* font = ::g::Fuse::Controls::Native::iOS::FontCache::Get((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int32_t>(0), &ret3), ret3), __this->_fontSize);
        uPtr(__this->_builder)->SetFont(font);
        __this->UpdateText();
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :61
void TextView__FuseControlsNativeITextViewset_FontSize_fn(TextView* __this, float* value)
{
    float value_ = *value;
    __this->_fontSize = value_;
    ::g::Fuse::Controls::Native::ITextView::Font(uInterface((uObject*)__this, ::TYPES[16/*Fuse.Controls.Native.ITextView*/]), __this->_font);
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :51
void TextView__FuseControlsNativeITextViewset_LineSpacing_fn(TextView* __this, float* value)
{
    float value_ = *value;
    uPtr(__this->_builder)->SetLineSpacing(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :37
void TextView__FuseControlsNativeITextViewset_MaxLength_fn(TextView* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :70
void TextView__FuseControlsNativeITextViewset_TextAlignment_fn(TextView* __this, int32_t* value)
{
    int32_t value_ = *value;
    uPtr(__this->_builder)->SetTextAlignment(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :97
void TextView__FuseControlsNativeITextViewset_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(__this->_builder)->SetTextColor(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :106
void TextView__FuseControlsNativeITextViewset_TextTruncation_fn(TextView* __this, int32_t* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :42
void TextView__FuseControlsNativeITextViewset_TextWrapping_fn(TextView* __this, int32_t* value)
{
    int32_t value_ = *value;
    uPtr(__this->_builder)->SetTextWrapping(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :28
void TextView__FuseControlsNativeITextViewset_Value_fn(TextView* __this, uString* value)
{
    uPtr(__this->_builder)->SetValue(value);
    __this->UpdateText();
}

// public TextView New() :14
void TextView__New3_fn(TextView** __retval)
{
    *__retval = TextView::New3();
}

// private static void SetValue(ObjC.Object handle, ObjC.Object attributedString) :115
void TextView__SetValue_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* attributedString)
{
    TextView::SetValue(handle, attributedString);
}

// private void UpdateText() :109
void TextView__UpdateText_fn(TextView* __this)
{
    __this->UpdateText();
}

// public TextView() [instance] :14
void TextView::ctor_5()
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_6(TextView::Create());
}

// public TextView(ObjC.Object handle) [instance] :12
void TextView::ctor_6(::g::ObjC::Object* handle)
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_4(handle);
}

// private void UpdateText() [instance] :109
void TextView::UpdateText()
{
    TextView::SetValue(Handle(), uPtr(_builder)->BuildAttributedString());
}

// private static ObjC.Object Create() [static] :17
::g::ObjC::Object* TextView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            auto label = [[::UILabel alloc] init];
            label.numberOfLines = 0;
            return label;
        } ());
        
    }
    
}

// public TextView New() [static] :14
TextView* TextView::New3()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_5();
    return obj2;
}

// private static void SetValue(ObjC.Object handle, ObjC.Object attributedString) [static] :115
void TextView::SetValue(::g::ObjC::Object* handle, ::g::ObjC::Object* attributedString)
{
    @autoreleasepool
    {
        [] (::id handle, ::id attributedString) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            label.attributedText = (NSAttributedString*)attributedString;
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(attributedString));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/iOS/View.uno
// --------------------------------------------------------------------------

// public abstract extern class View :9
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(9,
        ::g::ObjC::Object_typeof(), offsetof(View, _handle), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) :15
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle, int32_t* inputmode)
{
    __this->ctor_2(handle, *inputmode);
}

// protected View(ObjC.Object handle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) :17
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView, int32_t* inputmode)
{
    __this->ctor_3(handle, *isLeafView, *inputmode);
}

// public ObjC.Object get_Handle() :11
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(ObjC.Object handle, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) [instance] :15
void View::ctor_2(::g::ObjC::Object* handle, int32_t inputmode)
{
    ctor_3(handle, false, inputmode);
}

// protected View(ObjC.Object handle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) [instance] :17
void View::ctor_3(::g::ObjC::Object* handle, bool isLeafView, int32_t inputmode)
{
    ctor_1(handle, isLeafView, inputmode, 0);
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance] :11
::g::ObjC::Object* View::Handle()
{
    return _handle;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
