// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Foundation/Foundation.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.iOS.Support.h>
#include <Uno.Platform.iOS.uCGPoint1.h>
#include <Uno.Platform.iOS.uCGRect1.h>
#include <Uno.Platform.iOS.uCGSize1.h>
#include <Uno.Rect.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Platform/iOS/Application.uno
// ----------------------------------------------------------------------------------------

// public static extern class Application :12
// {
static void Application_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&Application::_LaunchOptions_, uFieldFlagsStatic);
}

uClassType* Application_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.Application", options);
    type->fp_build_ = Application_build;
    return type;
}

// public static ObjC.Object GetRootView() :53
void Application__GetRootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = Application::GetRootView();
}

// public static bool IsLandscape() :71
void Application__IsLandscape_fn(bool* __retval)
{
    *__retval = Application::IsLandscape();
}

// public static bool IsRootView(ObjC.Object view) :65
void Application__IsRootView_fn(::g::ObjC::Object* view, bool* __retval)
{
    *__retval = Application::IsRootView(view);
}

// public static generated ObjC.Object get_LaunchOptions() :50
void Application__get_LaunchOptions_fn(::g::ObjC::Object** __retval)
{
    *__retval = Application::LaunchOptions();
}

// private static generated void set_LaunchOptions(ObjC.Object value) :50
void Application__set_LaunchOptions_fn(::g::ObjC::Object* value)
{
    Application::LaunchOptions(value);
}

// public static void SetRootView(ObjC.Object view) :59
void Application__SetRootView_fn(::g::ObjC::Object* view)
{
    Application::SetRootView(view);
}

uSStrong< ::g::ObjC::Object*> Application::_LaunchOptions_;

// public static ObjC.Object GetRootView() [static] :53
::g::ObjC::Object* Application::GetRootView()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return (UIView*)((uAppDelegate*)[UIApplication sharedApplication].delegate).view;
        } ());
        
    }
    
}

// public static bool IsLandscape() [static] :71
bool Application::IsLandscape()
{
    @autoreleasepool
    {
        return UIInterfaceOrientationIsLandscape([UIApplication sharedApplication].statusBarOrientation);
    }
    
}

// public static bool IsRootView(ObjC.Object view) [static] :65
bool Application::IsRootView(::g::ObjC::Object* view)
{
    @autoreleasepool
    {
        return [] (::id view) -> bool
        {
            return view == ((uAppDelegate*)[UIApplication sharedApplication].delegate).view;
        } (::g::ObjC::Object::GetHandle(view));
        
    }
    
}

// public static void SetRootView(ObjC.Object view) [static] :59
void Application::SetRootView(::g::ObjC::Object* view)
{
    @autoreleasepool
    {
        [] (::id view) -> void
        {
            ((uAppDelegate*)[UIApplication sharedApplication].delegate).view = (UIView*)view;
        } (::g::ObjC::Object::GetHandle(view));
        
    }
    
}

// public static generated ObjC.Object get_LaunchOptions() [static] :50
::g::ObjC::Object* Application::LaunchOptions()
{
    return Application::_LaunchOptions_;
}

// private static generated void set_LaunchOptions(ObjC.Object value) [static] :50
void Application::LaunchOptions(::g::ObjC::Object* value)
{
    Application::_LaunchOptions_ = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Platform/iOS/Support.uno
// ------------------------------------------------------------------------------------

// public static extern class Support :37
// {
static void Support_build(uType* type)
{
}

uClassType* Support_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.Support", options);
    type->fp_build_ = Support_build;
    return type;
}

// public static extern float2 CGPointToUnoFloat2(Uno.Platform.iOS.uCGPoint point, float scale) :39
void Support__CGPointToUnoFloat2_fn(CGPoint* point, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = Support::CGPointToUnoFloat2(*point, *scale);
}

// public static extern Uno.Rect CGRectToUnoRect(Uno.Platform.iOS.uCGRect rect, float scale) :55
void Support__CGRectToUnoRect_fn(CGRect* rect, float* scale, ::g::Uno::Rect* __retval)
{
    *__retval = Support::CGRectToUnoRect(*rect, *scale);
}

// public static extern float2 CGSizeToUnoFloat2(Uno.Platform.iOS.uCGSize size, float scale) :47
void Support__CGSizeToUnoFloat2_fn(CGSize* size, float* scale, ::g::Uno::Float2* __retval)
{
    *__retval = Support::CGSizeToUnoFloat2(*size, *scale);
}

// public static extern Uno.Platform.iOS.uCGRect Pre_iOS8_HandleDeviceOrientation_Rect(Uno.Platform.iOS.uCGRect cgrect, ObjC.Object view) :62
void Support__Pre_iOS8_HandleDeviceOrientation_Rect_fn(CGRect* cgrect, ::g::ObjC::Object* view, CGRect* __retval)
{
    *__retval = Support::Pre_iOS8_HandleDeviceOrientation_Rect(*cgrect, view);
}

// public static extern float2 CGPointToUnoFloat2(Uno.Platform.iOS.uCGPoint point, float scale) [static] :39
::g::Uno::Float2 Support::CGPointToUnoFloat2(CGPoint point, float scale)
{
    ::g::Uno::Float2 unoPoint;
    unoPoint.X = point.x * scale;
    unoPoint.Y = point.y * scale;
    return unoPoint;
}

// public static extern Uno.Rect CGRectToUnoRect(Uno.Platform.iOS.uCGRect rect, float scale) [static] :55
::g::Uno::Rect Support::CGRectToUnoRect(CGRect rect, float scale)
{
    ::g::Uno::Float2 origin = Support::CGPointToUnoFloat2(rect.origin, scale);
    ::g::Uno::Float2 size = Support::CGSizeToUnoFloat2(rect.size, scale);
    return ::g::Uno::Rect__New2(origin, size);
}

// public static extern float2 CGSizeToUnoFloat2(Uno.Platform.iOS.uCGSize size, float scale) [static] :47
::g::Uno::Float2 Support::CGSizeToUnoFloat2(CGSize size, float scale)
{
    ::g::Uno::Float2 unoSize;
    unoSize.X = size.width * scale;
    unoSize.Y = size.height * scale;
    return unoSize;
}

// public static extern Uno.Platform.iOS.uCGRect Pre_iOS8_HandleDeviceOrientation_Rect(Uno.Platform.iOS.uCGRect cgrect, ObjC.Object view) [static] :62
CGRect Support::Pre_iOS8_HandleDeviceOrientation_Rect(CGRect cgrect, ::g::ObjC::Object* view)
{
    if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
        && ::g::Uno::Platform::iOS::Application::IsLandscape()
        && (!view || ::g::Uno::Platform::iOS::Application::IsRootView(view)))
    {
        // Transpose rect
        return CGRectMake(
            cgrect.origin.y, cgrect.origin.x,
            cgrect.size.height, cgrect.size.width);
    }
    
    return cgrect;
}
// }

}}}} // ::g::Uno::Platform::iOS
