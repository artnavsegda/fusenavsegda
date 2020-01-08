// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/Directory.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
namespace g{namespace Uno{namespace IO{struct Directory__Enumerable;}}}

namespace g{
namespace Uno{
namespace IO{

// private sealed class Directory.Enumerable :407
// {
struct Directory__Enumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

Directory__Enumerable_type* Directory__Enumerable_typeof();
void Directory__Enumerable__ctor__fn(Directory__Enumerable* __this, uString* dirName, int32_t* mode);
void Directory__Enumerable__GetEnumerator_fn(Directory__Enumerable* __this, uObject** __retval);
void Directory__Enumerable__New1_fn(uString* dirName, int32_t* mode, Directory__Enumerable** __retval);

struct Directory__Enumerable : uObject
{
    uStrong<uString*> _dirName;
    int32_t _mode;

    void ctor_(uString* dirName, int32_t mode);
    uObject* GetEnumerator();
    static Directory__Enumerable* New1(uString* dirName, int32_t mode);
};
// }

}}} // ::g::Uno::IO
