// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker__ContextIgnoringAction;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class ThreadWorker.ContextIgnoringAction :185
// {
uType* ThreadWorker__ContextIgnoringAction_typeof();
void ThreadWorker__ContextIgnoringAction__ctor__fn(ThreadWorker__ContextIgnoringAction* __this, uDelegate* action);
void ThreadWorker__ContextIgnoringAction__New1_fn(uDelegate* action, ThreadWorker__ContextIgnoringAction** __retval);
void ThreadWorker__ContextIgnoringAction__Run_fn(ThreadWorker__ContextIgnoringAction* __this, ::g::Fuse::Scripting::Context* context);

struct ThreadWorker__ContextIgnoringAction : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    void Run(::g::Fuse::Scripting::Context* context);
    static ThreadWorker__ContextIgnoringAction* New1(uDelegate* action);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
