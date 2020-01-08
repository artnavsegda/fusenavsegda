// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/LayoutFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutFunction;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public abstract class LayoutFunction :15
// {
struct LayoutFunction_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_GetCurrentValue)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::Elements::Element*, uObject**);
    void(*fp_GetValue)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**);
};

LayoutFunction_type* LayoutFunction_typeof();
void LayoutFunction__Subscribe_fn(LayoutFunction* __this, uObject* dc, uObject* listener, uObject** __retval);
void LayoutFunction__TryComputeAlternate_fn(LayoutFunction* __this, uObject* value, uObject** result, bool* __retval);

struct LayoutFunction : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> Element;

    uObject* GetCurrentValue(::g::Fuse::Elements::Element* elm) { uObject* __retval; return (((LayoutFunction_type*)__type)->fp_GetCurrentValue)(this, elm, &__retval), __retval; }
    uObject* GetValue(::g::Fuse::PlacedArgs* args) { uObject* __retval; return (((LayoutFunction_type*)__type)->fp_GetValue)(this, args, &__retval), __retval; }
    bool TryComputeAlternate(uObject* value, uObject** result);
};
// }

}}} // ::g::Fuse::Elements
