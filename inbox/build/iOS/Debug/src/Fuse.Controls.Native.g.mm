// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.ViewFactory.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <Fuse.iOSDevice.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.VisualBounds.h>
#include <iOS/CanvasViewGroup.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[3];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.10.0-rc1/ImageLoader.uno
// -----------------------------------------------------------------------------

// internal static extern class ImageLoader :63
// {
// static generated ImageLoader() :63
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/]));
}

static void ImageLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data/");
    ::STRINGS[1] = uString::Const("/tempImage");
    ::STRINGS[2] = uString::Const("file://");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/], (uintptr_t)&ImageLoader::_imageHandleCache_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// private static extern string GetBundleAbsolutePath(string bundlePath) :309
void ImageLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = ImageLoader::GetBundleAbsolutePath(bundlePath);
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) :127
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageLoader::Load(http);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) :112
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load1(uri);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) :100
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load2(bundleFile);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) :72
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load3(fileSource);
}

// private static extern ObjC.Object LoadUri(string uri) :302
void ImageLoader__LoadUri_fn(uString* uri, ::g::ObjC::Object** __retval)
{
    *__retval = ImageLoader::LoadUri(uri);
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) :249
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;

// private static extern string GetBundleAbsolutePath(string bundlePath) [static] :309
uString* ImageLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    ImageLoader_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle bundleForClass:[StrongUnoObject class]] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) [static] :127
::g::Uno::Threading::Future1* ImageLoader::Load(::g::Fuse::Resources::HttpImageSource* http)
{
    ImageLoader_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Promise* ret2;
    uString* url = uPtr(http)->Url();
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), url, (void**)(&handle), &ret1), ret1))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(url, ImageLoader::LoadUri(url));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), url, handle);
    }

    return (::g::Uno::Threading::Promise__New2_fn(::TYPES[1/*Uno.Threading.Promise<Fuse.Controls.Native.ImageHandle>*/], handle, &ret2), ret2);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) [static] :112
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load1(uString* uri)
{
    ImageLoader_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), uri, (void**)(&handle), &ret3), ret3))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(uri, ImageLoader::LoadUri(uri));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), uri, handle);
    }

    return handle;
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) [static] :100
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load2(::g::Uno::IO::BundleFile* bundleFile)
{
    ImageLoader_typeof()->Init();
    return ImageLoader::Load1(ImageLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(bundleFile)->BundlePath())));
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) [static] :72
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load3(::g::Uno::UX::FileSource* fileSource)
{
    ImageLoader_typeof()->Init();
    bool ret4;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if (uIs(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))
        handle = ImageLoader::Load2(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(fileSource)->Name, (void**)(&handle), &ret4), ret4))
        uPtr(handle)->Pin();
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[1/*"/tempImage"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(fileSource->Name, ImageLoader::LoadUri(::g::Uno::String::op_Addition2(::STRINGS[2/*"file://"*/], path)));
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), fileSource->Name, handle);
    }

    return handle;
}

// private static extern ObjC.Object LoadUri(string uri) [static] :302
::g::ObjC::Object* ImageLoader::LoadUri(uString* uri)
{
    ImageLoader_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::NSString* uri) -> ::id
        {
            NSData* data = [NSData dataWithContentsOfURL: [NSURL URLWithString: uri]];
            return [UIImage imageWithData:data];
        } (::uObjC::NativeString(uri)));
        
    }
    
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static] :249
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader_typeof()->Init();
    bool ret5;
    bool ret6;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(handle)->Name(), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(handle)->Name(), &ret6);
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/ViewHandle.iOS.uno
// ----------------------------------------------------------------------

// internal static extern class ViewFactory :354
// {
static void ViewFactory_build(uType* type)
{
}

uClassType* ViewFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ViewFactory", options);
    type->fp_build_ = ViewFactory_build;
    return type;
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup() :356
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroup();
}

