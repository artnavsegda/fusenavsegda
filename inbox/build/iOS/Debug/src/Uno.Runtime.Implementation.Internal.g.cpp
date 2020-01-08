// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <errno.h>
#include <stdio.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.FormatException.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h>
#include <Uno.Runtime.Implementation.Internal.FormatSpecifier.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h>
#include <Uno.Runtime.Implementation.Internal.NumericFormatter.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
static uString* STRINGS[9];
static uType* TYPES[15];

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/ArrayEnumerable.uno
// ---------------------------------------------------------------------------------------------------------------

// public sealed class ArrayEnumerable<T> :47
// {
static void ArrayEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(ArrayEnumerable_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(ArrayEnumerable, _source), 0);
}

ArrayEnumerable_type* ArrayEnumerable_typeof()
{
    static uSStrong<ArrayEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ArrayEnumerable);
    options.TypeSize = sizeof(ArrayEnumerable_type);
    type = (ArrayEnumerable_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayEnumerable`1", options);
    type->fp_build_ = ArrayEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ArrayEnumerable__GetEnumerator_fn;
    return type;
}

// public ArrayEnumerable(T[] source) :51
void ArrayEnumerable__ctor__fn(ArrayEnumerable* __this, uArray* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :56
void ArrayEnumerable__GetEnumerator_fn(ArrayEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public ArrayEnumerable New(T[] source) :51
void ArrayEnumerable__New1_fn(uType* __type, uArray* source, ArrayEnumerable** __retval)
{
    *__retval = ArrayEnumerable::New1(__type, source);
}

// public ArrayEnumerable(T[] source) [instance] :51
void ArrayEnumerable::ctor_(uArray* source)
{
    _source = source;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :56
uObject* ArrayEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.Internal.ArrayEnumerator<T>*/),
    };
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator::New1(__types[0], _source));
}

// public ArrayEnumerable New(T[] source) [static] :51
ArrayEnumerable* ArrayEnumerable::New1(uType* __type, uArray* source)
{
    ArrayEnumerable* obj1 = (ArrayEnumerable*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/ArrayEnumerable.uno
// ---------------------------------------------------------------------------------------------------------------

// public sealed class ArrayEnumerator<T> :5
// {
static void ArrayEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(ArrayEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ArrayEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ArrayEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(ArrayEnumerator, _source), 0,
        ::g::Uno::Int_typeof(), offsetof(ArrayEnumerator, _iterator), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

ArrayEnumerator_type* ArrayEnumerator_typeof()
{
    static uSStrong<ArrayEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ArrayEnumerator);
    options.TypeSize = sizeof(ArrayEnumerator_type);
    type = (ArrayEnumerator_type*)uClassType::New("Uno.Runtime.Implementation.Internal.ArrayEnumerator`1", options);
    type->fp_build_ = ArrayEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ArrayEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ArrayEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))ArrayEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ArrayEnumerator__MoveNext_fn;
    return type;
}

// public ArrayEnumerator(T[] source) :11
void ArrayEnumerator__ctor__fn(ArrayEnumerator* __this, uArray* source)
{
    __this->ctor_(source);
}

// public T get_Current() :19
void ArrayEnumerator__get_Current_fn(ArrayEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :22
void ArrayEnumerator__Dispose_fn(ArrayEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :33
void ArrayEnumerator__MoveNext_fn(ArrayEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public ArrayEnumerator New(T[] source) :11
void ArrayEnumerator__New1_fn(uType* __type, uArray* source, ArrayEnumerator** __retval)
{
    *__retval = ArrayEnumerator::New1(__type, source);
}

// public void Reset() :27
void ArrayEnumerator__Reset_fn(ArrayEnumerator* __this)
{
    __this->Reset();
}

// public ArrayEnumerator(T[] source) [instance] :11
void ArrayEnumerator::ctor_(uArray* source)
{
    _source = source;
    _iterator = -1;
}

// public void Dispose() [instance] :22
void ArrayEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :33
bool ArrayEnumerator::MoveNext()
{
    _iterator++;

    if (_iterator < uPtr(_source)->Length())
    {
        _current() = uPtr(_source)->TItem(_iterator);
        return true;
    }

    return false;
}

// public void Reset() [instance] :27
void ArrayEnumerator::Reset()
{
    _iterator = -1;
    _current().Default();
}

// public ArrayEnumerator New(T[] source) [static] :11
ArrayEnumerator* ArrayEnumerator::New1(uType* __type, uArray* source)
{
    ArrayEnumerator* obj1 = (ArrayEnumerator*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/NumericFormatter.uno
// ----------------------------------------------------------------------------------------------------------------

// internal enum FormatSpecifier :7
uEnumType* FormatSpecifier_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.Implementation.Internal.FormatSpecifier", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Decimal", 0LL,
        "FixedPoint", 1LL,
        "Hexadecimal", 2LL,
        "Exponential", 3LL,
        "General", 4LL,
        "Percent", 5LL,
        "Number", 6LL,
        "Custom", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/FormatStringItem.uno
// ----------------------------------------------------------------------------------------------------------------

// public sealed class FormatStringItem :3
// {
static void FormatStringItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Index (zero based) must be greater than or equal to zero and less than the size of the argument list.");
    ::STRINGS[1] = uString::Const("Format specifier was invalid");
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    ::TYPES[3] = ::g::Uno::SByte_typeof();
    ::TYPES[4] = ::g::Uno::Byte_typeof();
    ::TYPES[5] = ::g::Uno::Short_typeof();
    ::TYPES[6] = ::g::Uno::UShort_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[8] = ::g::Uno::UInt_typeof();
    ::TYPES[9] = ::g::Uno::Long_typeof();
    ::TYPES[10] = ::g::Uno::ULong_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    type->SetDependencies(
        ::g::Uno::Runtime::Implementation::Internal::NumericFormatter_typeof());
    type->SetFields(1);
}

::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof()
{
    static uSStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FormatStringItem);
    options.TypeSize = sizeof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type);
    type = (::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringItem", options);
    type->fp_build_ = FormatStringItem_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FormatStringItem__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))FormatStringItem__GetHashCode_fn;
    type->fp_ToString1 = (void(*)(::g::Uno::Runtime::Implementation::Internal::FormatStringToken*, uArray*, uString**))FormatStringItem__ToString1_fn;
    return type;
}

// public FormatStringItem(string lexeme) :5
void FormatStringItem__ctor_1_fn(FormatStringItem* __this, uString* lexeme)
{
    __this->ctor_1(lexeme);
}

// public override sealed bool Equals(object obj) :36
void FormatStringItem__Equals_fn(FormatStringItem* __this, uObject* obj, bool* __retval)
{
    if (obj == NULL)
        return *__retval = false, void();

    FormatStringItem* token = uAs<FormatStringItem*>(obj, __this->__type);

    if (token == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::String::op_Equality(__this->Lexeme(), uPtr(token)->Lexeme()), void();
}

// public string get_FormatString() :24
void FormatStringItem__get_FormatString_fn(FormatStringItem* __this, uString** __retval)
{
    *__retval = __this->FormatString();
}

// public override sealed int GetHashCode() :48
void FormatStringItem__GetHashCode_fn(FormatStringItem* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->Lexeme())->GetHashCode(), void();
}

// public FormatStringItem New(string lexeme) :5
void FormatStringItem__New1_fn(uString* lexeme, FormatStringItem** __retval)
{
    *__retval = FormatStringItem::New1(lexeme);
}

// public int get_Number() :11
void FormatStringItem__get_Number_fn(FormatStringItem* __this, int32_t* __retval)
{
    *__retval = __this->Number();
}

// public override sealed string ToString(object[] objs) :53
void FormatStringItem__ToString1_fn(FormatStringItem* __this, uArray* objs, uString** __retval)
{
    if ((__this->Number() < 0) || (__this->Number() > (uPtr(objs)->Length() - 1)))
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[0/*"Index (zero...*/]));

    uObject* o = uPtr(objs)->Strong<uObject*>(__this->Number());
    uString* formatString = __this->FormatString();

    if (::g::Uno::String::IsNullOrEmpty(formatString))
        return *__retval = ::g::Uno::Object::ToString(uPtr(o)), void();
    else
    {
        if (uIs(o, ::TYPES[1/*bool*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format(formatString, uUnbox<bool>(::TYPES[1/*bool*/], o)), void();

        if (uIs(o, ::TYPES[2/*char*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, (int32_t)uUnbox<char16_t>(::TYPES[2/*char*/], o)), void();

        if (uIs(o, ::TYPES[3/*sbyte*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format5(formatString, uUnbox<int8_t>(::TYPES[3/*sbyte*/], o)), void();

        if (uIs(o, ::TYPES[4/*byte*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format6(formatString, (int16_t)uUnbox<uint8_t>(::TYPES[4/*byte*/], o)), void();

        if (uIs(o, ::TYPES[5/*short*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format6(formatString, uUnbox<int16_t>(::TYPES[5/*short*/], o)), void();

        if (uIs(o, ::TYPES[6/*ushort*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, (int32_t)uUnbox<uint16_t>(::TYPES[6/*ushort*/], o)), void();

        if (uIs(o, ::TYPES[7/*int*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format3(formatString, uUnbox<int32_t>(::TYPES[7/*int*/], o)), void();

        if (uIs(o, ::TYPES[8/*uint*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format4(formatString, (int64_t)uUnbox<uint32_t>(::TYPES[8/*uint*/], o)), void();

        if (uIs(o, ::TYPES[9/*long*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format4(formatString, uUnbox<int64_t>(::TYPES[9/*long*/], o)), void();

        if (uIs(o, ::TYPES[10/*ulong*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format7(formatString, uUnbox<uint64_t>(::TYPES[10/*ulong*/], o)), void();

        if (uIs(o, ::TYPES[11/*float*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format2(formatString, uUnbox<float>(::TYPES[11/*float*/], o)), void();

        if (uIs(o, ::TYPES[12/*double*/]))
            return *__retval = ::g::Uno::Runtime::Implementation::Internal::NumericFormatter::Format1(formatString, uUnbox<double>(::TYPES[12/*double*/], o)), void();
    }

    return *__retval = ::g::Uno::Object::ToString(uPtr(o)), void();
}

