// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.App.h>
#include <Fuse.App.RootViewHost.h>
#include <Fuse.AppRoot.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.INativeViewRoot.h>
#include <Fuse.Controls.ITextRenderer.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.NativeRootViewport.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TreeRendererPanel.h>
#include <Fuse.Device.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.iOS.Bindings.TextRenderer.h>
#include <Fuse.iOSDevice.h>
#include <Fuse.iOSDevice.ScreenOrientation.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.Node.h>
#include <Fuse.OSVersion.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Func1-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[6];
static uType* TYPES[6];

namespace g{
namespace Fuse{

// /usr/local/share/uno/Packages/Fuse.iOS/1.10.0-rc1/iOSApp.uno
// ------------------------------------------------------------

// public extern class App :13
// {
static void App_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::AppRoot_typeof(),
        ::g::Uno::Platform::Displays_typeof(),
        ::g::Fuse::Controls::Native::iOS::FocusHelpers_typeof(),
        ::g::Fuse::Controls::Native::iOS::NativeFocus_typeof(),
        ::g::Fuse::Platform::SystemUI_typeof(),
        ::g::Fuse::Controls::TextControl_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Controls::TreeRendererPanel_typeof(), offsetof(App, _renderPanel), 0,
        ::g::Fuse::Controls::GraphicsView_typeof(), offsetof(App, _graphicsView), 0,
        ::g::ObjC::Object_typeof(), offsetof(App, _currentFocus), 0,
        ::g::Uno::Int_typeof(), offsetof(App, _prevStatusBarOrientation), 0);
}

::g::Fuse::AppBase_type* App_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::AppBase_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.DependencyCount = 7;
    options.ObjectSize = sizeof(App);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("Fuse.App", options);
    type->fp_build_ = App_build;
    type->fp_get_Children = (void(*)(::g::Fuse::AppBase*, uObject**))App__get_Children_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))App__OnUpdate_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public App() :38
void App__ctor_3_fn(App* __this)
{
    __this->ctor_3();
}

// private void CheckFocus() :105
void App__CheckFocus_fn(App* __this)
{
    __this->CheckFocus();
}

// private void CheckStatusBarOrientation() :136
void App__CheckStatusBarOrientation_fn(App* __this)
{
    __this->CheckStatusBarOrientation();
}

// public override sealed Uno.Collections.IList<Fuse.Node> get_Children() :61
void App__get_Children_fn(App* __this, uObject** __retval)
{
    return *__retval = uPtr(__this->RootVisual())->Children(), void();
}

// private static bool Compare(ObjC.Object x, ObjC.Object y) :123
void App__Compare_fn(::g::ObjC::Object* x, ::g::ObjC::Object* y, bool* __retval)
{
    *__retval = App::Compare(x, y);
}

// private static bool IsNull(ObjC.Object x) :130
void App__IsNull_fn(::g::ObjC::Object* x, bool* __retval)
{
    *__retval = App::IsNull(x);
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) :69
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// protected override sealed void OnUpdate() :96
void App__OnUpdate_fn(App* __this)
{
    __this->CheckFocus();
    __this->CheckStatusBarOrientation();
    ::g::Fuse::AppBase__OnUpdate_fn(__this);
}

// private void PropagateBackground() :91
void App__PropagateBackground_fn(App* __this)
{
    __this->PropagateBackground();
}

// private Fuse.Visual get_RootVisual() :28
void App__get_RootVisual_fn(App* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RootVisual();
}

