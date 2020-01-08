// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UnoCore_bundle.h>
#include <uBase/BufferStream.h>
#include <uBase/Bundle.h>
#include <uImage/Bitmap.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Content.Fonts.BitmapFont.CharPair.h>
#include <Uno.Content.Fonts.BitmapFont.GlyphInfo.h>
#include <Uno.Content.Fonts.BitmapFont.h>
#include <Uno.Content.Fonts.CppFontFace.h>
#include <Uno.Content.Fonts.CppFontFaceHandle.h>
#include <Uno.Content.Fonts.DefaultTextTransform.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Content.Fonts.FontFaceHelpers.h>
#include <Uno.Content.Fonts.RenderedGlyph.h>
#include <Uno.Content.Fonts.SpriteFontShader.h>
#include <Uno.Content.Fonts.TextRenderer.h>
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Content.Fonts.TextShaderData.h>
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno/Support.h>
static uString* STRINGS[4];
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/BitmapFont.uno
// ----------------------------------------------------------------------------------------

// public sealed class BitmapFont :7
// {
static void BitmapFont_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BitmapFont_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), BitmapFont__GlyphInfo_typeof(), NULL), offsetof(BitmapFont, Glyphs), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Float_typeof(), NULL), offsetof(BitmapFont, Advances), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof(), NULL), offsetof(BitmapFont, Kernings), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(BitmapFont, Texture), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, Ascent), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, Descent), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, LineHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, PixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, PixelSpread), 0,
        ::g::Uno::String_typeof(), offsetof(BitmapFont, FamilyName), 0,
        ::g::Uno::String_typeof(), offsetof(BitmapFont, StyleName), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(BitmapFont, FontFace), 0);
}

BitmapFont_type* BitmapFont_typeof()
{
    static uSStrong<BitmapFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BitmapFont);
    options.TypeSize = sizeof(BitmapFont_type);
    type = (BitmapFont_type*)uClassType::New("Uno.Content.Fonts.BitmapFont", options);
    type->fp_build_ = BitmapFont_build;
    type->fp_ctor_ = (void*)BitmapFont__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BitmapFont__UnoIDisposableDispose_fn;
    return type;
}

// internal BitmapFont() :54
void BitmapFont__ctor__fn(BitmapFont* __this)
{
    __this->ctor_();
}

// internal BitmapFont New() :54
void BitmapFont__New1_fn(BitmapFont** __retval)
{
    *__retval = BitmapFont::New1();
}

// private void Uno.IDisposable.Dispose() :58
void BitmapFont__UnoIDisposableDispose_fn(BitmapFont* __this)
{
    uPtr(__this->Texture)->Dispose();
}

// internal BitmapFont() [instance] :54
void BitmapFont::ctor_()
{
    Glyphs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[3/*char*/], BitmapFont__GlyphInfo_typeof(), NULL)));
    Advances = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[3/*char*/], ::g::Uno::Float_typeof(), NULL)));
    Kernings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof(), NULL)));
}

// internal BitmapFont New() [static] :54
BitmapFont* BitmapFont::New1()
{
    BitmapFont* obj1 = (BitmapFont*)uNew(BitmapFont_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/BitmapFont.uno
// ----------------------------------------------------------------------------------------

// public struct BitmapFont.CharPair :18
// {
static void BitmapFont__CharPair_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Char_typeof(), offsetof(BitmapFont__CharPair, Left), 0,
        ::g::Uno::Char_typeof(), offsetof(BitmapFont__CharPair, Right), 0);
}

uStructType* BitmapFont__CharPair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(BitmapFont__CharPair);
    options.ValueSize = sizeof(BitmapFont__CharPair);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.BitmapFont.CharPair", options);
    type->fp_build_ = BitmapFont__CharPair_build;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))BitmapFont__CharPair__GetHashCode_fn;
    return type;
}

// public CharPair(char left, char right) :22
void BitmapFont__CharPair__ctor_1_fn(BitmapFont__CharPair* __this, char16_t* left, char16_t* right)
{
    __this->ctor_1(*left, *right);
}

// public override sealed int GetHashCode() :28
void BitmapFont__CharPair__GetHashCode_fn(BitmapFont__CharPair* __this, uType* __type, int32_t* __retval)
{
    int32_t hash = 27;
    hash = (hash * 13) + (int32_t)__this->Left;
    hash = (hash * 13) + (int32_t)__this->Right;
    return *__retval = hash, void();
}

// public CharPair New(char left, char right) :22
void BitmapFont__CharPair__New1_fn(char16_t* left, char16_t* right, BitmapFont__CharPair* __retval)
{
    *__retval = BitmapFont__CharPair__New1(*left, *right);
}

// public CharPair(char left, char right) [instance] :22
void BitmapFont__CharPair::ctor_1(char16_t left, char16_t right)
{
    Left = left;
    Right = right;
}

// public CharPair New(char left, char right) [static] :22
BitmapFont__CharPair BitmapFont__CharPair__New1(char16_t left, char16_t right)
{
    BitmapFont__CharPair obj1;
    obj1.ctor_1(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/CppFontFace.uno
// -----------------------------------------------------------------------------------------

// internal sealed extern class CppFontFace :20
// {
static void CppFontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Content::Fonts::FontFace_type, interface0));
    type->SetFields(0,
        ::g::Uno::Content::Fonts::CppFontFaceHandle_typeof(), offsetof(CppFontFace, _handle), 0);
}

