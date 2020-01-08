// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker__ExceptionClosure;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class ThreadWorker.ExceptionClosure :133
// {
uType* ThreadWorker__ExceptionClosure_typeof();
void ThreadWorker__ExceptionClosure__ctor__fn(ThreadWorker__ExceptionClosure* __this, ::g::Uno::Exception* exception);
void ThreadWorker__ExceptionClosure__New1_fn(::g::Uno::Exception* exception, ThreadWorker__ExceptionClosure** __retval);
void ThreadWorker__ExceptionClosure__Run_fn(ThreadWorker__ExceptionClosure* __this);

struct ThreadWorker__ExceptionClosure : uObject
{
    uStrong< ::g::Uno::Exception*> _exception;

    void ctor_(::g::Uno::Exception* exception);
    void Run();
    static ThreadWorker__ExceptionClosure* New1(::g::Uno::Exception* exception);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
