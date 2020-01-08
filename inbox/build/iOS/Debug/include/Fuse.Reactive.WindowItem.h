// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.TemplateMatch.h>
#include <Fuse.Reactive.WindowListItem.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowItem;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class WindowItem :73
// {
::g::Fuse::Reactive::ValueObserver_type* WindowItem_typeof();
void WindowItem__ctor_2_fn(WindowItem* __this);
void WindowItem__New1_fn(WindowItem** __retval);

struct WindowItem : ::g::Fuse::Reactive::WindowListItem
{
    uStrong< ::g::Uno::Collections::List*> Nodes;
    ::g::Fuse::Reactive::TemplateMatch Template;

    void ctor_2();
    static WindowItem* New1();
};
// }

}}} // ::g::Fuse::Reactive
