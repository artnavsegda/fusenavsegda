// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataListener.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__NodeDataSubscription;}}

namespace g{
namespace Fuse{

// internal sealed class Node.NodeDataSubscription :277
// {
struct Node__NodeDataSubscription_type : uType
{
    ::g::Fuse::Node__IDataListener interface0;
    ::g::Uno::IDisposable interface1;
};

Node__NodeDataSubscription_type* Node__NodeDataSubscription_typeof();
void Node__NodeDataSubscription__ctor__fn(Node__NodeDataSubscription* __this, ::g::Fuse::Node* origin, int32_t* type, uString* key, uObject* listener);
void Node__NodeDataSubscription__get_Data_fn(Node__NodeDataSubscription* __this, uObject** __retval);
void Node__NodeDataSubscription__Dispose_fn(Node__NodeDataSubscription* __this);
void Node__NodeDataSubscription__FuseNodeIDataListenerOnDataChanged_fn(Node__NodeDataSubscription* __this);
void Node__NodeDataSubscription__get_HasData_fn(Node__NodeDataSubscription* __this, bool* __retval);
void Node__NodeDataSubscription__New1_fn(::g::Fuse::Node* origin, int32_t* type, uString* key, uObject* listener, Node__NodeDataSubscription** __retval);
void Node__NodeDataSubscription__get_Provider_fn(Node__NodeDataSubscription* __this, uObject** __retval);

struct Node__NodeDataSubscription : uObject
{
    int32_t _type;
    uStrong<uString*> _key;
    bool _hasData;
    uStrong<uObject*> _data;
    uStrong<uObject*> _provider;
    uStrong< ::g::Fuse::Node*> _origin;
    uStrong<uObject*> _listener;

    void ctor_(::g::Fuse::Node* origin, int32_t type, uString* key, uObject* listener);
    uObject* Data();
    void Dispose();
    bool HasData();
    uObject* Provider();
    static Node__NodeDataSubscription* New1(::g::Fuse::Node* origin, int32_t type, uString* key, uObject* listener);
};
// }

}} // ::g::Fuse
