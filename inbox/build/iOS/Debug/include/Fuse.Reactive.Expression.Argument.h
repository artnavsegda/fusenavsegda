// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Expression.Argument :14
// {
uType* Expression__Argument_typeof();
void Expression__Argument__ctor__fn(Expression__Argument* __this);
void Expression__Argument__Dispose_fn(Expression__Argument* __this);
void Expression__Argument__get_HasValue_fn(Expression__Argument* __this, bool* __retval);
void Expression__Argument__set_HasValue_fn(Expression__Argument* __this, bool* value);
void Expression__Argument__New1_fn(Expression__Argument** __retval);
void Expression__Argument__get_Value_fn(Expression__Argument* __this, uObject** __retval);
void Expression__Argument__set_Value_fn(Expression__Argument* __this, uObject* value);

struct Expression__Argument : uObject
{
    uStrong<uObject*> Source;
    uStrong<uObject*> Subscription;
    bool _HasValue;
    uStrong<uObject*> _Value;

    void ctor_();
    void Dispose();
    bool HasValue();
    void HasValue(bool value);
    uObject* Value();
    void Value(uObject* value);
    static Expression__Argument* New1();
};
// }

}}} // ::g::Fuse::Reactive