// public FormatStringItem(string lexeme) [instance] :5
void FormatStringItem::ctor_1(uString* lexeme)
{
    ctor_(lexeme);
}

// public string get_FormatString() [instance] :24
uString* FormatStringItem::FormatString()
{
    int32_t colon = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ':');

    if (colon == -1)
        return NULL;

    int32_t end = ::g::Uno::String::IndexOf(uPtr(Lexeme()), '}');

    if (end == -1)
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Format spec...*/]));

    return ::g::Uno::String::Substring1(uPtr(Lexeme()), colon + 1, (end - colon) - 1);
}

// public int get_Number() [instance] :11
int32_t FormatStringItem::Number()
{
    int32_t index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ',');

    if (index == -1)
        index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), ':');

    if (index == -1)
        index = ::g::Uno::String::IndexOf(uPtr(Lexeme()), '}');

    return ::g::Uno::Int::Parse(::g::Uno::String::Substring1(uPtr(Lexeme()), 1, index - 1));
}

// public FormatStringItem New(string lexeme) [static] :5
FormatStringItem* FormatStringItem::New1(uString* lexeme)
{
    FormatStringItem* obj1 = (FormatStringItem*)uNew(FormatStringItem_typeof());
    obj1->ctor_1(lexeme);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/FormatStringLiteral.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed class FormatStringLiteral :3
// {
static void FormatStringLiteral_build(uType* type)
{
    type->SetFields(1);
}

::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof()
{
    static uSStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringLiteral);
    options.TypeSize = sizeof(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type);
    type = (::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringLiteral", options);
    type->fp_build_ = FormatStringLiteral_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FormatStringLiteral__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))FormatStringLiteral__GetHashCode_fn;
    type->fp_ToString1 = (void(*)(::g::Uno::Runtime::Implementation::Internal::FormatStringToken*, uArray*, uString**))FormatStringLiteral__ToString1_fn;
    return type;
}

// public FormatStringLiteral(string lexeme) :5
void FormatStringLiteral__ctor_1_fn(FormatStringLiteral* __this, uString* lexeme)
{
    __this->ctor_1(lexeme);
}

// public override sealed bool Equals(object obj) :7
void FormatStringLiteral__Equals_fn(FormatStringLiteral* __this, uObject* obj, bool* __retval)
{
    if (obj == NULL)
        return *__retval = false, void();

    FormatStringLiteral* token = uAs<FormatStringLiteral*>(obj, __this->__type);

    if (token == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::String::op_Equality(__this->Lexeme(), uPtr(token)->Lexeme()), void();
}

// public override sealed int GetHashCode() :19
void FormatStringLiteral__GetHashCode_fn(FormatStringLiteral* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->Lexeme())->GetHashCode(), void();
}

// public FormatStringLiteral New(string lexeme) :5
void FormatStringLiteral__New1_fn(uString* lexeme, FormatStringLiteral** __retval)
{
    *__retval = FormatStringLiteral::New1(lexeme);
}

// public override sealed string ToString(object[] objs) :24
void FormatStringLiteral__ToString1_fn(FormatStringLiteral* __this, uArray* objs, uString** __retval)
{
    return *__retval = __this->Lexeme(), void();
}

// public FormatStringLiteral(string lexeme) [instance] :5
void FormatStringLiteral::ctor_1(uString* lexeme)
{
    ctor_(lexeme);
}

// public FormatStringLiteral New(string lexeme) [static] :5
FormatStringLiteral* FormatStringLiteral::New1(uString* lexeme)
{
    FormatStringLiteral* obj1 = (FormatStringLiteral*)uNew(FormatStringLiteral_typeof());
    obj1->ctor_1(lexeme);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/FormatStringToken.uno
// -----------------------------------------------------------------------------------------------------------------

// public abstract class FormatStringToken :3
// {
static void FormatStringToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FormatStringToken, _Lexeme), 0);
}

FormatStringToken_type* FormatStringToken_typeof()
{
    static uSStrong<FormatStringToken_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FormatStringToken);
    options.TypeSize = sizeof(FormatStringToken_type);
    type = (FormatStringToken_type*)uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringToken", options);
    type->fp_build_ = FormatStringToken_build;
    return type;
}

