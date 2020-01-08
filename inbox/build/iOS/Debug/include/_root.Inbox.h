// This file was generated based on /Users/artnavsegda/Downloads/inbox/.uno/ux15/Inbox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemModule;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct DiagnosticsImplModule;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Storage{struct StorageModule;}}}
namespace g{namespace Fuse{namespace Testing{struct UnoTestingHelper;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientModule;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace FuseJS{struct Base64;}}
namespace g{namespace FuseJS{struct Bundle;}}
namespace g{namespace FuseJS{struct Environment;}}
namespace g{namespace FuseJS{struct FileReaderImpl;}}
namespace g{namespace FuseJS{struct Globals;}}
namespace g{namespace FuseJS{struct Lifecycle;}}
namespace g{namespace FuseJS{struct UserEvents;}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Inbox;}

namespace g{

// public partial sealed class Inbox :2
// {
::g::Fuse::AppBase_type* Inbox_typeof();
void Inbox__ctor_4_fn(Inbox* __this);
void Inbox__InitializeUX_fn(Inbox* __this);
void Inbox__New2_fn(Inbox** __retval);

struct Inbox : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Fuse::Controls::DockPanel*> appDock;
    static uSStrong< ::g::Fuse::Font*> Bold_;
    static uSStrong< ::g::Fuse::Font*>& Bold() { return Inbox_typeof()->Init(), Bold_; }
    static uSStrong< ::g::Fuse::Font*> Regular_;
    static uSStrong< ::g::Fuse::Font*>& Regular() { return Inbox_typeof()->Init(), Regular_; }
    static uSStrong< ::g::Fuse::Font*> Light_;
    static uSStrong< ::g::Fuse::Font*>& Light() { return Inbox_typeof()->Init(), Light_; }
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Inbox_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule*> FuseReactiveFuseJSDiagnosticsImplModule;
    uStrong< ::g::Fuse::Reactive::FuseJS::Http*> FuseReactiveFuseJSHttp;
    uStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> FuseReactiveFuseJSTimerModule;
    uStrong< ::g::Fuse::Drawing::BrushConverter*> FuseDrawingBrushConverter;
    uStrong< ::g::Fuse::Triggers::BusyTaskModule*> FuseTriggersBusyTaskModule;
    uStrong< ::g::Fuse::Testing::UnoTestingHelper*> FuseTestingUnoTestingHelper;
    uStrong< ::g::Fuse::FileSystem::FileSystemModule*> FuseFileSystemFileSystemModule;
    uStrong< ::g::Fuse::Storage::StorageModule*> FuseStorageStorageModule;
    uStrong< ::g::Fuse::WebSocket::WebSocketClientModule*> FuseWebSocketWebSocketClientModule;
    uStrong< ::g::Polyfills::Window::WindowModule*> PolyfillsWindowWindowModule;
    uStrong< ::g::FuseJS::Globals*> FuseJSGlobals;
    uStrong< ::g::FuseJS::Lifecycle*> FuseJSLifecycle;
    uStrong< ::g::FuseJS::Environment*> FuseJSEnvironment;
    uStrong< ::g::FuseJS::Base64*> FuseJSBase64;
    uStrong< ::g::FuseJS::Bundle*> FuseJSBundle;
    uStrong< ::g::FuseJS::FileReaderImpl*> FuseJSFileReaderImpl;
    uStrong< ::g::FuseJS::UserEvents*> FuseJSUserEvents;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Inbox_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Inbox_typeof()->Init(), __selector1_; }

    void ctor_4();
    void InitializeUX();
    static Inbox* New2();
};
// }

} // ::g
