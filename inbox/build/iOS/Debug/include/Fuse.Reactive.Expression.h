// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/Expression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class Expression :7
// {
struct Expression_type : uType
{
    ::g::Fuse::Reactive::IExpression interface0;
    ::g::Fuse::ISourceLocation interface1;
    void(*fp_Subscribe)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**);
};

Expression_type* Expression_typeof();
void Expression__ctor__fn(Expression* __this);
void Expression__FuseISourceLocationget_SourceNearest_fn(Expression* __this, uObject** __retval);
void Expression__get_SourceFileName_fn(Expression* __this, uString** __retval);
void Expression__set_SourceFileName_fn(Expression* __this, uString* value);
void Expression__get_SourceLineNumber_fn(Expression* __this, int32_t* __retval);
void Expression__set_SourceLineNumber_fn(Expression* __this, int32_t* value);

struct Expression : uObject
{
    uStrong<uString*> _SourceFileName;
    int32_t _SourceLineNumber;

    void ctor_();
    uString* SourceFileName();
    void SourceFileName(uString* value);
    int32_t SourceLineNumber();
    void SourceLineNumber(int32_t value);
    uObject* Subscribe(uObject* context, uObject* listener) { uObject* __retval; return (((Expression_type*)__type)->fp_Subscribe)(this, context, listener, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
