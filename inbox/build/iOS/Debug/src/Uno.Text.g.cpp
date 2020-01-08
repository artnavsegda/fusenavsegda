// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Environment.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Text.UTF8Decoder.h>
#include <Uno.Text.UTF8Encoding.h>
static uString* STRINGS[6];
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Text{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Ascii.uno
// --------------------------------------------------------------------------

// public static class Ascii :5
// {
static void Ascii_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* Ascii_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Ascii", options);
    type->fp_build_ = Ascii_build;
    return type;
}

// public static byte[] GetBytes(string value) :7
void Ascii__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Ascii::GetBytes(value);
}

// public static string GetString(byte[] value) :24
void Ascii__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Ascii::GetString(value);
}

// public static byte[] GetBytes(string value) [static] :7
uArray* Ascii::GetBytes(uString* value)
{
    if (::g::Uno::String::IsNullOrEmpty(value))
        return NULL;

    uArray* res = uArray::New(::TYPES[0/*byte[]*/], uPtr(value)->Length());

    for (int32_t i = 0; i < value->Length(); i++)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)(((int32_t)uPtr(value)->Item(i) < 128) ? uPtr(value)->Item(i) : '?');

    return res;
}

// public static string GetString(byte[] value) [static] :24
uString* Ascii::GetString(uArray* value)
{
    if ((value == NULL) || (uPtr(value)->Length() == 0))
        return NULL;

    uString* res = ::g::Uno::String::Empty();

    for (int32_t i = 0; i < uPtr(value)->Length(); i++)
        res = ::g::Uno::String::op_Addition1(res, uBox<char16_t>(::g::Uno::Char_typeof(), (uPtr(value)->Item<uint8_t>(i) < 128) ? (char16_t)uPtr(value)->Item<uint8_t>(i) : '?'));

    return res;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Base64.uno
// ---------------------------------------------------------------------------

// public static class Base64 :8
// {
static void Base64_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Int_typeof()->Array();
}

uClassType* Base64_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Base64", options);
    type->fp_build_ = Base64_build;
    return type;
}

// public static byte[] GetBytes(string value) :12
void Base64__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Base64::GetBytes(value);
}

// public static string GetString(byte[] value) :66
void Base64__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Base64::GetString(value);
}

// public static byte[] GetBytes(string value) [static] :12
uArray* Base64::GetBytes(uString* value)
{
    int32_t addidionalSymbols = 0;
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<byte>*/]);
    uArray* charArray3 = uArray::New(::TYPES[2/*int[]*/], 3);
    uArray* charArray4 = uArray::New(::TYPES[2/*int[]*/], 4);

    for (int32_t position = 0; position < uPtr(value)->Length(); position++)
    {
        if ((uPtr(value)->Item(position) == '=') || (::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[0/*"ABCDEFGHIJK...*/]), uPtr(value)->Item(position)) < 0))
            break;

        uPtr(charArray4)->Item<int32_t>(addidionalSymbols) = (int32_t)uPtr(value)->Item(position);
        addidionalSymbols++;

        if (addidionalSymbols == 4)
        {
            for (int32_t j = 0; j < 4; j++)
                uPtr(charArray4)->Item<int32_t>(j) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[0/*"ABCDEFGHIJK...*/]), (char16_t)uPtr(charArray4)->Item<int32_t>(j));

            uPtr(charArray3)->Item<int32_t>(0) = (uPtr(charArray4)->Item<int32_t>(0) << 2) + ((uPtr(charArray4)->Item<int32_t>(1) & 48) >> 4);
            charArray3->Item<int32_t>(1) = ((charArray4->Item<int32_t>(1) & 15) << 4) + ((charArray4->Item<int32_t>(2) & 60) >> 2);
            charArray3->Item<int32_t>(2) = ((charArray4->Item<int32_t>(2) & 3) << 6) + charArray4->Item<int32_t>(3);

            for (int32_t j1 = 0; j1 < 3; j1++)
                ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int32_t>(j1)));

            addidionalSymbols = 0;
        }
    }

    if (addidionalSymbols > 0)
    {
        for (int32_t j2 = addidionalSymbols; j2 < 4; j2++)
            uPtr(charArray4)->Item<int32_t>(j2) = 0;

        for (int32_t j3 = 0; j3 < 4; j3++)
            uPtr(charArray4)->Item<int32_t>(j3) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[0/*"ABCDEFGHIJK...*/]), (char16_t)uPtr(charArray4)->Item<int32_t>(j3));

        uPtr(charArray3)->Item<int32_t>(0) = (uPtr(charArray4)->Item<int32_t>(0) << 2) + ((uPtr(charArray4)->Item<int32_t>(1) & 48) >> 4);
        charArray3->Item<int32_t>(1) = ((charArray4->Item<int32_t>(1) & 15) << 4) + ((charArray4->Item<int32_t>(2) & 60) >> 2);
        charArray3->Item<int32_t>(2) = ((charArray4->Item<int32_t>(2) & 3) << 6) + charArray4->Item<int32_t>(3);

        for (int32_t j4 = 0; j4 < (addidionalSymbols - 1); j4++)
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int32_t>(j4)));
    }

    return (uArray*)ret->ToArray();
}

