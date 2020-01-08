// This file was generated based on /usr/local/share/uno/Packages/FuseJS/1.10.0-rc1/Lifecycle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty;}}}
namespace g{namespace FuseJS{struct Lifecycle;}}

namespace g{
namespace FuseJS{

// public sealed class Lifecycle :97
// {
::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof();
void Lifecycle__ctor_3_fn(Lifecycle* __this);
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int32_t* state, int32_t* __retval);
void Lifecycle__GetApplicationStateBackground_fn(int32_t* __retval);
void Lifecycle__GetApplicationStateForeground_fn(int32_t* __retval);
void Lifecycle__GetApplicationStateInteractive_fn(int32_t* __retval);
void Lifecycle__GetCurrentState_fn(int32_t* __retval);
void Lifecycle__New3_fn(Lifecycle** __retval);
void Lifecycle__OnEnteringBackground_fn(Lifecycle* __this, int32_t* newState);
void Lifecycle__OnEnteringForeground_fn(Lifecycle* __this, int32_t* newState);
void Lifecycle__OnEnteringInteractive_fn(Lifecycle* __this, int32_t* newState);
void Lifecycle__OnExitedInteractive_fn(Lifecycle* __this, int32_t* newState);
void Lifecycle__OnStateChanged_fn(Lifecycle* __this, int32_t* newState);

struct Lifecycle : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _state;
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _background;
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _foreground;
    uStrong< ::g::Fuse::Scripting::NativeProperty*> _interactive;
    static uSStrong<Lifecycle*> _instance_;
    static uSStrong<Lifecycle*>& _instance() { return _instance_; }

    void ctor_3();
    void OnEnteringBackground(int32_t newState);
    void OnEnteringForeground(int32_t newState);
    void OnEnteringInteractive(int32_t newState);
    void OnExitedInteractive(int32_t newState);
    void OnStateChanged(int32_t newState);
    static int32_t Converter(::g::Fuse::Scripting::Context* context, int32_t state);
    static int32_t GetApplicationStateBackground();
    static int32_t GetApplicationStateForeground();
    static int32_t GetApplicationStateInteractive();
    static int32_t GetCurrentState();
    static Lifecycle* New3();
};
// }

}} // ::g::FuseJS
