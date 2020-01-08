// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/String.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic sealed class String :11
// {
uType* String_typeof();
void String__Compare_fn(uString* a, uString* b, int32_t* __retval);
void String__Concat_fn(uObject* a, uObject* b, uString** __retval);
void String__Concat1_fn(uString* a, uString* b, uString** __retval);
void String__Contains_fn(uString* __this, uString* str, bool* __retval);
void String__EndsWith_fn(uString* __this, uString* value, bool* __retval);
void String__Equals_fn(uString* __this, uObject* other, bool* __retval);
void String__Equals2_fn(uString* __this, uString* other, bool* __retval);
void String__Equals3_fn(uString* left, uString* right, bool* __retval);
void String__Format_fn(uString* str, uArray* objs, uString** __retval);
void String__GetHashCode_fn(uString* __this, int32_t* __retval);
void String__IndexOf_fn(uString* __this, char16_t* c, int32_t* __retval);
void String__IndexOf1_fn(uString* __this, char16_t* c, int32_t* startIndex, int32_t* __retval);
void String__IndexOf3_fn(uString* __this, uString* str, int32_t* startIndex, int32_t* __retval);
void String__IndexOfFirstNotInSet_fn(uString* __this, uArray* charSet, int32_t* __retval);
void String__IndexOfFirstNotWhiteSpace_fn(uString* __this, int32_t* __retval);
void String__IndexOfLastNotInSet_fn(uString* __this, uArray* charSet, int32_t* __retval);
void String__IndexOfLastNotWhiteSpace_fn(uString* __this, int32_t* __retval);
void String__IndexOfUnchecked_fn(uString* __this, char16_t* c, int32_t* startIndex, int32_t* count, int32_t* __retval);
void String__Insert_fn(uString* __this, int32_t* pos, uString* str, uString** __retval);
void String__InSet_fn(uString* __this, char16_t* c, uArray* charSet, bool* __retval);
void String__IsNullOrEmpty_fn(uString* s, bool* __retval);
void String__Join_fn(uString* separator, uArray* value, uString** __retval);
void String__LastIndexOf_fn(uString* __this, char16_t* c, int32_t* __retval);
void String__LastIndexOfAny_fn(uString* __this, uArray* anyOf, int32_t* __retval);
void String__LastIndexOfAnyUnchecked_fn(uString* __this, uArray* anyOf, int32_t* startIndex, int32_t* count, int32_t* __retval);
void String__LastIndexOfUnchecked_fn(uString* __this, char16_t* c, int32_t* startIndex, int32_t* count, int32_t* __retval);
void String__MatchesAt_fn(uString* __this, uString* str, int32_t* pos, bool* __retval);
void String__op_Addition_fn(uObject* a, uString* b, uString** __retval);
void String__op_Addition1_fn(uString* a, uObject* b, uString** __retval);
void String__op_Addition2_fn(uString* a, uString* b, uString** __retval);
void String__op_Equality_fn(uString* left, uString* right, bool* __retval);
void String__op_Inequality_fn(uString* left, uString* right, bool* __retval);
void String__PadLeft1_fn(uString* __this, int32_t* totalLength, char16_t* paddingSymbol, uString** __retval);
void String__Replace_fn(uString* __this, char16_t* oldChar, char16_t* newChar, uString** __retval);
void String__Replace1_fn(uString* __this, uString* oldValue, uString* newValue, uString** __retval);
void String__Split_fn(uString* __this, uArray* splitChars, uArray** __retval);
void String__StartsWith_fn(uString* __this, uString* value, bool* __retval);
void String__SubCharArray_fn(uString* __this, int32_t* start, int32_t* len, uArray** __retval);
void String__Substring_fn(uString* __this, int32_t* start, uString** __retval);
void String__Substring1_fn(uString* __this, int32_t* startIndex, int32_t* length, uString** __retval);
void String__ToCharArray_fn(uString* __this, uArray** __retval);
void String__ToCharArray1_fn(uString* __this, int32_t* start, int32_t* length, uArray** __retval);
void String__ToLower_fn(uString* __this, uString** __retval);
void String__ToString_fn(uString* __this, uString** __retval);
void String__ToUpper_fn(uString* __this, uString** __retval);
void String__Trim_fn(uString* __this, uString** __retval);
void String__Trim1_fn(uString* __this, uArray* trimChars, uString** __retval);
void String__TrimEnd_fn(uString* __this, uArray* trimChars, uString** __retval);
void String__TrimEndWhiteSpace_fn(uString* __this, uString** __retval);