// public static string GetString(byte[] value) [static] :66
uString* Base64::GetString(uArray* value)
{
    static const char* base64_chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/";
    
    unsigned char* bytes_to_encode =(unsigned char*)value->Ptr();
    unsigned int in_len = value->Length();
    unsigned char* encoded_buffer = new unsigned char[in_len*2 + 3];
    
    int i = 0;
    int j = 0;
    unsigned char char_array_3[3] = { 0, 0, 0 };
    unsigned char char_array_4[4] = { 0, 0, 0, 0 };
    
    unsigned int out_len = 0;
    while (in_len--)
    {
        char_array_3[i++] = *(bytes_to_encode++);
        if (i == 3)
        {
            char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
            char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
            char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
            char_array_4[3] = char_array_3[2] & 0x3f;
    
            for (i = 0; i < 4 ; i++)
            {
                encoded_buffer[out_len++] = base64_chars[char_array_4[i]];
            }
            i = 0;
        }
    }
    
    if (i)
    {
        for (j = i; j < 3; j++)
        {
            char_array_3[j] = '\0';
        }
    
        char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
        char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
        char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
        char_array_4[3] = char_array_3[2] & 0x3f;
    
        for (j = 0; j < (i + 1); j++)
        {
            encoded_buffer[out_len++] = base64_chars[char_array_4[j]];
        }
    
        while (i++ < 3)
        {
            encoded_buffer[out_len++] = '=';
        }
    }
    
    uString* res = uString::Ansi((char const *)encoded_buffer, out_len);
    delete [] encoded_buffer;
    return res;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------

// public abstract class Decoder :7
// {
static void Decoder_build(uType* type)
{
}

Decoder_type* Decoder_typeof()
{
    static uSStrong<Decoder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Decoder);
    options.TypeSize = sizeof(Decoder_type);
    type = (Decoder_type*)uClassType::New("Uno.Text.Decoder", options);
    type->fp_build_ = Decoder_build;
    return type;
}

// protected generated Decoder() :7
void Decoder__ctor__fn(Decoder* __this)
{
    __this->ctor_();
}

// protected generated Decoder() [instance] :7
void Decoder::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------

// public abstract class Encoding :258
// {
static void Encoding_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Text::UTF8Encoding_typeof(), (uintptr_t)&Encoding::_utf8_, uFieldFlagsStatic);
}

Encoding_type* Encoding_typeof()
{
    static uSStrong<Encoding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Encoding);
    options.TypeSize = sizeof(Encoding_type);
    type = (Encoding_type*)uClassType::New("Uno.Text.Encoding", options);
    type->fp_build_ = Encoding_build;
    return type;
}

// protected generated Encoding() :258
void Encoding__ctor__fn(Encoding* __this)
{
    __this->ctor_();
}

// public static Uno.Text.Encoding get_UTF8() :266
void Encoding__get_UTF8_fn(Encoding** __retval)
{
    *__retval = Encoding::UTF8();
}

uSStrong< ::g::Uno::Text::UTF8Encoding*> Encoding::_utf8_;

// protected generated Encoding() [instance] :258
void Encoding::ctor_()
{
}

// public static Uno.Text.Encoding get_UTF8() [static] :266
Encoding* Encoding::UTF8()
{
    if (Encoding::_utf8_ == NULL)
        Encoding::_utf8_ = ::g::Uno::Text::UTF8Encoding::New1();

    return Encoding::_utf8_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/StringBuilder.uno
// ----------------------------------------------------------------------------------

// public sealed class StringBuilder :7
// {
static void StringBuilder_build(uType* type)
{
    ::STRINGS[1] = uString::Const("chars");
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(StringBuilder, _totalLength), 0,
        ::TYPES[3/*Uno.Collections.List<string>*/], offsetof(StringBuilder, _strings), 0);
}