::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::FontFace_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppFontFace);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::FontFace_type);
    type = (::g::Uno::Content::Fonts::FontFace_type*)uClassType::New("Uno.Content.Fonts.CppFontFace", options);
    type->fp_build_ = CppFontFace_build;
    type->fp_ContainsGlyph = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, char16_t*, bool*))CppFontFace__ContainsGlyph_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Content::Fonts::FontFace*))CppFontFace__Dispose_fn;
    type->fp_get_FamilyName = (void(*)(::g::Uno::Content::Fonts::FontFace*, uString**))CppFontFace__get_FamilyName_fn;
    type->fp_GetAscender = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetAscender_fn;
    type->fp_GetDescender = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetDescender_fn;
    type->fp_GetLineHeight = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetLineHeight_fn;
    type->fp_RenderGlyph = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, char16_t*, ::g::Uno::Content::Fonts::RenderedGlyph*))CppFontFace__RenderGlyph_fn;
    type->fp_get_StyleName = (void(*)(::g::Uno::Content::Fonts::FontFace*, uString**))CppFontFace__get_StyleName_fn;
    type->fp_TryGetKerning = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, char16_t*, char16_t*, ::g::Uno::Float2*, bool*))CppFontFace__TryGetKerning_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CppFontFace__Dispose_fn;
    return type;
}

// public CppFontFace(byte[] data, int offset, int length) :41
void CppFontFace__ctor_1_fn(CppFontFace* __this, uArray* data, int32_t* offset, int32_t* length)
{
    __this->ctor_1(data, *offset, *length);
}

// public CppFontFace(Uno.IO.BundleFile file) :36
void CppFontFace__ctor_2_fn(CppFontFace* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->ctor_2(file);
}

// public override sealed bool ContainsGlyph(float size, char glyph) :77
void CppFontFace__ContainsGlyph_fn(CppFontFace* __this, float* size, char16_t* glyph, bool* __retval)
{
    float size_ = *size;
    char16_t glyph_ = *glyph;
    return *__retval = __this->_handle->ContainsGlyph(size_, glyph_), void();
}

// public override sealed void Dispose() :46
void CppFontFace__Dispose_fn(CppFontFace* __this)
{
    __this->_handle->Release();
    __this->_handle = 0;
}

// public override sealed string get_FamilyName() :54
void CppFontFace__get_FamilyName_fn(CppFontFace* __this, uString** __retval)
{
    return *__retval = uStringFromXliString(__this->_handle->GetFamilyName()), void();
}

// public override sealed float GetAscender(float size) :62
void CppFontFace__GetAscender_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetAscender(size_), void();
}

// public override sealed float GetDescender(float size) :67
void CppFontFace__GetDescender_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetDescender(size_), void();
}

// public override sealed float GetLineHeight(float size) :72
void CppFontFace__GetLineHeight_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetLineHeight(size_), void();
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) :28
void CppFontFace__LoadFontFaceHandle_fn(uArray* data, int32_t* offset, int32_t* length, uImage::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle(data, *offset, *length);
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(string filename) :22
void CppFontFace__LoadFontFaceHandle1_fn(uString* filename, uImage::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle1(filename);
}

// public CppFontFace New(byte[] data, int offset, int length) :41
void CppFontFace__New1_fn(uArray* data, int32_t* offset, int32_t* length, CppFontFace** __retval)
{
    *__retval = CppFontFace::New1(data, *offset, *length);
}

// public CppFontFace New(Uno.IO.BundleFile file) :36
void CppFontFace__New2_fn(::g::Uno::IO::BundleFile* file, CppFontFace** __retval)
{
    *__retval = CppFontFace::New2(file);
}

// public override sealed Uno.Content.Fonts.RenderedGlyph RenderGlyph(float size, char glyph) :83
void CppFontFace__RenderGlyph_fn(CppFontFace* __this, float* size, char16_t* glyph, ::g::Uno::Content::Fonts::RenderedGlyph* __retval)
{
    float size_ = *size;
    char16_t glyph_ = *glyph;
    uBase::Vector2 advance, bearing;
    uBase::Auto<uImage::Bitmap> bitmap = __this->_handle->RenderGlyph(size_, glyph_, uImage::FontRenderModeNormal, &advance, &bearing);
    uArray* bytes = uArray::New(::g::Uno::Byte_typeof()->Array(), bitmap->GetSizeInBytes(), bitmap->GetPtr());
    
    return *__retval = ::g::Uno::Content::Fonts::RenderedGlyph__New1(::g::Uno::Float2__New2(advance.X, advance.Y), ::g::Uno::Float2__New2(bearing.X, bearing.Y), ::g::Uno::Int2__New2(bitmap->GetWidth(), bitmap->GetHeight()), 1, bytes), void();
}

// public override sealed string get_StyleName() :59
void CppFontFace__get_StyleName_fn(CppFontFace* __this, uString** __retval)
{
    return *__retval = uStringFromXliString(__this->_handle->GetStyleName()), void();
}

// public override sealed bool TryGetKerning(float size, char left, char right, float2& result) :97
void CppFontFace__TryGetKerning_fn(CppFontFace* __this, float* size, char16_t* left, char16_t* right, ::g::Uno::Float2* result, bool* __retval)
{
    float size_ = *size;
    char16_t left_ = *left;
    char16_t right_ = *right;
    uBase::Vector2 kerning;
    if (__this->_handle->TryGetKerning(size_, left_, right_, &kerning))
    {
        result->X = kerning.X;
        result->Y = kerning.Y;
        return *__retval = true, void();
    }
    
    result->X = result->Y = 0;
    return *__retval = false, void();
}

// public CppFontFace(byte[] data, int offset, int length) [instance] :41
void CppFontFace::ctor_1(uArray* data, int32_t offset, int32_t length)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle(data, offset, length);
}

