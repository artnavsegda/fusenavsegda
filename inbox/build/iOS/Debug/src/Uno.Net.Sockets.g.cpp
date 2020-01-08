// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <netdb.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.Socket.SocketHandle.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketFlags.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.10.0-rc1/NetworkStream.uno
// --------------------------------------------------------------------------

// public sealed class NetworkStream :10
// {
static void NetworkStream_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sent != byteCount");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(NetworkStream, _socket), 0);
}

::g::Uno::IO::Stream_type* NetworkStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NetworkStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.Net.Sockets.NetworkStream", options);
    type->fp_build_ = NetworkStream_build;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))NetworkStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Length_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*))NetworkStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*))NetworkStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public override sealed void Flush() :67
void NetworkStream__Flush_fn(NetworkStream* __this)
{
}

// public override sealed long get_Length() :23
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval)
{
    return *__retval = 0LL, void();
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :49
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval)
{
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    return *__retval = uPtr(__this->_socket)->Receive1(dst, byteOffset_, byteCount_, 0), void();
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :54
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount)
{
    int32_t byteOffset_ = *byteOffset;
    int32_t byteCount_ = *byteCount;
    int32_t sent = uPtr(__this->_socket)->Send1(src, byteOffset_, byteCount_, 0);

    if (sent != byteCount_)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"sent != byt...*/]));
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.10.0-rc1/Socket.uno
// -------------------------------------------------------------------

// public sealed class Socket :263
// {
// ~Socket() :560
static void Socket__Finalize_fn(Socket* __this)
{
    __this->Dispose1(false);
}

static void Socket_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Socket_type, interface0));
    type->SetFields(0,
        Socket__SocketHandle_typeof(), offsetof(Socket, _handle), 0);
}

Socket_type* Socket_typeof()
{
    static uSStrong<Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(Socket_type);
    type = (Socket_type*)uClassType::New("Uno.Net.Sockets.Socket", options);
    type->fp_build_ = Socket_build;
    type->fp_Finalize = (void(*)(uObject*))Socket__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Socket__Dispose_fn;
    return type;
}

// public void Dispose() :555
void Socket__Dispose_fn(Socket* __this)
{
    __this->Dispose();
}

// protected void Dispose(bool disposing) :536
void Socket__Dispose1_fn(Socket* __this, bool* disposing)
{
    __this->Dispose1(*disposing);
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :432
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval)
{
    *__retval = __this->Receive1(buffer, *offset, *length, *flags);
}

// public int Send(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :414
void Socket__Send1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval)
{
    *__retval = __this->Send1(buffer, *offset, *length, *flags);
}

// public void Dispose() [instance] :555
void Socket::Dispose()
{
    Dispose1(true);
}

// protected void Dispose(bool disposing) [instance] :536
void Socket::Dispose1(bool disposing)
{
    bool disposing_ = disposing;

    if (!disposing_)
        return;

    int32_t result;
    result = close(_handle);

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :432
int32_t Socket::Receive1(uArray* buffer, int32_t offset, int32_t length, int32_t flags)
{
    if ((offset + length) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("Offset and length out of range")));

    int32_t ret = (int32_t)recv(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// public int Send(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :414
int32_t Socket::Send1(uArray* buffer, int32_t offset, int32_t length, int32_t flags)
{
    int32_t ret = (int32_t)send(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.10.0-rc1/Socket.uno
// -------------------------------------------------------------------

// public sealed class SocketException :567
// {
static void SocketException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* SocketException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(SocketException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Sockets.SocketException", options);
    type->fp_build_ = SocketException_build;
    return type;
}

// internal SocketException(string message) :569
void SocketException__ctor_3_fn(SocketException* __this, uString* message)
{
    __this->ctor_3(message);
}

// internal SocketException New(string message) :569
void SocketException__New4_fn(uString* message, SocketException** __retval)
{
    *__retval = SocketException::New4(message);
}

// internal SocketException(string message) [instance] :569
void SocketException::ctor_3(uString* message)
{
    ctor_1(message);
}

// internal SocketException New(string message) [static] :569
SocketException* SocketException::New4(uString* message)
{
    SocketException* obj1 = (SocketException*)uNew(SocketException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.10.0-rc1/Socket.uno
// -------------------------------------------------------------------

// public enum SocketFlags :45
uEnumType* SocketFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketFlags", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "None", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.10.0-rc1/Socket.uno
// -------------------------------------------------------------------

// internal extern struct Socket.SocketHandle :270
// {
static void Socket__SocketHandle_build(uType* type)
{
}

uStructType* Socket__SocketHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(int);
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Sockets.Socket.SocketHandle", options);
    type->fp_build_ = Socket__SocketHandle_build;
    return type;
}

int Socket__SocketHandle::Invalid_;
// }

}}}} // ::g::Uno::Net::Sockets