uType* StringBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StringBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Text.StringBuilder", options);
    type->fp_build_ = StringBuilder_build;
    type->fp_ctor_ = (void*)StringBuilder__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringBuilder__ToString_fn;
    return type;
}

// public generated StringBuilder() :7
void StringBuilder__ctor__fn(StringBuilder* __this)
{
    __this->ctor_();
}

// public Uno.Text.StringBuilder Append(char c) :53
void StringBuilder__Append_fn(StringBuilder* __this, char16_t* c, StringBuilder** __retval)
{
    *__retval = __this->Append(*c);
}

// public Uno.Text.StringBuilder Append(char[] chars) :30
void StringBuilder__Append1_fn(StringBuilder* __this, uArray* chars, StringBuilder** __retval)
{
    *__retval = __this->Append1(chars);
}

// public Uno.Text.StringBuilder Append(string str) :43
void StringBuilder__Append2_fn(StringBuilder* __this, uString* str, StringBuilder** __retval)
{
    *__retval = __this->Append2(str);
}

// public Uno.Text.StringBuilder AppendLine(string str) :58
void StringBuilder__AppendLine_fn(StringBuilder* __this, uString* str, StringBuilder** __retval)
{
    *__retval = __this->AppendLine(str);
}

// public int get_Length() :28
void StringBuilder__get_Length_fn(StringBuilder* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public int get_MaxCapacity() :12
void StringBuilder__get_MaxCapacity_fn(StringBuilder* __this, int32_t* __retval)
{
    *__retval = __this->MaxCapacity();
}

// public generated StringBuilder New() :7
void StringBuilder__New1_fn(StringBuilder** __retval)
{
    *__retval = StringBuilder::New1();
}

// public override sealed string ToString() :14
void StringBuilder__ToString_fn(StringBuilder* __this, uString** __retval)
{
    uString* ret2;
    uArray* c = uArray::New(::TYPES[4/*char[]*/], __this->_totalLength);
    int32_t x = 0;

    for (int32_t i = 0; i < uPtr(__this->_strings)->Count(); i++)
    {
        uString* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_strings), uCRef<int32_t>(i), &ret2), ret2);

        for (int32_t n = 0; n < uPtr(s)->Length(); n++)
            uPtr(c)->Item<char16_t>(x++) = uPtr(s)->Item(n);
    }

    return *__retval = uString::CharArray(c), void();
}

// public generated StringBuilder() [instance] :7
void StringBuilder::ctor_()
{
    _strings = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<string>*/]));
}

// public Uno.Text.StringBuilder Append(char c) [instance] :53
StringBuilder* StringBuilder::Append(char16_t c)
{
    return Append1(uArray::Init<int32_t>(::TYPES[4/*char[]*/], 1, c));
}

// public Uno.Text.StringBuilder Append(char[] chars) [instance] :30
StringBuilder* StringBuilder::Append1(uArray* chars)
{
    if ((MaxCapacity() - Length()) < uPtr(chars)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[1/*"chars"*/]));

    if (uPtr(chars)->Length() > 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_strings), uString::CharArray(chars));
        _totalLength = (_totalLength + uPtr(chars)->Length());
    }

    return this;
}

// public Uno.Text.StringBuilder Append(string str) [instance] :43
StringBuilder* StringBuilder::Append2(uString* str)
{
    if (uPtr(str)->Length() > 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_strings), str);
        _totalLength = (_totalLength + uPtr(str)->Length());
    }

    return this;
}

// public Uno.Text.StringBuilder AppendLine(string str) [instance] :58
StringBuilder* StringBuilder::AppendLine(uString* str)
{
    return uPtr(Append2(str))->Append2(::g::Uno::Environment::NewLine());
}

// public int get_Length() [instance] :28
int32_t StringBuilder::Length()
{
    return _totalLength;
}

// public int get_MaxCapacity() [instance] :12
int32_t StringBuilder::MaxCapacity()
{
    return 2147483647;
}

// public generated StringBuilder New() [static] :7
StringBuilder* StringBuilder::New1()
{
    StringBuilder* obj1 = (StringBuilder*)uNew(StringBuilder_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------

// public static class Utf8 :292
// {
static void Utf8_build(uType* type)
{
}

uClassType* Utf8_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Utf8", options);
    type->fp_build_ = Utf8_build;
    return type;
}

// public static byte[] GetBytes(string value) :294
void Utf8__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Utf8::GetBytes(value);
}

// public static string GetString(byte[] value) :307
void Utf8__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Utf8::GetString(value);
}

