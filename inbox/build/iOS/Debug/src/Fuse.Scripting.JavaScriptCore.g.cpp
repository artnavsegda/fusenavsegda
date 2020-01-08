// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.h>
#include <Fuse.Scripting.JavaScriptCore.Array.h>
#include <Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper.h>
#include <Fuse.Scripting.JavaScriptCore.Context.EnterVM.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.JavaScriptCore.Function.h>
#include <Fuse.Scripting.JavaScriptCore.JSClassRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback.h>
#include <Fuse.Scripting.JavaScriptCore.JSContextRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSObjectRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSPropertyNameArray.h>
#include <Fuse.Scripting.JavaScriptCore.JSStringRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSType.h>
#include <Fuse.Scripting.JavaScriptCore.JSTypedArray.h>
#include <Fuse.Scripting.JavaScriptCore.JSValueRef.h>
#include <Fuse.Scripting.JavaScriptCore.Object.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <JavaScriptCore/JSBase.h>
#include <JavaScriptCore/JSTypedArrayInclude.h>
#include <JavaScriptCore/JSValueRef.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.ValueType.h>
static uString* STRINGS[10];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Array.uno
// -------------------------------------------------------------------------------------------

// internal sealed extern class Array :7
// {
// ~Array() :19
static void Array__Finalize_fn(Array* __this)
{
    ::JSObjectRef ind2;

    if (!uPtr(__this->_context)->_disposed)
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)));
}

static void Array_build(uType* type)
{
    ::STRINGS[0] = uString::Const("length");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Scripting::Array_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Array, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Array, _value), 0);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Array_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int32_t*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int32_t*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int32_t*))Array__get_Length_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))Array__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))Array__get_Item_fn;
    return type;
}

// internal Array(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) :12
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array)
{
    __this->ctor_1(context, *array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :66
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    ::JSObjectRef ind6;
    Array* jsa = uCast<Array*>(a, __this->__type);
    return *__retval = uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind6 = __this->_value, ind6), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))->Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(jsa)->_value)), void();
}

// public override sealed int GetHashCode() :72
void Array__GetHashCode_fn(Array* __this, int32_t* __retval)
{
    ::JSObjectRef ind7;
    return *__retval = uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind7 = __this->_value, ind7), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))->GetHashCode(), void();
}

// public override sealed object get_Item(int index) :27
void Array__get_Item_fn(Array* __this, int32_t* index, uObject** __retval)
{
    ::JSObjectRef ind3;
    int32_t index_ = *index;
    uObject* result = NULL;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPropertyAtIndex1((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, index_, uPtr(__this->_context)->_onError));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// public override sealed void set_Item(int index, object value) :38
void Array__set_Item_fn(Array* __this, int32_t* index, uObject* value)
{
    ::JSObjectRef ind4;
    int32_t index_ = *index;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPropertyAtIndex1((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, index_, uPtr(__this->_context)->Unwrap1(value), uPtr(__this->_context)->_onError);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    uPtr(__this->_context)->ThrowPendingException();
}

// public override sealed int get_Length() :51
void Array__get_Length_fn(Array* __this, int32_t* __retval)
{
    ::JSObjectRef ind5;
    int32_t result = 0;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = (int32_t)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind5 = __this->_value, ind5), uPtr(__this->_context)->_context, ::STRINGS[0/*"length"*/], uPtr(__this->_context)->_onError), uPtr(__this->_context)->_context, uPtr(__this->_context)->_onError);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_2:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) :12
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array, Array** __retval)
{
    *__retval = Array::New1(context, *array);
}

// internal Array(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) [instance] :12
void Array::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array)
{
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = array;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) [static] :12
Array* Array::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array)
{
    Array* obj8 = (Array*)uNew(Array_typeof());
    obj8->ctor_1(context, array);
    return obj8;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Context.uno
// ---------------------------------------------------------------------------------------------

// private sealed extern class Context.CallbackWrapper :335
// {
static void Context__CallbackWrapper_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Error_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Context__CallbackWrapper, _context), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(Context__CallbackWrapper, _callback), 0);
}

uType* Context__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Context__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper", options);
    type->fp_build_ = Context__CallbackWrapper_build;
    return type;
}

// public CallbackWrapper(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) :340
void Context__CallbackWrapper__ctor__fn(Context__CallbackWrapper* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef Call(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :346
void Context__CallbackWrapper__Call_fn(Context__CallbackWrapper* __this, uArray* args, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = __this->Call(args, exception);
}

// public CallbackWrapper New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) :340
void Context__CallbackWrapper__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback, Context__CallbackWrapper** __retval)
{
    *__retval = Context__CallbackWrapper::New1(context, callback);
}

// public CallbackWrapper(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) [instance] :340
void Context__CallbackWrapper::ctor_(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef Call(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :346
::JSValueRef Context__CallbackWrapper::Call(uArray* args, ::JSValueRef* exception)
{
    *exception = NULL;

    try
    {
        {
            return uPtr(_context)->Unwrap1(uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::JavaScriptCore::Context*)_context, (uArray*)uPtr(_context)->Wrap2(args)));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Scripting::Error* se = uAs< ::g::Fuse::Scripting::Error*>(e, ::TYPES[2/*Fuse.Scripting.Error*/]);

        if (se != NULL)
            *exception = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(uPtr(_context)->_context, uPtr(e)->Message());
        else
        {
            if (uPtr(_context)->_pendingException == NULL)
                uPtr(_context)->_pendingException = e;
        }
    }

    return NULL;
}

// public CallbackWrapper New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) [static] :340
Context__CallbackWrapper* Context__CallbackWrapper::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    Context__CallbackWrapper* obj1 = (Context__CallbackWrapper*)uNew(Context__CallbackWrapper_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Context.uno
// ---------------------------------------------------------------------------------------------

// public sealed extern class Context :14
// {
// ~Context() :76
static void Context__Finalize_fn(Context* __this)
{
    __this->Dispose();
}

static void Context_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::JavaScript::JSContext_type, interface0),
        ::g::Fuse::Scripting::JavaScript::IMirror_typeof(), offsetof(::g::Fuse::Scripting::JavaScript::JSContext_type, interface1));
    type->SetFields(10,
        ::g::Uno::Bool_typeof(), offsetof(Context, _disposed), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(), offsetof(Context, _context), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), offsetof(Context, _onError), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Context, _global), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _functionType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _arrayType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _arrayBufferType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Context, _byteArrayType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof(), offsetof(Context, _unoFinalizerClass), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof(), offsetof(Context, _unoCallbackClass), 0,
        ::g::Uno::Int_typeof(), offsetof(Context, _vmDepth), 0,
        ::g::Uno::Exception_typeof(), offsetof(Context, _pendingException), 0);
}

::g::Fuse::Scripting::JavaScript::JSContext_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::JavaScript::JSContext_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::JavaScript::JSContext_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::JavaScript::JSContext_type);
    type = (::g::Fuse::Scripting::JavaScript::JSContext_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Context", options);
    type->fp_build_ = Context_build;
    type->fp_ctor_ = (void*)Context__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Context__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface1.fp_Reflect = (void(*)(uObject*, ::g::Fuse::Scripting::Context*, uObject*, uObject**))::g::Fuse::Scripting::JavaScript::JSContext__FuseScriptingJavaScriptIMirrorReflect_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context() :30
void Context__ctor_2_fn(Context* __this)
{
    __this->ctor_2();
}

// public override sealed void Dispose() :57
void Context__Dispose_fn(Context* __this)
{
    ::JSObjectRef ind6;
    ::JSObjectRef ind7;
    ::JSObjectRef ind8;
    ::JSObjectRef ind9;
    ::JSClassRef ind10;
    ::JSClassRef ind11;
    ::JSContextRef ind12;

    if (!__this->_disposed)
    {
        __this->_disposed = true;
        __this->_onError = NULL;
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind6 = __this->_functionType, ind6)));
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind7 = __this->_arrayType, ind7)));
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind8 = __this->_arrayBufferType, ind8)));
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind9 = __this->_byteArrayType, ind9)));
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::Dispose((ind10 = __this->_unoFinalizerClass, ind10));
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::Dispose((ind11 = __this->_unoCallbackClass, ind11));
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::Dispose((ind12 = __this->_context, ind12));
    }
}