// public CppFontFace(Uno.IO.BundleFile file) [instance] :36
void CppFontFace::ctor_2(::g::Uno::IO::BundleFile* file)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle1(uPtr(file)->BundlePath());
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) [static] :28
uImage::FontFace* CppFontFace::LoadFontFaceHandle(uArray* data, int32_t offset, int32_t length)
{
    uBase::BufferStream stream(new uBase::BufferPtr((char*)data->Ptr() + offset, length, false), true, false);
    return uImage::FontFace::Load(&stream);
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(string filename) [static] :22
uImage::FontFace* CppFontFace::LoadFontFaceHandle1(uString* filename)
{
    uBase::Auto<uBase::Stream> f = uBase::Bundle->OpenFile(uStringToXliString(filename));
    return uImage::FontFace::Load(f);
}

// public CppFontFace New(byte[] data, int offset, int length) [static] :41
CppFontFace* CppFontFace::New1(uArray* data, int32_t offset, int32_t length)
{
    CppFontFace* obj2 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj2->ctor_1(data, offset, length);
    return obj2;
}

// public CppFontFace New(Uno.IO.BundleFile file) [static] :36
CppFontFace* CppFontFace::New2(::g::Uno::IO::BundleFile* file)
{
    CppFontFace* obj1 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj1->ctor_2(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/CppFontFace.uno
// -----------------------------------------------------------------------------------------

// internal extern struct CppFontFaceHandle :12
// {
static void CppFontFaceHandle_build(uType* type)
{
}

uStructType* CppFontFaceHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(uImage::FontFace*);
    options.ValueSize = sizeof(uImage::FontFace*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.CppFontFaceHandle", options);
    type->fp_build_ = CppFontFaceHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/DefaultTextTransform.uno
// --------------------------------------------------------------------------------------------------

// public sealed class DefaultTextTransform :6
// {
static void DefaultTextTransform_build(uType* type)
{
    ::STRINGS[0] = uString::Const("DefaultTextTransform: Not implemented on mobile");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/DefaultTextTransform.uno");
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(DefaultTextTransform, _matrix), 0);
}

::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextTransform_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DefaultTextTransform);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextTransform_type);
    type = (::g::Uno::Content::Fonts::TextTransform_type*)uClassType::New("Uno.Content.Fonts.DefaultTextTransform", options);
    type->fp_build_ = DefaultTextTransform_build;
    type->fp_ctor_ = (void*)DefaultTextTransform__New1_fn;
    type->fp_get_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__get_Matrix_fn;
    type->fp_set_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__set_Matrix_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__ResolveClipSpaceMatrix_fn;
    return type;
}

// public generated DefaultTextTransform() :6
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this)
{
    __this->ctor_1();
}

// public override sealed float4x4 get_Matrix() :12
void DefaultTextTransform__get_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = __this->_matrix, void();
}

// public override sealed void set_Matrix(float4x4 value) :13
void DefaultTextTransform__set_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->_matrix = value_;
}

// public generated DefaultTextTransform New() :6
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval)
{
    *__retval = DefaultTextTransform::New1();
}

// public override sealed extern float4x4 ResolveClipSpaceMatrix() :24
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[0/*"DefaultText...*/], 0, ::STRINGS[1/*"/usr/local/...*/], 26);
    return *__retval = __this->_matrix, void();
}

// public generated DefaultTextTransform() [instance] :6
void DefaultTextTransform::ctor_1()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    ctor_();
}

// public generated DefaultTextTransform New() [static] :6
DefaultTextTransform* DefaultTextTransform::New1()
{
    DefaultTextTransform* obj1 = (DefaultTextTransform*)uNew(DefaultTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/FontFace.uno
// --------------------------------------------------------------------------------------

// public abstract class FontFace :8
// {
static void FontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FontFace_type, interface0));
}

FontFace_type* FontFace_typeof()
{
    static uSStrong<FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FontFace);
    options.TypeSize = sizeof(FontFace_type);
    type = (FontFace_type*)uClassType::New("Uno.Content.Fonts.FontFace", options);
    type->fp_build_ = FontFace_build;
    return type;
}

// protected generated FontFace() :8
void FontFace__ctor__fn(FontFace* __this)
{
    __this->ctor_();
}

// public static Uno.Content.Fonts.FontFace Load(string name, byte[] data, int offset, int length) :22
void FontFace__Load_fn(uString* name, uArray* data, int32_t* offset, int32_t* length, FontFace** __retval)
{
    *__retval = FontFace::Load(name, data, *offset, *length);
}

// public static Uno.Content.Fonts.FontFace Load(Uno.IO.BundleFile file) :10
void FontFace__Load1_fn(::g::Uno::IO::BundleFile* file, FontFace** __retval)
{
    *__retval = FontFace::Load1(file);
}

// protected generated FontFace() [instance] :8
void FontFace::ctor_()
{
}

// public static Uno.Content.Fonts.FontFace Load(string name, byte[] data, int offset, int length) [static] :22
FontFace* FontFace::Load(uString* name, uArray* data, int32_t offset, int32_t length)
{
    return ::g::Uno::Content::Fonts::CppFontFace::New1(data, offset, length);
}

