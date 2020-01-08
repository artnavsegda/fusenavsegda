// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/Shapes/PathExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Controls{struct PathExpression;}}}
namespace g{namespace Fuse{namespace Controls{struct SegmentedShape;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class PathExpression :10
// {
struct PathExpression_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_Calculate)(::g::Fuse::Controls::PathExpression*, ::g::Fuse::Controls::SegmentedShape*, uObject*, uObject**);
};

PathExpression_type* PathExpression_typeof();
void PathExpression__Subscribe_fn(PathExpression* __this, uObject* context, uObject* listener, uObject** __retval);
void PathExpression__ToString_fn(PathExpression* __this, uString** __retval);

struct PathExpression : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _path;
    uStrong< ::g::Fuse::Reactive::Expression*> _arg;
    uStrong<uString*> _name;

    uObject* Calculate(::g::Fuse::Controls::SegmentedShape* path, uObject* param) { uObject* __retval; return (((PathExpression_type*)__type)->fp_Calculate)(this, path, param, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
