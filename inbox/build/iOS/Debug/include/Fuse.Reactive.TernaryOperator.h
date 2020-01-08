// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/TernaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct TernaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class TernaryOperator :8
// {
::g::Fuse::Reactive::ComputeExpression_type* TernaryOperator_typeof();
void TernaryOperator__Compute_fn(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** __retval);
void TernaryOperator__GetFlags_fn(TernaryOperator* __this, int32_t* __retval);
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval);
void TernaryOperator__TryCompute_fn(TernaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void TernaryOperator__TryCompute1_fn(TernaryOperator* __this, uObject* first, uObject* second, uObject* third, uObject** result, bool* __retval);

struct TernaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    uObject* Compute(uObject* first, uObject* second, uObject* third);
    bool IsFirstOptional();
    bool IsSecondOptional();
    bool IsThirdOptional();
    bool TryCompute1(uObject* first, uObject* second, uObject* third, uObject** result);
};
// }

}}} // ::g::Fuse::Reactive
