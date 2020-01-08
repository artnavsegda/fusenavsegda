// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <chrono>
#include <mach/mach.h>
#include <mach/mach_time.h>
#include <sys/time.h>
#include <time.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.AssertionHandler.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{
namespace Uno{
namespace Diagnostics{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------

// public delegate void AssertionHandler(bool value, string expression, string filename, int line, object[] operands) :21
uDelegateType* AssertionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.AssertionHandler", 5, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Int_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Diagnostics/Clock.uno
// ---------------------------------------------------------------------------------

// public static class Clock :9
// {
static void Clock_build(uType* type)
{
}

uClassType* Clock_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Clock", options);
    type->fp_build_ = Clock_build;
    return type;
}

// public static double GetSeconds() :17
void Clock__GetSeconds_fn(double* __retval)
{
    *__retval = Clock::GetSeconds();
}

// public static long GetTicks() :56
void Clock__GetTicks_fn(int64_t* __retval)
{
    *__retval = Clock::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) :69
void Clock__GetTimezoneOffset_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* __retval)
{
    *__retval = Clock::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static] :17
double Clock::GetSeconds()
{
    //https://developer.apple.com/library/mac/qa/qa1398/_index.html
    static double multiplier = 0;
    if (multiplier == 0)
    {
        mach_timebase_info_data_t timebase;
        mach_timebase_info(&timebase);
        multiplier = (double)timebase.numer / (double)timebase.denom / 1e9;
    }
    
    return (double)mach_absolute_time() * multiplier;
}

// public static long GetTicks() [static] :56
int64_t Clock::GetTicks()
{
    auto start = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::duration<int64_t, std::ratio<1, 10000000>>>(start.time_since_epoch()).count();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static] :69
int32_t Clock::GetTimezoneOffset(int32_t year, int32_t month, int32_t day)
{
    struct tm stm;
    stm.tm_year = year - 1900;
    stm.tm_mon = month - 1;
    stm.tm_mday = day;
    stm.tm_hour = 0;
    stm.tm_min = 0;
    stm.tm_sec = 0;
    stm.tm_wday = 0;
    stm.tm_yday = 0;
    stm.tm_isdst = 0;
    time_t current_time = mktime(&stm);
    #ifdef WIN32
    gmtime_s(&stm, &current_time);
    time_t utc = mktime(&stm);
    
    localtime_s(&stm, &current_time);
    time_t local = mktime(&stm);
    #else
    struct tm *info;
    info = gmtime(&current_time);
    time_t utc = mktime(info);
    
    info = localtime(&current_time);
    time_t local = mktime(info);
    #endif
    return (int)(local - utc) / 60 + stm.tm_isdst * 60;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------

// public static class Debug :27
// {
// static generated Debug() :27
static void Debug__cctor__fn(uType* __type)
{
    Debug::_indentStr_ = ::STRINGS[0/*""*/];
}

static void Debug_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("Assertion Failed: '");
    ::STRINGS[2] = uString::Const("' in ");
    ::STRINGS[3] = uString::Const("(");
    ::STRINGS[4] = uString::Const(")");
    type->SetFields(0,
        ::g::Uno::Diagnostics::AssertionHandler_typeof(), (uintptr_t)&Debug::_assertionHandler_, uFieldFlagsStatic,
        ::g::Uno::Diagnostics::LogHandler_typeof(), (uintptr_t)&Debug::_logHandler_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Debug::_indentStr_, uFieldFlagsStatic);
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Debug", options);
    type->fp_build_ = Debug_build;
    type->fp_cctor_ = Debug__cctor__fn;
    return type;
}

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) :39
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int32_t* line, uArray* operands)
{
    Debug::Assert(*value, expression, filename, *line, operands);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) :89
void Debug__EmitLog_fn(uString* message, int32_t* type)
{
    Debug::EmitLog(message, *type);
}

// public static void Log(string message, [Uno.Diagnostics.DebugMessageType type]) :68
void Debug__Log2_fn(uString* message, int32_t* type)
{
    Debug::Log2(message, *type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) :58
void Debug__Log3_fn(uString* message, int32_t* type, uString* filename, int32_t* line)
{
    Debug::Log3(message, *type, filename, *line);
}

uSStrong<uDelegate*> Debug::_assertionHandler_;
uSStrong<uDelegate*> Debug::_logHandler_;
uSStrong<uString*> Debug::_indentStr_;

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) [static] :39
void Debug::Assert(bool value, uString* expression, uString* filename, int32_t line, uArray* operands)
{
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_assertionHandler_, NULL))
        uPtr(Debug::_assertionHandler_)->Invoke(5, uCRef(value), expression, filename, uCRef<int32_t>(line), operands);

    if (!value)
        Debug::EmitLog(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Assertion F...*/], expression), ::STRINGS[2/*"' in "*/]), filename), ::STRINGS[3/*"("*/]), uBox<int32_t>(::g::Uno::Int_typeof(), line)), ::STRINGS[4/*")"*/]), 3);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) [static] :89
void Debug::EmitLog(uString* message, int32_t type)
{
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_logHandler_, NULL))
        uPtr(Debug::_logHandler_)->Invoke(2, (uString*)::g::Uno::String::op_Addition2(Debug::_indentStr_, message), uCRef<int32_t>(type));

    uCString cstr(message);
    uLog(type, "%s", cstr.Ptr);
}

// public static void Log(string message, [Uno.Diagnostics.DebugMessageType type]) [static] :68
void Debug::Log2(uString* message, int32_t type)
{
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type, string filename, int line) [static] :58
void Debug::Log3(uString* message, int32_t type, uString* filename, int32_t line)
{
    Debug_typeof()->Init();
    Debug::EmitLog(message, type);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------

// public enum DebugMessageType :8
uEnumType* DebugMessageType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Diagnostics.DebugMessageType", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Debug", 0LL,
        "Information", 1LL,
        "Warning", 2LL,
        "Error", 3LL,
        "Fatal", 4LL,
        "Undefined", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------

// public delegate void LogHandler(string message, Uno.Diagnostics.DebugMessageType type) :24
uDelegateType* LogHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Diagnostics.LogHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Diagnostics::DebugMessageType_typeof());
    return type;
}

}}} // ::g::Uno::Diagnostics
