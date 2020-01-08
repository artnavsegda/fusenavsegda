// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct ExpressionSubscriber;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ExpressionSubscriber :14
// {
struct ExpressionSubscriber_type : ::g::Fuse::Reactive::InnerListener_type
{
    void(*fp_OnArguments)(::g::Fuse::Reactive::ExpressionSubscriber*, uArray*);
    void(*fp_OnClearData)(::g::Fuse::Reactive::ExpressionSubscriber*);
};

ExpressionSubscriber_type* ExpressionSubscriber_typeof();
void ExpressionSubscriber__ctor_1_fn(ExpressionSubscriber* __this, uArray* args, int32_t* flags, uObject* source);
void ExpressionSubscriber__Dispose_fn(ExpressionSubscriber* __this);
void ExpressionSubscriber__Init_fn(ExpressionSubscriber* __this, uObject* context);
void ExpressionSubscriber__IsOptional_fn(ExpressionSubscriber* __this, int32_t* index, bool* __retval);
void ExpressionSubscriber__OnLostData_fn(ExpressionSubscriber* __this, uObject* source);
void ExpressionSubscriber__OnNewData_fn(ExpressionSubscriber* __this, uObject* source, uObject* value);
void ExpressionSubscriber__UpdateOperands_fn(ExpressionSubscriber* __this);

struct ExpressionSubscriber : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uObject*> _source;
    int32_t _flags;
    uStrong<uArray*> _args;

    void ctor_1(uArray* args, int32_t flags, uObject* source);
    void Init(uObject* context);
    bool IsOptional(int32_t index);
    void OnArguments(uArray* args) { (((ExpressionSubscriber_type*)__type)->fp_OnArguments)(this, args); }
    void OnClearData() { (((ExpressionSubscriber_type*)__type)->fp_OnClearData)(this); }
    void UpdateOperands();
};
// }

}}} // ::g::Fuse::Reactive
