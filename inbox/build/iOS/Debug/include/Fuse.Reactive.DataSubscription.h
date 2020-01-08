// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.10.0-rc1/Subscription/DataSubscription.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataListener.h>
#include <Fuse.Reactive.IPropertyObserver.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct DataSubscription;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__NodeDataSubscription;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class DataSubscription :6
// {
struct DataSubscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Node__IDataListener interface1;
    ::g::Fuse::Reactive::IPropertyObserver interface2;
    ::g::Fuse::Reactive::IWriteable interface3;
};

DataSubscription_type* DataSubscription_typeof();
void DataSubscription__ctor__fn(DataSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener);
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this);
void DataSubscription__Dispose_fn(DataSubscription* __this);
void DataSubscription__DisposeSubscription_fn(DataSubscription* __this);
void DataSubscription__FindData_fn(DataSubscription* __this);
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this);
void DataSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(DataSubscription* __this, uObject* sub, uString* propertyName, uObject* newValue);
void DataSubscription__FuseReactiveIWriteableTrySetExclusive_fn(DataSubscription* __this, uObject* newValue, bool* __retval);
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, DataSubscription** __retval);
void DataSubscription__ResolveInner_fn(DataSubscription* __this, uObject* data);

struct DataSubscription : uObject
{
    uStrong<uObject*> _source;
    uStrong< ::g::Fuse::Node*> _origin;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _diag;
    uStrong<uString*> _key;
    uStrong< ::g::Fuse::Node__NodeDataSubscription*> _dataSub;
    bool _isResolved;
    bool _hasData;
    uStrong<uObject*> _currentData;
    uStrong<uObject*> _sub;

    void ctor_(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener);
    void ClearDiagnostic();
    void Dispose();
    void DisposeSubscription();
    void FindData();
    void ResolveInner(uObject* data);
    static DataSubscription* New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
