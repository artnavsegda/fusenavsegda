// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.10.0-rc1/iOS/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <CoreGraphics/CoreGraphics.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUI;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Platform{

// internal static extern class SystemUI :30
// {
uClassType* SystemUI_typeof();
void SystemUI___statusBarDidChangeFrame_fn(CGRect* _endFrame);
void SystemUI___statusBarWillChangeFrame_fn(CGRect* _endFrame, double* animationDuration);
void SystemUI__get_DeviceMargins_fn(::g::Uno::Float4* __retval);
void SystemUI__EnableKeyboardResizeNotifications_fn(::g::ObjC::Object* keyboardContext);
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval);
void SystemUI__set_Frame_fn(::g::Uno::Rect* value);
void SystemUI__add_FrameChanged_fn(uDelegate* value);
void SystemUI__remove_FrameChanged_fn(uDelegate* value);
void SystemUI__GetOSVersion_fn(int32_t* major, int32_t* minor, int32_t* revision);
void SystemUI__GetSafeArea_fn(float* l, float* t, float* r, float* b);
void SystemUI__GetSafeFrame_fn(::g::Uno::Float4* __retval);
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval);
void SystemUI__set_IsTopFrameVisible_fn(bool* value);
void SystemUI__add_MarginsChanged_fn(uDelegate* value);
void SystemUI__remove_MarginsChanged_fn(uDelegate* value);
void SystemUI__NewKeyboardContext_fn(::g::ObjC::Object** __retval);
void SystemUI__OnCreate_fn();
void SystemUI__OnFrameChanged_fn(uObject* s, uObject* a);
void SystemUI__OnWillResize_fn();
void SystemUI__get_OSVersion_fn(::g::Uno::Int3* __retval);
void SystemUI__Pre_iOS8_HandleDeviceOrientation_Size_fn(CGSize* cgsize, ::g::ObjC::Object* view, CGSize* __retval);
void SystemUI__get_RootView_fn(::g::ObjC::Object** __retval);
void SystemUI__set_RootView_fn(::g::ObjC::Object* value);
void SystemUI__get_SafeMargins_fn(::g::Uno::Float4* __retval);
void SystemUI__get_StaticMargins_fn(::g::Uno::Float4* __retval);
void SystemUI__uKeyboardWillChangeFrame1_fn(CGRect* frameBegin, CGRect* frameEnd, double* animationDuration, int32_t* animationCurve, int32_t* reason);
void SystemUI__get_uStatusBarAnimation_fn(int32_t* __retval);
void SystemUI__set_uStatusBarAnimation_fn(int32_t* value);
void SystemUI__get_uStatusBarStyle_fn(int32_t* __retval);
void SystemUI__set_uStatusBarStyle_fn(int32_t* value);

struct SystemUI : uObject
{
    static ::g::Uno::Rect _bottomFrame_;
    static ::g::Uno::Rect& _bottomFrame() { return SystemUI_typeof()->Init(), _bottomFrame_; }
    static uSStrong< ::g::ObjC::Object*> _keyboardContext_;
    static uSStrong< ::g::ObjC::Object*>& _keyboardContext() { return SystemUI_typeof()->Init(), _keyboardContext_; }
    static bool _isTopFrameVisible_;
    static bool& _isTopFrameVisible() { return SystemUI_typeof()->Init(), _isTopFrameVisible_; }
    static int32_t _style_;
    static int32_t& _style() { return SystemUI_typeof()->Init(), _style_; }
    static ::g::Uno::Rect _Frame_;
    static ::g::Uno::Rect& _Frame() { return SystemUI_typeof()->Init(), _Frame_; }
    static int32_t _uStatusBarAnimation_;
    static int32_t& _uStatusBarAnimation() { return SystemUI_typeof()->Init(), _uStatusBarAnimation_; }
    static uSStrong<uDelegate*> FrameChanged1_;
    static uSStrong<uDelegate*>& FrameChanged1() { return SystemUI_typeof()->Init(), FrameChanged1_; }
    static uSStrong<uDelegate*> MarginsChanged1_;
    static uSStrong<uDelegate*>& MarginsChanged1() { return SystemUI_typeof()->Init(), MarginsChanged1_; }

    static void _statusBarDidChangeFrame(CGRect _endFrame);
    static void _statusBarWillChangeFrame(CGRect _endFrame, double animationDuration);
    static void EnableKeyboardResizeNotifications(::g::ObjC::Object* keyboardContext);
    static void GetOSVersion(int32_t* major, int32_t* minor, int32_t* revision);
    static void GetSafeArea(float* l, float* t, float* r, float* b);
    static ::g::Uno::Float4 GetSafeFrame();
    static ::g::Uno::Rect GetStatusBarFrame();
    static ::g::ObjC::Object* NewKeyboardContext();
    static void OnCreate();
    static void OnFrameChanged(uObject* s, uObject* a);
    static void OnWillResize();
    static CGSize Pre_iOS8_HandleDeviceOrientation_Size(CGSize cgsize, ::g::ObjC::Object* view);
    static void uKeyboardWillChangeFrame1(CGRect frameBegin, CGRect frameEnd, double animationDuration, int32_t animationCurve, int32_t reason);
    static ::g::Uno::Float4 DeviceMargins();
    static ::g::Uno::Rect Frame();
    static void Frame(::g::Uno::Rect value);
    static bool IsTopFrameVisible();
    static void IsTopFrameVisible(bool value);
    static ::g::Uno::Int3 OSVersion();
    static ::g::ObjC::Object* RootView();
    static void RootView(::g::ObjC::Object* value);
    static ::g::Uno::Float4 SafeMargins();
    static ::g::Uno::Float4 StaticMargins();
    static int32_t uStatusBarAnimation1();
    static void uStatusBarAnimation1(int32_t value);
    static int32_t uStatusBarStyle1();
    static void uStatusBarStyle1(int32_t value);
    static void add_FrameChanged(uDelegate* value);
    static void remove_FrameChanged(uDelegate* value);
    static void add_MarginsChanged(uDelegate* value);
    static void remove_MarginsChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
