// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaScript.IMirror.h>
#include <Fuse.Scripting.JavaScript.JSContext.h>
#include <JavaScriptCore/JavaScript.h>
#include <JavaScriptCore/JSContextRef.h>
#include <JavaScriptCore/JSObjectRef.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// public sealed extern class Context :14
// {
::g::Fuse::Scripting::JavaScript::JSContext_type* Context_typeof();
void Context__ctor_2_fn(Context* __this);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__New1_fn(Context** __retval);
void Context__OnError_fn(Context* __this, ::JSValueRef* exception);
void Context__OnSetupError_fn(Context* __this, ::JSValueRef* exception);
void Context__OnSetupErrorError_fn(::JSValueRef* exception);
void Context__ThrowPendingException_fn(Context* __this);
void Context__Unwrap1_fn(Context* __this, uObject* obj, ::JSValueRef* __retval);
void Context__Unwrap2_fn(Context* __this, uArray* obj, uArray** __retval);
void Context__UnwrapArrayBuffer_fn(Context* __this, uArray* data, ::JSValueRef* __retval);
void Context__Wrap1_fn(Context* __this, ::JSValueRef* value, uObject** __retval);
void Context__Wrap2_fn(Context* __this, uArray* values, uArray** __retval);
void Context__WrapArrayBuffer_fn(Context* __this, ::JSObjectRef* value, uArray** __retval);

struct Context : ::g::Fuse::Scripting::JavaScript::JSContext
{
    bool _disposed;
    ::JSContextRef _context;
    uStrong<uDelegate*> _onError;
    uStrong< ::g::Fuse::Scripting::Object*> _global;
    ::JSObjectRef _functionType;
    ::JSObjectRef _arrayType;
    ::JSObjectRef _arrayBufferType;
    ::JSObjectRef _byteArrayType;
    ::JSClassRef _unoFinalizerClass;
    ::JSClassRef _unoCallbackClass;
    int32_t _vmDepth;
    uStrong< ::g::Uno::Exception*> _pendingException;

    void ctor_2();
    void OnError(::JSValueRef exception);
    void OnSetupError(::JSValueRef exception);
    void ThrowPendingException();
    ::JSValueRef Unwrap1(uObject* obj);
    uArray* Unwrap2(uArray* obj);
    ::JSValueRef UnwrapArrayBuffer(uArray* data);
    uObject* Wrap1(::JSValueRef value);
    uArray* Wrap2(uArray* values);
    uArray* WrapArrayBuffer(::JSObjectRef value);
    static Context* New1();
    static void OnSetupErrorError(::JSValueRef exception);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
