// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.10.0-rc1/.uno/ux15/Fuse.Controls.NavigationInternal.BlockInputWhileNavigating.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct BlockInputWhileNavigating;}}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class BlockInputWhileNavigating :4
// {
::g::Fuse::Triggers::Trigger_type* BlockInputWhileNavigating_typeof();
void BlockInputWhileNavigating__ctor_7_fn(BlockInputWhileNavigating* __this, ::g::Fuse::Controls::NavigationControl* nav1);
void BlockInputWhileNavigating__InitializeUX_fn(BlockInputWhileNavigating* __this);
void BlockInputWhileNavigating__New3_fn(::g::Fuse::Controls::NavigationControl* nav1, BlockInputWhileNavigating** __retval);

struct BlockInputWhileNavigating : ::g::Fuse::Navigation::WhileNavigating
{
    uStrong< ::g::Fuse::Controls::NavigationControl*> nav;
    uStrong< ::g::Uno::UX::Property1*> nav_HitTestMode_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BlockInputWhileNavigating_typeof()->Init(), __selector0_; }

    void ctor_7(::g::Fuse::Controls::NavigationControl* nav1);
    void InitializeUX();
    static BlockInputWhileNavigating* New3(::g::Fuse::Controls::NavigationControl* nav1);
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
