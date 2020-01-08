// This file was generated based on /Users/artnavsegda/Downloads/inbox/.uno/ux15/Inbox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Icon;}
namespace g{struct Inbox;}
namespace g{struct Inbox__Template;}
namespace g{struct Operation;}

namespace g{

// public partial sealed class Inbox.Template :5
// {
::g::Uno::UX::Template_type* Inbox__Template_typeof();
void Inbox__Template__ctor_1_fn(Inbox__Template* __this, ::g::Inbox* parent, ::g::Inbox* parentInstance);
void Inbox__Template__New1_fn(Inbox__Template* __this, uObject** __retval);
void Inbox__Template__New2_fn(::g::Inbox* parent, ::g::Inbox* parentInstance, Inbox__Template** __retval);

struct Inbox__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Inbox*> __parent1;
    uWeak< ::g::Inbox*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> postponeText_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> doneText_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> postponeIcon_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> checkmarkIcon_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> background_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> swipeRight;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> swipeLeft;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::Controls::Panel*> contents;
    uStrong< ::g::Operation*> doneText;
    uStrong< ::g::Operation*> postponeText;
    uStrong< ::g::Icon*> checkmarkIcon;
    uStrong< ::g::Icon*> postponeIcon;
    uStrong< ::g::Fuse::Drawing::SolidColor*> background;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Inbox__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Inbox__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Inbox__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Inbox__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Inbox__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Inbox__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Inbox__Template_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Inbox__Template_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Inbox__Template_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Inbox__Template_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return Inbox__Template_typeof()->Init(), __selector10_; }

    void ctor_1(::g::Inbox* parent, ::g::Inbox* parentInstance);
    static Inbox__Template* New2(::g::Inbox* parent, ::g::Inbox* parentInstance);
};
// }

} // ::g