// public static Uno.Content.Fonts.FontFace Load(Uno.IO.BundleFile file) [static] :10
FontFace* FontFace::Load1(::g::Uno::IO::BundleFile* file)
{
    return ::g::Uno::Content::Fonts::CppFontFace::New2(file);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/FontFaceHelpers.uno
// ---------------------------------------------------------------------------------------------

// public static class FontFaceHelpers :15
// {
static void FontFaceHelpers_build(uType* type)
{
    ::STRINGS[2] = uString::Const(" \300\200");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* FontFaceHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Content.Fonts.FontFaceHelpers", options);
    type->fp_build_ = FontFaceHelpers_build;
    return type;
}

// public static Uno.Content.Fonts.BitmapFont RenderSpriteFont(Uno.Content.Fonts.FontFace font, float size, string charset) :17
void FontFaceHelpers__RenderSpriteFont_fn(::g::Uno::Content::Fonts::FontFace* font, float* size, uString* charset, ::g::Uno::Content::Fonts::BitmapFont** __retval)
{
    *__retval = FontFaceHelpers::RenderSpriteFont(font, *size, charset);
}

// public static Uno.Content.Fonts.BitmapFont RenderSpriteFont(Uno.Content.Fonts.FontFace font, float size, string charset) [static] :17
::g::Uno::Content::Fonts::BitmapFont* FontFaceHelpers::RenderSpriteFont(::g::Uno::Content::Fonts::FontFace* font, float size, uString* charset)
{
    ::g::Uno::Content::Fonts::BitmapFont* collection1;
    bool ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<char16_t, ::g::Uno::Content::Fonts::RenderedGlyph> ret4;
    ::g::Uno::Collections::Dictionary* glyphs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>*/]);
    uString* charsetInclWs = ::g::Uno::String::op_Addition2(charset, ::STRINGS[2/*" \0"*/]);
    int32_t maxSize = 0;

    for (int32_t i = 0; i < uPtr(charsetInclWs)->Length(); i++)
    {
        char16_t c = uPtr(charsetInclWs)->Item(i);

        if (uPtr(font)->ContainsGlyph(size, c))
        {
            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(glyphs), uCRef<char16_t>(c), &ret3), ret3))
                continue;

            ::g::Uno::Content::Fonts::RenderedGlyph g = uPtr(font)->RenderGlyph(size, c);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(glyphs), uCRef<char16_t>(c), uCRef(g));

            if (g.Bitmap() != NULL)
            {
                maxSize = ::g::Uno::Math::Max8(maxSize, uPtr(g.Bitmap())->Size().X);
                maxSize = ::g::Uno::Math::Max8(maxSize, uPtr(g.Bitmap())->Size().Y);
            }
        }
    }

    int32_t sideCount = (int32_t)::g::Uno::Math::Ceil1(::g::Uno::Math::Sqrt1((float)glyphs->Count()));
    int32_t sideSize = ::g::Uno::Math::NextPow2(sideCount * maxSize);
    ::g::Uno::Content::Images::Bitmap* dst = ::g::Uno::Content::Images::Bitmap::New1(::g::Uno::Int2__New2(sideSize, sideSize), 1, NULL);
    ::g::Uno::Graphics::Texture2D* tex = ::g::Uno::Graphics::Texture2D::New1(dst->Size(), dst->Format(), true);
    collection1 = ::g::Uno::Content::Fonts::BitmapFont::New1();
    uPtr(collection1)->Texture = tex;
    uPtr(collection1)->Ascent = ::g::Uno::Math::Round2(uPtr(font)->GetAscender(size));
    uPtr(collection1)->Descent = ::g::Uno::Math::Round2(uPtr(font)->GetDescender(size));
    uPtr(collection1)->LineHeight = ::g::Uno::Math::Round2(uPtr(font)->GetLineHeight(size));
    uPtr(collection1)->PixelSize = size;
    uPtr(collection1)->PixelSpread = 0.0f;
    uPtr(collection1)->FontFace = font;
    uPtr(collection1)->FamilyName = uPtr(font)->FamilyName();
    uPtr(collection1)->StyleName = uPtr(font)->StyleName();
    ::g::Uno::Content::Fonts::BitmapFont* result = collection1;
    int32_t gi = 0;
    ::g::Uno::Collections::Dictionary__Enumerator<char16_t, ::g::Uno::Content::Fonts::RenderedGlyph> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(glyphs), &ret4), ret4);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<char16_t, ::g::Uno::Content::Fonts::RenderedGlyph> e = enum2.Current(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]);
                    int32_t dstX = (gi % sideCount) * (sideSize / sideCount);
                    int32_t dstY = ((gi / sideCount) % sideCount) * (sideSize / sideCount);
                    gi++;
                    ::g::Uno::Content::Images::Bitmap* src = e.Value(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Bitmap();
                    ::g::Uno::Float2 srcSize = ::g::Uno::Float2__New2(0.0f, 0.0f);

                    if (src != NULL)
                    {
                        srcSize = ::g::Uno::Float2__op_Implicit1(uPtr(src)->Size());
                        int32_t bpp = ::g::Uno::Graphics::FormatHelpers::GetStrideInBytes(src->Format());

                        for (int32_t srcY = 0; srcY < src->Size().Y; srcY++)

                            for (int32_t srcX = 0; srcX < uPtr(src)->Size().X; srcX++)
                                uPtr(uPtr(dst)->Buffer())->Item((((dstY + srcY) * uPtr(dst)->Size().X) + dstX) + srcX, uPtr(uPtr(src)->Buffer())->Item(((srcY * uPtr(src)->Size().X) + srcX) * bpp));
                    }

                    ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo g1;
                    g1.Advance = ::g::Uno::Math::Round2(e.Value(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Advance.X);
                    g1.Bearing = ::g::Uno::Math::Round4(e.Value(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Bearing);
                    g1.Size = srcSize;
                    g1.UpperLeft.X = (uint16_t)((65535.0 * (double)dstX) / (double)uPtr(dst)->Size().X);
                    g1.UpperLeft.Y = (uint16_t)((65535.0 * (double)dstY) / (double)dst->Size().Y);
                    g1.LowerRight.X = (uint16_t)((65535.0 * (double)((float)dstX + srcSize.X)) / (double)dst->Size().X);
                    g1.LowerRight.Y = (uint16_t)((65535.0 * (double)((float)dstY + srcSize.Y)) / (double)dst->Size().Y);
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(uPtr(result)->Glyphs), uCRef<char16_t>(e.Key(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/])), uCRef(g1));
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(result->Advances), uCRef<char16_t>(e.Key(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/])), uCRef(g1.Advance));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum2.Dispose(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    tex->Update3(dst->Buffer());

    if (tex->SupportsMipmap())
        uPtr(tex)->GenerateMipmap();

    for (int32_t i1 = 0; i1 < uPtr(charsetInclWs)->Length(); i1++)
    {
        char16_t left = uPtr(charsetInclWs)->Item(i1);

        for (int32_t j = 0; j < charsetInclWs->Length(); j++)
        {
            char16_t right = uPtr(charsetInclWs)->Item(j);
            ::g::Uno::Float2 kerning;

            if (uPtr(font)->TryGetKerning(size, left, right, &kerning) && (::g::Uno::Math::Abs1(kerning.X) > 0.0f))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(result)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(left, right)), uCRef(kerning.X));
        }
    }

    return result;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/BitmapFont.uno