// public App() [instance] :38
void App::ctor_3()
{
    _graphicsView = ::g::Fuse::Controls::GraphicsView::New3();
    _prevStatusBarOrientation = -1;
    ctor_2();
    ::g::Fuse::Platform::SystemUI::OnCreate();
    ::g::Fuse::Controls::TextControl::TextRendererFactory(uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Fuse::Controls::ITextRenderer_typeof(), NULL), (void*)::g::Fuse::iOS::Bindings::TextRenderer__Create_fn));
    ::g::Fuse::MobileBootstrapping::Init();
    RootViewport(::g::Fuse::Controls::Native::NativeRootViewport::New4(::g::Fuse::Controls::Native::ViewHandle::New1(::g::Fuse::AppRoot::Handle(), 0)));
    ::g::Fuse::Time::Init(::g::Uno::Diagnostics::Clock::GetSeconds());
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->add_Tick(uDelegate::New(::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL), (void*)App__OnTick_fn, this));
    _renderPanel = ::g::Fuse::Controls::TreeRendererPanel::New4((uObject*)App__RootViewHost::New1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_renderPanel)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), _graphicsView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), _renderPanel);
}

// private void CheckFocus() [instance] :105
void App::CheckFocus()
{
    ::g::ObjC::Object* newFocus = ::g::Fuse::Controls::Native::iOS::FocusHelpers::GetCurrentFirstResponder();

    if (!App::Compare(_currentFocus, newFocus))
    {
        if (!App::IsNull(_currentFocus))
            ::g::Fuse::Controls::Native::iOS::NativeFocus::RaiseFocusLost(_currentFocus);

        _currentFocus = newFocus;

        if (!App::IsNull(_currentFocus))
            ::g::Fuse::Controls::Native::iOS::NativeFocus::RaiseFocusGained(_currentFocus);
    }
}

// private void CheckStatusBarOrientation() [instance] :136
void App::CheckStatusBarOrientation()
{
    int32_t o = ::g::Fuse::Device::StatusBarOrientation();

    if (_prevStatusBarOrientation != o)
    {
        _prevStatusBarOrientation = o;
        ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_graphicsView)), 0, 1);
    }
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance] :69
void App::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    try
    {
        {
            PropagateBackground();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }

    ::g::Fuse::Time::Set(::g::Uno::Diagnostics::Clock::GetSeconds());

    try
    {
        {
            OnUpdate();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
    }
}

// private void PropagateBackground() [instance] :91
void App::PropagateBackground()
{
    ::g::Fuse::AppRoot::ClearColor(Background());
}

// private Fuse.Visual get_RootVisual() [instance] :28
::g::Fuse::Visual* App::RootVisual()
{
    return _graphicsView;
}

// private static bool Compare(ObjC.Object x, ObjC.Object y) [static] :123
bool App::Compare(::g::ObjC::Object* x, ::g::ObjC::Object* y)
{
    @autoreleasepool
    {
        return [] (::id x, ::id y) -> bool
        {
            return [x isEqual: y];
        } (::g::ObjC::Object::GetHandle(x), ::g::ObjC::Object::GetHandle(y));
        
    }
    
}

// private static bool IsNull(ObjC.Object x) [static] :130
bool App::IsNull(::g::ObjC::Object* x)
{
    @autoreleasepool
    {
        return [] (::id x) -> bool
        {
            return x == nil;
        } (::g::ObjC::Object::GetHandle(x));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/1.10.0-rc1/AppRoot.uno
// -------------------------------------------------------------

// internal static extern class AppRoot :11
// {
// static AppRoot() :18
static void AppRoot__cctor__fn(uType* __type)
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers_typeof()->Init();
    AppRoot::_clearColor_ = ::g::Uno::Float4__New1(1.0f);
    AppRoot::_appRootView_ = AppRoot::CreateAppRootView(uPtr(::g::Fuse::Controls::Native::iOS::FocusHelpers::KeyboardView())->Handle());
    AppRoot::SetClearColor(AppRoot::_appRootView_, AppRoot::_clearColor_.X, AppRoot::_clearColor_.Y, AppRoot::_clearColor_.Z, AppRoot::_clearColor_.W);
}

static void AppRoot_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not set as root");
    ::STRINGS[1] = uString::Const("Root already set to: ");
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&AppRoot::_appRootView_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&AppRoot::_clearColor_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), (uintptr_t)&AppRoot::_root_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// public static float4 get_ClearColor() :43
void AppRoot__get_ClearColor_fn(::g::Uno::Float4* __retval)
{
    *__retval = AppRoot::ClearColor();
}

// public static void set_ClearColor(float4 value) :44
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value)
{
    AppRoot::ClearColor(*value);
}