// private static ObjC.Object InstantiateViewGroupImpl() :362
void ViewFactory__InstantiateViewGroupImpl_fn(::g::ObjC::Object** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroupImpl();
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup() [static] :356
::g::Fuse::Controls::Native::ViewHandle* ViewFactory::InstantiateViewGroup()
{
    return ::g::Fuse::Controls::Native::ViewHandle::New2(ViewFactory::InstantiateViewGroupImpl(), false, 0, 0);
}

// private static ObjC.Object InstantiateViewGroupImpl() [static] :362
::g::ObjC::Object* ViewFactory::InstantiateViewGroupImpl()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* control = [[UIControl alloc] init];
            [control setOpaque:false];
            [control setMultipleTouchEnabled:true];
            return control;
        } ());
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/ViewHandle.iOS.uno
// ----------------------------------------------------------------------

// public extern class ViewHandle :14
// {
static void ViewHandle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ViewHandle_type, interface0));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(ViewHandle, NativeHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, IsLeafView), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, NeedsInvalidation), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, NeedsRenderBounds), 0,
        ViewHandle__InputMode_typeof(), offsetof(ViewHandle, _inputMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(ViewHandle, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(ViewHandle, _size), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, _HitTestEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, _IsEnabled), 0);
}

ViewHandle_type* ViewHandle_typeof()
{
    static uSStrong<ViewHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ViewHandle);
    options.TypeSize = sizeof(ViewHandle_type);
    type = (ViewHandle_type*)uClassType::New("Fuse.Controls.Native.ViewHandle", options);
    type->fp_build_ = ViewHandle_build;
    type->fp_Dispose = ViewHandle__Dispose_fn;
    type->fp_get_HitTestHandle = ViewHandle__get_HitTestHandle_fn;
    type->fp_OnSizeChanged = ViewHandle__OnSizeChanged_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ViewHandle__ToString_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ViewHandle__Dispose_fn;
    return type;
}

// public ViewHandle(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode]) :37
void ViewHandle__ctor__fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, int32_t* inputMode)
{
    __this->ctor_(nativeHandle, *inputMode);
}

// public ViewHandle(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation]) :39
void ViewHandle__ctor_1_fn(ViewHandle* __this, ::g::ObjC::Object* nativeHandle, bool* isLeafView, int32_t* inputMode, int32_t* invalidation)
{
    __this->ctor_1(nativeHandle, *isLeafView, *inputMode, *invalidation);
}

// public void BringToFront() :198
void ViewHandle__BringToFront_fn(ViewHandle* __this)
{
    __this->BringToFront();
}

// public virtual void Dispose() :55
void ViewHandle__Dispose_fn(ViewHandle* __this)
{
}

// public string Format() :161
void ViewHandle__Format_fn(ViewHandle* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// private ObjC.Object GetHitTesthandle() :89
void ViewHandle__GetHitTesthandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetHitTesthandle();
}

// internal bool get_HandlesInput() :59
void ViewHandle__get_HandlesInput_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->HandlesInput();
}

// internal generated bool get_HitTestEnabled() :101
void ViewHandle__get_HitTestEnabled_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->HitTestEnabled();
}

// internal generated void set_HitTestEnabled(bool value) :101
void ViewHandle__set_HitTestEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->HitTestEnabled(*value);
}

// public virtual ObjC.Object get_HitTestHandle() :85
void ViewHandle__get_HitTestHandle_fn(ViewHandle* __this, ::g::ObjC::Object** __retval)
{
    return *__retval = __this->GetHitTesthandle(), void();
}

// private void InitAnchorPoint() :114
void ViewHandle__InitAnchorPoint_fn(ViewHandle* __this)
{
    __this->InitAnchorPoint();
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index) :183
void ViewHandle__InsertChild1_fn(ViewHandle* __this, ViewHandle* childHandle, int32_t* index)
{
    __this->InsertChild1(childHandle, *index);
}

// public void Invalidate() :216
void ViewHandle__Invalidate_fn(ViewHandle* __this)
{
    __this->Invalidate();
}