// public override sealed object Evaluate(string fileName, string code) :115
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    ::JSContextRef ind13;

    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(uString::Const("Context.Evaluate.fileName")));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(uString::Const("Context.Evaluate.code")));

    uObject* ret = NULL;
    Context__EnterVM vm = Context__EnterVM__New1(__this);

    {
        try
        {
            {
                ret = __this->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSContextRef::EvaluateScript1((ind13 = __this->_context, ind13), code, NULL, fileName, 0, __this->_onError));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_3:;
    }

    __this->ThrowPendingException();
    return *__retval = ret, void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :137
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    return *__retval = __this->_global, void();
}

// public Context New() :30
void Context__New1_fn(Context** __retval)
{
    *__retval = Context::New1();
}

// private void OnError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :155
void Context__OnError_fn(Context* __this, ::JSValueRef* exception)
{
    __this->OnError(*exception);
}

// private void OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :148
void Context__OnSetupError_fn(Context* __this, ::JSValueRef* exception)
{
    __this->OnSetupError(*exception);
}

// private static void OnSetupErrorError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :143
void Context__OnSetupErrorError_fn(::JSValueRef* exception)
{
    Context::OnSetupErrorError(*exception);
}

// internal void ThrowPendingException() :102
void Context__ThrowPendingException_fn(Context* __this)
{
    __this->ThrowPendingException();
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef Unwrap(object obj) :223
void Context__Unwrap1_fn(Context* __this, uObject* obj, ::JSValueRef* __retval)
{
    *__retval = __this->Unwrap1(obj);
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef[] Unwrap(object[] obj) :249
void Context__Unwrap2_fn(Context* __this, uArray* obj, uArray** __retval)
{
    *__retval = __this->Unwrap2(obj);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef UnwrapArrayBuffer(byte[] data) :261
void Context__UnwrapArrayBuffer_fn(Context* __this, uArray* data, ::JSValueRef* __retval)
{
    *__retval = __this->UnwrapArrayBuffer(data);
}

// internal object Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef value) :188
void Context__Wrap1_fn(Context* __this, ::JSValueRef* value, uObject** __retval)
{
    *__retval = __this->Wrap1(*value);
}

// internal object[] Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[] values) :213
void Context__Wrap2_fn(Context* __this, uArray* values, uArray** __retval)
{
    *__retval = __this->Wrap2(values);
}

// private byte[] WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef value) :292
void Context__WrapArrayBuffer_fn(Context* __this, ::JSObjectRef* value, uArray** __retval)
{
    *__retval = __this->WrapArrayBuffer(*value);
}

// public Context() [instance] :30
void Context::ctor_2()
{
    ::JSContextRef ind1;
    ::JSObjectRef ind2;
    ::JSObjectRef ind3;
    ::JSObjectRef ind4;
    ::JSObjectRef ind5;
    ctor_1();
    _context = ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::Create();
    _onError = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), (void*)Context__OnError_fn, this);
    ::JSObjectRef global = ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::GlobalObject((ind1 = _context, ind1));
    _global = ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, global);
    uDelegate* onSetupError = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), (void*)Context__OnSetupError_fn, this);
    _functionType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("Function"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = _functionType, ind2)), _context);
    _arrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("Array"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind3 = _arrayType, ind3)), _context);
    _arrayBufferType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("ArrayBuffer"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind4 = _arrayBufferType, ind4)), _context);
    _byteArrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, uString::Const("Uint8Array"), onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind5 = _byteArrayType, ind5)), _context);
    _unoFinalizerClass = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::CreateUnoFinalizer();
    _unoCallbackClass = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::CreateUnoCallback();
}

// private void OnError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [instance] :155
void Context::OnError(::JSValueRef exception)
{
    uString* ind21;
    uString* ind22;
    uString* ind23;
    uString* ind24;
    uString* ind25;
    uString* name = NULL;
    uString* message = NULL;
    uString* file = NULL;
    int32_t lineNumber = -1;
    uString* stack = NULL;
    uObject* wrapped = Wrap1(exception);

    if (uIs(wrapped, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof()))
    {
        ::g::Fuse::Scripting::JavaScriptCore::Object* o = uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(wrapped, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof());
        name = (ind21 = uAs<uString*>(uPtr(o)->Item(::STRINGS[9/*"name"*/]), ::g::Uno::String_typeof()), (ind21 != NULL) ? ind21 : name);
        message = (ind22 = uAs<uString*>(o->Item(uString::Const("message")), ::g::Uno::String_typeof()), (ind22 != NULL) ? ind22 : message);
        file = (ind23 = (ind24 = uAs<uString*>(o->Item(uString::Const("fileName")), ::g::Uno::String_typeof()), (ind24 != NULL) ? ind24 : uAs<uString*>(o->Item(::STRINGS[4/*"sourceURL"*/]), ::g::Uno::String_typeof())), (ind23 != NULL) ? ind23 : file);
        uObject* l1 = o->Item(uString::Const("line"));
        uObject* l2 = o->Item(uString::Const("lineNumber"));
        lineNumber = uIs(l1, ::g::Uno::Double_typeof()) ? (int32_t)uUnbox<double>(::g::Uno::Double_typeof(), l1) : uIs(l2, ::g::Uno::Double_typeof()) ? (int32_t)uUnbox<double>(::g::Uno::Double_typeof(), l2) : uIs(l1, ::g::Uno::Int_typeof()) ? uUnbox<int32_t>(::g::Uno::Int_typeof(), l1) : uIs(l2, ::g::Uno::Int_typeof()) ? uUnbox<int32_t>(::g::Uno::Int_typeof(), l2) : lineNumber;
        stack = (ind25 = uAs<uString*>(o->Item(uString::Const("stack")), ::g::Uno::String_typeof()), (ind25 != NULL) ? ind25 : stack);
    }
    else
        message = (wrapped != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(wrapped)) : message;

    U_THROW(::g::Fuse::Scripting::ScriptException::New4(name, message, file, lineNumber, stack));
}

// private void OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [instance] :148
void Context::OnSetupError(::JSValueRef exception)
{
    uString* str = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToString1(exception, _context, uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL), (void*)Context__OnSetupErrorError_fn));
    str = ::g::Uno::String::op_Equality(str, NULL) ? uString::Const("Unknown") : str;
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("Fatal exception during Fuse.Scripting.JavaScriptCore startup: "), str)));
}