struct String
{
    static uSStrong<uString*> Empty_;
    static uSStrong<uString*>& Empty() { return String_typeof()->Init(), Empty_; }

    static bool Contains(uString* __this, uString* str);
    static bool EndsWith(uString* __this, uString* value);
    static bool Equals2(uString* __this, uString* other);
    static int32_t IndexOf(uString* __this, char16_t c);
    static int32_t IndexOf1(uString* __this, char16_t c, int32_t startIndex);
    static int32_t IndexOf3(uString* __this, uString* str, int32_t startIndex);
    static int32_t IndexOfFirstNotInSet(uString* __this, uArray* charSet);
    static int32_t IndexOfFirstNotWhiteSpace(uString* __this);
    static int32_t IndexOfLastNotInSet(uString* __this, uArray* charSet);
    static int32_t IndexOfLastNotWhiteSpace(uString* __this);
    static int32_t IndexOfUnchecked(uString* __this, char16_t c, int32_t startIndex, int32_t count);
    static uString* Insert(uString* __this, int32_t pos, uString* str);
    static bool InSet(uString* __this, char16_t c, uArray* charSet);
    static int32_t LastIndexOf(uString* __this, char16_t c);
    static int32_t LastIndexOfAny(uString* __this, uArray* anyOf);
    static int32_t LastIndexOfAnyUnchecked(uString* __this, uArray* anyOf, int32_t startIndex, int32_t count);
    static int32_t LastIndexOfUnchecked(uString* __this, char16_t c, int32_t startIndex, int32_t count);
    static bool MatchesAt(uString* __this, uString* str, int32_t pos);
    static uString* PadLeft1(uString* __this, int32_t totalLength, char16_t paddingSymbol);
    static uString* Replace(uString* __this, char16_t oldChar, char16_t newChar);
    static uString* Replace1(uString* __this, uString* oldValue, uString* newValue);
    static uArray* Split(uString* __this, uArray* splitChars);
    static bool StartsWith(uString* __this, uString* value);
    static uArray* SubCharArray(uString* __this, int32_t start, int32_t len);
    static uString* Substring(uString* __this, int32_t start);
    static uString* Substring1(uString* __this, int32_t startIndex, int32_t length);
    static uArray* ToCharArray(uString* __this);
    static uArray* ToCharArray1(uString* __this, int32_t start, int32_t length);
    static uString* ToLower(uString* __this);
    static uString* ToUpper(uString* __this);
    static uString* Trim(uString* __this);
    static uString* Trim1(uString* __this, uArray* trimChars);
    static uString* TrimEnd(uString* __this, uArray* trimChars);
    static uString* TrimEndWhiteSpace(uString* __this);
    static int32_t Compare(uString* a, uString* b);
    static uString* Concat(uObject* a, uObject* b);
    static uString* Concat1(uString* a, uString* b);
    static bool Equals3(uString* left, uString* right);
    static uString* Format(uString* str, uArray* objs);
    static bool IsNullOrEmpty(uString* s);
    static uString* Join(uString* separator, uArray* value);
    static uString* op_Addition(uObject* a, uString* b);
    static uString* op_Addition1(uString* a, uObject* b);
    static uString* op_Addition2(uString* a, uString* b);
    static bool op_Equality(uString* left, uString* right);
    static bool op_Inequality(uString* left, uString* right);
};
// }

}} // ::g::Uno
