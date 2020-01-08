// This file was generated based on /usr/local/share/uno/Packages/Fuse.Selection/1.10.0-rc1/IsSelected.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
namespace g{namespace Fuse{namespace Selection{struct IsSelectedFunction;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class IsSelectedFunction :14
// {
::g::Fuse::Reactive::Expression_type* IsSelectedFunction_typeof();
void IsSelectedFunction__Subscribe_fn(IsSelectedFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void IsSelectedFunction__ToString_fn(IsSelectedFunction* __this, uString** __retval);

struct IsSelectedFunction : ::g::Fuse::Reactive::VarArgFunction
{
};
// }

}}} // ::g::Fuse::Selection
