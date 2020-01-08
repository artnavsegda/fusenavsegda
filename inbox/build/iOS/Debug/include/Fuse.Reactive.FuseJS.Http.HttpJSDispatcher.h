// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/Http.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__HttpJSDispatcher;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.HttpJSDispatcher :31
// {
struct Http__HttpJSDispatcher_type : uType
{
    ::g::Uno::Threading::IDispatcher interface0;
};

Http__HttpJSDispatcher_type* Http__HttpJSDispatcher_typeof();
void Http__HttpJSDispatcher__ctor__fn(Http__HttpJSDispatcher* __this, uObject* worker);
void Http__HttpJSDispatcher__Invoke_fn(Http__HttpJSDispatcher* __this, uDelegate* action);
void Http__HttpJSDispatcher__New1_fn(uObject* worker, Http__HttpJSDispatcher** __retval);

struct Http__HttpJSDispatcher : uObject
{
    uStrong<uObject*> _worker;

    void ctor_(uObject* worker);
    void Invoke(uDelegate* action);
    static Http__HttpJSDispatcher* New1(uObject* worker);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
