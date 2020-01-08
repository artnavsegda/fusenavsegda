// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/JavaScriptCore/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context__EnterVM;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal struct Context.EnterVM :86
// {
struct Context__EnterVM_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

Context__EnterVM_type* Context__EnterVM_typeof();
void Context__EnterVM__ctor_1_fn(Context__EnterVM* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context);
void Context__EnterVM__Dispose_fn(Context__EnterVM* __this);
void Context__EnterVM__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, Context__EnterVM* __retval);

struct Context__EnterVM
{
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Context*> _context;

    void ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context);
    void Dispose();
};

Context__EnterVM Context__EnterVM__New1(::g::Fuse::Scripting::JavaScriptCore::Context* context);
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
