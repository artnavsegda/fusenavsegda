// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.10.0-rc1/DataToResource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ExpressionListener.h>
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResource;}}}
namespace g{namespace Fuse{namespace Reactive{struct DataToResource__DataToResourceSubscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class DataToResource.DataToResourceSubscription :49
// {
::g::Fuse::Reactive::ExpressionListener_type* DataToResource__DataToResourceSubscription_typeof();
void DataToResource__DataToResourceSubscription__ctor_3_fn(DataToResource__DataToResourceSubscription* __this, ::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener);
void DataToResource__DataToResourceSubscription__Dispose_fn(DataToResource__DataToResourceSubscription* __this);
void DataToResource__DataToResourceSubscription__New1_fn(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener, DataToResource__DataToResourceSubscription** __retval);
void DataToResource__DataToResourceSubscription__OnArguments_fn(DataToResource__DataToResourceSubscription* __this, uArray* args);
void DataToResource__DataToResourceSubscription__OnChanged_fn(DataToResource__DataToResourceSubscription* __this);
void DataToResource__DataToResourceSubscription__Subscribe_fn(DataToResource__DataToResourceSubscription* __this);
void DataToResource__DataToResourceSubscription__Unsubscribe_fn(DataToResource__DataToResourceSubscription* __this);

struct DataToResource__DataToResourceSubscription : ::g::Fuse::Reactive::ExpressionListener
{
    uStrong< ::g::Fuse::Node*> _node;
    uStrong<uString*> _key;

    void ctor_3(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener);
    void OnChanged();
    void Subscribe();
    void Unsubscribe();
    static DataToResource__DataToResourceSubscription* New1(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
