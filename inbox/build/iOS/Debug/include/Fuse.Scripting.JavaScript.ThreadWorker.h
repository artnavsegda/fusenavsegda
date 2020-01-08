// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IThreadWorker.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct JSContext;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class ThreadWorker :15
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Scripting::IThreadWorker interface1;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this);
void ThreadWorker__DispatchException_fn(ThreadWorker* __this, ::g::Uno::Exception* e);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__Invoke1_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__New1_fn(ThreadWorker** __retval);
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int32_t* newState);
void ThreadWorker__Run_fn(ThreadWorker* __this);
void ThreadWorker__RunInner_fn(ThreadWorker* __this, ::g::Fuse::Scripting::JavaScript::JSContext* context);
void ThreadWorker__RunOnce_fn(ThreadWorker* __this, ::g::Fuse::Scripting::JavaScript::JSContext* context, bool* __retval);

struct ThreadWorker : uObject
{
    uStrong< ::g::Uno::Threading::Thread*> _thread;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _idle;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _terminate;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;

    void ctor_();
    void DispatchException(::g::Uno::Exception* e);
    void Dispose();
    void Invoke(uDelegate* action);
    void Invoke1(uDelegate* action);
    void OnTerminating(int32_t newState);
    void Run();
    void RunInner(::g::Fuse::Scripting::JavaScript::JSContext* context);
    bool RunOnce(::g::Fuse::Scripting::JavaScript::JSContext* context);
    static ThreadWorker* New1();
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