// protected FormatStringToken(string lexeme) :7
void FormatStringToken__ctor__fn(FormatStringToken* __this, uString* lexeme)
{
    __this->ctor_(lexeme);
}

// public generated string get_Lexeme() :5
void FormatStringToken__get_Lexeme_fn(FormatStringToken* __this, uString** __retval)
{
    *__retval = __this->Lexeme();
}

// private generated void set_Lexeme(string value) :5
void FormatStringToken__set_Lexeme_fn(FormatStringToken* __this, uString* value)
{
    __this->Lexeme(value);
}

// protected FormatStringToken(string lexeme) [instance] :7
void FormatStringToken::ctor_(uString* lexeme)
{
    Lexeme(lexeme);
}

// public generated string get_Lexeme() [instance] :5
uString* FormatStringToken::Lexeme()
{
    return _Lexeme;
}

// private generated void set_Lexeme(string value) [instance] :5
void FormatStringToken::Lexeme(uString* value)
{
    _Lexeme = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/FormatStringTokenizer.uno
// ---------------------------------------------------------------------------------------------------------------------

// public sealed class FormatStringTokenizer :5
// {
static void FormatStringTokenizer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(FormatStringTokenizer, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(FormatStringTokenizer, _prevIndex), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL), offsetof(FormatStringTokenizer, _tokens), 0,
        FormatStringTokenizer__State_typeof(), offsetof(FormatStringTokenizer, _state), 0,
        ::g::Uno::String_typeof(), offsetof(FormatStringTokenizer, _format), 0);
}

uType* FormatStringTokenizer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FormatStringTokenizer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.FormatStringTokenizer", options);
    type->fp_build_ = FormatStringTokenizer_build;
    return type;
}

// public FormatStringTokenizer(string format) :14
void FormatStringTokenizer__ctor__fn(FormatStringTokenizer* __this, uString* format)
{
    __this->ctor_(format);
}

// private void AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :76
void FormatStringTokenizer__AddFormatItemAndGoTo_fn(FormatStringTokenizer* __this, int32_t* state)
{
    __this->AddFormatItemAndGoTo(*state);
}

// private void AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :83
void FormatStringTokenizer__AddLiteralAndGoTo_fn(FormatStringTokenizer* __this, int32_t* state)
{
    __this->AddLiteralAndGoTo(*state);
}

// private bool AtEnd() :101
void FormatStringTokenizer__AtEnd_fn(FormatStringTokenizer* __this, bool* __retval)
{
    *__retval = __this->AtEnd();
}

// private void DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) :90
void FormatStringTokenizer__DiscardCharacterAndGoTo_fn(FormatStringTokenizer* __this, int32_t* state)
{
    __this->DiscardCharacterAndGoTo(*state);
}

// public FormatStringTokenizer New(string format) :14
void FormatStringTokenizer__New1_fn(uString* format, FormatStringTokenizer** __retval)
{
    *__retval = FormatStringTokenizer::New1(format);
}

// private void Throw() :96
void FormatStringTokenizer__Throw_fn(FormatStringTokenizer* __this)
{
    __this->Throw();
}

// public static Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatString(string format) :19
void FormatStringTokenizer__TokenizeFormatString_fn(uString* format, ::g::Uno::Collections::List** __retval)
{
    *__retval = FormatStringTokenizer::TokenizeFormatString(format);
}

// private Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatStringInternal() :24
void FormatStringTokenizer__TokenizeFormatStringInternal_fn(FormatStringTokenizer* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TokenizeFormatStringInternal();
}

// public FormatStringTokenizer(string format) [instance] :14
void FormatStringTokenizer::ctor_(uString* format)
{
    _format = format;
}

// private void AddFormatItemAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :76
void FormatStringTokenizer::AddFormatItemAndGoTo(int32_t state)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::Runtime::Implementation::Internal::FormatStringItem::New1(::g::Uno::String::Substring1(uPtr(_format), _prevIndex, (_index - _prevIndex) + 1)));
    _prevIndex = (_index + 1);
    _state = state;
}

// private void AddLiteralAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :83
void FormatStringTokenizer::AddLiteralAndGoTo(int32_t state)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_tokens), ::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral::New1(::g::Uno::String::Substring1(uPtr(_format), _prevIndex, _index - _prevIndex)));
    _prevIndex = _index;
    _state = state;
}

// private bool AtEnd() [instance] :101
bool FormatStringTokenizer::AtEnd()
{
    return _index == uPtr(_format)->Length();
}

// private void DiscardCharacterAndGoTo(Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State state) [instance] :90
void FormatStringTokenizer::DiscardCharacterAndGoTo(int32_t state)
{
    _prevIndex++;
    _state = state;
}

// private void Throw() [instance] :96
void FormatStringTokenizer::Throw()
{
    U_THROW(::g::Uno::FormatException::New4(uString::Const("Input string was not in a correct format")));
}

// private Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatStringInternal() [instance] :24
::g::Uno::Collections::List* FormatStringTokenizer::TokenizeFormatStringInternal()
{
    _index = 0;
    _prevIndex = 0;
    _state = 0;
    _tokens = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL)));

    while (_index <= uPtr(_format)->Length())
    {
        switch (_state)
        {
            case 0:
            {
                if (AtEnd())
                    _state = 4;
                else if (uPtr(_format)->Item(_index) == '{')
                    _state = 2;
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();
                else
                    _state = 1;

                break;
            }
            case 2:
            {
                if (AtEnd())
                    Throw();
                else if (uPtr(_format)->Item(_index) == '{')
                    DiscardCharacterAndGoTo(1);
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();
                else
                    _state = 3;

                break;
            }
            case 3:
            {
                if (AtEnd())
                    Throw();
                else if (uPtr(_format)->Item(_index) == '}')
                    AddFormatItemAndGoTo(0);
                else if (uPtr(_format)->Item(_index) == '{')
                    Throw();

                break;
            }
            case 1:
            {
                if (AtEnd())
                    AddLiteralAndGoTo(4);
                else if (uPtr(_format)->Item(_index) == '{')
                    AddLiteralAndGoTo(2);
                else if (uPtr(_format)->Item(_index) == '}')
                    Throw();

                break;
            }
        }

        _index++;
    }

    return _tokens;
}

// public FormatStringTokenizer New(string format) [static] :14
FormatStringTokenizer* FormatStringTokenizer::New1(uString* format)
{
    FormatStringTokenizer* obj1 = (FormatStringTokenizer*)uNew(FormatStringTokenizer_typeof());
    obj1->ctor_(format);
    return obj1;
}

