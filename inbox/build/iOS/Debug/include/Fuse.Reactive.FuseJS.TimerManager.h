// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager__Timer;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class TimerManager :174
// {
uType* TimerManager_typeof();
void TimerManager__ctor__fn(TimerManager* __this);
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int32_t* __retval);
void TimerManager__DeleteAllTimers_fn(TimerManager* __this);
void TimerManager__DeleteTimer_fn(TimerManager* __this, int32_t* id, bool* __retval);
void TimerManager__GetTimer_fn(TimerManager* __this, int32_t* id, TimerManager__Timer** __retval);
void TimerManager__New1_fn(TimerManager** __retval);
void TimerManager__RemoveTimer_fn(TimerManager* __this, int32_t* id);
void TimerManager__Tick_fn(TimerManager* __this, ::g::Fuse::Scripting::Context* context, bool* __retval);

struct TimerManager : uObject
{
    uStrong< ::g::Uno::Collections::List*> _timers;

    void ctor_();
    int32_t AddTimer(double ms, uDelegate* callback, bool repeat);
    void DeleteAllTimers();
    bool DeleteTimer(int32_t id);
    TimerManager__Timer* GetTimer(int32_t id);
    void RemoveTimer(int32_t id);
    bool Tick(::g::Fuse::Scripting::Context* context);
    static TimerManager* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