// internal void ThrowPendingException() [instance] :102
void Context::ThrowPendingException()
{
    if (_vmDepth > 0)
        return;

    if (_pendingException != NULL)
    {
        ::g::Uno::Exception* e = _pendingException;
        _pendingException = NULL;
        U_THROW(::g::Uno::Exception::New3(uString::Const("Unexpected Uno.Exception"), e));
    }
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef Unwrap(object obj) [instance] :223
::JSValueRef Context::Unwrap1(uObject* obj)
{
    ::JSObjectRef ind14;
    ::JSObjectRef ind15;
    ::JSObjectRef ind16;
    ::JSObjectRef ind17;

    if (obj == NULL)
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNull(_context);

    if (uIs(obj, ::g::Uno::Int_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uUnbox<int32_t>(::g::Uno::Int_typeof(), obj));

    if (uIs(obj, ::g::Uno::Double_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, uUnbox<double>(::g::Uno::Double_typeof(), obj));

    if (uIs(obj, ::g::Uno::Float_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uUnbox<float>(::g::Uno::Float_typeof(), obj));

    if (uIs(obj, ::g::Uno::String_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(_context, uCast<uString*>(obj, ::g::Uno::String_typeof()));

    if (uIs(obj, ::g::Uno::UX::Selector_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(_context, ::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::g::Uno::UX::Selector_typeof(), obj)));

    if (uIs(obj, ::g::Uno::Bool_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeBoolean(_context, uUnbox<bool>(::g::Uno::Bool_typeof(), obj));

    if (uIs(obj, ::g::Uno::Byte_typeof()->Array()))
        return UnwrapArrayBuffer(uCast<uArray*>(obj, ::g::Uno::Byte_typeof()->Array()));

    if (uIs(obj, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind14 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(obj, ::g::Fuse::Scripting::JavaScriptCore::Object_typeof()))->_value, ind14));

    if (uIs(obj, ::g::Fuse::Scripting::JavaScriptCore::Array_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind15 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Array*>(obj, ::g::Fuse::Scripting::JavaScriptCore::Array_typeof()))->_value, ind15));

    if (uIs(obj, ::TYPES[8/*Fuse.Scripting.JavaScriptCore.Function*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind16 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(obj, ::TYPES[8/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value, ind16));

    if (uIs(obj, ::g::Fuse::Scripting::External_typeof()))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::Make(_context, _unoFinalizerClass, obj));

    if (uIs(obj, ::g::Fuse::Scripting::Callback_typeof()))
    {
        ::JSObjectRef result = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::Make(_context, _unoCallbackClass, uDelegate::New(::g::Fuse::Scripting::JavaScriptCore::JSClassRef__RawCallback_typeof(), (void*)Context__CallbackWrapper__Call_fn, Context__CallbackWrapper::New1(this, uCast<uDelegate*>(obj, ::g::Fuse::Scripting::Callback_typeof()))));
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPrototype(result, _context, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind17 = _functionType, ind17)));
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(result);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(uString::Const("Unhandled type in JavaScriptCore wrapper: "), obj)));
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef[] Unwrap(object[] obj) [instance] :249
uArray* Context::Unwrap2(uArray* obj)
{
    uArray* result = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), uPtr(obj)->Length());

    for (int32_t i = 0; i < obj->Length(); ++i)
        uPtr(result)->Item< ::JSValueRef>(i) = Unwrap1(uPtr(obj)->Strong<uObject*>(i));

    return result;
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef UnwrapArrayBuffer(byte[] data) [instance] :261
::JSValueRef Context::UnwrapArrayBuffer(uArray* data)
{
    ::JSObjectRef ind18;
    ::JSObjectRef ind19;
    ::JSObjectRef arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSTypedArray::TryMakeArrayBufferWithBytes(_context, data, _onError);

    if (::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::op_Inequality(arrayBuffer, NULL))
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetProperty1(arrayBuffer, _context, uString::Const("__unoHandle"), Unwrap1(::g::Fuse::Scripting::External::New1(data)), _onError);
    else
    {
        int32_t len = uPtr(data)->Length();
        arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind18 = _arrayBufferType, ind18), _context, uArray::Init< ::JSValueRef>(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), 1, ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)len)), _onError);
        ::JSObjectRef byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind19 = _byteArrayType, ind19), _context, uArray::Init< ::JSValueRef>(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), 1, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(arrayBuffer)), _onError);

        for (int32_t i = 0; i < len; ++i)
            ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPropertyAtIndex1(byteArray, _context, i, ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uPtr(data)->Item<uint8_t>(i)), _onError);
    }

    return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(arrayBuffer);
}

// internal object Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef value) [instance] :188
uObject* Context::Wrap1(::JSValueRef value)
{
    switch (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetType1(value, _context))
    {
        case 0:
            return NULL;
        case 1:
            return NULL;
        case 2:
            return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToBoolean(value, _context));
        case 3:
            return uBox(::g::Uno::Double_typeof(), ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(value, _context, _onError));
        case 4:
            return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToString1(value, _context, _onError);
        case 5:
        {
            ::JSObjectRef obj = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(value, _context);
            uObject* priv = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPrivate(obj);

            if ((priv != NULL) && uIs(priv, ::g::Fuse::Scripting::External_typeof()))
                return priv;

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _functionType, _onError))
                return ::g::Fuse::Scripting::JavaScriptCore::Function::New1(this, obj);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _arrayType, _onError))
                return ::g::Fuse::Scripting::JavaScriptCore::Array::New1(this, obj);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _arrayBufferType, _onError))
                return WrapArrayBuffer(obj);

            return ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, obj);
        }
        case 6:
            U_THROW(::g::Uno::Exception::New2(uString::Const("Internal error in JavaScriptCore wrapper")));
        default:
            U_THROW(::g::Uno::Exception::New2(uString::Const("Unhandled JSType in JavaScriptCore wrapper")));
    }
}

// internal object[] Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[] values) [instance] :213
uArray* Context::Wrap2(uArray* values)
{
    uArray* result = uArray::New(::TYPES[6/*object[]*/], uPtr(values)->Length());

    for (int32_t i = 0; i < values->Length(); ++i)
        uPtr(result)->Strong<uObject*>(i) = Wrap1(uPtr(values)->Item< ::JSValueRef>(i));

    return result;
}

// private byte[] WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef value) [instance] :292
uArray* Context::WrapArrayBuffer(::JSObjectRef value)
{
    ::JSObjectRef ind20;

    if (::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::HasProperty1(value, _context, uString::Const("__unoHandle")))
    {
        ::g::Fuse::Scripting::External* unoHandle = uAs< ::g::Fuse::Scripting::External*>(Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(value, _context, uString::Const("__unoHandle"), _onError)), ::g::Fuse::Scripting::External_typeof());

        if (unoHandle != NULL)
        {
            uArray* result = uAs<uArray*>(uPtr(unoHandle)->Object, ::g::Uno::Byte_typeof()->Array());

            if (result != NULL)
                return result;
        }
    }

    uArray* res = ::g::Fuse::Scripting::JavaScriptCore::JSTypedArray::TryCopyArrayBufferBytes(_context, value, _onError);

    if (res != NULL)
        return res;

    ::JSObjectRef byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind20 = _byteArrayType, ind20), _context, uArray::Init< ::JSValueRef>(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), 1, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(value)), _onError);
    int32_t len = (int32_t)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(value, _context, uString::Const("byteLength"), _onError), _context, _onError);
    res = uArray::New(::g::Uno::Byte_typeof()->Array(), len);

    for (int32_t i = 0; i < len; ++i)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPropertyAtIndex1(byteArray, _context, i, _onError), _context, _onError);

    return res;
}

// public Context New() [static] :30
Context* Context::New1()
{
    Context* obj26 = (Context*)uNew(Context_typeof());
    obj26->ctor_2();
    return obj26;
}

// private static void OnSetupErrorError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [static] :143
void Context::OnSetupErrorError(::JSValueRef exception)
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Context.uno
// ---------------------------------------------------------------------------------------------

// internal struct Context.EnterVM :86
// {
// public void Dispose() [adapter] :95
static void Context__EnterVM__Dispose_ex(uObject* __this)
{
    Context__EnterVM__Dispose_fn((Context__EnterVM*)((uint8_t*)__this + sizeof(uObject)));
}

static void Context__EnterVM_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context__EnterVM_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Context__EnterVM, _context), 0);
}

Context__EnterVM_type* Context__EnterVM_typeof()
{
    static uSStrong<Context__EnterVM_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.Alignment = alignof(Context__EnterVM);
    options.ValueSize = sizeof(Context__EnterVM);
    options.TypeSize = sizeof(Context__EnterVM_type);
    type = (Context__EnterVM_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.Context.EnterVM", options);
    type->fp_build_ = Context__EnterVM_build;
    type->interface0.fp_Dispose = Context__EnterVM__Dispose_ex;
    return type;
}

// public EnterVM(Fuse.Scripting.JavaScriptCore.Context context) :89
void Context__EnterVM__ctor_1_fn(Context__EnterVM* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context)
{
    __this->ctor_1(context);
}

// public void Dispose() :95
void Context__EnterVM__Dispose_fn(Context__EnterVM* __this)
{
    __this->Dispose();
}

// public EnterVM New(Fuse.Scripting.JavaScriptCore.Context context) :89
void Context__EnterVM__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, Context__EnterVM* __retval)
{
    *__retval = Context__EnterVM__New1(context);
}

// public EnterVM(Fuse.Scripting.JavaScriptCore.Context context) [instance] :89
void Context__EnterVM::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context)
{
    _context = context;
    ++uPtr(_context)->_vmDepth;
}

// public void Dispose() [instance] :95
void Context__EnterVM::Dispose()
{
    --uPtr(_context)->_vmDepth;
    _context = NULL;
}