// internal generated bool get_IsEnabled() :100
void ViewHandle__get_IsEnabled_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// internal generated void set_IsEnabled(bool value) :100
void ViewHandle__set_IsEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public float2 Measure(Fuse.LayoutParams lp, float density) :325
void ViewHandle__Measure_fn(ViewHandle* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(*lp, *density);
}

// public ViewHandle New(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode]) :37
void ViewHandle__New1_fn(::g::ObjC::Object* nativeHandle, int32_t* inputMode, ViewHandle** __retval)
{
    *__retval = ViewHandle::New1(nativeHandle, *inputMode);
}

// public ViewHandle New(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation]) :39
void ViewHandle__New2_fn(::g::ObjC::Object* nativeHandle, bool* isLeafView, int32_t* inputMode, int32_t* invalidation, ViewHandle** __retval)
{
    *__retval = ViewHandle::New2(nativeHandle, *isLeafView, *inputMode, *invalidation);
}

// protected internal void OnPositionChanged() :103
void ViewHandle__OnPositionChanged_fn(ViewHandle* __this)
{
    __this->OnPositionChanged();
}

// protected internal virtual void OnSizeChanged() :104
void ViewHandle__OnSizeChanged_fn(ViewHandle* __this)
{
}

// protected internal float2 get_Position() :66
void ViewHandle__get_Position_fn(ViewHandle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// private void set_Position(float2 value) :67
void ViewHandle__set_Position_fn(ViewHandle* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle) :191
void ViewHandle__RemoveChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->RemoveChild(childHandle);
}

// public void SetAccessibilityIdentifier(string name) :107
void ViewHandle__SetAccessibilityIdentifier_fn(ViewHandle* __this, uString* name)
{
    __this->SetAccessibilityIdentifier(name);
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) :231
void ViewHandle__SetBackground_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    ViewHandle::SetBackground(handle, *r, *g, *b, *a);
}

// public void SetBackgroundColor(float4 c) :225
void ViewHandle__SetBackgroundColor_fn(ViewHandle* __this, ::g::Uno::Float4* c)
{
    __this->SetBackgroundColor(*c);
}

// public void SetClipToBounds(bool clipToBounds) :121
void ViewHandle__SetClipToBounds_fn(ViewHandle* __this, bool* clipToBounds)
{
    __this->SetClipToBounds(*clipToBounds);
}

// public void SetEnabled(bool value) :140
void ViewHandle__SetEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabled(*value);
}

// private void SetEnabledImpl(bool value) :147
void ViewHandle__SetEnabledImpl_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabledImpl(*value);
}

// public void SetHitTestEnabled(bool value) :134
void ViewHandle__SetHitTestEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetHitTestEnabled(*value);
}

// public void SetIsVisible(bool isVisible) :154
void ViewHandle__SetIsVisible_fn(ViewHandle* __this, bool* isVisible)
{
    __this->SetIsVisible(*isVisible);
}

// public void SetOpacity(float value) :128
void ViewHandle__SetOpacity_fn(ViewHandle* __this, float* value)
{
    __this->SetOpacity(*value);
}

// private void SetSize(float w, float h) :281
void ViewHandle__SetSize_fn(ViewHandle* __this, float* w, float* h)
{
    __this->SetSize(*w, *h);
}

// public void SetSize(float2 size) :243
void ViewHandle__SetSize1_fn(ViewHandle* __this, ::g::Uno::Float2* size)
{
    __this->SetSize1(*size);
}

// private void SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh) :257
void ViewHandle__SetSizeAndBounds_fn(ViewHandle* __this, float* w, float* h, float* bx, float* by, float* bw, float* bh)
{
    __this->SetSizeAndBounds(*w, *h, *bx, *by, *bw, *bh);
}

