// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.NavDelegate.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <iOS/NoZoomDelegate.h>
#include <iOS/WVNavDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <WebKit/WebKit.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.10.0-rc1/iOS/NavDelegate.uno
// ----------------------------------------------------------------------------------

// public static extern class NavDelegate :12
// {
static void NavDelegate_build(uType* type)
{
}

uClassType* NavDelegate_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.NavDelegate", options);
    type->fp_build_ = NavDelegate_build;
    return type;
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged, Uno.Action<string> OnCustomURI, string[] schemes, Uno.Func<bool> hasURISchemeHandler) :15
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, uDelegate* hasURISchemeHandler, ::g::ObjC::Object** __retval)
{
    *__retval = NavDelegate::Create(beginLoading, pageLoaded, urlChanged, OnCustomURI, schemes, hasURISchemeHandler);
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged, Uno.Action<string> OnCustomURI, string[] schemes, Uno.Func<bool> hasURISchemeHandler) [static] :15
::g::ObjC::Object* NavDelegate::Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uDelegate* OnCustomURI, uArray* schemes, uDelegate* hasURISchemeHandler)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::uObjC::Function<void> beginLoading, ::uObjC::Function<void> pageLoaded, ::uObjC::Function<void> urlChanged, ::uObjC::Function<void, ::NSString*> OnCustomURI, id<UnoArray> schemes, ::uObjC::Function<bool> hasURISchemeHandler) -> ::id
        {
            return [[WVNavDelegate alloc] initWithEventHandlers:beginLoading loaded:pageLoaded change:urlChanged uriHandler:OnCustomURI schemes:[schemes copyArray] hasURISchemeHandler:hasURISchemeHandler];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: beginLoading]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: pageLoaded]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: urlChanged]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: OnCustomURI]), [::StrongUnoArray strongUnoArrayWithUnoArray: schemes getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }], [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<bool>
        {
            return __delegateRef == nil ? (::uObjC::Function<bool>)nil : (^ bool ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return uUnbox<bool>(__unoDelegate->Invoke());
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: hasURISchemeHandler])));
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.10.0-rc1/iOS/WebView.uno
// ------------------------------------------------------------------------------

// internal static extern class WKWebViewHelpers :16
// {
static void WKWebViewHelpers_build(uType* type)
{
}

uClassType* WKWebViewHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.WKWebViewHelpers", options);
    type->fp_build_ = WKWebViewHelpers_build;
    return type;
}

// public static ObjC.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) :52
void WKWebViewHelpers__CreateWebView_fn(bool* zoomEnabled, bool* scrollEnabled, ::g::ObjC::Object** __retval)
{
    *__retval = WKWebViewHelpers::CreateWebView(*zoomEnabled, *scrollEnabled);
}

// public static void EvalOnWebView(ObjC.Object webview, string js) :28
void WKWebViewHelpers__EvalOnWebView_fn(::g::ObjC::Object* webview, uString* js)
{
    WKWebViewHelpers::EvalOnWebView(webview, js);
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) :19
void WKWebViewHelpers__EvalOnWebViewWithHandler_fn(::g::ObjC::Object* webview, uString* js, uDelegate* handler)
{
    WKWebViewHelpers::EvalOnWebViewWithHandler(webview, js, handler);
}

// public static void FreeMemory() :141
void WKWebViewHelpers__FreeMemory_fn()
{
    WKWebViewHelpers::FreeMemory();
}

// public static bool GetCanGoBack(ObjC.Object handle) :99
void WKWebViewHelpers__GetCanGoBack_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoBack(handle);
}

// public static bool GetCanGoForward(ObjC.Object handle) :113
void WKWebViewHelpers__GetCanGoForward_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoForward(handle);
}

// public static double GetEstimatedProgress(ObjC.Object handle) :85
void WKWebViewHelpers__GetEstimatedProgress_fn(::g::ObjC::Object* handle, double* __retval)
{
    *__retval = WKWebViewHelpers::GetEstimatedProgress(handle);
}

// public static bool GetIsLoading(ObjC.Object handle) :69
void WKWebViewHelpers__GetIsLoading_fn(::g::ObjC::Object* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetIsLoading(handle);
}

// public static string GetURL(ObjC.Object handle) :62
void WKWebViewHelpers__GetURL_fn(::g::ObjC::Object* handle, uString** __retval)
{
    *__retval = WKWebViewHelpers::GetURL(handle);
}

// public static void GoBack(ObjC.Object handle) :106
void WKWebViewHelpers__GoBack_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::GoBack(handle);
}

// public static void GoForward(ObjC.Object handle) :120
void WKWebViewHelpers__GoForward_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::GoForward(handle);
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) :35
void WKWebViewHelpers__LoadHTML_fn(::g::ObjC::Object* webview, uString* html, uString* baseURL)
{
    WKWebViewHelpers::LoadHTML(webview, html, baseURL);
}

// public static void LoadURL(ObjC.Object handle, string url) :76
void WKWebViewHelpers__LoadURL_fn(::g::ObjC::Object* handle, uString* url)
{
    WKWebViewHelpers::LoadURL(handle, url);
}