// public static Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken> TokenizeFormatString(string format) [static] :19
::g::Uno::Collections::List* FormatStringTokenizer::TokenizeFormatString(uString* format)
{
    return FormatStringTokenizer::New1(format)->TokenizeFormatStringInternal();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/NumericFormatter.uno
// ----------------------------------------------------------------------------------------------------------------

// public static class NumericFormatter :19
// {
// static generated NumericFormatter() :19
static void NumericFormatter__cctor__fn(uType* __type)
{
    NumericFormatter::NumberDecimalDigits_ = 2;
    NumericFormatter::ExponentialDigits_ = 6;
    NumericFormatter::lowerHexChars_ = uArray::Init<int32_t>(::TYPES[13/*char[]*/], 16, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f');
    NumericFormatter::upperHexChars_ = uArray::Init<int32_t>(::TYPES[13/*char[]*/], 16, '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F');
}

static void NumericFormatter_build(uType* type)
{
    ::STRINGS[2] = uString::Const(" %");
    ::STRINGS[1] = uString::Const("Format specifier was invalid");
    ::STRINGS[3] = uString::Const("-");
    ::STRINGS[4] = uString::Const(".");
    ::STRINGS[5] = uString::Const("0");
    ::STRINGS[6] = uString::Const("E+");
    ::STRINGS[7] = uString::Const(",");
    ::STRINGS[8] = uString::Const("");
    ::TYPES[13] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::ULong_typeof();
    ::TYPES[7] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[7/*int*/], (uintptr_t)&NumericFormatter::NumberDecimalDigits_, uFieldFlagsStatic,
        ::TYPES[7/*int*/], (uintptr_t)&NumericFormatter::ExponentialDigits_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&NumericFormatter::_decimalPoint_, uFieldFlagsStatic,
        ::TYPES[13/*char[]*/], (uintptr_t)&NumericFormatter::lowerHexChars_, uFieldFlagsStatic,
        ::TYPES[13/*char[]*/], (uintptr_t)&NumericFormatter::upperHexChars_, uFieldFlagsStatic);
}

uClassType* NumericFormatter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.NumericFormatter", options);
    type->fp_build_ = NumericFormatter_build;
    type->fp_cctor_ = NumericFormatter__cctor__fn;
    return type;
}

// private static void CalculateExponential(double d, double& significand, int& exponent) :469
void NumericFormatter__CalculateExponential_fn(double* d, double* significand, int32_t* exponent)
{
    NumericFormatter::CalculateExponential(*d, significand, exponent);
}

// private static string get_DecimalPoint() :27
void NumericFormatter__get_DecimalPoint_fn(uString** __retval)
{
    *__retval = NumericFormatter::DecimalPoint();
}

// private static int Digits(string formatString) :489
void NumericFormatter__Digits_fn(uString* formatString, int32_t* __retval)
{
    *__retval = NumericFormatter::Digits(formatString);
}

// public static string Format(string formatString, bool i) :37
void NumericFormatter__Format_fn(uString* formatString, bool* i, uString** __retval)
{
    *__retval = NumericFormatter::Format(formatString, *i);
}

// public static string Format(string formatString, double d) :103
void NumericFormatter__Format1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::Format1(formatString, *d);
}

// public static string Format(string formatString, float f) :96
void NumericFormatter__Format2_fn(uString* formatString, float* f, uString** __retval)
{
    *__retval = NumericFormatter::Format2(formatString, *f);
}

// public static string Format(string formatString, int i) :56
void NumericFormatter__Format3_fn(uString* formatString, int32_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format3(formatString, *i);
}

// public static string Format(string formatString, long i) :63
void NumericFormatter__Format4_fn(uString* formatString, int64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format4(formatString, *i);
}

// public static string Format(string formatString, sbyte b) :42
void NumericFormatter__Format5_fn(uString* formatString, int8_t* b, uString** __retval)
{
    *__retval = NumericFormatter::Format5(formatString, *b);
}

// public static string Format(string formatString, short s) :49
void NumericFormatter__Format6_fn(uString* formatString, int16_t* s, uString** __retval)
{
    *__retval = NumericFormatter::Format6(formatString, *s);
}

// public static string Format(string formatString, ulong i) :73
void NumericFormatter__Format7_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::Format7(formatString, *i);
}

// private static string FormatCustom(string formatString, double value) :378
void NumericFormatter__FormatCustom_fn(uString* formatString, double* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustom(formatString, *value);
}

// private static string FormatCustom(string formatString, ulong value) :366
void NumericFormatter__FormatCustom1_fn(uString* formatString, uint64_t* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustom1(formatString, *value);
}

// private static string FormatCustomDoublePart(string doubleFormat, double d, bool& decimalPoint) :391
void NumericFormatter__FormatCustomDoublePart_fn(uString* doubleFormat, double* d, bool* decimalPoint, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustomDoublePart(doubleFormat, *d, decimalPoint);
}

// private static string FormatCustomIntegerPart(string integerFormat, ulong value) :432
void NumericFormatter__FormatCustomIntegerPart_fn(uString* integerFormat, uint64_t* value, uString** __retval)
{
    *__retval = NumericFormatter::FormatCustomIntegerPart(integerFormat, *value);
}

// private static string FormatDecimal(string formatString, ulong l) :124
void NumericFormatter__FormatDecimal_fn(uString* formatString, uint64_t* l, uString** __retval)
{
    *__retval = NumericFormatter::FormatDecimal(formatString, *l);
}

// private static string FormatDecimal(ulong l, int digits) :130
void NumericFormatter__FormatDecimal1_fn(uint64_t* l, int32_t* digits, uString** __retval)
{
    *__retval = NumericFormatter::FormatDecimal1(*l, *digits);
}

// private static string FormatExponential(double d, int digits, char exponentSymbol) :220
void NumericFormatter__FormatExponential_fn(double* d, int32_t* digits, char16_t* exponentSymbol, uString** __retval)
{
    *__retval = NumericFormatter::FormatExponential(*d, *digits, *exponentSymbol);
}

// private static string FormatExponential(string formatString, double d) :239
void NumericFormatter__FormatExponential1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatExponential1(formatString, *d);
}

// private static string FormatFixedPoint(double d, int desiredDigits) :157
void NumericFormatter__FormatFixedPoint_fn(double* d, int32_t* desiredDigits, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint(*d, *desiredDigits);
}

// private static string FormatFixedPoint(string formatString, double d) :149
void NumericFormatter__FormatFixedPoint1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint1(formatString, *d);
}

// private static string FormatFixedPoint(string formatString, ulong d) :135
void NumericFormatter__FormatFixedPoint2_fn(uString* formatString, uint64_t* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatFixedPoint2(formatString, *d);
}

// private static string FormatGeneral(string formatString, double d, int defaultPrecision) :280
void NumericFormatter__FormatGeneral_fn(uString* formatString, double* d, int32_t* defaultPrecision, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral(formatString, *d, *defaultPrecision);
}

// private static string FormatGeneral(string formatString, float f) :275
void NumericFormatter__FormatGeneral1_fn(uString* formatString, float* f, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral1(formatString, *f);
}

// private static string FormatGeneral(string formatString, ulong i) :248
void NumericFormatter__FormatGeneral2_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatGeneral2(formatString, *i);
}

// private static string FormatHex(string formatString, ulong l, int maxLength) :212
void NumericFormatter__FormatHex_fn(uString* formatString, uint64_t* l, int32_t* maxLength, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex(formatString, *l, *maxLength);
}

// private static string FormatHex(ulong l, int maxLength, bool upperCase) :196
void NumericFormatter__FormatHex1_fn(uint64_t* l, int32_t* maxLength, bool* upperCase, uString** __retval)
{
    *__retval = NumericFormatter::FormatHex1(*l, *maxLength, *upperCase);
}

// private static string FormatNumber(double d) :341
void NumericFormatter__FormatNumber_fn(double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber(*d);
}