// public EnterVM New(Fuse.Scripting.JavaScriptCore.Context context) [static] :89
Context__EnterVM Context__EnterVM__New1(::g::Fuse::Scripting::JavaScriptCore::Context* context)
{
    Context__EnterVM obj1;
    obj1.ctor_1(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Function.uno
// ----------------------------------------------------------------------------------------------

// internal sealed extern class Function :7
// {
// ~Function() :19
static void Function__Finalize_fn(Function* __this)
{
    ::JSObjectRef ind2;

    if (!uPtr(__this->_context)->_disposed)
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)));
}

static void Function_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Inconsistent context");
    ::STRINGS[2] = uString::Const("context");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Function, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Function, _value), 0);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Function_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Context*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Context*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) :12
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function)
{
    __this->ctor_1(context, *function);
}

// public override sealed object Call(Fuse.Scripting.Context context, object[] args) :25
void Function__Call_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    ::JSObjectRef ind3;

    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"Inconsisten...*/], ::STRINGS[2/*"context"*/]));

    uObject* result = NULL;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsFunction((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, NULL, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// public override sealed Fuse.Scripting.Object Construct(Fuse.Scripting.Context context, object[] args) :48
void Function__Construct_fn(Function* __this, ::g::Fuse::Scripting::Context* context, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    ::JSObjectRef ind4;

    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"Inconsisten...*/], ::STRINGS[2/*"context"*/]));

    ::g::Fuse::Scripting::Object* result = NULL;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = uCast< ::g::Fuse::Scripting::Object*>(uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError))), ::TYPES[3/*Fuse.Scripting.Object*/]);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_5:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :70
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    ::JSObjectRef ind5;
    return *__retval = uIs(f, __this->__type) && uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind5 = __this->_value, ind5), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))->Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(uCast<Function*>(f, __this->__type))->_value)), void();
}

// public override sealed int GetHashCode() :75
void Function__GetHashCode_fn(Function* __this, int32_t* __retval)
{
    ::JSObjectRef ind6;
    return *__retval = uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind6 = __this->_value, ind6), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))->GetHashCode(), void();
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) :12
void Function__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function, Function** __retval)
{
    *__retval = Function::New1(context, *function);
}