// internal void SetSizeAndVisualBounds(float2 size, Fuse.VisualBounds bounds) :249
void ViewHandle__SetSizeAndVisualBounds_fn(ViewHandle* __this, ::g::Uno::Float2* size, ::g::Fuse::VisualBounds* bounds)
{
    __this->SetSizeAndVisualBounds(*size, bounds);
}

// private void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :309
void ViewHandle__SetTransform_fn(ViewHandle* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->SetTransform(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public void SetTransform(float4x4 t) :298
void ViewHandle__SetTransform1_fn(ViewHandle* __this, ::g::Uno::Float4x4* t)
{
    __this->SetTransform1(*t);
}

// protected internal float2 get_Size() :75
void ViewHandle__get_Size_fn(ViewHandle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void set_Size(float2 value) :76
void ViewHandle__set_Size_fn(ViewHandle* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// private void SizeThatFits(float w, float h, float& resW, float& resH) :344
void ViewHandle__SizeThatFits_fn(ViewHandle* __this, float* w, float* h, float* resW, float* resH)
{
    __this->SizeThatFits(*w, *h, resW, resH);
}

// public override sealed string ToString() :50
void ViewHandle__ToString_fn(ViewHandle* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Fuse.Controls.Native.ViewHandle("), __this->Format()), uString::Const(")")), void();
}

// public ViewHandle(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode]) [instance] :37
void ViewHandle::ctor_(::g::ObjC::Object* nativeHandle, int32_t inputMode)
{
    _position = ::g::Uno::Float2__New1(0.0f);
    _size = ::g::Uno::Float2__New1(0.0f);
    ctor_1(nativeHandle, false, inputMode, 0);
}

// public ViewHandle(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation]) [instance] :39
void ViewHandle::ctor_1(::g::ObjC::Object* nativeHandle, bool isLeafView, int32_t inputMode, int32_t invalidation)
{
    _position = ::g::Uno::Float2__New1(0.0f);
    _size = ::g::Uno::Float2__New1(0.0f);
    NativeHandle = nativeHandle;
    IsLeafView = isLeafView;
    NeedsInvalidation = (invalidation == 1);
    _inputMode = inputMode;
    InitAnchorPoint();
    IsEnabled(true);
    HitTestEnabled(true);
}

// public void BringToFront() [instance] :198
void ViewHandle::BringToFront()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto parent = [view superview];
            if (parent != NULL)
            	[parent bringSubviewToFront:view];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public string Format() [instance] :161
uString* ViewHandle::Format()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (id<UnoObject> _this) -> ::NSString*
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            return [view description];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// private ObjC.Object GetHitTesthandle() [instance] :89
::g::ObjC::Object* ViewHandle::GetHitTesthandle()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (id<UnoObject> _this) -> ::id
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            if ([view isKindOfClass:[ShapeView class]])
            {
            	auto sv = (ShapeView*)view;
            	return [sv childrenView];
            }
            else return view;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// internal bool get_HandlesInput() [instance] :59
bool ViewHandle::HandlesInput()
{
    return _inputMode == 1;
}

// internal generated bool get_HitTestEnabled() [instance] :101
bool ViewHandle::HitTestEnabled()
{
    return _HitTestEnabled;
}

// internal generated void set_HitTestEnabled(bool value) [instance] :101
void ViewHandle::HitTestEnabled(bool value)
{
    _HitTestEnabled = value;
}

// private void InitAnchorPoint() [instance] :114
void ViewHandle::InitAnchorPoint()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index) [instance] :183
void ViewHandle::InsertChild1(ViewHandle* childHandle, int32_t index)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, id<UnoObject> childHandle, int32_t index) -> void
        {
            UIView* parent = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [parent insertSubview:child atIndex:index];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], [::StrongUnoObject strongUnoObjectWithUnoObject: childHandle], index);
        
    }
    
}

// public void Invalidate() [instance] :216
void ViewHandle::Invalidate()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            if ([&]() -> bool { ::uForeignPool __foreignPool; return uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NeedsInvalidation; }())
            {
            	UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            	[view setNeedsDisplay];
            }
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// internal generated bool get_IsEnabled() [instance] :100
bool ViewHandle::IsEnabled()
{
    return _IsEnabled;
}