// public static void ClearRoot(Fuse.Controls.Native.ViewHandle root) :71
void AppRoot__ClearRoot_fn(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot::ClearRoot(root);
}

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) :25
void AppRoot__CreateAppRootView_fn(::g::ObjC::Object* handle, ::g::ObjC::Object** __retval)
{
    *__retval = AppRoot::CreateAppRootView(handle);
}

// public static ObjC.Object get_Handle() :14
void AppRoot__get_Handle_fn(::g::ObjC::Object** __retval)
{
    *__retval = AppRoot::Handle();
}

// private static void Remove(ObjC.Object childHandle) :89
void AppRoot__Remove_fn(::g::ObjC::Object* childHandle)
{
    AppRoot::Remove(childHandle);
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) :81
void AppRoot__Set_fn(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle)
{
    AppRoot::Set(handle, childHandle);
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) :55
void AppRoot__SetClearColor_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a)
{
    AppRoot::SetClearColor(handle, *r, *g, *b, *a);
}

// public static void SetRootView(Fuse.Controls.Native.ViewHandle root) :62
void AppRoot__SetRootView_fn(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot::SetRootView(root);
}

uSStrong< ::g::ObjC::Object*> AppRoot::_appRootView_;
::g::Uno::Float4 AppRoot::_clearColor_;
uSStrong< ::g::Fuse::Controls::Native::ViewHandle*> AppRoot::_root_;

// public static void ClearRoot(Fuse.Controls.Native.ViewHandle root) [static] :71
void AppRoot::ClearRoot(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot_typeof()->Init();

    if ((AppRoot::_root_ == NULL) || (root != AppRoot::_root_))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(root, ::STRINGS[0/*" not set as...*/])));

    AppRoot::Remove(uPtr(AppRoot::_root_)->NativeHandle);
    AppRoot::_root_ = NULL;
}

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) [static] :25
::g::ObjC::Object* AppRoot::CreateAppRootView(::g::ObjC::Object* handle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle) -> ::id
        {
            UIControl* root = (UIControl*)handle;
            [root setUserInteractionEnabled: true];
            [root setMultipleTouchEnabled: true];
            [root setOpaque: false];
            [[root layer] setAnchorPoint: { 0.0f, 0.0f }];
            ::g::Fuse::Platform::SystemUI::RootView(::g::ObjC::Object::Create(root));
            [root sizeToFit];
            root.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleTopMargin;
            
            return root;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// private static void Remove(ObjC.Object childHandle) [static] :89
void AppRoot::Remove(::g::ObjC::Object* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            UIView* child = (UIView*)childHandle;
            [child removeFromSuperview];
        } (::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) [static] :81
void AppRoot::Set(::g::ObjC::Object* handle, ::g::ObjC::Object* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, ::id childHandle) -> void
        {
            UIView* parent = (UIView*)handle;
            UIView* child = (UIView*)childHandle;
            [parent addSubview: child];
        } (::g::ObjC::Object::GetHandle(handle), ::g::ObjC::Object::GetHandle(childHandle));
        
    }
    
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) [static] :55
void AppRoot::SetClearColor(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            UIView* view = (UIView*)handle;
            [view setBackgroundColor: [UIColor colorWithRed:(CGFloat)r green: (CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a);
        
    }
    
}

// public static void SetRootView(Fuse.Controls.Native.ViewHandle root) [static] :62
void AppRoot::SetRootView(::g::Fuse::Controls::Native::ViewHandle* root)
{
    AppRoot_typeof()->Init();

    if (AppRoot::_root_ != NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Root alread...*/], AppRoot::_root_)));

    AppRoot::_root_ = root;
    AppRoot::Set(AppRoot::_appRootView_, uPtr(AppRoot::_root_)->NativeHandle);
}

