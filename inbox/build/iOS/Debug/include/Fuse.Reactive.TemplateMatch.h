// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Instantiator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Reactive{struct TemplateMatch;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal struct TemplateMatch :82
// {
uStructType* TemplateMatch_typeof();
void TemplateMatch__Matches_fn(TemplateMatch* __this, TemplateMatch* b, bool* __retval);

struct TemplateMatch
{
    bool All;
    uStrong< ::g::Uno::UX::Template*> Template;

    bool Matches(TemplateMatch b);
};
// }

}}} // ::g::Fuse::Reactive
