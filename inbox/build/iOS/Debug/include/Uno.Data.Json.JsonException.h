// This file was generated based on /usr/local/share/uno/Packages/Uno.Data.Json/1.10.0-rc1/Source/JsonException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonException;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// public sealed class JsonException :3
// {
::g::Uno::Exception_type* JsonException_typeof();
void JsonException__ctor_3_fn(JsonException* __this, uString* message);
void JsonException__New4_fn(uString* message, JsonException** __retval);

struct JsonException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static JsonException* New4(uString* message);
};
// }

}}}} // ::g::Uno::Data::Json
