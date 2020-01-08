// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/LayoutFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct YFunction;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class YFunction :223
// {
::g::Fuse::Elements::LayoutFunction_type* YFunction_typeof();
void YFunction__GetCurrentValue_fn(YFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval);
void YFunction__GetValue_fn(YFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);

struct YFunction : ::g::Fuse::Elements::LayoutFunction
{
};
// }

}}} // ::g::Fuse::Elements