// internal Function(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) [instance] :12
void Function::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function)
{
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = function;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) [static] :12
Function* Function::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function)
{
    Function* obj7 = (Function*)uNew(Function_typeof());
    obj7->ctor_1(context, function);
    return obj7;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern struct JSClassRef :409
// {
// public void Dispose() [adapter] :481
static void JSClassRef__Dispose_ex(uObject* __this)
{
    JSClassRef__Dispose_fn((::JSClassRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSClassRef_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSClassRef_type, interface0));
}

JSClassRef_type* JSClassRef_typeof()
{
    static uSStrong<JSClassRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSClassRef);
    options.ValueSize = sizeof(::JSClassRef);
    options.TypeSize = sizeof(JSClassRef_type);
    type = (JSClassRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSClassRef", options);
    type->fp_build_ = JSClassRef_build;
    type->interface0.fp_Dispose = JSClassRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoCallback() :425
void JSClassRef__CreateUnoCallback_fn(::JSClassRef* __retval)
{
    *__retval = JSClassRef::CreateUnoCallback();
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoFinalizer() :411
void JSClassRef__CreateUnoFinalizer_fn(::JSClassRef* __retval)
{
    *__retval = JSClassRef::CreateUnoFinalizer();
}

// public void Dispose() :481
void JSClassRef__Dispose_fn(::JSClassRef* __this)
{
    JSClassRef::Dispose(*__this);
}

// public void Dispose() [instance] :481
void JSClassRef::Dispose(::JSClassRef __this)
{
    ::JSClassRelease(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoCallback() [static] :425
::JSClassRef JSClassRef::CreateUnoCallback()
{
    ::JSClassDefinition classDef = kJSClassDefinitionEmpty;
    classDef.finalize = (::JSObjectFinalizeCallback) [] (::JSObjectRef obj) -> void
    {
    	uObject* unoObj = (uObject*)JSObjectGetPrivate(obj);
    	::uRelease(unoObj);
    };
    
    classDef.callAsFunction = (::JSObjectCallAsFunctionCallback) [] (
    	::JSContextRef ctx,
    	::JSObjectRef function,
    	::JSObjectRef thisObject,
    	size_t argumentCount,
    	const ::JSValueRef arguments[],
    	::JSValueRef* exception) -> ::JSValueRef
    {
    	uDelegate* unoDelegate = (uDelegate*)JSObjectGetPrivate(function);
    	uArray* unoArguments = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), (int)argumentCount);
    	for (int i = 0; i < argumentCount; ++i)
    	{
    		unoArguments->Item< ::JSValueRef>(i) = arguments[i];
    	}
    
    	return uUnbox< ::JSValueRef>(unoDelegate->Invoke(2, unoArguments, exception));
    };
    
    classDef.callAsConstructor = (::JSObjectCallAsConstructorCallback) [] (
    	::JSContextRef ctx,
    	::JSObjectRef constructor,
    	size_t argumentCount,
    	const ::JSValueRef arguments[],
    	::JSValueRef* exception) -> ::JSObjectRef
    {
    	uDelegate* unoDelegate = (uDelegate*)JSObjectGetPrivate(constructor);
    	uArray* unoArguments = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), (int)argumentCount);
    	for (int i = 0; i < argumentCount; ++i)
    	{
    		unoArguments->Item< ::JSValueRef>(i) = arguments[i];
    	}
    
    	::JSValueRef result = uUnbox< ::JSValueRef>(unoDelegate->Invoke(2, unoArguments, exception));
    	if (!::JSValueIsObject(ctx, result))
    	{
    		const char* errorStr
    			= "Scripting.Callback called as a constructor returned a non-object.";
    		::uString* unoErrorStr = ::uString::Ansi(errorStr);
    		*exception = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(ctx, unoErrorStr);
    		return NULL;
    	}
    	return (::JSObjectRef)result;
    };
    
    return ::JSClassCreate(&classDef);
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoFinalizer() [static] :411
::JSClassRef JSClassRef::CreateUnoFinalizer()
{
    ::JSClassDefinition classDef = kJSClassDefinitionEmpty;
    classDef.finalize = (::JSObjectFinalizeCallback)
    [] (::JSObjectRef obj) -> void
    {
    	uObject* unoObj = (uObject*)JSObjectGetPrivate(obj);
    	::uRelease(unoObj);
    };
    return ::JSClassCreate(&classDef);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern struct JSContextRef :349
// {
// public void Dispose() [adapter] :356
static void JSContextRef__Dispose_ex(uObject* __this)
{
    JSContextRef__Dispose_fn((::JSContextRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSContextRef_build(uType* type)
{
    ::STRINGS[3] = uString::Const("script");
    ::STRINGS[4] = uString::Const("sourceURL");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[0/*Uno.IDisposable*/], offsetof(JSContextRef_type, interface0));
}

JSContextRef_type* JSContextRef_typeof()
{
    static uSStrong<JSContextRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSContextRef);
    options.ValueSize = sizeof(::JSContextRef);
    options.TypeSize = sizeof(JSContextRef_type);
    type = (JSContextRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSContextRef", options);
    type->fp_build_ = JSContextRef_build;
    type->interface0.fp_Dispose = JSContextRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSContextRef Create() :351
void JSContextRef__Create_fn(::JSContextRef* __retval)
{
    *__retval = JSContextRef::Create();
}

// public void Dispose() :356
void JSContextRef__Dispose_fn(::JSContextRef* __this)
{
    JSContextRef::Dispose(*__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(Fuse.Scripting.JavaScriptCore.JSStringRef script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSStringRef sourceURL, int startingLineNumber, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :369
void JSContextRef__EvaluateScript_fn(::JSContextRef* __this, ::JSStringRef* script, ::JSObjectRef* thisObject, ::JSStringRef* sourceURL, int32_t* startingLineNumber, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSContextRef::EvaluateScript(*__this, *script, *thisObject, *sourceURL, *startingLineNumber, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(string script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, string sourceURL, int startingLineNumber, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :379
void JSContextRef__EvaluateScript1_fn(::JSContextRef* __this, uString* script, ::JSObjectRef* thisObject, uString* sourceURL, int32_t* startingLineNumber, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSContextRef::EvaluateScript1(*__this, script, *thisObject, sourceURL, *startingLineNumber, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef get_GlobalObject() :363
void JSContextRef__get_GlobalObject_fn(::JSContextRef* __this, ::JSObjectRef* __retval)
{
    *__retval = JSContextRef::GlobalObject(*__this);
}

// public void Dispose() [instance] :356
void JSContextRef::Dispose(::JSContextRef __this)
{
    ::JSGlobalContextRelease((::JSGlobalContextRef)*&__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(Fuse.Scripting.JavaScriptCore.JSStringRef script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSStringRef sourceURL, int startingLineNumber, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :369
::JSValueRef JSContextRef::EvaluateScript(::JSContextRef __this, ::JSStringRef script, ::JSObjectRef thisObject, ::JSStringRef sourceURL, int32_t startingLineNumber, ::JSValueRef* exception)
{
    return ::JSEvaluateScript(*&__this, script, thisObject, sourceURL, startingLineNumber, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(string script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, string sourceURL, int startingLineNumber, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :379
::JSValueRef JSContextRef::EvaluateScript1(::JSContextRef __this, uString* script, ::JSObjectRef thisObject, uString* sourceURL, int32_t startingLineNumber, uDelegate* onException)
{
    if (::g::Uno::String::op_Equality(script, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"script"*/]));

    if (::g::Uno::String::op_Equality(sourceURL, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"sourceURL"*/]));

    ::JSStringRef scriptRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(script);

    {
        try
        {
            {
                ::JSStringRef sourceRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(sourceURL);

                {
                    try
                    {
                        {
                            ::JSValueRef exception = NULL;
                            ::JSValueRef result = JSContextRef::EvaluateScript(__this, scriptRef, thisObject, sourceRef, startingLineNumber, &exception);

                            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
                                uPtr(onException)->InvokeVoid(uCRef(exception));

                            ::JSValueRef __uno_retval = result;
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], scriptRef), ::TYPES[0/*Uno.IDisposable*/]));
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], sourceRef), ::TYPES[0/*Uno.IDisposable*/]));
                            return __uno_retval;
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], sourceRef), ::TYPES[0/*Uno.IDisposable*/]));
                        }
                                                throw __t;
                        goto __after_finally_6;
                    }

                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], sourceRef), ::TYPES[0/*Uno.IDisposable*/]));
                    }
                    __after_finally_6:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], scriptRef), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], scriptRef), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_7:;
    }

    return NULL;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef get_GlobalObject() [instance] :363
::JSObjectRef JSContextRef::GlobalObject(::JSContextRef __this)
{
    return ::JSContextGetGlobalObject(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSContextRef Create() [static] :351
::JSContextRef JSContextRef::Create()
{
    return (::JSContextRef)::JSGlobalContextCreate(NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern struct JSObjectRef :172
// {
static void JSObjectRef_build(uType* type)
{
    ::STRINGS[5] = uString::Const("propertyName");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
}

uStructType* JSObjectRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSObjectRef);
    options.ValueSize = sizeof(::JSObjectRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.JavaScriptCore.JSObjectRef", options);
    type->fp_build_ = JSObjectRef_build;
    return type;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef CallAsConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :303
void JSObjectRef__CallAsConstructor_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uArray* arguments, uDelegate* onException, ::JSObjectRef* __retval)
{
    *__retval = JSObjectRef::CallAsConstructor(*__this, *ctx, arguments, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef CallAsFunction(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :284
void JSObjectRef__CallAsFunction_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSObjectRef* thisObject, uArray* arguments, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::CallAsFunction(*__this, *ctx, *thisObject, arguments, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSPropertyNameArray CopyPropertyNames(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :273
void JSObjectRef__CopyPropertyNames_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSPropertyNameArrayRef* __retval)
{
    *__retval = JSObjectRef::CopyPropertyNames(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetJSValueRef() :253
void JSObjectRef__GetJSValueRef_fn(::JSObjectRef* __this, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetJSValueRef(*__this);
}

// public object GetPrivate() :258
void JSObjectRef__GetPrivate_fn(::JSObjectRef* __this, uObject** __retval)
{
    *__retval = JSObjectRef::GetPrivate(*__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :177
void JSObjectRef__GetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetProperty(*__this, *ctx, *propertyName, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :182
void JSObjectRef__GetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetProperty1(*__this, *ctx, propertyName, onException);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :212
void JSObjectRef__GetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int32_t* index, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetPropertyAtIndex(*__this, *ctx, *index, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :217
void JSObjectRef__GetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int32_t* index, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetPropertyAtIndex1(*__this, *ctx, *index, onException);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName) :239
void JSObjectRef__HasProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, bool* __retval)
{
    *__retval = JSObjectRef::HasProperty(*__this, *ctx, *propertyName);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName) :244
void JSObjectRef__HasProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, bool* __retval)
{
    *__retval = JSObjectRef::HasProperty1(*__this, *ctx, propertyName);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef Make(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, [Fuse.Scripting.JavaScriptCore.JSClassRef classRef], [object data]) :278
void JSObjectRef__Make_fn(::JSContextRef* ctx, ::JSClassRef* classRef, uObject* data, ::JSObjectRef* __retval)
{
    *__retval = JSObjectRef::Make(*ctx, *classRef, data);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) :175
void JSObjectRef__op_Inequality_fn(::JSObjectRef* o1, ::JSObjectRef* o2, bool* __retval)
{
    *__retval = JSObjectRef::op_Inequality(*o1, *o2);
}

// private void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :195
void JSObjectRef__SetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* value, ::JSValueRef* exception)
{
    JSObjectRef::SetProperty(*__this, *ctx, *propertyName, *value, exception);
}

// public void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :200
void JSObjectRef__SetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, ::JSValueRef* value, uDelegate* onException)
{
    JSObjectRef::SetProperty1(*__this, *ctx, propertyName, *value, onException);
}

// private void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :226
void JSObjectRef__SetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int32_t* index, ::JSValueRef* value, ::JSValueRef* exception)
{
    JSObjectRef::SetPropertyAtIndex(*__this, *ctx, *index, *value, exception);
}

// public void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :231
void JSObjectRef__SetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int32_t* index, ::JSValueRef* value, uDelegate* onException)
{
    JSObjectRef::SetPropertyAtIndex1(*__this, *ctx, *index, *value, onException);
}

// public void SetPrototype(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef value) :268
void JSObjectRef__SetPrototype_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSValueRef* value)
{
    JSObjectRef::SetPrototype(*__this, *ctx, *value);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef CallAsConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :303
::JSObjectRef JSObjectRef::CallAsConstructor(::JSObjectRef __this, ::JSContextRef ctx, uArray* arguments, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSObjectRef result = ::JSObjectCallAsConstructor(
    	ctx,
    	*&__this,
    	(size_t)arguments->Length(),
    	(::JSValueRef*)arguments->Ptr(),
    	&exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef CallAsFunction(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :284
::JSValueRef JSObjectRef::CallAsFunction(::JSObjectRef __this, ::JSContextRef ctx, ::JSObjectRef thisObject, uArray* arguments, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSValueRef result = JSObjectCallAsFunction(
    	ctx,
    	*&__this,
    	thisObject,
    	(size_t)arguments->Length(),
    	(::JSValueRef*)arguments->Ptr(),
    	&exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public Fuse.Scripting.JavaScriptCore.JSPropertyNameArray CopyPropertyNames(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :273
::JSPropertyNameArrayRef JSObjectRef::CopyPropertyNames(::JSObjectRef __this, ::JSContextRef ctx)
{
    return ::JSObjectCopyPropertyNames(ctx, *&__this);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetJSValueRef() [instance] :253
::JSValueRef JSObjectRef::GetJSValueRef(::JSObjectRef __this)
{
    return (::JSValueRef)*&__this;
}

// public object GetPrivate() [instance] :258
uObject* JSObjectRef::GetPrivate(::JSObjectRef __this)
{
    return (uObject*)::JSObjectGetPrivate(*&__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :177
::JSValueRef JSObjectRef::GetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef* exception)
{
    return ::JSObjectGetProperty(ctx, *&__this, propertyName, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :182
::JSValueRef JSObjectRef::GetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, uDelegate* onException)
{
    if (::g::Uno::String::op_Equality(propertyName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"propertyName"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        try
        {
            {
                ::JSValueRef exception = NULL;
                ::JSValueRef result = JSObjectRef::GetProperty(__this, ctx, strRef, &exception);

                if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
                    uPtr(onException)->InvokeVoid(uCRef(exception));

                ::JSValueRef __uno_retval = result;
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_8:;
    }
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :212
::JSValueRef JSObjectRef::GetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int32_t index, ::JSValueRef* exception)
{
    return ::JSObjectGetPropertyAtIndex(ctx, *&__this, (unsigned)index, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :217
::JSValueRef JSObjectRef::GetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int32_t index, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSValueRef result = JSObjectRef::GetPropertyAtIndex(__this, ctx, index, &exception);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
        uPtr(onException)->InvokeVoid(uCRef(exception));

    return result;
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName) [instance] :239
bool JSObjectRef::HasProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName)
{
    return ::JSObjectHasProperty(ctx, *&__this, propertyName);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName) [instance] :244
bool JSObjectRef::HasProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName)
{
    if (::g::Uno::String::op_Equality(propertyName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"propertyName"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        try
        {
            {
                bool __uno_retval = JSObjectRef::HasProperty(__this, ctx, strRef);
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_9;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_9:;
    }
}

// private void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :195
void JSObjectRef::SetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef value, ::JSValueRef* exception)
{
    ::JSObjectSetProperty(ctx, *&__this, propertyName, value, ::kJSPropertyAttributeNone, exception);
}

// public void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :200
void JSObjectRef::SetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, ::JSValueRef value, uDelegate* onException)
{
    if (::g::Uno::String::op_Equality(propertyName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"propertyName"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        try
        {
            {
                ::JSValueRef exception = NULL;
                JSObjectRef::SetProperty(__this, ctx, strRef, value, &exception);

                if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
                    uPtr(onException)->InvokeVoid(uCRef(exception));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_10;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_10:;
    }
}

// private void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :226
void JSObjectRef::SetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int32_t index, ::JSValueRef value, ::JSValueRef* exception)
{
    ::JSObjectSetPropertyAtIndex(ctx, *&__this, (unsigned)index, value, exception);
}

// public void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :231
void JSObjectRef::SetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int32_t index, ::JSValueRef value, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    JSObjectRef::SetPropertyAtIndex(__this, ctx, index, value, &exception);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
        uPtr(onException)->InvokeVoid(uCRef(exception));
}

// public void SetPrototype(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef value) [instance] :268
void JSObjectRef::SetPrototype(::JSObjectRef __this, ::JSContextRef ctx, ::JSValueRef value)
{
    ::JSObjectSetPrototype(ctx, *&__this, value);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef Make(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, [Fuse.Scripting.JavaScriptCore.JSClassRef classRef], [object data]) [static] :278
::JSObjectRef JSObjectRef::Make(::JSContextRef ctx, ::JSClassRef classRef, uObject* data)
{
    ::uRetain(data);
    return ::JSObjectMake(ctx, classRef, data);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) [static] :175
bool JSObjectRef::op_Inequality(::JSObjectRef o1, ::JSObjectRef o2)
{
    return o1 != o2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern struct JSPropertyNameArray :324
// {
// public void Dispose() [adapter] :339
static void JSPropertyNameArray__Dispose_ex(uObject* __this)
{
    JSPropertyNameArray__Dispose_fn((::JSPropertyNameArrayRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSPropertyNameArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSPropertyNameArray_type, interface0));
}

JSPropertyNameArray_type* JSPropertyNameArray_typeof()
{
    static uSStrong<JSPropertyNameArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSPropertyNameArrayRef);
    options.ValueSize = sizeof(::JSPropertyNameArrayRef);
    options.TypeSize = sizeof(JSPropertyNameArray_type);
    type = (JSPropertyNameArray_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSPropertyNameArray", options);
    type->fp_build_ = JSPropertyNameArray_build;
    type->interface0.fp_Dispose = JSPropertyNameArray__Dispose_ex;
    return type;
}

// public void Dispose() :339
void JSPropertyNameArray__Dispose_fn(::JSPropertyNameArrayRef* __this)
{
    JSPropertyNameArray::Dispose(*__this);
}

// public int GetCount() :326
void JSPropertyNameArray__GetCount_fn(::JSPropertyNameArrayRef* __this, int32_t* __retval)
{
    *__retval = JSPropertyNameArray::GetCount(*__this);
}

// public Fuse.Scripting.JavaScriptCore.JSStringRef get_Item(int index) :333
void JSPropertyNameArray__get_Item_fn(::JSPropertyNameArrayRef* __this, int32_t* index, ::JSStringRef* __retval)
{
    *__retval = JSPropertyNameArray::Item(*__this, *index);
}

// public void Dispose() [instance] :339
void JSPropertyNameArray::Dispose(::JSPropertyNameArrayRef __this)
{
    ::JSPropertyNameArrayRelease(*&__this);
}

// public int GetCount() [instance] :326
int32_t JSPropertyNameArray::GetCount(::JSPropertyNameArrayRef __this)
{
    return (int32_t)::JSPropertyNameArrayGetCount(*&__this);
}

// public Fuse.Scripting.JavaScriptCore.JSStringRef get_Item(int index) [instance] :333
::JSStringRef JSPropertyNameArray::Item(::JSPropertyNameArrayRef __this, int32_t index)
{
    return ::JSPropertyNameArrayGetNameAtIndex(*&__this, (size_t)index);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern struct JSStringRef :148
// {
// public void Dispose() [adapter] :155
static void JSStringRef__Dispose_ex(uObject* __this)
{
    JSStringRef__Dispose_fn((::JSStringRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSStringRef_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSStringRef_type, interface0));
}

JSStringRef_type* JSStringRef_typeof()
{
    static uSStrong<JSStringRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.InterfaceCount = 1;
    options.Alignment = alignof(::JSStringRef);
    options.ValueSize = sizeof(::JSStringRef);
    options.TypeSize = sizeof(JSStringRef_type);
    type = (JSStringRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSStringRef", options);
    type->fp_build_ = JSStringRef_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))JSStringRef__ToString_fn;
    type->interface0.fp_Dispose = JSStringRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSStringRef Create(string str) :150
void JSStringRef__Create_fn(uString* str, ::JSStringRef* __retval)
{
    *__retval = JSStringRef::Create(str);
}

// public void Dispose() :155
void JSStringRef__Dispose_fn(::JSStringRef* __this)
{
    JSStringRef::Dispose(*__this);
}

// public override sealed string ToString() :160
void JSStringRef__ToString_fn(::JSStringRef* __this, uType* __type, uString** __retval)
{
    size_t len = ::JSStringGetLength(*__this);
    uString* result = ::uString::New((int)len);
    ::memcpy((void*)result->Ptr(), ::JSStringGetCharactersPtr(*__this), sizeof(char16_t) * len);
    return *__retval = result, void();
}

// public void Dispose() [instance] :155
void JSStringRef::Dispose(::JSStringRef __this)
{
    ::JSStringRelease(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSStringRef Create(string str) [static] :150
::JSStringRef JSStringRef::Create(uString* str)
{
    return ::JSStringCreateWithCharacters((const JSChar*)str->Ptr(), str->Length());
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern enum JSType :134
uEnumType* JSType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.JavaScriptCore.JSType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Undefined", 0LL,
        "Null", 1LL,
        "Boolean", 2LL,
        "Number", 3LL,
        "String", 4LL,
        "Object", 5LL,
        "FlipTheTable", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal static extern class JSTypedArray :488
// {
static void JSTypedArray_build(uType* type)
{
}

uClassType* JSTypedArray_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.JSTypedArray", options);
    type->fp_build_ = JSTypedArray_build;
    return type;
}

// public static byte[] TryCopyArrayBufferBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef obj, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :517
void JSTypedArray__TryCopyArrayBufferBytes_fn(::JSContextRef* ctx, ::JSObjectRef* obj, uDelegate* onException, uArray** __retval)
{
    *__retval = JSTypedArray::TryCopyArrayBufferBytes(*ctx, *obj, onException);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef TryMakeArrayBufferWithBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, byte[] bytes, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :490
void JSTypedArray__TryMakeArrayBufferWithBytes_fn(::JSContextRef* ctx, uArray* bytes, uDelegate* onException, ::JSObjectRef* __retval)
{
    *__retval = JSTypedArray::TryMakeArrayBufferWithBytes(*ctx, bytes, onException);
}

// public static byte[] TryCopyArrayBufferBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef obj, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [static] :517
uArray* JSTypedArray::TryCopyArrayBufferBytes(::JSContextRef ctx, ::JSObjectRef obj, uDelegate* onException)
{
    #ifdef JAVASCRIPTCORE_ARRAYBUFFER_SUPPORT
    if (&::JSObjectGetArrayBufferBytesPtr != NULL &&
    	&::JSObjectGetArrayBufferByteLength != NULL)
    {
    	::JSValueRef exception = NULL;
    	size_t length = ::JSObjectGetArrayBufferByteLength(ctx, obj, &exception);
    	if (exception != NULL)
    		onException->InvokeVoid(uCRef(exception));
    	void* bytesPtr = ::JSObjectGetArrayBufferBytesPtr(ctx, obj, &exception);
    	if (exception != NULL)
    		onException->InvokeVoid(uCRef(exception));
    
    	uArray* result = ::uArray::New(::g::Uno::Byte_typeof()->Array(), (int)length, bytesPtr);
    	return result;
    }
    #endif
    return NULL;
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef TryMakeArrayBufferWithBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, byte[] bytes, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [static] :490
::JSObjectRef JSTypedArray::TryMakeArrayBufferWithBytes(::JSContextRef ctx, uArray* bytes, uDelegate* onException)
{
    // Check for sufficient base SDK version
    #ifdef JAVASCRIPTCORE_ARRAYBUFFER_SUPPORT
    // Check for runtime availability (running on earlier iOS versions)
    if (&::JSObjectMakeArrayBufferWithBytesNoCopy != NULL)
    {
    	::JSValueRef exception = NULL;
    	::uRetain(bytes);
    	::JSObjectRef result = ::JSObjectMakeArrayBufferWithBytesNoCopy(
    		ctx,
    		bytes->Ptr(),
    		bytes->Length(),
    		(::JSTypedArrayBytesDeallocator)[] (void* bytes, void* deallocatorContext) -> void
    		{
    			::uRelease((uArray*)deallocatorContext);
    		},
    		bytes, // deallocatorContext
    		&exception);
    	if (exception != NULL)
    		onException->InvokeVoid(uCRef(exception));
    	return result;
    }
    #endif
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// internal extern struct JSValueRef :9
// {
static void JSValueRef_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(&this).IsObject(ctx)");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno");
    ::STRINGS[8] = uString::Const("str");
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::JavaScriptCore::Context_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uStructType* JSValueRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.DependencyCount = 1;
    options.Alignment = alignof(::JSValueRef);
    options.ValueSize = sizeof(::JSValueRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.JavaScriptCore.JSValueRef", options);
    type->fp_build_ = JSValueRef_build;
    return type;
}

// public void DeferedUnprotect() :26
void JSValueRef__DeferedUnprotect_fn(::JSValueRef* __this)
{
    JSValueRef::DeferedUnprotect(*__this);
}

// private void DeferedUnprotectInner(Fuse.Scripting.Context ctx) :31
void JSValueRef__DeferedUnprotectInner_fn(::JSValueRef* __this, ::g::Fuse::Scripting::Context* ctx)
{
    JSValueRef::DeferedUnprotectInner(*__this, ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :37
void JSValueRef__GetJSObjectRef_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* __retval)
{
    *__retval = JSValueRef::GetJSObjectRef(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSType GetType(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :45
void JSValueRef__GetType1_fn(::JSValueRef* __this, ::JSContextRef* ctx, int32_t* __retval)
{
    *__retval = JSValueRef::GetType1(*__this, *ctx);
}

// public bool IsInstanceOfConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef constructor, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :81
void JSValueRef__IsInstanceOfConstructor_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* constructor, uDelegate* onException, bool* __retval)
{
    *__retval = JSValueRef::IsInstanceOfConstructor(*__this, *ctx, *constructor, onException);
}

// public bool IsObject(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :76
void JSValueRef__IsObject_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval)
{
    *__retval = JSValueRef::IsObject(*__this, *ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, bool boolean) :114
void JSValueRef__MakeBoolean_fn(::JSContextRef* ctx, bool* boolean, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeBoolean(*ctx, *boolean);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNull(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :104
void JSValueRef__MakeNull_fn(::JSContextRef* ctx, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeNull(*ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, double number) :109
void JSValueRef__MakeNumber_fn(::JSContextRef* ctx, double* number, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeNumber(*ctx, *number);
}

// private static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef str) :90
void JSValueRef__MakeString_fn(::JSContextRef* ctx, ::JSStringRef* str, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeString(*ctx, *str);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string str) :95
void JSValueRef__MakeString1_fn(::JSContextRef* ctx, uString* str, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeString1(*ctx, str);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) :12
void JSValueRef__op_Inequality_fn(::JSValueRef* v1, ::JSValueRef* v2, bool* __retval)
{
    *__retval = JSValueRef::op_Inequality(*v1, *v2);
}

// public void Protect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :15
void JSValueRef__Protect_fn(::JSValueRef* __this, ::JSContextRef* ctx)
{
    JSValueRef::Protect(*__this, *ctx);
}

// public bool ToBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :119
void JSValueRef__ToBoolean_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval)
{
    *__retval = JSValueRef::ToBoolean(*__this, *ctx);
}

// public double ToNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :124
void JSValueRef__ToNumber_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, double* __retval)
{
    *__retval = JSValueRef::ToNumber(*__this, *ctx, onException);
}

// public string ToString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :65
void JSValueRef__ToString1_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, uString** __retval)
{
    *__retval = JSValueRef::ToString1(*__this, *ctx, onException);
}

// private Fuse.Scripting.JavaScriptCore.JSStringRef ToStringCopy(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :60
void JSValueRef__ToStringCopy_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSValueRef* exception, ::JSStringRef* __retval)
{
    *__retval = JSValueRef::ToStringCopy(*__this, *ctx, exception);
}

// public void Unprotect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :21
void JSValueRef__Unprotect_fn(::JSValueRef* __this, ::JSContextRef* ctx)
{
    JSValueRef::Unprotect(*__this, *ctx);
}

// public void DeferedUnprotect() [instance] :26
void JSValueRef::DeferedUnprotect(::JSValueRef __this)
{
    uPtr(::g::Fuse::Reactive::JavaScript::Worker_)->Invoke1(uDelegate::New(::TYPES[4/*Uno.Action<Fuse.Scripting.Context>*/], (void*)JSValueRef__DeferedUnprotectInner_fn, uBox(JSValueRef_typeof(), __this)));
}

// private void DeferedUnprotectInner(Fuse.Scripting.Context ctx) [instance] :31
void JSValueRef::DeferedUnprotectInner(::JSValueRef __this, ::g::Fuse::Scripting::Context* ctx)
{
    ::JSContextRef ctxRef = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Context*>(ctx, ::TYPES[5/*Fuse.Scripting.JavaScriptCore.Context*/]))->_context;
    JSValueRef::Unprotect(__this, ctxRef);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :37
::JSObjectRef JSValueRef::GetJSObjectRef(::JSValueRef __this, ::JSContextRef ctx)
{
    ::g::Uno::Diagnostics::Debug::Assert(JSValueRef::IsObject(__this, ctx), ::STRINGS[6/*"(&this).IsO...*/], ::STRINGS[7/*"/usr/local/...*/], 39, uArray::Init<uObject*>(::TYPES[6/*object[]*/], 1, uBox(::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(), ctx)));
    return (::JSObjectRef)*&__this;
}

// public Fuse.Scripting.JavaScriptCore.JSType GetType(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :45
int32_t JSValueRef::GetType1(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSType type = ::JSValueGetType(ctx, *&__this);
    switch (type)
    {
    	case ::kJSTypeUndefined: return 0;
    	case ::kJSTypeNull: return 1;
    	case ::kJSTypeBoolean: return 2;
    	case ::kJSTypeNumber: return 3;
    	case ::kJSTypeString: return 4;
    	case ::kJSTypeObject: return 5;
    	default: return 6;
    }
}

// public bool IsInstanceOfConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef constructor, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :81
bool JSValueRef::IsInstanceOfConstructor(::JSValueRef __this, ::JSContextRef ctx, ::JSObjectRef constructor, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    bool result = ::JSValueIsInstanceOfConstructor(ctx, *&__this, constructor, &exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public bool IsObject(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :76
bool JSValueRef::IsObject(::JSValueRef __this, ::JSContextRef ctx)
{
    return ::JSValueIsObject(ctx, *&__this);
}

// public void Protect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :15
void JSValueRef::Protect(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSValueProtect(ctx, *&__this);
}

// public bool ToBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :119
bool JSValueRef::ToBoolean(::JSValueRef __this, ::JSContextRef ctx)
{
    return ::JSValueToBoolean(ctx, *&__this);
}

// public double ToNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :124
double JSValueRef::ToNumber(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    double result = ::JSValueToNumber(ctx, *&__this, &exception);
    if (exception != NULL)
    	onException->InvokeVoid(uCRef(exception));
    return result;
}

// public string ToString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :65
uString* JSValueRef::ToString1(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    ::JSStringRef strRef = JSValueRef::ToStringCopy(__this, ctx, &exception);

    {
        try
        {
            {
                if (JSValueRef::op_Inequality(exception, NULL))
                    uPtr(onException)->InvokeVoid(uCRef(exception));

                uString* __uno_retval = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::ToString(strRef, ::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/]);
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_11;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_11:;
    }
}

// private Fuse.Scripting.JavaScriptCore.JSStringRef ToStringCopy(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :60
::JSStringRef JSValueRef::ToStringCopy(::JSValueRef __this, ::JSContextRef ctx, ::JSValueRef* exception)
{
    return ::JSValueToStringCopy(ctx, *&__this, exception);
}

// public void Unprotect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :21
void JSValueRef::Unprotect(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSValueUnprotect(ctx, *&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, bool boolean) [static] :114
::JSValueRef JSValueRef::MakeBoolean(::JSContextRef ctx, bool boolean)
{
    return ::JSValueMakeBoolean(ctx, boolean);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNull(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [static] :104
::JSValueRef JSValueRef::MakeNull(::JSContextRef ctx)
{
    return ::JSValueMakeNull(ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, double number) [static] :109
::JSValueRef JSValueRef::MakeNumber(::JSContextRef ctx, double number)
{
    return ::JSValueMakeNumber(ctx, number);
}

// private static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef str) [static] :90
::JSValueRef JSValueRef::MakeString(::JSContextRef ctx, ::JSStringRef str)
{
    return ::JSValueMakeString(ctx, str);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string str) [static] :95
::JSValueRef JSValueRef::MakeString1(::JSContextRef ctx, uString* str)
{
    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"str"*/]));

    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(str);

    {
        try
        {
            {
                ::JSValueRef __uno_retval = JSValueRef::MakeString(ctx, strRef);
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_12;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_12:;
    }
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) [static] :12
bool JSValueRef::op_Inequality(::JSValueRef v1, ::JSValueRef v2)
{
    return v1 != v2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Object.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Object :8
// {
// ~Object() :20
static void Object__Finalize_fn(Object* __this)
{
    ::JSObjectRef ind2;

    if (!uPtr(__this->_context)->_disposed)
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::DeferedUnprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)));
}

static void Object_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Inconsistent context");
    ::STRINGS[2] = uString::Const("context");
    ::STRINGS[9] = uString::Const("name");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    ::TYPES[9] = ::g::Uno::String_typeof()->Array();
    ::TYPES[7] = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof();
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(::g::Fuse::Scripting::Object_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(Object, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(Object, _value), 0);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Object_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Context*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))Object__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))Object__get_Item_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))Object__get_Keys_fn;
    return type;
}

// internal Object(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) :13
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value)
{
    __this->ctor_1(context, *value);
}

// public override sealed object CallMethod(Fuse.Scripting.Context context, string name, object[] args) :85
void Object__CallMethod_fn(Object* __this, ::g::Fuse::Scripting::Context* context, uString* name, uArray* args, uObject** __retval)
{
    ::JSObjectRef ind7;

    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"Inconsisten...*/], ::STRINGS[2/*"context"*/]));

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"name"*/]));

    uObject* result = NULL;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                ::JSObjectRef f = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind7 = __this->_value, ind7), uPtr(__this->_context)->_context, name, uPtr(__this->_context)->_onError), uPtr(__this->_context)->_context);
                result = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsFunction(f, uPtr(__this->_context)->_context, __this->_value, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_13;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_13:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// public override sealed bool ContainsKey(string key) :116
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    ::JSObjectRef ind8;
    bool result = false;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::HasProperty1((ind8 = __this->_value, ind8), uPtr(__this->_context)->_context, key);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_14;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_14:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :125
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    ::JSObjectRef ind9;
    return *__retval = uIs(o, __this->__type) && uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind9 = __this->_value, ind9), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))->Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(uCast<Object*>(o, __this->__type))->_value)), void();
}

// public override sealed int GetHashCode() :130
void Object__GetHashCode_fn(Object* __this, int32_t* __retval)
{
    ::JSObjectRef ind10;
    return *__retval = uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind10 = __this->_value, ind10), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))->GetHashCode(), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Context context, Fuse.Scripting.Function type) :68
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    ::JSObjectRef ind6;

    if (context != __this->_context)
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"Inconsisten...*/], ::STRINGS[2/*"context"*/]));

    return *__retval = uIs(type, ::TYPES[8/*Fuse.Scripting.JavaScriptCore.Function*/]) && ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind6 = __this->_value, ind6)), uPtr(__this->_context)->_context, uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(type, ::TYPES[8/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value, uPtr(__this->_context)->_onError), void();
}

// public override sealed object get_Item(string key) :28
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    ::JSObjectRef ind3;
    uObject* result = NULL;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                result = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, key, uPtr(__this->_context)->_onError));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_15;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_15:;
    }

    uPtr(__this->_context)->ThrowPendingException();
    return *__retval = result, void();
}

// public override sealed void set_Item(string key, object value) :39
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    ::JSObjectRef ind4;
    ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM vm = ::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM__New1(__this->_context);

    {
        try
        {
            {
                ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetProperty1((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, key, uPtr(__this->_context)->Unwrap1(value), uPtr(__this->_context)->_onError);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_16;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::Context__EnterVM_typeof(), vm), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_16:;
    }

    uPtr(__this->_context)->ThrowPendingException();
}

// public override sealed string[] get_Keys() :53
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    ::JSObjectRef ind5;
    ::JSPropertyNameArrayRef arr = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CopyPropertyNames((ind5 = __this->_value, ind5), uPtr(__this->_context)->_context);

    {
        try
        {
            {
                int32_t count = ::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray::GetCount(arr);
                uArray* result = uArray::New(::TYPES[9/*string[]*/], count);

                for (int32_t i = 0; i < count; ++i)
                    uPtr(result)->Strong<uString*>(i) = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::ToString(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray::Item(arr, i), ::TYPES[7/*Fuse.Scripting.JavaScriptCore.JSStringRef*/]);

                uArray* __uno_retval = result;
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray_typeof(), arr), ::TYPES[0/*Uno.IDisposable*/]));
                return *__retval = __uno_retval, void();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray_typeof(), arr), ::TYPES[0/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_17;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray_typeof(), arr), ::TYPES[0/*Uno.IDisposable*/]));
        }
        __after_finally_17:;
    }
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) :13
void Object__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value, Object** __retval)
{
    *__retval = Object::New1(context, *value);
}

// internal Object(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) [instance] :13
void Object::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value)
{
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = value;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) [static] :13
Object* Object::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value)
{
    Object* obj11 = (Object*)uNew(Object_typeof());
    obj11->ctor_1(context, value);
    return obj11;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/JavaScriptCore.uno
// ----------------------------------------------------------------------------------------------------

// public delegate Fuse.Scripting.JavaScriptCore.JSValueRef JSClassRef.RawCallback(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :423
uDelegateType* JSClassRef__RawCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback", 2, 0);
    type->SetSignature(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->ByRef());
    return type;
}

}}}} // ::g::Fuse::Scripting::JavaScriptCore