// ----------------------------------------------------------------------------------------

// public struct BitmapFont.GlyphInfo :9
// {
static void BitmapFont__GlyphInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont__GlyphInfo, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(BitmapFont__GlyphInfo, Bearing), 0,
        ::g::Uno::Float2_typeof(), offsetof(BitmapFont__GlyphInfo, Size), 0,
        ::g::Uno::UShort2_typeof(), offsetof(BitmapFont__GlyphInfo, UpperLeft), 0,
        ::g::Uno::UShort2_typeof(), offsetof(BitmapFont__GlyphInfo, LowerRight), 0);
}

uStructType* BitmapFont__GlyphInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.Alignment = alignof(BitmapFont__GlyphInfo);
    options.ValueSize = sizeof(BitmapFont__GlyphInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.BitmapFont.GlyphInfo", options);
    type->fp_build_ = BitmapFont__GlyphInfo_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/RenderedGlyph.uno
// -------------------------------------------------------------------------------------------

// public struct RenderedGlyph :7
// {
static void RenderedGlyph_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(RenderedGlyph, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(RenderedGlyph, Bearing), 0,
        ::g::Uno::Int2_typeof(), offsetof(RenderedGlyph, Size), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(RenderedGlyph, Format), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(RenderedGlyph, Data), 0);
}

uStructType* RenderedGlyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.Alignment = alignof(RenderedGlyph);
    options.ValueSize = sizeof(RenderedGlyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.RenderedGlyph", options);
    type->fp_build_ = RenderedGlyph_build;
    return type;
}

// public RenderedGlyph(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data) :15
void RenderedGlyph__ctor_1_fn(RenderedGlyph* __this, ::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Int2* size, int32_t* format, uArray* data)
{
    __this->ctor_1(*advance, *bearing, *size, *format, data);
}

// public Uno.Content.Images.Bitmap get_Bitmap() :37
void RenderedGlyph__get_Bitmap_fn(RenderedGlyph* __this, ::g::Uno::Content::Images::Bitmap** __retval)
{
    *__retval = __this->Bitmap();
}

// public RenderedGlyph New(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data) :15
void RenderedGlyph__New1_fn(::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Int2* size, int32_t* format, uArray* data, RenderedGlyph* __retval)
{
    *__retval = RenderedGlyph__New1(*advance, *bearing, *size, *format, data);
}

// public RenderedGlyph(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data) [instance] :15
void RenderedGlyph::ctor_1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Int2 size, int32_t format, uArray* data)
{
    Advance = advance;
    Bearing = bearing;
    Size = size;
    Format = format;
    Data = data;
}

// public Uno.Content.Images.Bitmap get_Bitmap() [instance] :37
::g::Uno::Content::Images::Bitmap* RenderedGlyph::Bitmap()
{
    return ::g::Uno::Content::Images::Bitmap::New1(Size, Format, ::g::Uno::Buffer::New1(Data));
}

// public RenderedGlyph New(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data) [static] :15
RenderedGlyph RenderedGlyph__New1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Int2 size, int32_t format, uArray* data)
{
    RenderedGlyph obj1;
    obj1.ctor_1(advance, bearing, size, format, data);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/SpriteFontShader.uno
// ----------------------------------------------------------------------------------------------

// public sealed class SpriteFontShader :22
// {
static void SpriteFontShader_build(uType* type)
{
    type->SetDependencies(
        ::g::UnoCore_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(SpriteFontShader, _draw_6b7396b4), 0);
}

::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextShader_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SpriteFontShader);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextShader_type);
    type = (::g::Uno::Content::Fonts::TextShader_type*)uClassType::New("Uno.Content.Fonts.SpriteFontShader", options);
    type->fp_build_ = SpriteFontShader_build;
    type->fp_ctor_ = (void*)SpriteFontShader__New1_fn;
    type->fp_Draw = (void(*)(::g::Uno::Content::Fonts::TextShader*, ::g::Uno::Content::Fonts::TextShaderData*))SpriteFontShader__Draw_fn;
    return type;
}

// public generated SpriteFontShader() :22
void SpriteFontShader__ctor_1_fn(SpriteFontShader* __this)
{
    __this->ctor_1();
}