// public static float4 get_ClearColor() [static] :43
::g::Uno::Float4 AppRoot::ClearColor()
{
    AppRoot_typeof()->Init();
    return AppRoot::_clearColor_;
}

// public static void set_ClearColor(float4 value) [static] :44
void AppRoot::ClearColor(::g::Uno::Float4 value)
{
    AppRoot_typeof()->Init();

    if (::g::Uno::Float4__op_Equality(AppRoot::_clearColor_, value))
        return;

    AppRoot::_clearColor_ = value;
    AppRoot::SetClearColor(AppRoot::_appRootView_, value.X, value.Y, value.Z, value.W);
}

// public static ObjC.Object get_Handle() [static] :14
::g::ObjC::Object* AppRoot::Handle()
{
    AppRoot_typeof()->Init();
    return AppRoot::_appRootView_;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/1.10.0-rc1/iOSApp.uno
// ------------------------------------------------------------

// internal static extern class Device :150
// {
static void Device_build(uType* type)
{
}

uClassType* Device_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Device", options);
    type->fp_build_ = Device_build;
    return type;
}

// private static int GetStatusBarOrientation() :169
void Device__GetStatusBarOrientation_fn(int32_t* __retval)
{
    *__retval = Device::GetStatusBarOrientation();
}

// public static int get_StatusBarOrientation() :159
void Device__get_StatusBarOrientation_fn(int32_t* __retval)
{
    *__retval = Device::StatusBarOrientation();
}

// private static int GetStatusBarOrientation() [static] :169
int32_t Device::GetStatusBarOrientation()
{
    @autoreleasepool
    {
        return (int)[[UIApplication sharedApplication] statusBarOrientation];
    }
    
}

// public static int get_StatusBarOrientation() [static] :159
int32_t Device::StatusBarOrientation()
{
    return Device::GetStatusBarOrientation();
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/GraphicsWorker.uno
// -----------------------------------------------------------------------

// public static class GraphicsWorker :14
// {
// static generated GraphicsWorker() :14
static void GraphicsWorker__cctor__fn(uType* __type)
{
    GraphicsWorker::_exceptionQueue_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[0/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
}

static void GraphicsWorker_build(uType* type)
{
    ::STRINGS[2] = uString::Const("_exceptionQueue mismatch");
    ::STRINGS[3] = uString::Const("GraphicsWorker failed");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/GraphicsWorker.uno");
    ::STRINGS[5] = uString::Const("Run");
    ::TYPES[0] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[2/*Uno.Action*/], NULL);
    ::TYPES[5] = ::g::Uno::Threading::ThreadStart_typeof();
    type->SetDependencies(
        ::g::Fuse::Platform::Lifecycle_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::TYPES[4/*Uno.Threading.ConcurrentQueue<Uno.Action>*/], (uintptr_t)&GraphicsWorker::_work_, uFieldFlagsStatic,
        ::g::Uno::Threading::Thread_typeof(), (uintptr_t)&GraphicsWorker::_thread_, uFieldFlagsStatic,
        ::g::Uno::Threading::AutoResetEvent_typeof(), (uintptr_t)&GraphicsWorker::_resetEvent_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&GraphicsWorker::_workerContext_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&GraphicsWorker::_terminating_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/], (uintptr_t)&GraphicsWorker::_exceptionQueue_, uFieldFlagsStatic);
}

uClassType* GraphicsWorker_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.GraphicsWorker", options);
    type->fp_build_ = GraphicsWorker_build;
    type->fp_cctor_ = GraphicsWorker__cctor__fn;
    return type;
}

// private static extern ObjC.Object CreateContext() :42
void GraphicsWorker__CreateContext_fn(::g::ObjC::Object** __retval)
{
    *__retval = GraphicsWorker::CreateContext();
}

// public static void Dispatch(Uno.Action a) :16
void GraphicsWorker__Dispatch_fn(uDelegate* a)
{
    GraphicsWorker::Dispatch(a);
}

