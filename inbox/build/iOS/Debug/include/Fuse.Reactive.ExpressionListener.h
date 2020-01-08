// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/ExpressionListener.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionSubscriber.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct ExpressionListener;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ExpressionListener :152
// {
struct ExpressionListener_type : ::g::Fuse::Reactive::ExpressionSubscriber_type
{
    void(*fp_OnDataCleared)(::g::Fuse::Reactive::ExpressionListener*);
};

ExpressionListener_type* ExpressionListener_typeof();
void ExpressionListener__ctor_2_fn(ExpressionListener* __this, ::g::Fuse::Reactive::Expression* source, uObject* listener, uArray* args, int32_t* flags);
void ExpressionListener__ClearData_fn(ExpressionListener* __this);
void ExpressionListener__Dispose_fn(ExpressionListener* __this);
void ExpressionListener__get_Listener_fn(ExpressionListener* __this, uObject** __retval);
void ExpressionListener__OnClearData_fn(ExpressionListener* __this);
void ExpressionListener__OnDataCleared_fn(ExpressionListener* __this);
void ExpressionListener__SetData_fn(ExpressionListener* __this, uObject* value);

struct ExpressionListener : ::g::Fuse::Reactive::ExpressionSubscriber
{
    uStrong<uObject*> _listener;
    bool _hasData;
    uStrong<uObject*> _curData;
    uStrong< ::g::Fuse::Reactive::Expression*> _source1;

    void ctor_2(::g::Fuse::Reactive::Expression* source, uObject* listener, uArray* args, int32_t flags);
    void ClearData();
    uObject* Listener();
    void OnDataCleared() { (((ExpressionListener_type*)__type)->fp_OnDataCleared)(this); }
    void SetData(uObject* value);
    static void OnDataCleared(ExpressionListener* __this) { ExpressionListener__OnDataCleared_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