// public override sealed void Draw(Uno.Content.Fonts.TextShaderData data) :24
void SpriteFontShader__Draw_fn(SpriteFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data)
{
    __this->_draw_6b7396b4.BlendEnabled(true);
    __this->_draw_6b7396b4.DepthTestEnabled(false);
    __this->_draw_6b7396b4.CullFace(uPtr(data)->DataCullFace);
    __this->_draw_6b7396b4.BlendSrcRgb(2);
    __this->_draw_6b7396b4.BlendDstRgb(3);
    __this->_draw_6b7396b4.BlendDstAlpha(3);
    __this->_draw_6b7396b4.Use();
    __this->_draw_6b7396b4.Attrib1(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
    __this->_draw_6b7396b4.Attrib1(1, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
    __this->_draw_6b7396b4.Attrib1(2, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
    __this->_draw_6b7396b4.Uniform12(3, data->ClipSpaceMatrix);
    __this->_draw_6b7396b4.Sampler3(4, data->FontTexture, ::g::Uno::Graphics::SamplerState__TrilinearClamp());
    __this->_draw_6b7396b4.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
}

// private generated void init_DrawCalls() :22
void SpriteFontShader__init_DrawCalls_fn(SpriteFontShader* __this)
{
    __this->init_DrawCalls();
}

// public generated SpriteFontShader New() :22
void SpriteFontShader__New1_fn(SpriteFontShader** __retval)
{
    *__retval = SpriteFontShader::New1();
}

// public generated SpriteFontShader() [instance] :22
void SpriteFontShader::ctor_1()
{
    ctor_();
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :22
void SpriteFontShader::init_DrawCalls()
{
    _draw_6b7396b4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::UnoCore_bundle::SpriteFontShader901b6a86());
}

// public generated SpriteFontShader New() [static] :22
SpriteFontShader* SpriteFontShader::New1()
{
    SpriteFontShader* obj1 = (SpriteFontShader*)uNew(SpriteFontShader_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/TextRenderer.uno
// ------------------------------------------------------------------------------------------

// public sealed class TextRenderer :10
// {
static void TextRenderer_build(uType* type)
{
    ::STRINGS[3] = uString::Const("font");
    ::TYPES[3] = ::g::Uno::Char_typeof();
    ::TYPES[4] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(TextRenderer, _maxCharCount), 0,
        ::g::Uno::Float_typeof(), offsetof(TextRenderer, _tracking), 0,
        ::g::Uno::Byte4_typeof(), offsetof(TextRenderer, _color), 0,
        ::g::Uno::Content::Fonts::BitmapFont_typeof(), offsetof(TextRenderer, _font), 0,
        ::g::Uno::Content::Fonts::TextShader_typeof(), offsetof(TextRenderer, _shader), 0,
        ::g::Uno::Content::Fonts::TextTransform_typeof(), offsetof(TextRenderer, _transform), 0,
        ::g::Uno::Buffer_typeof(), offsetof(TextRenderer, _buffer), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(TextRenderer, _vbo), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(TextRenderer, _ibo), 0,
        ::g::Uno::Content::Fonts::TextShaderData_typeof(), offsetof(TextRenderer, _data), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextRenderer, _HasBegun), 0);
}

uType* TextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    return type;
}

// public TextRenderer(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) :29
void TextRenderer__ctor__fn(TextRenderer* __this, int32_t* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    __this->ctor_(*maxCharCount, shader, transform);
}

// public void Begin(Uno.Content.Fonts.BitmapFont font) :86
void TextRenderer__Begin_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont* font)
{
    __this->Begin(font);
}

// public float4 get_Color() :76
void TextRenderer__get_Color_fn(TextRenderer* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :77
void TextRenderer__set_Color_fn(TextRenderer* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public void End() :266
void TextRenderer__End_fn(TextRenderer* __this)
{
    __this->End();
}

// public generated bool get_HasBegun() :12
void TextRenderer__get_HasBegun_fn(TextRenderer* __this, bool* __retval)
{
    *__retval = __this->HasBegun();
}

// private generated void set_HasBegun(bool value) :12
void TextRenderer__set_HasBegun_fn(TextRenderer* __this, bool* value)
{
    __this->HasBegun(*value);
}

// public float2 MeasureString(string text) :97
void TextRenderer__MeasureString_fn(TextRenderer* __this, uString* text, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(text);
}

// public float2 MeasureString(string text, int startIndex, int length) :102
void TextRenderer__MeasureString1_fn(TextRenderer* __this, uString* text, int32_t* startIndex, int32_t* length, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString1(text, *startIndex, *length);
}

// public TextRenderer New(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) :29
void TextRenderer__New1_fn(int32_t* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(*maxCharCount, shader, transform);
}

// public Uno.Content.Fonts.TextTransform get_Transform() :58
void TextRenderer__get_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Uno.Content.Fonts.TextTransform value) :59
void TextRenderer__set_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform* value)
{
    __this->Transform(value);
}

// private void WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo ci, float2 caret) :151
void TextRenderer__WriteGlyph_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo* ci, ::g::Uno::Float2* caret)
{
    __this->WriteGlyph(*ci, *caret);
}

// public void WriteString(float2 caret, string text) :146
void TextRenderer__WriteString_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text)
{
    __this->WriteString(*caret, text);
}

// public void WriteString(float2 caret, string text, int startIndex, int length) :193
void TextRenderer__WriteString1_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text, int32_t* startIndex, int32_t* length)
{
    __this->WriteString1(*caret, text, *startIndex, *length);
}

// public TextRenderer(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) [instance] :29
void TextRenderer::ctor_(int32_t maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    _color = ::g::Uno::Byte4__New2(255, 255, 255, 255);
    _maxCharCount = maxCharCount;
    ::g::Uno::Buffer* indexBuffer = ::g::Uno::Buffer::New4((maxCharCount * 6) * 2);

    for (int32_t i = 0; i < maxCharCount; i++)
    {
        uPtr(indexBuffer)->Set23(i * 12, (uint16_t)(i * 4), true);
        indexBuffer->Set23((i * 12) + 2, (uint16_t)((i * 4) + 1), true);
        indexBuffer->Set23((i * 12) + 4, (uint16_t)((i * 4) + 2), true);
        indexBuffer->Set23((i * 12) + 6, (uint16_t)(i * 4), true);
        indexBuffer->Set23((i * 12) + 8, (uint16_t)((i * 4) + 2), true);
        indexBuffer->Set23((i * 12) + 10, (uint16_t)((i * 4) + 3), true);
    }

    _ibo = ::g::Uno::Graphics::IndexBuffer::New3(indexBuffer, 0);
    _vbo = ::g::Uno::Graphics::VertexBuffer::New8(2);
    _buffer = ::g::Uno::Buffer::New4((maxCharCount * 4) * 16);
    _data = ::g::Uno::Content::Fonts::TextShaderData::New1(_ibo, _vbo);
    _shader = shader;
    _transform = ((transform != NULL) ? transform : (::g::Uno::Content::Fonts::DefaultTextTransform*)::g::Uno::Content::Fonts::DefaultTextTransform::New1());
}

// public void Begin(Uno.Content.Fonts.BitmapFont font) [instance] :86
void TextRenderer::Begin(::g::Uno::Content::Fonts::BitmapFont* font)
{
    if (font == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"font"*/]));

    _font = font;
    uPtr(_data)->CharCount = 0;
    HasBegun(true);
}

// public float4 get_Color() [instance] :76
::g::Uno::Float4 TextRenderer::Color()
{
    return ::g::Uno::Float4__New2((float)_color.X / 255.0f, (float)_color.Y / 255.0f, (float)_color.Z / 255.0f, (float)_color.W / 255.0f);
}