// internal generated void set_IsEnabled(bool value) [instance] :100
void ViewHandle::IsEnabled(bool value)
{
    _IsEnabled = value;
}

// public float2 Measure(Fuse.LayoutParams lp, float density) [instance] :325
::g::Uno::Float2 ViewHandle::Measure(::g::Fuse::LayoutParams lp, float density)
{
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::Uno::Float2 maxSize = ::g::Fuse::iOSDevice::CompensateForOrientation(fillSize);
    float resW;
    float resH;
    SizeThatFits(maxSize.X, maxSize.Y, &resW, &resH);
    ::g::Uno::Float2 result = ::g::Uno::Float2__New2(resW, resH);
    return ::g::Fuse::iOSDevice::CompensateForOrientation(result);
}

// protected internal void OnPositionChanged() [instance] :103
void ViewHandle::OnPositionChanged()
{
}

// protected internal float2 get_Position() [instance] :66
::g::Uno::Float2 ViewHandle::Position()
{
    return _position;
}

// private void set_Position(float2 value) [instance] :67
void ViewHandle::Position(::g::Uno::Float2 value)
{
    _position = value;
    OnPositionChanged();
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle) [instance] :191
void ViewHandle::RemoveChild(ViewHandle* childHandle)
{
    @autoreleasepool
    {
        [] (id<UnoObject> childHandle) -> void
        {
            UIView* child = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((childHandle).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [child removeFromSuperview];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: childHandle]);
        
    }
    
}

// public void SetAccessibilityIdentifier(string name) [instance] :107
void ViewHandle::SetAccessibilityIdentifier(uString* name)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* name) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setAccessibilityIdentifier:name];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(name));
        
    }
    
}

// public void SetBackgroundColor(float4 c) [instance] :225
void ViewHandle::SetBackgroundColor(::g::Uno::Float4 c)
{
    ViewHandle::SetBackground(NativeHandle, c.X, c.Y, c.Z, c.W);
}

// public void SetClipToBounds(bool clipToBounds) [instance] :121
void ViewHandle::SetClipToBounds(bool clipToBounds)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool clipToBounds) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setClipsToBounds:clipToBounds];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], clipToBounds);
        
    }
    
}

// public void SetEnabled(bool value) [instance] :140
void ViewHandle::SetEnabled(bool value)
{
    IsEnabled(value);
    SetEnabledImpl(HitTestEnabled() && IsEnabled());
}

// private void SetEnabledImpl(bool value) [instance] :147
void ViewHandle::SetEnabledImpl(bool value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool value) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setUserInteractionEnabled:value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], value);
        
    }
    
}

// public void SetHitTestEnabled(bool value) [instance] :134
void ViewHandle::SetHitTestEnabled(bool value)
{
    HitTestEnabled(value);
    SetEnabledImpl(HitTestEnabled() && IsEnabled());
}

// public void SetIsVisible(bool isVisible) [instance] :154
void ViewHandle::SetIsVisible(bool isVisible)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool isVisible) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setHidden: !isVisible];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], isVisible);
        
    }
    
}

// public void SetOpacity(float value) [instance] :128
void ViewHandle::SetOpacity(float value)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float value) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [view setAlpha: (CGFloat)value];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], value);
        
    }
    
}

// private void SetSize(float w, float h) [instance] :281
void ViewHandle::SetSize(float w, float h)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto t = [[view layer] transform];
            [[view layer] setTransform:CATransform3DIdentity];
            [view setCenter: CGPointZero];
            [view setFrame: { { 0.0f, 0.0f }, { w, h } } ];
            
            if ([[view superview] isKindOfClass:[UIScrollView class]])
            {
            	auto sv = (UIScrollView*)[view superview];
            	[sv setContentSize: CGSizeMake(w, h)];
            }
            
            [[view layer] setTransform:t];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h);
        
    }
    
}

