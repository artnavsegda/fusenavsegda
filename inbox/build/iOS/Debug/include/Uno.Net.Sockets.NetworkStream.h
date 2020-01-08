// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/1.10.0-rc1/NetworkStream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct NetworkStream;}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class NetworkStream :10
// {
::g::Uno::IO::Stream_type* NetworkStream_typeof();
void NetworkStream__Flush_fn(NetworkStream* __this);
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval);
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval);
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount);

struct NetworkStream : ::g::Uno::IO::Stream
{
    uStrong< ::g::Uno::Net::Sockets::Socket*> _socket;
};
// }

}}}} // ::g::Uno::Net::Sockets