// private static string FormatNumber(string formatString, double d) :330
void NumericFormatter__FormatNumber1_fn(uString* formatString, double* d, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber1(formatString, *d);
}

// private static string FormatNumber(string formatString, ulong i) :322
void NumericFormatter__FormatNumber2_fn(uString* formatString, uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber2(formatString, *i);
}

// private static string FormatNumber(ulong i) :348
void NumericFormatter__FormatNumber3_fn(uint64_t* i, uString** __retval)
{
    *__retval = NumericFormatter::FormatNumber3(*i);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetFormatSpecifier(string formatString) :529
void NumericFormatter__GetFormatSpecifier_fn(uString* formatString, int32_t* __retval)
{
    *__retval = NumericFormatter::GetFormatSpecifier(formatString);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetStandartFormat(char symbol) :544
void NumericFormatter__GetStandartFormat_fn(char16_t* symbol, int32_t* __retval)
{
    *__retval = NumericFormatter::GetStandartFormat(*symbol);
}

// private static bool IsLetter(char symbol) :498
void NumericFormatter__IsLetter_fn(char16_t* symbol, bool* __retval)
{
    *__retval = NumericFormatter::IsLetter(*symbol);
}

// private static string Pad(string unmodified, int minLength) :503
void NumericFormatter__Pad_fn(uString* unmodified, int32_t* minLength, uString** __retval)
{
    *__retval = NumericFormatter::Pad(unmodified, *minLength);
}

// private static string Padding(int length) :519
void NumericFormatter__Padding_fn(int32_t* length, uString** __retval)
{
    *__retval = NumericFormatter::Padding(*length);
}

// private static string PruneNeedlessDecimals(string str) :261
void NumericFormatter__PruneNeedlessDecimals_fn(uString* str, uString** __retval)
{
    *__retval = NumericFormatter::PruneNeedlessDecimals(str);
}

// private static double RoundToDigits(double value, int digits) :141
void NumericFormatter__RoundToDigits_fn(double* value, int32_t* digits, double* __retval)
{
    *__retval = NumericFormatter::RoundToDigits(*value, *digits);
}

int32_t NumericFormatter::NumberDecimalDigits_;
int32_t NumericFormatter::ExponentialDigits_;
uSStrong<uString*> NumericFormatter::_decimalPoint_;
uSStrong<uArray*> NumericFormatter::lowerHexChars_;
uSStrong<uArray*> NumericFormatter::upperHexChars_;

// private static void CalculateExponential(double d, double& significand, int& exponent) [static] :469
void NumericFormatter::CalculateExponential(double d, double* significand, int32_t* exponent)
{
    NumericFormatter_typeof()->Init();
    *exponent = 0;
    *significand = 0.0;

    if (d != 0.0)
    {
        double abs = ::g::Uno::Math::Abs(d);
        *exponent = (int32_t)::g::Uno::Math::Floor(::g::Uno::Math::Log10(abs));

        if (*exponent < -308)
        {
            abs = abs * 1e+16;
            double pow = ::g::Uno::Math::Pow(10.0, (double)-(*exponent + 16));
            *significand = abs * pow;
        }
        else
            *significand = abs * ::g::Uno::Math::Pow(10.0, (double)-(*exponent));
    }
}

// private static int Digits(string formatString) [static] :489
int32_t NumericFormatter::Digits(uString* formatString)
{
    NumericFormatter_typeof()->Init();
    int32_t digits;

    if (!::g::Uno::Int::TryParse(::g::Uno::String::Substring(uPtr(formatString), 1), &digits))
        return -1;

    return digits;
}

// public static string Format(string formatString, bool i) [static] :37
uString* NumericFormatter::Format(uString* formatString, bool i)
{
    NumericFormatter_typeof()->Init();
    return ::g::Uno::Bool::ToString(i, ::TYPES[1/*bool*/]);
}

// public static string Format(string formatString, double d) [static] :103
uString* NumericFormatter::Format1(uString* formatString, double d)
{
    NumericFormatter_typeof()->Init();

    switch (NumericFormatter::GetFormatSpecifier(formatString))
    {
        case 1:
            return NumericFormatter::FormatFixedPoint1(formatString, d);
        case 3:
            return NumericFormatter::FormatExponential1(formatString, d);
        case 4:
            return NumericFormatter::FormatGeneral(formatString, d, 15);
        case 5:
            return ::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber1(formatString, 100.0 * d), ::STRINGS[2/*" %"*/]);
        case 6:
            return NumericFormatter::FormatNumber1(formatString, d);
        case 7:
            return NumericFormatter::FormatCustom(formatString, d);
        default:
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Format spec...*/]));
    }
}

// public static string Format(string formatString, float f) [static] :96
uString* NumericFormatter::Format2(uString* formatString, float f)
{
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 4)
        return NumericFormatter::FormatGeneral1(formatString, f);

    return NumericFormatter::Format1(formatString, (double)f);
}

// public static string Format(string formatString, int i) [static] :56
uString* NumericFormatter::Format3(uString* formatString, int32_t i)
{
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex(formatString, (uint64_t)(uint32_t)i, 8);

    return NumericFormatter::Format4(formatString, (int64_t)i);
}

// public static string Format(string formatString, long i) [static] :63
uString* NumericFormatter::Format4(uString* formatString, int64_t i)
{
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex(formatString, (uint64_t)i, 16);
    else if (i >= 0LL)
        return NumericFormatter::Format7(formatString, (uint64_t)i);
    else
        return ::g::Uno::String::op_Addition2(::STRINGS[3/*"-"*/], NumericFormatter::Format7(formatString, (uint64_t)(i * -1LL)));
}

// public static string Format(string formatString, sbyte b) [static] :42
uString* NumericFormatter::Format5(uString* formatString, int8_t b)
{
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex(formatString, (uint64_t)(uint8_t)b, 8);

    return NumericFormatter::Format4(formatString, (int64_t)b);
}

// public static string Format(string formatString, short s) [static] :49
uString* NumericFormatter::Format6(uString* formatString, int16_t s)
{
    NumericFormatter_typeof()->Init();

    if (NumericFormatter::GetFormatSpecifier(formatString) == 2)
        return NumericFormatter::FormatHex(formatString, (uint64_t)(uint16_t)s, 8);

    return NumericFormatter::Format4(formatString, (int64_t)s);
}

// public static string Format(string formatString, ulong i) [static] :73
uString* NumericFormatter::Format7(uString* formatString, uint64_t i)
{
    NumericFormatter_typeof()->Init();

    switch (NumericFormatter::GetFormatSpecifier(formatString))
    {
        case 0:
            return NumericFormatter::FormatDecimal(formatString, i);
        case 1:
            return NumericFormatter::FormatFixedPoint2(formatString, i);
        case 2:
            return NumericFormatter::FormatHex(formatString, i, 16);
        case 3:
            return NumericFormatter::FormatExponential1(formatString, (double)i);
        case 4:
            return NumericFormatter::FormatGeneral2(formatString, i);
        case 5:
            return ::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber2(formatString, 100ULL * i), ::STRINGS[2/*" %"*/]);
        case 6:
            return NumericFormatter::FormatNumber2(formatString, i);
        default:
            return NumericFormatter::FormatCustom1(formatString, i);
    }
}

