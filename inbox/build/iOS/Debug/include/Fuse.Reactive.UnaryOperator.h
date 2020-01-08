// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/UnaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.ComputeExpression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct UnaryOperator;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class UnaryOperator :8
// {
::g::Fuse::Reactive::ComputeExpression_type* UnaryOperator_typeof();
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval);
void UnaryOperator__GetFlags_fn(UnaryOperator* __this, int32_t* __retval);
void UnaryOperator__InternalOnLostOperand_fn(UnaryOperator* __this, uObject* listener);
void UnaryOperator__InternalOnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand);
void UnaryOperator__get_IsOperandOptional_fn(UnaryOperator* __this, bool* __retval);
void UnaryOperator__OnLostOperand_fn(UnaryOperator* __this, uObject* listener);
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand);
void UnaryOperator__TryCompute_fn(UnaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void UnaryOperator__TryCompute1_fn(UnaryOperator* __this, uObject* operand, uObject** result, bool* __retval);

struct UnaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    uObject* Compute(uObject* operand);
    void InternalOnLostOperand(uObject* listener);
    void InternalOnNewOperand(uObject* listener, uObject* operand);
    bool IsOperandOptional();
    void OnLostOperand(uObject* listener);
    void OnNewOperand(uObject* listener, uObject* operand);
    bool TryCompute1(uObject* operand, uObject** result);
};
// }

}}} // ::g::Fuse::Reactive
