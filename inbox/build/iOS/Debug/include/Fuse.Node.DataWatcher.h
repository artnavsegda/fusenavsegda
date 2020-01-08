// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.10.0-rc1/Node.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.IDataListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Node__DataWatcher;}}
namespace g{namespace Fuse{struct Node__NodeDataSubscription;}}

namespace g{
namespace Fuse{

// private sealed class Node.DataWatcher :37
// {
struct Node__DataWatcher_type : uType
{
    ::g::Fuse::Node__IDataListener interface0;
};

Node__DataWatcher_type* Node__DataWatcher_typeof();
void Node__DataWatcher__ctor__fn(Node__DataWatcher* __this, ::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key);
void Node__DataWatcher__Dispose_fn(Node__DataWatcher* __this);
void Node__DataWatcher__FuseNodeIDataListenerOnDataChanged_fn(Node__DataWatcher* __this);
void Node__DataWatcher__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key, Node__DataWatcher** __retval);
void Node__DataWatcher__Subscribe_fn(Node__DataWatcher* __this);
void Node__DataWatcher__Update_fn(Node__DataWatcher* __this, ::g::Fuse::Scripting::Context* context);

struct Node__DataWatcher : uObject
{
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Fuse::Scripting::Function*> _updateCallback;
    uStrong< ::g::Fuse::Node__NodeDataSubscription*> _dataSub;
    uStrong<uString*> _key;
    uStrong<uObject*> _data;

    void ctor_(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key);
    void Dispose();
    void Subscribe();
    void Update(::g::Fuse::Scripting::Context* context);
    static Node__DataWatcher* New1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key);
};
// }

}} // ::g::Fuse