// private static string FormatCustom(string formatString, double value) [static] :378
uString* NumericFormatter::FormatCustom(uString* formatString, double value)
{
    NumericFormatter_typeof()->Init();
    double absoluteValue = ::g::Uno::Math::Abs(value);
    int32_t decimalPoint = ::g::Uno::String::IndexOf(uPtr(formatString), '.');

    if (decimalPoint == -1)
        return NumericFormatter::FormatCustomIntegerPart(formatString, (uint64_t)absoluteValue);

    bool hasDecimalPoint;
    uString* integerPart = NumericFormatter::FormatCustomIntegerPart(::g::Uno::String::Substring1(formatString, 0, decimalPoint), (uint64_t)absoluteValue);
    uString* doublePart = NumericFormatter::FormatCustomDoublePart(::g::Uno::String::Substring(formatString, decimalPoint + 1), absoluteValue, &hasDecimalPoint);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((value < 0.0) ? ::STRINGS[3/*"-"*/] : (uString*)::g::Uno::String::Empty(), integerPart), hasDecimalPoint ? ::STRINGS[4/*"."*/] : (uString*)::g::Uno::String::Empty()), doublePart);
}

// private static string FormatCustom(string formatString, ulong value) [static] :366
uString* NumericFormatter::FormatCustom1(uString* formatString, uint64_t value)
{
    NumericFormatter_typeof()->Init();
    int32_t decimalPoint = ::g::Uno::String::IndexOf(uPtr(formatString), '.');

    if (decimalPoint == -1)
        return NumericFormatter::FormatCustomIntegerPart(formatString, value);

    bool hasDecimalPoint;
    uString* integerPart = NumericFormatter::FormatCustomIntegerPart(::g::Uno::String::Substring1(formatString, 0, decimalPoint), value);
    uString* doublePart = NumericFormatter::FormatCustomDoublePart(::g::Uno::String::Substring(formatString, decimalPoint + 1), 0.0, &hasDecimalPoint);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(integerPart, hasDecimalPoint ? ::STRINGS[4/*"."*/] : (uString*)::g::Uno::String::Empty()), doublePart);
}

// private static string FormatCustomDoublePart(string doubleFormat, double d, bool& decimalPoint) [static] :391
uString* NumericFormatter::FormatCustomDoublePart(uString* doubleFormat, double d, bool* decimalPoint)
{
    NumericFormatter_typeof()->Init();
    int32_t precision = 0;
    bool hasZero = false;
    uArray* processedFormat = ::g::Uno::String::ToCharArray(uPtr(doubleFormat));

    for (int32_t i = uPtr(processedFormat)->Length() - 1; i >= 0; i--)
    {
        if (uPtr(processedFormat)->Item<char16_t>(i) == '0')
            hasZero = true;

        if ((uPtr(processedFormat)->Item<char16_t>(i) == '0') || (uPtr(processedFormat)->Item<char16_t>(i) == '#'))
        {
            uPtr(processedFormat)->Item<char16_t>(i) = hasZero ? '0' : uPtr(processedFormat)->Item<char16_t>(i);
            precision++;
        }
    }

    uString* raw = ::g::Uno::Double::ToString(NumericFormatter::RoundToDigits(d, precision), ::TYPES[12/*double*/]);
    int32_t index = ::g::Uno::String::IndexOf3(uPtr(raw), NumericFormatter::DecimalPoint(), 0) + 1;
    *decimalPoint = (index != 0) || hasZero;

    if (index == 0)
        index = uPtr(raw)->Length();

    ::g::Uno::Collections::List* formatted = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[14/*Uno.Collections.List<char>*/], processedFormat->Length());

    for (int32_t i1 = 0; i1 < processedFormat->Length(); i1++)

        switch (uPtr(processedFormat)->Item<char16_t>(i1))
        {
            case '0':
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<char16_t>((index >= uPtr(raw)->Length()) ? '0' : uPtr(raw)->Item(index++)));
                break;
            }
            case '#':
            {
                if (index < uPtr(raw)->Length())
                    ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<char16_t>(uPtr(raw)->Item(index++)));

                break;
            }
            case '.':
                break;
            default:
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(formatted), uCRef<char16_t>(uPtr(processedFormat)->Item<char16_t>(i1)));
                break;
            }
        }

    return uString::CharArray((uArray*)formatted->ToArray());
}

// private static string FormatCustomIntegerPart(string integerFormat, ulong value) [static] :432
uString* NumericFormatter::FormatCustomIntegerPart(uString* integerFormat, uint64_t value)
{
    NumericFormatter_typeof()->Init();
    uString* raw = ::g::Uno::ULong::ToString(value, ::TYPES[10/*ulong*/]);
    int32_t rawIndex = (value == 0ULL) ? -1 : uPtr(raw)->Length() - 1;
    uArray* formatted = uArray::New(::TYPES[13/*char[]*/], uPtr(integerFormat)->Length());
    int32_t index = integerFormat->Length() - 1;
    int32_t lastNumber = 0;

    for (int32_t i = integerFormat->Length() - 1; i >= 0; i--)

        switch (uPtr(integerFormat)->Item(i))
        {
            case '0':
            {
                lastNumber = i;
                uPtr(formatted)->Item<char16_t>(index--) = (rawIndex < 0) ? '0' : uPtr(raw)->Item(rawIndex--);
                break;
            }
            case '#':
            {
                lastNumber = i;

                if (rawIndex >= 0)
                    uPtr(formatted)->Item<char16_t>(index--) = uPtr(raw)->Item(rawIndex--);

                break;
            }
            default:
            {
                uPtr(formatted)->Item<char16_t>(index--) = uPtr(integerFormat)->Item(i);
                break;
            }
        }

    uString* formattedString = uString::CharArray(formatted);

    if (index != -1)
        formattedString = ::g::Uno::String::Substring(uPtr(formattedString), index + 1);

    if (rawIndex >= 0)
        return ::g::Uno::String::Insert(uPtr(formattedString), lastNumber, ::g::Uno::String::Substring1(uPtr(raw), 0, rawIndex + 1));

    return formattedString;
}

// private static string FormatDecimal(string formatString, ulong l) [static] :124
uString* NumericFormatter::FormatDecimal(uString* formatString, uint64_t l)
{
    NumericFormatter_typeof()->Init();
    int32_t digits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : 0;
    return NumericFormatter::FormatDecimal1(l, digits);
}

// private static string FormatDecimal(ulong l, int digits) [static] :130
uString* NumericFormatter::FormatDecimal1(uint64_t l, int32_t digits)
{
    NumericFormatter_typeof()->Init();
    return ::g::Uno::String::PadLeft1(uPtr(::g::Uno::ULong::ToString(l, ::TYPES[10/*ulong*/])), digits, '0');
}

// private static string FormatExponential(double d, int digits, char exponentSymbol) [static] :220
uString* NumericFormatter::FormatExponential(double d, int32_t digits, char16_t exponentSymbol)
{
    NumericFormatter_typeof()->Init();
    int32_t exponent = 0;
    double significand = 0.0;
    NumericFormatter::CalculateExponential(d, &significand, &exponent);
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    if (d < 0.0)
        uPtr(sb)->Append('-');

    sb->Append2(NumericFormatter::FormatFixedPoint(significand, digits));
    sb->Append(exponentSymbol);
    sb->Append((exponent < 0) ? '-' : '+');
    sb->Append2(NumericFormatter::FormatDecimal1((uint64_t)::g::Uno::Math::Abs5(exponent), 3));
    return sb->ToString();
}