// public void SetSize(float2 size) [instance] :243
void ViewHandle::SetSize1(::g::Uno::Float2 size)
{
    SetSize(size.X, size.Y);
    Size(size);
}

// private void SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh) [instance] :257
void ViewHandle::SetSizeAndBounds(float w, float h, float bx, float by, float bw, float bh)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h, float bx, float by, float bw, float bh) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            auto t = [[view layer] transform];
            [[view layer] setTransform:CATransform3DIdentity];
            [view setCenter: CGPointZero];
            [view setFrame: { { 0.0f, 0.0f }, { w, h } } ];
            
            if ([[view superview] isKindOfClass:[UIScrollView class]])
            {
            	auto sv = (UIScrollView*)[view superview];
            	[sv setContentSize: CGSizeMake(w, h)];
            }
            
            if ([view isKindOfClass:[CanvasViewGroup class]])
            {
            	CanvasViewGroup* cvg = (CanvasViewGroup*)view;
            	[cvg setRenderBounds: CGRectMake(bx, by, bw, bh)];
            }
            
            [[view layer] setTransform:t];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h, bx, by, bw, bh);
        
    }
    
}

// internal void SetSizeAndVisualBounds(float2 size, Fuse.VisualBounds bounds) [instance] :249
void ViewHandle::SetSizeAndVisualBounds(::g::Uno::Float2 size, ::g::Fuse::VisualBounds* bounds)
{
    ::g::Uno::Rect r = uPtr(bounds)->FlatRect();
    SetSizeAndBounds(size.X, size.Y, r.Position().X, r.Position().Y, r.Width(), r.Height());
    Size(size);
}

// private void SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance] :309
void ViewHandle::SetTransform(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            [[view layer] setTransform:transform];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// public void SetTransform(float4x4 t) [instance] :298
void ViewHandle::SetTransform1(::g::Uno::Float4x4 t)
{
    SetTransform(t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
    Position(::g::Uno::Float2__New2(t.M41, t.M42));
}

// protected internal float2 get_Size() [instance] :75
::g::Uno::Float2 ViewHandle::Size()
{
    return _size;
}

// private void set_Size(float2 value) [instance] :76
void ViewHandle::Size(::g::Uno::Float2 value)
{
    _size = value;
    OnSizeChanged();
}

// private void SizeThatFits(float w, float h, float& resW, float& resH) [instance] :344
void ViewHandle::SizeThatFits(float w, float h, float* resW, float* resH)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, float w, float h, float* resW, float* resH) -> void
        {
            UIView* view = (UIView*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ViewHandle*>((_this).unoObject, ViewHandle_typeof())->NativeHandle); }();
            CGSize size = { w, h };
            CGSize result = [view sizeThatFits:size];
            *resW = (float)result.width;
            *resH = (float)result.height;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], w, h, resW, resH);
        
    }
    
}

// public ViewHandle New(ObjC.Object nativeHandle, [Fuse.Controls.Native.ViewHandle.InputMode inputMode]) [static] :37
ViewHandle* ViewHandle::New1(::g::ObjC::Object* nativeHandle, int32_t inputMode)
{
    ViewHandle* obj1 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj1->ctor_(nativeHandle, inputMode);
    return obj1;
}

// public ViewHandle New(ObjC.Object nativeHandle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputMode], [Fuse.Controls.Native.ViewHandle.Invalidation invalidation]) [static] :39
ViewHandle* ViewHandle::New2(::g::ObjC::Object* nativeHandle, bool isLeafView, int32_t inputMode, int32_t invalidation)
{
    ViewHandle* obj2 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj2->ctor_1(nativeHandle, isLeafView, inputMode, invalidation);
    return obj2;
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) [static] :231
void ViewHandle::SetBackground(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            UIView* view = (UIView*)handle;
            [view setBackgroundColor:[UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}
// }

}}}} // ::g::Fuse::Controls::Native
