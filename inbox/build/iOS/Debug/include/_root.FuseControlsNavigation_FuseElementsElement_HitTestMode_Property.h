// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.10.0-rc1/.uno/ux15/Fuse.Controls.Navigation.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.HitTestMode.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsNavigation_FuseElementsElement_HitTestMode_Property;}

namespace g{

// internal sealed class FuseControlsNavigation_FuseElementsElement_HitTestMode_Property :10
// {
::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_typeof();
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__ctor_3_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Get1_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval);
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseElementsElement_HitTestMode_Property** __retval);
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_Object_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Set1_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin);
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, bool* __retval);

struct FuseControlsNavigation_FuseElementsElement_HitTestMode_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