// private static string FormatExponential(string formatString, double d) [static] :239
uString* NumericFormatter::FormatExponential1(uString* formatString, double d)
{
    NumericFormatter_typeof()->Init();
    int32_t digits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::ExponentialDigits_;
    char16_t exponentSymbol = ::g::Uno::Char::IsUpper(formatString->Item(0)) ? 'E' : 'e';
    return NumericFormatter::FormatExponential(d, digits, exponentSymbol);
}

// private static string FormatFixedPoint(double d, int desiredDigits) [static] :157
uString* NumericFormatter::FormatFixedPoint(double d, int32_t desiredDigits)
{
    NumericFormatter_typeof()->Init();
    // make sure -0 gets formated as 0
    if (d == 0.0)
        d = 0.0;
    
    char buf[64];
    int len = snprintf(buf, sizeof(buf), "%.*f", desiredDigits, d);
    if (len < 0 && errno == ERANGE)
    {
        // Some snprintf implementations return -1 and sets errno to
        // ERANGE instead of returning the desired length, so let's
        // reconstruct the value we want here.
        len = snprintf(NULL, 0, "%.*f", desiredDigits, d);
        U_ASSERT(len > sizeof(buf));
    }
    
    char* ptr = buf;
    if (len > sizeof(buf))
    {
        // Stackalloc bigger buffer, and try again
        ptr = (char*)alloca(len + 1);
        len = snprintf(ptr, len + 1, "%.*f", desiredDigits, d);
    }
    
    U_ASSERT(len >= 0);
    return uString::Ansi(ptr, len);
}

// private static string FormatFixedPoint(string formatString, double d) [static] :149
uString* NumericFormatter::FormatFixedPoint1(uString* formatString, double d)
{
    NumericFormatter_typeof()->Init();
    int32_t desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_;
    return NumericFormatter::FormatFixedPoint(d, desiredDigits);
}

// private static string FormatFixedPoint(string formatString, ulong d) [static] :135
uString* NumericFormatter::FormatFixedPoint2(uString* formatString, uint64_t d)
{
    NumericFormatter_typeof()->Init();
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::ULong::ToString(d, ::TYPES[10/*ulong*/]), NumericFormatter::DecimalPoint()), NumericFormatter::Padding((uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_));
}

// private static string FormatGeneral(string formatString, double d, int defaultPrecision) [static] :280
uString* NumericFormatter::FormatGeneral(uString* formatString, double d, int32_t defaultPrecision)
{
    NumericFormatter_typeof()->Init();

    if (d == 0.0)
        return ::STRINGS[5/*"0"*/];

    int32_t desiredDigits = NumericFormatter::Digits(formatString);

    if (desiredDigits < 1)
        desiredDigits = defaultPrecision;

    if (d == 0.0)
        return ::STRINGS[5/*"0"*/];

    double magnitude = ::g::Uno::Math::Log10(::g::Uno::Math::Abs(d));

    if (magnitude < (double)desiredDigits)
    {
        int32_t intDigits = (int32_t)::g::Uno::Math::Ceil(magnitude);
        uString* str = NumericFormatter::FormatFixedPoint(d, desiredDigits - intDigits);
        return NumericFormatter::PruneNeedlessDecimals(str);
    }

    int32_t exponent = 0;
    double significand = 0.0;
    NumericFormatter::CalculateExponential(d, &significand, &exponent);
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    if (d < 0.0)
        uPtr(sb)->Append('-');

    int32_t significandDigits = ::g::Uno::Math::Max8(0, desiredDigits - 1);
    significand = ::g::Uno::Math::Round1(significand, significandDigits);
    sb->Append2(NumericFormatter::PruneNeedlessDecimals(NumericFormatter::FormatFixedPoint(significand, significandDigits)));
    sb->Append(::g::Uno::Char::IsUpper(uPtr(formatString)->Item(0)) ? 'E' : 'e');
    sb->Append((exponent < 0) ? '-' : '+');
    sb->Append2(NumericFormatter::FormatDecimal1((uint64_t)::g::Uno::Math::Abs5(exponent), 2));
    return sb->ToString();
}

// private static string FormatGeneral(string formatString, float f) [static] :275
uString* NumericFormatter::FormatGeneral1(uString* formatString, float f)
{
    NumericFormatter_typeof()->Init();
    return NumericFormatter::FormatGeneral(formatString, (double)f, 7);
}

// private static string FormatGeneral(string formatString, ulong i) [static] :248
uString* NumericFormatter::FormatGeneral2(uString* formatString, uint64_t i)
{
    NumericFormatter_typeof()->Init();

    if (uPtr(formatString)->Length() == 1)
        return ::g::Uno::ULong::ToString(i, ::TYPES[10/*ulong*/]);

    int32_t desiredDigits = NumericFormatter::Digits(formatString);
    uString* str = ::g::Uno::ULong::ToString(i, ::TYPES[10/*ulong*/]);

    if ((desiredDigits >= uPtr(str)->Length()) || (desiredDigits == 0))
        return str;

    uString* rounded = ::g::Uno::Double::ToString(NumericFormatter::RoundToDigits((double)i / (double)::g::Uno::Math::Pow1(10.0f, (float)(uPtr(str)->Length() - 1)), desiredDigits - 1), ::TYPES[12/*double*/]);
    uString* exponent = ::g::Uno::Int::ToString(str->Length() - 1, ::TYPES[7/*int*/]);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(rounded, ::STRINGS[6/*"E+"*/]), NumericFormatter::Padding(2 - uPtr(exponent)->Length())), exponent);
}

// private static string FormatHex(string formatString, ulong l, int maxLength) [static] :212
uString* NumericFormatter::FormatHex(uString* formatString, uint64_t l, int32_t maxLength)
{
    NumericFormatter_typeof()->Init();
    int32_t desiredLength = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : 0;
    return NumericFormatter::Pad(NumericFormatter::FormatHex1(l, maxLength, ::g::Uno::Char::IsUpper(formatString->Item(0))), desiredLength);
}

// private static string FormatHex(ulong l, int maxLength, bool upperCase) [static] :196
uString* NumericFormatter::FormatHex1(uint64_t l, int32_t maxLength, bool upperCase)
{
    NumericFormatter_typeof()->Init();
    uArray* hexChars = upperCase ? (uArray*)NumericFormatter::upperHexChars_ : (uArray*)NumericFormatter::lowerHexChars_;
    uArray* buffer = uArray::New(::TYPES[13/*char[]*/], maxLength);
    int32_t index = maxLength;

    do
    {
        uPtr(buffer)->Item<char16_t>(--index) = uPtr(hexChars)->Item<char16_t>((int32_t)l & 15);
        l = l >> 4;
    }
    while (l != 0ULL);

    return uString::CharArrayRange(buffer, index, maxLength - index);
}

// private static string FormatNumber(double d) [static] :341
uString* NumericFormatter::FormatNumber(double d)
{
    NumericFormatter_typeof()->Init();

    if (d < 0.0)
        return ::g::Uno::String::op_Addition2(::STRINGS[3/*"-"*/], NumericFormatter::FormatNumber3((uint64_t)-d));

    return NumericFormatter::FormatNumber3((uint64_t)d);
}