// public static byte[] GetBytes(string value) [static] :294
uArray* Utf8::GetBytes(uString* value)
{
    uCString cstr(value);
    return uArray::New(::g::Uno::Byte_typeof()->Array(), (int32_t) cstr.Length, cstr.Ptr);
}

// public static string GetString(byte[] value) [static] :307
uString* Utf8::GetString(uArray* value)
{
    const char* utf8 = (const char*)uPtr(value)->Ptr();
    return uString::Utf8(utf8, value->Length());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------

// internal sealed class UTF8Decoder :14
// {
static void UTF8Decoder_build(uType* type)
{
    ::STRINGS[1] = uString::Const("chars");
    ::STRINGS[2] = uString::Const("bytes");
    ::STRINGS[3] = uString::Const("byteIndex");
    ::STRINGS[4] = uString::Const("byteCount");
    ::STRINGS[5] = uString::Const("charIndex");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(UTF8Decoder, _state), 0);
}

::g::Uno::Text::Decoder_type* UTF8Decoder_typeof()
{
    static uSStrong< ::g::Uno::Text::Decoder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Text::Decoder_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UTF8Decoder);
    options.TypeSize = sizeof(::g::Uno::Text::Decoder_type);
    type = (::g::Uno::Text::Decoder_type*)uClassType::New("Uno.Text.UTF8Decoder", options);
    type->fp_build_ = UTF8Decoder_build;
    type->fp_ctor_ = (void*)UTF8Decoder__New1_fn;
    type->fp_GetChars = (void(*)(::g::Uno::Text::Decoder*, uArray*, int32_t*, int32_t*, uArray*, int32_t*, int32_t*))UTF8Decoder__GetChars_fn;
    return type;
}

// public generated UTF8Decoder() :14
void UTF8Decoder__ctor_1_fn(UTF8Decoder* __this)
{
    __this->ctor_1();
}

// private int ConvertInternal(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount) :38
void UTF8Decoder__ConvertInternal_fn(UTF8Decoder* __this, uArray* bytes, int32_t* byteIndex, int32_t* byteCount, uArray* chars, int32_t* charIndex, int32_t* charCount, int32_t* __retval)
{
    *__retval = __this->ConvertInternal(bytes, *byteIndex, *byteCount, chars, *charIndex, *charCount);
}

// public override sealed int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex) :234
void UTF8Decoder__GetChars_fn(UTF8Decoder* __this, uArray* bytes, int32_t* byteIndex, int32_t* byteCount, uArray* chars, int32_t* charIndex, int32_t* __retval)
{
    int32_t byteIndex_ = *byteIndex;
    int32_t byteCount_ = *byteCount;
    int32_t charIndex_ = *charIndex;

    if (bytes == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"bytes"*/]));

    if (byteIndex_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[3/*"byteIndex"*/]));

    if (byteCount_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[4/*"byteCount"*/]));

    if (chars == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"chars"*/]));

    if (charIndex_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"charIndex"*/]));

    if ((uPtr(bytes)->Length() - byteIndex_) < byteCount_)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[2/*"bytes"*/]));

    int32_t charCount = uPtr(chars)->Length() - charIndex_;
    return *__retval = __this->ConvertInternal(bytes, byteIndex_, byteCount_, chars, charIndex_, charCount), void();
}

// public generated UTF8Decoder New() :14
void UTF8Decoder__New1_fn(UTF8Decoder** __retval)
{
    *__retval = UTF8Decoder::New1();
}

// public generated UTF8Decoder() [instance] :14
void UTF8Decoder::ctor_1()
{
    ctor_();
}

