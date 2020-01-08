// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Member.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Member;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Member :8
// {
::g::Fuse::Reactive::Expression_type* Member_typeof();
void Member__get_BaseObject_fn(Member* __this, ::g::Fuse::Reactive::Expression** __retval);
void Member__set_BaseObject_fn(Member* __this, ::g::Fuse::Reactive::Expression* value);
void Member__get_Name_fn(Member* __this, uString** __retval);
void Member__set_Name_fn(Member* __this, uString* value);
void Member__Subscribe_fn(Member* __this, uObject* context, uObject* listener, uObject** __retval);
void Member__ToString_fn(Member* __this, uString** __retval);

struct Member : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _BaseObject;
    uStrong<uString*> _Name;

    ::g::Fuse::Reactive::Expression* BaseObject();
    void BaseObject(::g::Fuse::Reactive::Expression* value);
    uString* Name();
    void Name(uString* value);
};
// }

}}} // ::g::Fuse::Reactive