// private static string FormatNumber(string formatString, double d) [static] :330
uString* NumericFormatter::FormatNumber1(uString* formatString, double d)
{
    NumericFormatter_typeof()->Init();
    int32_t desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_;
    double rounded = NumericFormatter::RoundToDigits(d, desiredDigits);

    if (desiredDigits == 0)
        return NumericFormatter::FormatNumber(rounded);

    uString* str = ::g::Uno::Double::ToString(rounded, ::TYPES[12/*double*/]);
    uString* residue = (::g::Uno::String::IndexOf3(uPtr(str), NumericFormatter::DecimalPoint(), 0) == -1) ? (uString*)::g::Uno::String::Empty() : (uString*)::g::Uno::String::Substring(uPtr(str), ::g::Uno::String::IndexOf3(uPtr(str), NumericFormatter::DecimalPoint(), 0) + 1);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber(rounded), NumericFormatter::DecimalPoint()), residue), NumericFormatter::Padding(desiredDigits - uPtr(residue)->Length()));
}

// private static string FormatNumber(string formatString, ulong i) [static] :322
uString* NumericFormatter::FormatNumber2(uString* formatString, uint64_t i)
{
    NumericFormatter_typeof()->Init();
    int32_t desiredDigits = (uPtr(formatString)->Length() > 1) ? NumericFormatter::Digits(formatString) : NumericFormatter::NumberDecimalDigits_;

    if (desiredDigits == 0)
        return NumericFormatter::FormatNumber3(i);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(NumericFormatter::FormatNumber3(i), ::STRINGS[4/*"."*/]), NumericFormatter::Padding(desiredDigits));
}

// private static string FormatNumber(ulong i) [static] :348
uString* NumericFormatter::FormatNumber3(uint64_t i)
{
    NumericFormatter_typeof()->Init();
    uString* str = ::g::Uno::ULong::ToString(i, ::TYPES[10/*ulong*/]);

    if (uPtr(str)->Length() <= 3)
        return str;

    int32_t start = ((uPtr(str)->Length() % 3) == 0) ? 3 : uPtr(str)->Length() % 3;
    ::g::Uno::Text::StringBuilder* result = ::g::Uno::Text::StringBuilder::New1();
    result->Append2(::g::Uno::String::Substring1(str, 0, start));

    for (int32_t index = start; index < str->Length(); index = index + 3)
    {
        uPtr(result)->Append2(::STRINGS[7/*","*/]);
        result->Append2(::g::Uno::String::Substring1(uPtr(str), index, 3));
    }

    return result->ToString();
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetFormatSpecifier(string formatString) [static] :529
int32_t NumericFormatter::GetFormatSpecifier(uString* formatString)
{
    NumericFormatter_typeof()->Init();
    char16_t symbol = ::g::Uno::Char::ToUpper(uPtr(formatString)->Item(0));

    if ((formatString->Length() == 1) && NumericFormatter::IsLetter(symbol))
        return NumericFormatter::GetStandartFormat(symbol);

    int32_t decimals = NumericFormatter::Digits(formatString);

    if ((decimals < 0) || (decimals > 99))
        return 7;

    if (uPtr(::g::Uno::String::Trim1(formatString, uArray::Init<int32_t>(::TYPES[13/*char[]*/], 1, '0')))->Length() == 0)
        return 7;

    return NumericFormatter::GetStandartFormat(symbol);
}

// private static Uno.Runtime.Implementation.Internal.FormatSpecifier GetStandartFormat(char symbol) [static] :544
int32_t NumericFormatter::GetStandartFormat(char16_t symbol)
{
    NumericFormatter_typeof()->Init();

    switch (symbol)
    {
        case 'X':
            return 2;
        case 'D':
            return 0;
        case 'F':
            return 1;
        case 'G':
            return 4;
        case 'N':
            return 6;
        case 'E':
            return 3;
        case 'P':
            return 5;
        default:
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Format spec...*/]));
    }
}

// private static bool IsLetter(char symbol) [static] :498
bool NumericFormatter::IsLetter(char16_t symbol)
{
    NumericFormatter_typeof()->Init();
    return (symbol >= 'A') && (symbol <= 'Z');
}

// private static string Pad(string unmodified, int minLength) [static] :503
uString* NumericFormatter::Pad(uString* unmodified, int32_t minLength)
{
    NumericFormatter_typeof()->Init();
    int32_t actualLength = uPtr(unmodified)->Length();

    if (minLength <= actualLength)
        return unmodified;

    uString* padding = NumericFormatter::Padding(minLength - actualLength);
    return ::g::Uno::String::op_Addition2(padding, unmodified);
}

// private static string Padding(int length) [static] :519
uString* NumericFormatter::Padding(int32_t length)
{
    NumericFormatter_typeof()->Init();

    if (length <= 0)
        return ::STRINGS[8/*""*/];

    uArray* padding = uArray::New(::TYPES[13/*char[]*/], length);

    for (int32_t i = 0; i < length; i++)
        uPtr(padding)->Item<char16_t>(i) = '0';

    return uString::CharArray(padding);
}

// private static string PruneNeedlessDecimals(string str) [static] :261
uString* NumericFormatter::PruneNeedlessDecimals(uString* str)
{
    NumericFormatter_typeof()->Init();

    if (::g::Uno::String::IndexOf(uPtr(str), '.') >= 0)
        return ::g::Uno::String::TrimEnd(uPtr(::g::Uno::String::TrimEnd(uPtr(str), uArray::Init<int32_t>(::TYPES[13/*char[]*/], 1, '0'))), uArray::Init<int32_t>(::TYPES[13/*char[]*/], 1, '.'));

    return str;
}

// private static double RoundToDigits(double value, int digits) [static] :141
double NumericFormatter::RoundToDigits(double value, int32_t digits)
{
    NumericFormatter_typeof()->Init();
    int64_t multiplier = (int64_t)::g::Uno::Math::Pow1(10.0f, (float)digits);
    int64_t intPart = (int64_t)value;
    double decimalPart = ::g::Uno::Math::Round((value - (double)intPart) * (double)multiplier) / (double)multiplier;
    return (double)intPart + decimalPart;
}

// private static string get_DecimalPoint() [static] :27
uString* NumericFormatter::DecimalPoint()
{
    NumericFormatter_typeof()->Init();

    if (::g::Uno::String::op_Equality(NumericFormatter::_decimalPoint_, NULL))
        NumericFormatter::_decimalPoint_ = ::g::Uno::Char::ToString(uPtr(::g::Uno::Double::ToString(1.1, ::TYPES[12/*double*/]))->Item(1), ::TYPES[2/*char*/]);

    return NumericFormatter::_decimalPoint_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/Internal/FormatStringTokenizer.uno
// ---------------------------------------------------------------------------------------------------------------------

// private enum FormatStringTokenizer.State :7
uEnumType* FormatStringTokenizer__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Beginning", 0LL,
        "Literal", 1LL,
        "FirstCurly", 2LL,
        "FormatItem", 3LL,
        "End", 4LL);
    return type;
}

}}}}} // ::g::Uno::Runtime::Implementation::Internal
