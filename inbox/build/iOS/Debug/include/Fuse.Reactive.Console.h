// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.10.0-rc1/FuseJS/DebugLog.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct Console;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class Console :24
// {
uClassType* Console_typeof();
void Console__Dir_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int32_t* maxDepth, int32_t* indent);
void Console__Error_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Console__Format_fn(::g::Fuse::Scripting::Context* context, uArray* args, uString** __retval);
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int32_t* indent);
void Console__Info_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Console__Init_fn(::g::Fuse::Scripting::Context* c);
void Console__Log_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Console__LogInternal_fn(::g::Fuse::Scripting::Context* context, uArray* args, int32_t* debugMessageType, uObject** __retval);
void Console__ToString_fn(::g::Fuse::Scripting::Context* context, uObject* obj, uString** __retval);
void Console__Warn_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct Console : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Function*> _toStringFunction_;
    static uSStrong< ::g::Fuse::Scripting::Function*>& _toStringFunction() { return _toStringFunction_; }

    static uObject* Dir(::g::Fuse::Scripting::Context* context, uArray* args);
    static void Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int32_t maxDepth, int32_t indent);
    static uObject* Error(::g::Fuse::Scripting::Context* context, uArray* args);
    static uString* Format(::g::Fuse::Scripting::Context* context, uArray* args);
    static void Indent(::g::Uno::Text::StringBuilder* builder, int32_t indent);
    static uObject* Info(::g::Fuse::Scripting::Context* context, uArray* args);
    static void Init(::g::Fuse::Scripting::Context* c);
    static uObject* Log(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* LogInternal(::g::Fuse::Scripting::Context* context, uArray* args, int32_t debugMessageType);
    static uString* ToString(::g::Fuse::Scripting::Context* context, uObject* obj);
    static uObject* Warn(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