// public static void DispatchException() :80
void GraphicsWorker__DispatchException_fn()
{
    GraphicsWorker::DispatchException();
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) :71
void GraphicsWorker__OnTerminating_fn(int32_t* newState)
{
    GraphicsWorker::OnTerminating(*newState);
}

// private static void Run() :88
void GraphicsWorker__Run_fn()
{
    GraphicsWorker::Run();
}

// private static extern void SetCurrentContext(ObjC.Object context) :48
void GraphicsWorker__SetCurrentContext_fn(::g::ObjC::Object* context)
{
    GraphicsWorker::SetCurrentContext(context);
}

// private static void Start() :53
void GraphicsWorker__Start_fn()
{
    GraphicsWorker::Start();
}

uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_work_;
uSStrong< ::g::Uno::Threading::Thread*> GraphicsWorker::_thread_;
uSStrong< ::g::Uno::Threading::AutoResetEvent*> GraphicsWorker::_resetEvent_;
uSStrong< ::g::ObjC::Object*> GraphicsWorker::_workerContext_;
bool GraphicsWorker::_terminating_;
uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_exceptionQueue_;

// private static extern ObjC.Object CreateContext() [static] :42
::g::ObjC::Object* GraphicsWorker::CreateContext()
{
    GraphicsWorker_typeof()->Init();
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2 sharegroup:[EAGLContext currentContext].sharegroup];
        } ());
        
    }
    
}

// public static void Dispatch(Uno.Action a) [static] :16
void GraphicsWorker::Dispatch(uDelegate* a)
{
    GraphicsWorker_typeof()->Init();
    GraphicsWorker::Start();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_work_), a);
    uPtr(GraphicsWorker::_resetEvent_)->Set();
}

// public static void DispatchException() [static] :80
void GraphicsWorker::DispatchException()
{
    GraphicsWorker_typeof()->Init();
    bool ret1;
    ::g::Uno::Exception* e;

    if (!(::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_exceptionQueue_), (void**)(&e), &ret1), ret1))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"_exceptionQ...*/]));

    U_THROW(::g::Fuse::WrapException::New4(e));
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) [static] :71
void GraphicsWorker::OnTerminating(int32_t newState)
{
    GraphicsWorker_typeof()->Init();
    GraphicsWorker::_terminating_ = true;
    uPtr(GraphicsWorker::_resetEvent_)->Set();
    uPtr(GraphicsWorker::_thread_)->Join();
}

// private static void Run() [static] :88
void GraphicsWorker::Run()
{
    GraphicsWorker_typeof()->Init();
    bool ret2;
    GraphicsWorker::SetCurrentContext(GraphicsWorker::_workerContext_);

    while (!GraphicsWorker::_terminating_)
    {
        uAutoReleasePool ____pool;
        uDelegate* a;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_work_), (void**)(&a), &ret2), ret2))
        {
            try
            {
                {
                    uPtr(a)->InvokeVoid();
                }
            }

            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Fuse::Diagnostics::UnknownException(::STRINGS[3/*"GraphicsWor...*/], e, a, ::STRINGS[4/*"/usr/local/...*/], 109, ::STRINGS[5/*"Run"*/]);
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_exceptionQueue_), e);
                ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)GraphicsWorker__DispatchException_fn));
            }

            continue;
        }

        uPtr(GraphicsWorker::_resetEvent_)->WaitOne();
    }

    GraphicsWorker::_workerContext_ = NULL;
}

// private static extern void SetCurrentContext(ObjC.Object context) [static] :48
void GraphicsWorker::SetCurrentContext(::g::ObjC::Object* context)
{
    GraphicsWorker_typeof()->Init();
    @autoreleasepool
    {
        [] (::id context) -> void
        {
            [EAGLContext setCurrentContext: context];
        } (::g::ObjC::Object::GetHandle(context));
        
    }
    
}

