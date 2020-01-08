// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/Http.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__FuseJSHttpRequest;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.FuseJSHttpRequest :86
// {
uType* Http__FuseJSHttpRequest_typeof();
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
void Http__FuseJSHttpRequest__Abort_fn(Http__FuseJSHttpRequest* __this);
void Http__FuseJSHttpRequest__CheckIsAttached_fn(Http__FuseJSHttpRequest* __this);
void Http__FuseJSHttpRequest__DetachRequest_fn(Http__FuseJSHttpRequest* __this);
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseContentByteArray_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseContentString_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uString** __retval);
void Http__FuseJSHttpRequest__GetResponseHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString** __retval);
void Http__FuseJSHttpRequest__GetResponseHeaders_fn(Http__FuseJSHttpRequest* __this, uString** __retval);
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseStatus_fn(Http__FuseJSHttpRequest* __this, int32_t* __retval);
void Http__FuseJSHttpRequest__GetResponseType_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval);
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval);
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value);
void Http__FuseJSHttpRequest__OnAbort_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error);
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int32_t* current, int32_t* total, bool* hastotal);
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__SetHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString* value);
void Http__FuseJSHttpRequest__SetResponseType_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__SetTimeout_fn(Http__FuseJSHttpRequest* __this, int32_t* timeout);

struct Http__FuseJSHttpRequest : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _req;
    uStrong<uString*> _cachedResponseHeaders;
    uStrong<uObject*> _cachedResponseContent;
    int32_t _cachedResponseStatus;
    int32_t _cachedResponseType;
    int32_t _finalState;
    uStrong< ::g::Fuse::Scripting::Object*> _Obj;

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
    void Abort();
    void CheckIsAttached();
    void DetachRequest();
    uObject* EnableCache(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* GetResponseContentByteArray(::g::Fuse::Scripting::Context* context, uArray* args);
    uString* GetResponseContentString(::g::Fuse::Scripting::Context* context, uArray* args);
    uString* GetResponseHeader(uString* key);
    uString* GetResponseHeaders();
    uObject* GetResponseReasonPhrase(::g::Fuse::Scripting::Context* context, uArray* args);
    int32_t GetResponseStatus();
    uObject* GetResponseType(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* GetState(::g::Fuse::Scripting::Context* context, uArray* args);
    ::g::Fuse::Scripting::Object* Obj();
    void Obj(::g::Fuse::Scripting::Object* value);
    void OnAbort(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error);
    void OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int32_t current, int32_t total, bool hastotal);
    void OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    uObject* SendAsync(::g::Fuse::Scripting::Context* context, uArray* args);
    void SetHeader(uString* key, uString* value);
    uObject* SetResponseType(::g::Fuse::Scripting::Context* context, uArray* args);
    void SetTimeout(int32_t timeout);
    static Http__FuseJSHttpRequest* New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
