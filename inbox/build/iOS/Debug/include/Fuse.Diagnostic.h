// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Diagnostics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public sealed class Diagnostic :30
// {
uType* Diagnostic_typeof();
void Diagnostic__ctor__fn(Diagnostic* __this, int32_t* type, uString* message, uObject* sourceObject, uString* filePath, int32_t* lineNumber, uString* memberName, ::g::Uno::Exception* exception);
void Diagnostic__Format_fn(Diagnostic* __this, bool* withType, uString** __retval);
void Diagnostic__New1_fn(int32_t* type, uString* message, uObject* sourceObject, uString* filePath, int32_t* lineNumber, uString* memberName, ::g::Uno::Exception* exception, Diagnostic** __retval);
void Diagnostic__ToString_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__get_UnoType_fn(Diagnostic* __this, int32_t* __retval);

struct Diagnostic : uObject
{
    int32_t Type;
    uStrong<uString*> Message;
    uStrong<uObject*> SourceObject;
    uStrong<uString*> FilePath;
    int32_t LineNumber;
    uStrong<uString*> MemberName;
    uStrong< ::g::Uno::Exception*> Exception;
    uStrong<uObject*> NearObject;
    uStrong<uObject*> NearLineNumber;
    uStrong<uObject*> NearFileName;
    bool IsTemporalWarning;

    void ctor_(int32_t type, uString* message, uObject* sourceObject, uString* filePath, int32_t lineNumber, uString* memberName, ::g::Uno::Exception* exception);
    uString* Format(bool withType);
    int32_t UnoType();
    static Diagnostic* New1(int32_t type, uString* message, uObject* sourceObject, uString* filePath, int32_t lineNumber, uString* memberName, ::g::Uno::Exception* exception);
};
// }

}} // ::g::Fuse
