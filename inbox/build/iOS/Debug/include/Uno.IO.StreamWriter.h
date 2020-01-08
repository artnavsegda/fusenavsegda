// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/IO/StreamWriter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextWriter.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}
namespace g{namespace Uno{namespace IO{struct StreamWriter;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StreamWriter :8
// {
::g::Uno::IO::TextWriter_type* StreamWriter_typeof();
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream);
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing);
void StreamWriter__Flush_fn(StreamWriter* __this);
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval);
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int32_t* index, int32_t* count);
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value);

struct StreamWriter : ::g::Uno::IO::TextWriter
{
    uStrong< ::g::Uno::IO::Stream*> _stream;
    uStrong<uArray*> _buffer;
    int32_t _index;

    void ctor_1(::g::Uno::IO::Stream* stream);
    void Flush();
    void Write13(uArray* array, int32_t index, int32_t count);
    void Write9(uString* value);
    static StreamWriter* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
