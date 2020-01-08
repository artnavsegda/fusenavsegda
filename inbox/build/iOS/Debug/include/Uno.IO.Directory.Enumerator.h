// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/Directory.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.String.h>
namespace g{namespace Uno{namespace IO{struct Directory__Enumerator;}}}

namespace g{
namespace Uno{
namespace IO{

// private sealed class Directory.Enumerator :425
// {
struct Directory__Enumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Directory__Enumerator_type* Directory__Enumerator_typeof();
void Directory__Enumerator__ctor__fn(Directory__Enumerator* __this, uString* dirName, int32_t* mode);
void Directory__Enumerator__get_Current_fn(Directory__Enumerator* __this, uString** __retval);
void Directory__Enumerator__Dispose_fn(Directory__Enumerator* __this);
void Directory__Enumerator__MoveNext_fn(Directory__Enumerator* __this, bool* __retval);
void Directory__Enumerator__New1_fn(uString* dirName, int32_t* mode, Directory__Enumerator** __retval);
void Directory__Enumerator__Reset_fn(Directory__Enumerator* __this);

struct Directory__Enumerator : uObject
{
    int32_t _mode;
    uStrong<uString*> _prefix;
    uStrong<uString*> _current;
    void* _handle;

    void ctor_(uString* dirName, int32_t mode);
    uString* Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static Directory__Enumerator* New1(uString* dirName, int32_t mode);
};
// }

}}} // ::g::Uno::IO
