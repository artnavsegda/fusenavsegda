// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Diagnostics/Debug.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug :27
// {
uClassType* Debug_typeof();
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int32_t* line, uArray* operands);
void Debug__EmitLog_fn(uString* message, int32_t* type);
void Debug__Log2_fn(uString* message, int32_t* type);
void Debug__Log3_fn(uString* message, int32_t* type, uString* filename, int32_t* line);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _assertionHandler_;
    static uSStrong<uDelegate*>& _assertionHandler() { return Debug_typeof()->Init(), _assertionHandler_; }
    static uSStrong<uDelegate*> _logHandler_;
    static uSStrong<uDelegate*>& _logHandler() { return Debug_typeof()->Init(), _logHandler_; }
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return Debug_typeof()->Init(), _indentStr_; }

    static void Assert(bool value, uString* expression, uString* filename, int32_t line, uArray* operands);
    static void EmitLog(uString* message, int32_t type);
    static void Log2(uString* message, int32_t type);
    static void Log3(uString* message, int32_t type, uString* filename, int32_t line);
};
// }

}}} // ::g::Uno::Diagnostics