// public static void Reload(ObjC.Object handle) :127
void WKWebViewHelpers__Reload_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::Reload(handle);
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) :149
void WKWebViewHelpers__SetNavigationDelegate_fn(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle)
{
    WKWebViewHelpers::SetNavigationDelegate(webViewHandle, delegateHandle);
}

// public static void StopLoading(ObjC.Object handle) :134
void WKWebViewHelpers__StopLoading_fn(::g::ObjC::Object* handle)
{
    WKWebViewHelpers::StopLoading(handle);
}

// public static ObjC.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) [static] :52
::g::ObjC::Object* WKWebViewHelpers::CreateWebView(bool zoomEnabled, bool scrollEnabled)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (bool zoomEnabled, bool scrollEnabled) -> ::id
        {
            WKWebView* wv = [[WKWebView alloc] init];
            wv.scrollView.delegate = zoomEnabled ? NULL : [[NoZoomDelegate alloc] init];
            wv.scrollView.scrollEnabled = scrollEnabled;
            
            return wv;
        } (zoomEnabled, scrollEnabled));
        
    }
    
}

// public static void EvalOnWebView(ObjC.Object webview, string js) [static] :28
void WKWebViewHelpers::EvalOnWebView(::g::ObjC::Object* webview, uString* js)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js) -> void
        {
            WKWebView* wv = webview;
            [wv evaluateJavaScript:js completionHandler:nil];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(js));
        
    }
    
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) [static] :19
void WKWebViewHelpers::EvalOnWebViewWithHandler(::g::ObjC::Object* webview, uString* js, uDelegate* handler)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js, ::uObjC::Function<void, ::NSString*> handler) -> void
        {
            WKWebView* wv = webview;
            [wv evaluateJavaScript:js completionHandler:^(id result, NSError* error) {
            	handler(result);
            }];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(js), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]));
        
    }
    
}

// public static void FreeMemory() [static] :141
void WKWebViewHelpers::FreeMemory()
{
    @autoreleasepool
    {
        id cache = [NSURLCache sharedURLCache];
        if(cache!=nil)
        	[cache removeAllCachedResponses];
    }
    
}

// public static bool GetCanGoBack(ObjC.Object handle) [static] :99
bool WKWebViewHelpers::GetCanGoBack(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.canGoBack;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static bool GetCanGoForward(ObjC.Object handle) [static] :113
bool WKWebViewHelpers::GetCanGoForward(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.canGoForward;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static double GetEstimatedProgress(ObjC.Object handle) [static] :85
double WKWebViewHelpers::GetEstimatedProgress(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> double
        {
            WKWebView* wv = handle;
            return wv.estimatedProgress;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static bool GetIsLoading(ObjC.Object handle) [static] :69
bool WKWebViewHelpers::GetIsLoading(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            return wv.loading;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static string GetURL(ObjC.Object handle) [static] :62
uString* WKWebViewHelpers::GetURL(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            WKWebView* wv = handle;
            return wv.URL.absoluteString;
        } (::g::ObjC::Object::GetHandle(handle)));
        
    }
    
}

// public static void GoBack(ObjC.Object handle) [static] :106
void WKWebViewHelpers::GoBack(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv goBack];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void GoForward(ObjC.Object handle) [static] :120
void WKWebViewHelpers::GoForward(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv goForward];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) [static] :35
void WKWebViewHelpers::LoadHTML(::g::ObjC::Object* webview, uString* html, uString* baseURL)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* html, ::NSString* baseURL) -> void
        {
            WKWebView* wv = webview;
            [wv loadHTMLString:html baseURL:[NSURL URLWithString:baseURL]];
        } (::g::ObjC::Object::GetHandle(webview), ::uObjC::NativeString(html), ::uObjC::NativeString(baseURL));
        
    }
    
}

// public static void LoadURL(ObjC.Object handle, string url) [static] :76
void WKWebViewHelpers::LoadURL(::g::ObjC::Object* handle, uString* url)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* url) -> void
        {
            WKWebView* wv = handle;
            id nsurl = [NSURL URLWithString:url];
            id request = [[NSURLRequest alloc] initWithURL:nsurl];
            [wv loadRequest:request];
        } (::g::ObjC::Object::GetHandle(handle), ::uObjC::NativeString(url));
        
    }
    
}

// public static void Reload(ObjC.Object handle) [static] :127
void WKWebViewHelpers::Reload(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv reload];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) [static] :149
void WKWebViewHelpers::SetNavigationDelegate(::g::ObjC::Object* webViewHandle, ::g::ObjC::Object* delegateHandle)
{
    @autoreleasepool
    {
        [] (::id webViewHandle, ::id delegateHandle) -> void
        {
            [webViewHandle setNavigationDelegate:delegateHandle];
        } (::g::ObjC::Object::GetHandle(webViewHandle), ::g::ObjC::Object::GetHandle(delegateHandle));
        
    }
    
}

// public static void StopLoading(ObjC.Object handle) [static] :134
void WKWebViewHelpers::StopLoading(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            [wv stopLoading];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Controls
