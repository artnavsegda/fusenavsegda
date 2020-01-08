// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/QuaternaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct QuaternaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class QuaternaryOperator :8
// {
::g::Fuse::Reactive::ComputeExpression_type* QuaternaryOperator_typeof();
void QuaternaryOperator__Compute_fn(QuaternaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** __retval);
void QuaternaryOperator__GetFlags_fn(QuaternaryOperator* __this, int32_t* __retval);
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval);
void QuaternaryOperator__TryCompute_fn(QuaternaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void QuaternaryOperator__TryCompute1_fn(QuaternaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** result, bool* __retval);

struct QuaternaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    uObject* Compute(uObject* first, uObject* second, uObject* third, uObject* fourth);
    bool IsFirstOptional();
    bool IsFourthOptional();
    bool IsSecondOptional();
    bool IsThirdOptional();
    bool TryCompute1(uObject* first, uObject* second, uObject* third, uObject* fourth, uObject** result);
};
// }

}}} // ::g::Fuse::Reactive