// public void set_Color(float4 value) [instance] :77
void TextRenderer::Color(::g::Uno::Float4 value)
{
    _color = ::g::Uno::Byte4__New2((uint8_t)(::g::Uno::Math::Saturate1(value.X) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Y) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Z) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.W) * 255.0f));
}

// public void End() [instance] :266
void TextRenderer::End()
{
    if (uPtr(_data)->CharCount > 0)
    {
        uPtr(_vbo)->Update2(_buffer);
        uPtr(_data)->FontTexture = uPtr(_font)->Texture;
        uPtr(_data)->FontSpread = uPtr(_font)->PixelSpread;
        uPtr(_data)->ClipSpaceMatrix = uPtr(_transform)->ResolveClipSpaceMatrix();
        uPtr(_data)->DataCullFace = uPtr(_transform)->CullFace();
        uPtr(_shader)->Draw(_data);
        uPtr(_data)->CharCount = 0;
    }

    _font = NULL;
    HasBegun(false);
}

// public generated bool get_HasBegun() [instance] :12
bool TextRenderer::HasBegun()
{
    return _HasBegun;
}

// private generated void set_HasBegun(bool value) [instance] :12
void TextRenderer::HasBegun(bool value)
{
    _HasBegun = value;
}

// public float2 MeasureString(string text) [instance] :97
::g::Uno::Float2 TextRenderer::MeasureString(uString* text)
{
    return MeasureString1(text, 0, uPtr(text)->Length());
}

// public float2 MeasureString(string text, int startIndex, int length) [instance] :102
::g::Uno::Float2 TextRenderer::MeasureString1(uString* text, int32_t startIndex, int32_t length)
{
    bool ret2;
    bool ret3;

    if ((_font == NULL) || ::g::Uno::String::op_Equality(text, NULL))
        return ::g::Uno::Float2__New1(0.0f);

    float caret = 0.0f;
    char16_t last = 0;

    for (int32_t i = startIndex; i < (startIndex + length); i++)
    {
        char16_t c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<char16_t>(c), &ci, &ret2), ret2))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning, &ret3), ret3))
                caret = caret + (kerning * uPtr(_data)->FontScale);

            caret = caret + ((ci.Advance * uPtr(_data)->FontScale) + _tracking);
        }
        else if ((uPtr(_font)->FontFace != NULL) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Content::Fonts::RenderedGlyph rg = uPtr(uPtr(_font)->FontFace)->RenderGlyph(uPtr(_font)->PixelSize, c);
            ::g::Uno::Float2 kerning1;

            if (uPtr(uPtr(_font)->FontFace)->TryGetKerning(uPtr(_font)->PixelSize, last, c, &kerning1))
                caret = caret + (kerning1.X * uPtr(_data)->FontScale);

            caret = caret + ((::g::Uno::Math::Round2(rg.Advance.X) * uPtr(_data)->FontScale) + _tracking);
        }

        last = c;
    }

    return ::g::Uno::Float2__New2(caret, uPtr(_font)->Ascent + uPtr(_font)->Descent);
}

// public Uno.Content.Fonts.TextTransform get_Transform() [instance] :58
::g::Uno::Content::Fonts::TextTransform* TextRenderer::Transform()
{
    return _transform;
}

// public void set_Transform(Uno.Content.Fonts.TextTransform value) [instance] :59
void TextRenderer::Transform(::g::Uno::Content::Fonts::TextTransform* value)
{
    _transform = value;
}

// private void WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo ci, float2 caret) [instance] :151
void TextRenderer::WriteGlyph(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci, ::g::Uno::Float2 caret)
{
    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
    {
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(caret, ::g::Uno::Float2__op_Multiply1(ci.Bearing, uPtr(_data)->FontScale));
        int32_t o = uPtr(_data)->CharCount * 64;
        ::g::Uno::Float2 s = ::g::Uno::Float2__op_Multiply1(ci.Size, uPtr(_data)->FontScale);
        uPtr(_buffer)->Set4(o, p.X, true);
        uPtr(_buffer)->Set4(o + 4, p.Y + s.Y, true);
        uPtr(_buffer)->Set23(o + 8, ci.UpperLeft.X, true);
        uPtr(_buffer)->Set23(o + 10, ci.LowerRight.Y, true);
        uPtr(_buffer)->Set2(o + 12, _color);
        uPtr(_buffer)->Set4(o + 16, p.X + s.X, true);
        uPtr(_buffer)->Set4(o + 20, p.Y + s.Y, true);
        uPtr(_buffer)->Set23(o + 24, ci.LowerRight.X, true);
        uPtr(_buffer)->Set23(o + 26, ci.LowerRight.Y, true);
        uPtr(_buffer)->Set2(o + 28, _color);
        uPtr(_buffer)->Set4(o + 32, p.X + s.X, true);
        uPtr(_buffer)->Set4(o + 36, p.Y, true);
        uPtr(_buffer)->Set23(o + 40, ci.LowerRight.X, true);
        uPtr(_buffer)->Set23(o + 42, ci.UpperLeft.Y, true);
        uPtr(_buffer)->Set2(o + 44, _color);
        uPtr(_buffer)->Set4(o + 48, p.X, true);
        uPtr(_buffer)->Set4(o + 52, p.Y, true);
        uPtr(_buffer)->Set23(o + 56, ci.UpperLeft.X, true);
        uPtr(_buffer)->Set23(o + 58, ci.UpperLeft.Y, true);
        uPtr(_buffer)->Set2(o + 60, _color);
        uPtr(_data)->CharCount++;
    }
}

// public void WriteString(float2 caret, string text) [instance] :146
void TextRenderer::WriteString(::g::Uno::Float2 caret, uString* text)
{
    WriteString1(caret, text, 0, uPtr(text)->Length());
}