// private int ConvertInternal(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount) [instance] :38
int32_t UTF8Decoder::ConvertInternal(uArray* bytes, int32_t byteIndex, int32_t byteCount, uArray* chars, int32_t charIndex, int32_t charCount)
{
    int32_t bytesUsed = 0;
    int32_t charsUsed = 0;
    int32_t ch = _state;
    _state = 0;

    while (bytesUsed < byteCount)
    {
        if (ch == 0)
        {
            ch = (int32_t)uPtr(bytes)->Item<uint8_t>(byteIndex + (bytesUsed++));

            if (ch < 128)
            {
                if (chars != NULL)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = (char16_t)ch;
                }

                ++charsUsed;
                ch = 0;
                continue;
            }

            if ((ch & 224) == 192)
            {
                ch = ch & 31;

                if (ch <= 1)
                {
                    if (chars != NULL)
                    {
                        if (charsUsed >= charCount)
                            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                        uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
                    }

                    ++charsUsed;
                    ch = 0;
                    continue;
                }

                ch = ch | 4194304;
            }
            else if ((ch & 240) == 224)
            {
                ch = ch & 15;
                ch = ch | 8454144;
            }
            else if ((ch & 248) == 240)
            {
                ch = ch & 7;

                if (ch > 4)
                {
                    if (chars != NULL)
                    {
                        if (charsUsed >= charCount)
                            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                        uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
                    }

                    ++charsUsed;
                    ch = 0;
                    continue;
                }

                ch = ch | 12583936;
            }
            else
            {
                if (chars != NULL)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
                }

                ++charsUsed;
                ch = 0;
                continue;
            }
        }

        bool done = false, invalid = false;

        do
        {
            if (bytesUsed == byteCount)
            {
                _state = ch;
                return charsUsed;
            }

            uint8_t ch2 = uPtr(bytes)->Item<uint8_t>(byteIndex + bytesUsed);

            if ((ch2 & 192) != 128)
            {
                invalid = true;
                break;
            }

            ch = (ch << 6) | (int32_t)(ch2 & 63);
            ++bytesUsed;

            switch (ch & 805306368)
            {
                case 268435456:
                {
                    done = true;
                    break;
                }
                case 536870912:
                {
                    if (((ch & 992) == 0) || ((ch & 992) == 864))
                    {
                        invalid = true;
                        done = true;
                    }

                    break;
                }
                case 805306368:
                {
                    if (((ch & 496) < 16) || ((ch & 496) > 256))
                    {
                        invalid = true;
                        done = true;
                    }

                    break;
                }
            }
        }
        while (!done);

        if (invalid)
        {
            if (chars != NULL)
            {
                if (charsUsed >= charCount)
                    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
            }

            ++charsUsed;
        }
        else
        {
            int32_t codePoint = ch & 2097151;

            if (codePoint < 65536)
            {
                if (chars != NULL)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = (char16_t)codePoint;
                }

                ++charsUsed;
            }
            else
            {
                if (chars != NULL)
                {
                    if ((charsUsed + 1) >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"chars"*/]));

                    codePoint = codePoint - 65536;
                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = (char16_t)(55296 + (codePoint >> 10));
                    chars->Item<char16_t>((charIndex + charsUsed) + 1) = (char16_t)(56320 + (codePoint & 1023));
                }

                charsUsed = charsUsed + 2;
            }
        }

        ch = 0;
    }

    _state = 0;
    return charsUsed;
}

// public generated UTF8Decoder New() [static] :14
UTF8Decoder* UTF8Decoder::New1()
{
    UTF8Decoder* obj1 = (UTF8Decoder*)uNew(UTF8Decoder_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------

// public sealed class UTF8Encoding :284
// {
static void UTF8Encoding_build(uType* type)
{
}

::g::Uno::Text::Encoding_type* UTF8Encoding_typeof()
{
    static uSStrong< ::g::Uno::Text::Encoding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Text::Encoding_typeof();
    options.ObjectSize = sizeof(UTF8Encoding);
    options.TypeSize = sizeof(::g::Uno::Text::Encoding_type);
    type = (::g::Uno::Text::Encoding_type*)uClassType::New("Uno.Text.UTF8Encoding", options);
    type->fp_build_ = UTF8Encoding_build;
    type->fp_ctor_ = (void*)UTF8Encoding__New1_fn;
    type->fp_GetDecoder = (void(*)(::g::Uno::Text::Encoding*, ::g::Uno::Text::Decoder**))UTF8Encoding__GetDecoder_fn;
    return type;
}

// public generated UTF8Encoding() :284
void UTF8Encoding__ctor_1_fn(UTF8Encoding* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Text.Decoder GetDecoder() :286
void UTF8Encoding__GetDecoder_fn(UTF8Encoding* __this, ::g::Uno::Text::Decoder** __retval)
{
    return *__retval = ::g::Uno::Text::UTF8Decoder::New1(), void();
}

// public generated UTF8Encoding New() :284
void UTF8Encoding__New1_fn(UTF8Encoding** __retval)
{
    *__retval = UTF8Encoding::New1();
}

// public generated UTF8Encoding() [instance] :284
void UTF8Encoding::ctor_1()
{
    ctor_();
}

// public generated UTF8Encoding New() [static] :284
UTF8Encoding* UTF8Encoding::New1()
{
    UTF8Encoding* obj1 = (UTF8Encoding*)uNew(UTF8Encoding_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Text