// private static void Start() [static] :53
void GraphicsWorker::Start()
{
    GraphicsWorker_typeof()->Init();

    if (GraphicsWorker::_thread_ != NULL)
        return;

    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)GraphicsWorker__OnTerminating_fn));
    GraphicsWorker::_workerContext_ = GraphicsWorker::CreateContext();
    GraphicsWorker::_work_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[4/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    GraphicsWorker::_resetEvent_ = ::g::Uno::Threading::AutoResetEvent::New2(false);
    GraphicsWorker::_thread_ = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[5/*Uno.Threading.ThreadStart*/], (void*)GraphicsWorker__Run_fn));
    uPtr(GraphicsWorker::_thread_)->Start();
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/iOSDevice.uno
// ------------------------------------------------------------------

// public static extern class iOSDevice :26
// {
static void iOSDevice_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::OSVersion_typeof(), (uintptr_t)&iOSDevice::_osVersion_, uFieldFlagsStatic);
}

uClassType* iOSDevice_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOSDevice", options);
    type->fp_build_ = iOSDevice_build;
    return type;
}

// public static float2 CompensateForOrientation(float2 size) :60
void iOSDevice__CompensateForOrientation_fn(::g::Uno::Float2* size, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDevice::CompensateForOrientation(*size);
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) :48
void iOSDevice__GetiOSVersion_fn(int32_t* major, int32_t* minor, int32_t* patch)
{
    iOSDevice::GetiOSVersion(major, minor, patch);
}

// private static bool IsLandscapeOrientation() :76
void iOSDevice__IsLandscapeOrientation_fn(bool* __retval)
{
    *__retval = iOSDevice::IsLandscapeOrientation();
}

// public static Fuse.OSVersion get_OperatingSystemVersion() :37
void iOSDevice__get_OperatingSystemVersion_fn(::g::Fuse::OSVersion** __retval)
{
    *__retval = iOSDevice::OperatingSystemVersion();
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() :57
void iOSDevice__get_Orientation_fn(int32_t* __retval)
{
    *__retval = iOSDevice::Orientation();
}

uSStrong< ::g::Fuse::OSVersion*> iOSDevice::_osVersion_;

// public static float2 CompensateForOrientation(float2 size) [static] :60
::g::Uno::Float2 iOSDevice::CompensateForOrientation(::g::Uno::Float2 size)
{
    return ((uPtr(iOSDevice::OperatingSystemVersion())->Major < 8) && (iOSDevice::Orientation() == 1)) ? ::g::Uno::Float2__New2(size.Y, size.X) : size;
}

// private static void GetiOSVersion(int& major, int& minor, int& patch) [static] :48
void iOSDevice::GetiOSVersion(int32_t* major, int32_t* minor, int32_t* patch)
{
    @autoreleasepool
    {
        *major = (int)[[NSProcessInfo processInfo] operatingSystemVersion].majorVersion;
        *minor = (int)[[NSProcessInfo processInfo] operatingSystemVersion].minorVersion;
        *patch = (int)[[NSProcessInfo processInfo] operatingSystemVersion].patchVersion;
    }
    
}

// private static bool IsLandscapeOrientation() [static] :76
bool iOSDevice::IsLandscapeOrientation()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [[UIApplication sharedApplication] statusBarOrientation];
        return (o == UIInterfaceOrientationLandscapeLeft || o == UIInterfaceOrientationLandscapeRight);
    }
    
}

// public static Fuse.OSVersion get_OperatingSystemVersion() [static] :37
::g::Fuse::OSVersion* iOSDevice::OperatingSystemVersion()
{
    if (iOSDevice::_osVersion_ != NULL)
        return iOSDevice::_osVersion_;

    int32_t major, minor, patch;
    iOSDevice::GetiOSVersion(&major, &minor, &patch);
    return iOSDevice::_osVersion_ = ::g::Fuse::OSVersion::New1(major, minor, patch);
}

// public static Fuse.iOSDevice.ScreenOrientation get_Orientation() [static] :57
int32_t iOSDevice::Orientation()
{
    return iOSDevice::IsLandscapeOrientation() ? 1 : 0;
}
// }

}} // ::g::Fuse
