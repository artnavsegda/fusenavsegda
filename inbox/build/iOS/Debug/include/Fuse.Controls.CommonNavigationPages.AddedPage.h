// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.10.0-rc1/CommonNavigationPages.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages__AddedPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class CommonNavigationPages.AddedPage :88
// {
uType* CommonNavigationPages__AddedPage_typeof();
void CommonNavigationPages__AddedPage__ctor__fn(CommonNavigationPages__AddedPage* __this);
void CommonNavigationPages__AddedPage__New1_fn(CommonNavigationPages__AddedPage** __retval);

struct CommonNavigationPages__AddedPage : uObject
{
    uStrong<uString*> Template;
    uStrong< ::g::Fuse::Visual*> Visual;
    uStrong<uObject*> Data;
    uStrong< ::g::Fuse::Navigation::RouterPage*> Page;

    void ctor_();
    static CommonNavigationPages__AddedPage* New1();
};
// }

}}} // ::g::Fuse::Controls
