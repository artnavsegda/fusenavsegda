// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.10.0-rc1/RouterRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPageRoute;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class RouterRequest :12
// {
uType* RouterRequest_typeof();
void RouterRequest__ctor__fn(RouterRequest* __this, int32_t* flags);
void RouterRequest__AddArgument_fn(RouterRequest* __this, uString* name, uObject* value, int32_t* allow, bool* __retval);
void RouterRequest__AddArguments_fn(RouterRequest* __this, uObject* obj, int32_t* allow, bool* __retval);
void RouterRequest__AddHow_fn(RouterRequest* __this, int32_t* how, bool* __retval);
void RouterRequest__AddPath_fn(RouterRequest* __this, uObject* value, bool* __retval);
void RouterRequest__IsObjectRoute_fn(uObject* value, bool* __retval);
void RouterRequest__MakeRequest_fn(RouterRequest* __this, ::g::Fuse::Navigation::Router* router, bool* __retval);
void RouterRequest__New1_fn(int32_t* flags, RouterRequest** __retval);
void RouterRequest__get_Operation_fn(RouterRequest* __this, int32_t* __retval);
void RouterRequest__set_Operation_fn(RouterRequest* __this, int32_t* value);
void RouterRequest__ParseFlatRoute_fn(uObject* path, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void RouterRequest__ParseFlatRoute1_fn(uArray* args, int32_t* pos, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void RouterRequest__ParseNVPComponent_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval);
void RouterRequest__ParseNVPRoute_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval);
void RouterRequest__ParseObjectComponent_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval);
void RouterRequest__ParseObjectRoute_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval);
void RouterRequest__ParseUXRoute_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval);
void RouterRequest__Reset_fn(RouterRequest* __this);
void RouterRequest__ValidateParameter_fn(uObject* arg, int32_t* depth, bool* __retval);

struct RouterRequest : uObject
{
    int32_t How;
    uStrong< ::g::Fuse::Navigation::RouterPageRoute*> Route;
    uWeak< ::g::Fuse::Node*> Relative;
    int32_t Transition;
    uStrong<uString*> Style;
    uStrong<uString*> Bookmark;
    int32_t _operation;
    bool HasOperation;
    int32_t _flags;

    void ctor_(int32_t flags);
    bool AddArgument(uString* name, uObject* value, int32_t allow);
    bool AddArguments(uObject* obj, int32_t allow);
    bool AddHow(int32_t how);
    bool AddPath(uObject* value);
    bool MakeRequest(::g::Fuse::Navigation::Router* router);
    int32_t Operation();
    void Operation(int32_t value);
    void Reset();
    static bool IsObjectRoute(uObject* value);
    static RouterRequest* New1(int32_t flags);
    static ::g::Fuse::Navigation::RouterPageRoute* ParseFlatRoute(uObject* path);
    static ::g::Fuse::Navigation::RouterPageRoute* ParseFlatRoute1(uArray* args, int32_t pos);
    static bool ParseNVPComponent(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route);
    static bool ParseNVPRoute(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route);
    static bool ParseObjectComponent(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route);
    static bool ParseObjectRoute(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route);
    static bool ParseUXRoute(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route);
    static bool ValidateParameter(uObject* arg, int32_t depth);
};
// }

}}} // ::g::Fuse::Navigation