// public void WriteString(float2 caret, string text, int startIndex, int length) [instance] :193
void TextRenderer::WriteString1(::g::Uno::Float2 caret, uString* text, int32_t startIndex, int32_t length)
{
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    char16_t last = 0;

    if (uPtr(_font)->PixelSpread > 0.0f)
        caret = ::g::Uno::Float2__op_Subtraction2(caret, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New1(uPtr(_font)->PixelSpread * uPtr(_data)->FontScale), ::g::Uno::Float2__New2(1.0f, 2.0f)));

    for (int32_t i = startIndex; i < (startIndex + length); i++)
    {
        char16_t c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<char16_t>(c), &ci, &ret4), ret4))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning, &ret5), ret5))
                caret.X = (caret.X + (kerning * uPtr(_data)->FontScale));

            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
            {
                WriteGlyph(ci, caret);

                if (uPtr(_data)->CharCount == _maxCharCount)
                {
                    ::g::Uno::Content::Fonts::BitmapFont* temp = _font;
                    End();
                    Begin(temp);
                }
            }

            caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
        }
        else if ((uPtr(_font)->FontFace != NULL) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Content::Fonts::BitmapFont* oldFont = _font;
            ::g::Uno::Content::Fonts::BitmapFont* tempFont = ::g::Uno::Content::Fonts::FontFaceHelpers::RenderSpriteFont(uPtr(oldFont)->FontFace, uPtr(oldFont)->PixelSize, ::g::Uno::Char::ToString(c, ::TYPES[3/*char*/]));

            {
                try
                {
                    {
                        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Glyphs), uCRef<char16_t>(c), &ci, &ret6), ret6))
                        {
                            float kerning1;

                            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning1, &ret7), ret7))
                                caret.X = (caret.X + (kerning1 * uPtr(_data)->FontScale));

                            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
                            {
                                End();
                                Begin(tempFont);
                                WriteGlyph(ci, caret);
                                End();
                                Begin(oldFont);
                            }

                            caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)tempFont), ::TYPES[4/*Uno.IDisposable*/]));
                    }
                                        throw __t;
                    goto __after_finally_1;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)tempFont), ::TYPES[4/*Uno.IDisposable*/]));
                }
                __after_finally_1:;
            }
        }

        last = c;
    }
}

// public TextRenderer New(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) [static] :29
TextRenderer* TextRenderer::New1(int32_t maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(maxCharCount, shader, transform);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/TextShader.uno
// ----------------------------------------------------------------------------------------

// public abstract class TextShader :52
// {
static void TextShader_build(uType* type)
{
}

TextShader_type* TextShader_typeof()
{
    static uSStrong<TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextShader);
    options.TypeSize = sizeof(TextShader_type);
    type = (TextShader_type*)uClassType::New("Uno.Content.Fonts.TextShader", options);
    type->fp_build_ = TextShader_build;
    return type;
}

// protected generated TextShader() :52
void TextShader__ctor__fn(TextShader* __this)
{
    __this->ctor_();
}

// protected generated TextShader() [instance] :52
void TextShader::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/TextShader.uno
// ----------------------------------------------------------------------------------------

// public sealed class TextShaderData :8
// {
static void TextShaderData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(TextShaderData, FontScale), 0,
        ::g::Uno::Float_typeof(), offsetof(TextShaderData, FontSpread), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(TextShaderData, ClipSpaceMatrix), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextShaderData, FontTexture), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(TextShaderData, DataCullFace), 0,
        ::g::Uno::Int_typeof(), offsetof(TextShaderData, CharCount), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(TextShaderData, IndexType), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(TextShaderData, IndexBuffer), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(TextShaderData, PositionInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(TextShaderData, TexCoordInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(TextShaderData, ColorInfo), 0);
}

uType* TextShaderData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TextShaderData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.TextShaderData", options);
    type->fp_build_ = TextShaderData_build;
    return type;
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) :26
void TextShaderData__ctor__fn(TextShaderData* __this, ::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    __this->ctor_(ibo, vbo);
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) :26
void TextShaderData__New1_fn(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo, TextShaderData** __retval)
{
    *__retval = TextShaderData::New1(ibo, vbo);
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [instance] :26
void TextShaderData::ctor_(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    FontScale = 1.0f;
    ClipSpaceMatrix = ::g::Uno::Float4x4__Identity();
    DataCullFace = 0;
    IndexType = 2;
    IndexBuffer = ibo;
    PositionInfo.Buffer = vbo;
    PositionInfo.BufferOffset = 0;
    PositionInfo.BufferStride = 16;
    PositionInfo.Type = 2;
    TexCoordInfo.Buffer = vbo;
    TexCoordInfo.BufferOffset = 8;
    TexCoordInfo.BufferStride = 16;
    TexCoordInfo.Type = 14;
    ColorInfo.Buffer = vbo;
    ColorInfo.BufferOffset = 12;
    ColorInfo.BufferStride = 16;
    ColorInfo.Type = 20;
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [static] :26
TextShaderData* TextShaderData::New1(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    TextShaderData* obj1 = (TextShaderData*)uNew(TextShaderData_typeof());
    obj1->ctor_(ibo, vbo);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Content/Fonts/TextTransform.uno
// -------------------------------------------------------------------------------------------

// public abstract class TextTransform :6
// {
static void TextTransform_build(uType* type)
{
}

TextTransform_type* TextTransform_typeof()
{
    static uSStrong<TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextTransform);
    options.TypeSize = sizeof(TextTransform_type);
    type = (TextTransform_type*)uClassType::New("Uno.Content.Fonts.TextTransform", options);
    type->fp_build_ = TextTransform_build;
    type->fp_get_CullFace = TextTransform__get_CullFace_fn;
    return type;
}

// protected generated TextTransform() :6
void TextTransform__ctor__fn(TextTransform* __this)
{
    __this->ctor_();
}

// public virtual Uno.Graphics.PolygonFace get_CullFace() :16
void TextTransform__get_CullFace_fn(TextTransform* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}

// protected generated TextTransform() [instance] :6
void TextTransform::ctor_()
{
}
// }

}}}} // ::g::Uno::Content::Fonts
