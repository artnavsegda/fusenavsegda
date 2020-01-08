// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/Http.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__HttpJSDispatcher__ActionClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.HttpJSDispatcher.ActionClosure :39
// {
uType* Http__HttpJSDispatcher__ActionClosure_typeof();
void Http__HttpJSDispatcher__ActionClosure__ctor__fn(Http__HttpJSDispatcher__ActionClosure* __this, uDelegate* action);
void Http__HttpJSDispatcher__ActionClosure__New1_fn(uDelegate* action, Http__HttpJSDispatcher__ActionClosure** __retval);
void Http__HttpJSDispatcher__ActionClosure__Run_fn(Http__HttpJSDispatcher__ActionClosure* __this, ::g::Fuse::Scripting::Context* context);

struct Http__HttpJSDispatcher__ActionClosure : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    void Run(::g::Fuse::Scripting::Context* context);
    static Http__HttpJSDispatcher__ActionClosure* New1(uDelegate* action);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
