// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/DataFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataListener.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct DataFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct DataFunction__Subscription;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__NodeDataSubscription;}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class DataFunction.Subscription :40
// {
struct DataFunction__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Node__IDataListener interface1;
};

DataFunction__Subscription_type* DataFunction__Subscription_typeof();
void DataFunction__Subscription__ctor__fn(DataFunction__Subscription* __this, ::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node);
void DataFunction__Subscription__Dispose_fn(DataFunction__Subscription* __this);
void DataFunction__Subscription__FuseNodeIDataListenerOnDataChanged_fn(DataFunction__Subscription* __this);
void DataFunction__Subscription__Init_fn(DataFunction__Subscription* __this);
void DataFunction__Subscription__New1_fn(::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node, DataFunction__Subscription** __retval);
void DataFunction__Subscription__UpdateData_fn(DataFunction__Subscription* __this);

struct DataFunction__Subscription : uObject
{
    uStrong< ::g::Fuse::Reactive::DataFunction*> _expr;
    uStrong<uObject*> _listener;
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Node__NodeDataSubscription*> _dataSub;

    void ctor_(::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node);
    void Dispose();
    void Init();
    void UpdateData();
    static DataFunction__Subscription* New1(::g::Fuse::Reactive::DataFunction* expr, uObject* listener, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Reactive
