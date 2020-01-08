// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey.h>
#include <Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.h>
#include <Fuse.Controls.FallbackTextRenderer.ProperTextTransform.h>
#include <Fuse.Controls.FallbackTextRenderer.TextRenderer.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapInfo.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapper.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapperWord.h>
#include <Fuse.Controls.FallbackTextRenderer.WrappedLine.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Visual.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Fonts.BitmapFont.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Content.Fonts.FontFaceHelpers.h>
#include <Uno.Content.Fonts.SpriteFontShader.h>
#include <Uno.Content.Fonts.TextRenderer.h>
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[3];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno
// ---------------------------------------------------------------------------------------------------------------------------

// internal sealed class DefaultTextRenderer :9
// {
static void DefaultTextRenderer_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(DefaultTextRenderer, _fontSize), 0,
        ::g::Uno::Float_typeof(), offsetof(DefaultTextRenderer, _absoluteZoom), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(DefaultTextRenderer, _transform), 0,
        ::g::Uno::Content::Fonts::BitmapFont_typeof(), offsetof(DefaultTextRenderer, _bitmapFont), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(DefaultTextRenderer, _FontFace), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(DefaultTextRenderer__FontKey_typeof(), ::g::Uno::Content::Fonts::BitmapFont_typeof(), NULL), (uintptr_t)&DefaultTextRenderer::_bitmapFonts_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&DefaultTextRenderer::_maxCharCount_, uFieldFlagsStatic,
        ::g::Uno::Content::Fonts::TextRenderer_typeof(), (uintptr_t)&DefaultTextRenderer::_renderer_, uFieldFlagsStatic);
}

uType* DefaultTextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DefaultTextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", options);
    type->fp_build_ = DefaultTextRenderer_build;
    return type;
}

// public DefaultTextRenderer(Uno.Content.Fonts.FontFace fontFace) :58
void DefaultTextRenderer__ctor__fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* fontFace)
{
    __this->ctor_(fontFace);
}

// public void BeginRendering(float fontSize, float absoluteZoom, float4x4 transform, float2 bounds, float4 textColor, int maxTextLength) :113
void DefaultTextRenderer__BeginRendering_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* bounds, ::g::Uno::Float4* textColor, int32_t* maxTextLength)
{
    __this->BeginRendering(*fontSize, *absoluteZoom, *transform, *bounds, *textColor, *maxTextLength);
}

// public void DrawLine(Fuse.DrawContext dc, float x, float y, string line) :134
void DefaultTextRenderer__DrawLine_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc, float* x, float* y, uString* line)
{
    __this->DrawLine(dc, *x, *y, line);
}

// public void EndRendering(Fuse.DrawContext dc) :128
void DefaultTextRenderer__EndRendering_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->EndRendering(dc);
}

// private static void EnsureRendererCapacity(int maxCharCount) :171
void DefaultTextRenderer__EnsureRendererCapacity_fn(int32_t* maxCharCount)
{
    DefaultTextRenderer::EnsureRendererCapacity(*maxCharCount);
}

// public generated Uno.Content.Fonts.FontFace get_FontFace() :70
void DefaultTextRenderer__get_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->FontFace();
}

// public generated void set_FontFace(Uno.Content.Fonts.FontFace value) :70
void DefaultTextRenderer__set_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* value)
{
    __this->FontFace(value);
}

// private Uno.Content.Fonts.BitmapFont GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) :156
void DefaultTextRenderer__GetBitmapFont_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, bool* includeZoom, ::g::Uno::Content::Fonts::BitmapFont** __retval)
{
    *__retval = __this->GetBitmapFont(*fontSize, *absoluteZoom, *includeZoom);
}

// public float GetLineHeight(float fontSize) :72
void DefaultTextRenderer__GetLineHeight_fn(DefaultTextRenderer* __this, float* fontSize, float* __retval)
{
    *__retval = __this->GetLineHeight(*fontSize);
}

// public float2 MeasureString(float fontSize, float absoluteZoom, string s) :86
void DefaultTextRenderer__MeasureString_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(*fontSize, *absoluteZoom, s);
}

// public float2 MeasureStringVirtual(float fontSize, float absoluteZoom, string s) :103
void DefaultTextRenderer__MeasureStringVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureStringVirtual(*fontSize, *absoluteZoom, s);
}

// public DefaultTextRenderer New(Uno.Content.Fonts.FontFace fontFace) :58
void DefaultTextRenderer__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, DefaultTextRenderer** __retval)
{
    *__retval = DefaultTextRenderer::New1(fontFace);
}

// private static Uno.Content.Fonts.TextRenderer get_renderer() :47
void DefaultTextRenderer__get_renderer_fn(::g::Uno::Content::Fonts::TextRenderer** __retval)
{
    *__retval = DefaultTextRenderer::renderer();
}

uSStrong< ::g::Uno::Collections::Dictionary*> DefaultTextRenderer::_bitmapFonts_;
int32_t DefaultTextRenderer::_maxCharCount_;
uSStrong< ::g::Uno::Content::Fonts::TextRenderer*> DefaultTextRenderer::_renderer_;

// public DefaultTextRenderer(Uno.Content.Fonts.FontFace fontFace) [instance] :58
void DefaultTextRenderer::ctor_(::g::Uno::Content::Fonts::FontFace* fontFace)
{
    if (DefaultTextRenderer::_bitmapFonts_ == NULL)
    {
        DefaultTextRenderer::_maxCharCount_ = 100;
        DefaultTextRenderer::_bitmapFonts_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(DefaultTextRenderer__FontKey_typeof(), ::g::Uno::Content::Fonts::BitmapFont_typeof(), NULL)));
    }

    FontFace(fontFace);
}

// public void BeginRendering(float fontSize, float absoluteZoom, float4x4 transform, float2 bounds, float4 textColor, int maxTextLength) [instance] :113
void DefaultTextRenderer::BeginRendering(float fontSize, float absoluteZoom, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 bounds, ::g::Uno::Float4 textColor, int32_t maxTextLength)
{
    _fontSize = fontSize;
    _absoluteZoom = absoluteZoom;
    _transform = transform;
    _bitmapFont = GetBitmapFont(_fontSize, _absoluteZoom, true);
    DefaultTextRenderer::EnsureRendererCapacity(maxTextLength);
    uPtr(DefaultTextRenderer::renderer())->Begin(_bitmapFont);
    uPtr(DefaultTextRenderer::renderer())->Color(textColor);
}

// public void DrawLine(Fuse.DrawContext dc, float x, float y, string line) [instance] :134
void DefaultTextRenderer::DrawLine(::g::Fuse::DrawContext* dc, float x, float y, uString* line)
{
    float lineHeight = uPtr(_bitmapFont)->LineHeight;
    float lineOffsetY = lineHeight - uPtr(_bitmapFont)->Descent;
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(x, y + lineOffsetY);

    if (uPtr(dc)->ViewportPixelsPerPoint() != 1.0f)
    {
        ::g::Uno::Float4x4 scale = ::g::Uno::Matrix::Scaling(1.0f / uPtr(dc)->ViewportPixelsPerPoint());
        uPtr(uPtr(DefaultTextRenderer::renderer())->Transform())->Matrix(::g::Uno::Matrix::Mul8(scale, _transform));
    }
    else
        uPtr(uPtr(DefaultTextRenderer::renderer())->Transform())->Matrix(_transform);

    uPtr(uAs< ::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform*>(uPtr(DefaultTextRenderer::renderer())->Transform(), ::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform_typeof()))->DrawContext = dc;
    uPtr(DefaultTextRenderer::renderer())->WriteString(p, line);
}

// public void EndRendering(Fuse.DrawContext dc) [instance] :128
void DefaultTextRenderer::EndRendering(::g::Fuse::DrawContext* dc)
{
    uPtr(DefaultTextRenderer::renderer())->End();
}

// public generated Uno.Content.Fonts.FontFace get_FontFace() [instance] :70
::g::Uno::Content::Fonts::FontFace* DefaultTextRenderer::FontFace()
{
    return _FontFace;
}

// public generated void set_FontFace(Uno.Content.Fonts.FontFace value) [instance] :70
void DefaultTextRenderer::FontFace(::g::Uno::Content::Fonts::FontFace* value)
{
    _FontFace = value;
}

// private Uno.Content.Fonts.BitmapFont GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) [instance] :156
::g::Uno::Content::Fonts::BitmapFont* DefaultTextRenderer::GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom)
{
    bool ret2;
    int32_t size = (int32_t)::g::Uno::Math::Floor1(::g::Uno::Math::Clamp1(fontSize * (includeZoom ? absoluteZoom : 1.0f), 4.0f, 400.0f));
    DefaultTextRenderer__FontKey* key = DefaultTextRenderer__FontKey::New1(FontFace(), size);
    ::g::Uno::Content::Fonts::BitmapFont* bmpfont;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(DefaultTextRenderer::_bitmapFonts_), key, (void**)(&bmpfont), &ret2), ret2))
    {
        bmpfont = ::g::Uno::Content::Fonts::FontFaceHelpers::RenderSpriteFont(FontFace(), (float)size, uString::Const("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\303\206\303\230\303\205[\\]^_`abcdefghijklmnopqrstuvwxyz\303\246\303\270\303\245\302\250{|}~\302\260\342\200\242"));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(DefaultTextRenderer::_bitmapFonts_), key, bmpfont);
    }

    return bmpfont;
}

// public float GetLineHeight(float fontSize) [instance] :72
float DefaultTextRenderer::GetLineHeight(float fontSize)
{
    if (FontFace() == NULL)
        return 0.0f;

    float size = ::g::Uno::Math::Clamp1(fontSize, 4.0f, 400.0f);
    return uPtr(FontFace())->GetLineHeight(size);
}

// public float2 MeasureString(float fontSize, float absoluteZoom, string s) [instance] :86
::g::Uno::Float2 DefaultTextRenderer::MeasureString(float fontSize, float absoluteZoom, uString* s)
{
    if (::g::Uno::String::op_Equality(s, NULL))
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Content::Fonts::BitmapFont* bitmapFont = GetBitmapFont(fontSize, absoluteZoom, true);
    bool hasBegun = uPtr(DefaultTextRenderer::renderer())->HasBegun();

    if (!hasBegun)
        uPtr(DefaultTextRenderer::renderer())->Begin(bitmapFont);

    ::g::Uno::Float2 ret = uPtr(DefaultTextRenderer::renderer())->MeasureString(s);

    if (!hasBegun)
        uPtr(DefaultTextRenderer::renderer())->End();

    return ret;
}

// public float2 MeasureStringVirtual(float fontSize, float absoluteZoom, string s) [instance] :103
::g::Uno::Float2 DefaultTextRenderer::MeasureStringVirtual(float fontSize, float absoluteZoom, uString* s)
{
    return ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Division1(MeasureString(fontSize, absoluteZoom, s), absoluteZoom));
}

// private static void EnsureRendererCapacity(int maxCharCount) [static] :171
void DefaultTextRenderer::EnsureRendererCapacity(int32_t maxCharCount)
{
    if (maxCharCount <= DefaultTextRenderer::_maxCharCount_)
        return;

    DefaultTextRenderer::_maxCharCount_ = ::g::Uno::Math::Max8(DefaultTextRenderer::_maxCharCount_ * 2, maxCharCount);
    DefaultTextRenderer::_renderer_ = ::g::Uno::Content::Fonts::TextRenderer::New1(DefaultTextRenderer::_maxCharCount_, ::g::Uno::Content::Fonts::SpriteFontShader::New1(), NULL);
    uPtr(DefaultTextRenderer::_renderer_)->Transform(::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform::New1());
}

// public DefaultTextRenderer New(Uno.Content.Fonts.FontFace fontFace) [static] :58
DefaultTextRenderer* DefaultTextRenderer::New1(::g::Uno::Content::Fonts::FontFace* fontFace)
{
    DefaultTextRenderer* obj1 = (DefaultTextRenderer*)uNew(DefaultTextRenderer_typeof());
    obj1->ctor_(fontFace);
    return obj1;
}

// private static Uno.Content.Fonts.TextRenderer get_renderer() [static] :47
::g::Uno::Content::Fonts::TextRenderer* DefaultTextRenderer::renderer()
{
    if (DefaultTextRenderer::_renderer_ == NULL)
    {
        DefaultTextRenderer::_renderer_ = ::g::Uno::Content::Fonts::TextRenderer::New1(100, ::g::Uno::Content::Fonts::SpriteFontShader::New1(), NULL);
        uPtr(DefaultTextRenderer::_renderer_)->Transform(::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform::New1());
    }

    return DefaultTextRenderer::_renderer_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno
// ---------------------------------------------------------------------------------------------------------------------------

// private sealed class DefaultTextRenderer.FontKey :11
// {
static void DefaultTextRenderer__FontKey_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(DefaultTextRenderer__FontKey, FontFace), 0,
        ::g::Uno::Int_typeof(), offsetof(DefaultTextRenderer__FontKey, Size), 0);
}

uType* DefaultTextRenderer__FontKey_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DefaultTextRenderer__FontKey);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey", options);
    type->fp_build_ = DefaultTextRenderer__FontKey_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))DefaultTextRenderer__FontKey__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))DefaultTextRenderer__FontKey__GetHashCode_fn;
    return type;
}

// public FontKey(Uno.Content.Fonts.FontFace fontFace, int size) :31
void DefaultTextRenderer__FontKey__ctor__fn(DefaultTextRenderer__FontKey* __this, ::g::Uno::Content::Fonts::FontFace* fontFace, int32_t* size)
{
    __this->ctor_(fontFace, *size);
}

// public override sealed bool Equals(object obj) :21
void DefaultTextRenderer__FontKey__Equals_fn(DefaultTextRenderer__FontKey* __this, uObject* obj, bool* __retval)
{
    if (uIs(obj, __this->__type))
    {
        DefaultTextRenderer__FontKey* fk = uCast<DefaultTextRenderer__FontKey*>(obj, __this->__type);
        return *__retval = (uPtr(fk)->Size == __this->Size) && (uPtr(fk)->FontFace == __this->FontFace), void();
    }

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :16
void DefaultTextRenderer__FontKey__GetHashCode_fn(DefaultTextRenderer__FontKey* __this, int32_t* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->FontFace)) + __this->Size, void();
}

// public FontKey New(Uno.Content.Fonts.FontFace fontFace, int size) :31
void DefaultTextRenderer__FontKey__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, int32_t* size, DefaultTextRenderer__FontKey** __retval)
{
    *__retval = DefaultTextRenderer__FontKey::New1(fontFace, *size);
}

// public FontKey(Uno.Content.Fonts.FontFace fontFace, int size) [instance] :31
void DefaultTextRenderer__FontKey::ctor_(::g::Uno::Content::Fonts::FontFace* fontFace, int32_t size)
{
    FontFace = fontFace;
    Size = size;
}

// public FontKey New(Uno.Content.Fonts.FontFace fontFace, int size) [static] :31
DefaultTextRenderer__FontKey* DefaultTextRenderer__FontKey::New1(::g::Uno::Content::Fonts::FontFace* fontFace, int32_t size)
{
    DefaultTextRenderer__FontKey* obj1 = (DefaultTextRenderer__FontKey*)uNew(DefaultTextRenderer__FontKey_typeof());
    obj1->ctor_(fontFace, size);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno
// ---------------------------------------------------------------------------------------------------------------------------

// internal sealed class ProperTextTransform :182
// {
static void ProperTextTransform_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetFields(0,
        ::g::Fuse::DrawContext_typeof(), offsetof(ProperTextTransform, DrawContext), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(ProperTextTransform, _matrix), 0);
}

::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextTransform_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProperTextTransform);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextTransform_type);
    type = (::g::Uno::Content::Fonts::TextTransform_type*)uClassType::New("Fuse.Controls.FallbackTextRenderer.ProperTextTransform", options);
    type->fp_build_ = ProperTextTransform_build;
    type->fp_ctor_ = (void*)ProperTextTransform__New1_fn;
    type->fp_get_CullFace = (void(*)(::g::Uno::Content::Fonts::TextTransform*, int32_t*))ProperTextTransform__get_CullFace_fn;
    type->fp_get_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__get_Matrix_fn;
    type->fp_set_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__set_Matrix_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__ResolveClipSpaceMatrix_fn;
    return type;
}

// public generated ProperTextTransform() :182
void ProperTextTransform__ctor_1_fn(ProperTextTransform* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Graphics.PolygonFace get_CullFace() :201
void ProperTextTransform__get_CullFace_fn(ProperTextTransform* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->DrawContext)->CullFace(), void();
}

// public override sealed float4x4 get_Matrix() :190
void ProperTextTransform__get_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = __this->_matrix, void();
}

// public override sealed void set_Matrix(float4x4 value) :191
void ProperTextTransform__set_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->_matrix = value_;
}

// public generated ProperTextTransform New() :182
void ProperTextTransform__New1_fn(ProperTextTransform** __retval)
{
    *__retval = ProperTextTransform::New1();
}

// public override sealed float4x4 ResolveClipSpaceMatrix() :194
void ProperTextTransform__ResolveClipSpaceMatrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = ::g::Uno::Matrix::Mul8(__this->Matrix(), ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(__this->DrawContext)->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/]))), void();
}

// public generated ProperTextTransform() [instance] :182
void ProperTextTransform::ctor_1()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    ctor_();
}

// public generated ProperTextTransform New() [static] :182
ProperTextTransform* ProperTextTransform::New1()
{
    ProperTextTransform* obj1 = (ProperTextTransform*)uNew(ProperTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/TextRenderer.uno
// --------------------------------------------------------------------------------------------------------------------

// internal sealed class TextRenderer :10
// {
// static generated TextRenderer() :10
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_textRenderers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<Fuse.Font, Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer>*/]));
}

static void TextRenderer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Font_typeof(), ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(TextRenderer, Control), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo_typeof(), offsetof(TextRenderer, _wrapInfo), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof()->Array(), offsetof(TextRenderer, _wrappedLines), 0,
        ::g::Uno::Float_typeof(), offsetof(TextRenderer, _wrapWidth), 0,
        ::g::Uno::Rect_typeof(), offsetof(TextRenderer, _textBounds), 0,
        ::g::Uno::Int_typeof(), offsetof(TextRenderer, _maxTextLength), 0,
        ::g::Uno::String_typeof(), offsetof(TextRenderer, _cacheValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextRenderer, _cacheMin), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(TextRenderer, _size), 0,
        ::TYPES[1/*Uno.Collections.Dictionary<Fuse.Font, Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer>*/], (uintptr_t)&TextRenderer::_textRenderers_, uFieldFlagsStatic);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Controls.FallbackTextRenderer.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl text) :13
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* text)
{
    __this->ctor_(text);
}

// public void Arrange(float2 position, float2 size) :167
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :147
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :57
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :189
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// internal static Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer GetTextRenderer(Fuse.Font f) :20
void TextRenderer__GetTextRenderer_fn(::g::Fuse::Font* f, ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer** __retval)
{
    *__retval = TextRenderer::GetTextRenderer(f);
}

// private void InitWrap(float wrapWidth, string value, bool useMin) :74
void TextRenderer__InitWrap_fn(TextRenderer* __this, float* wrapWidth, uString* value, bool* useMin)
{
    __this->InitWrap(*wrapWidth, value, *useMin);
}

// public void Invalidate() :184
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private static Uno.Content.Fonts.FontFace LoadFont(Fuse.Font font) :34
void TextRenderer__LoadFont_fn(::g::Fuse::Font* font, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = TextRenderer::LoadFont(font);
}

// public TextRenderer New(Fuse.Controls.TextControl text) :13
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* text, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(text);
}

// public void SoftDispose() :194
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateArrange() :175
void TextRenderer__UpdateArrange_fn(TextRenderer* __this)
{
    __this->UpdateArrange();
}

uSStrong< ::g::Uno::Collections::Dictionary*> TextRenderer::_textRenderers_;

// public TextRenderer(Fuse.Controls.TextControl text) [instance] :13
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* text)
{
    Control = text;
}

// public void Arrange(float2 position, float2 size) [instance] :167
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _position = position;
    _size = size;
    Invalidate();
    UpdateArrange();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :147
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    uArray* array10;
    int32_t index11;
    int32_t length12;
    UpdateArrange();
    uPtr(uPtr(_wrapInfo)->TextRenderer)->BeginRendering(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, uPtr(where)->WorldTransform(), _size, uPtr(Control)->RenderColor(), _maxTextLength);
    float y = _position.Y;

    for (array10 = _wrappedLines, index11 = 0, length12 = uPtr(array10)->Length(); index11 < length12; ++index11)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = uPtr(array10)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(index11);
        float x = uPtr(wrappedLine)->GetXOffset(uPtr(Control)->TextAlignment(), _size.X, uPtr(where)->AbsoluteZoom());
        x = x + _position.X;
        uPtr(uPtr(_wrapInfo)->TextRenderer)->DrawLine(dc, x * uPtr(_wrapInfo)->AbsoluteZoom, y, wrappedLine->Text);
        y = y + (uPtr(_wrapInfo)->LineHeight * uPtr(_wrapInfo)->AbsoluteZoom);
    }

    uPtr(uPtr(_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :57
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    uString* ind13;

    if (Control == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    float wrapWidth = FLT_INF;

    if (uPtr(Control)->TextWrapping() == 1)
    {
        if (lp.HasX())
            wrapWidth = lp.X();

        if (lp.HasMaxX() && (lp.MaxX() < wrapWidth))
            wrapWidth = lp.MaxX();
    }

    InitWrap(wrapWidth, (ind13 = uPtr(Control)->RenderValue(), (ind13 != NULL) ? ind13 : ::STRINGS[0/*""*/]), true);
    return _textBounds.Size();
}

// public Uno.Rect GetRenderBounds() [instance] :189
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    return ::g::Uno::Rect__Translate(_textBounds, _position);
}

// private void InitWrap(float wrapWidth, string value, bool useMin) [instance] :74
void TextRenderer::InitWrap(float wrapWidth, uString* value, bool useMin)
{
    uArray* array7;
    int32_t index8;
    int32_t length9;

    if ((((_wrapInfo != NULL) && (_wrapWidth == wrapWidth)) && ::g::Uno::String::op_Equality(_cacheValue, value)) && (_cacheMin == useMin))
        return;

    _wrapWidth = wrapWidth;
    _cacheValue = value;
    _cacheMin = useMin;
    ::g::Fuse::Font* font = uPtr(Control)->Font();
    ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* renderer = TextRenderer::GetTextRenderer(font);
    float fontSize = uPtr(Control)->FontSize();
    _wrapInfo = ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo::New1(renderer, uPtr(Control)->TextWrapping() == 1, wrapWidth, fontSize, uPtr(renderer)->GetLineHeight(fontSize), uPtr(Control)->LineSpacing(), uPtr(Control)->AbsoluteZoom());
    uArray* lines = ::g::Uno::String::Split(uPtr(value), uArray::Init<int32_t>(::TYPES[2/*char[]*/], 1, 10));
    ::g::Uno::Collections::List* wrappedLines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine>*/]);

    if (uPtr(Control)->TextWrapping() == 1)

        for (int32_t index2 = 0, length3 = uPtr(lines)->Length(); index2 < length3; ++index2)
        {
            uString* line = uPtr(lines)->Strong<uString*>(index2);
            uPtr(wrappedLines)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.FallbackTextRenderer.WrappedLine>*/], ::g::Fuse::Controls::FallbackTextRenderer::WordWrapper::WrapLine(_wrapInfo, line))));
        }
    else
    {
        int32_t y = 0;

        for (int32_t index5 = 0, length6 = uPtr(lines)->Length(); index5 < length6; ++index5)
        {
            uString* line1 = uPtr(lines)->Strong<uString*>(index5);
            ::g::Uno::Float2 lineSize = uPtr(uPtr(_wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, line1);
            ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(line1, 0, (float)(y++), lineSize.X);
            ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), wrappedLine);
        }
    }

    _wrappedLines = ((uArray*)wrappedLines->ToArray());
    float maxX = 0.0f;
    float minX = 0.0f;
    float height = 0.0f;
    int32_t maxTextLength = 0;

    for (array7 = _wrappedLines, index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine1 = uPtr(array7)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(index8);
        ::g::Uno::Float2 extent = ::g::Uno::Float2__New2(0.0f, uPtr(wrappedLine1)->LineWidth);

        if (!useMin)

            switch (uPtr(Control)->TextAlignment())
            {
                case 0:
                {
                    extent = ::g::Uno::Float2__New2(0.0f, uPtr(wrappedLine1)->LineWidth);
                    break;
                }
                case 2:
                {
                    extent = ::g::Uno::Float2__New2(wrapWidth - uPtr(wrappedLine1)->LineWidth, wrapWidth);
                    break;
                }
                case 1:
                {
                    extent = ::g::Uno::Float2__New2((wrapWidth / 2.0f) - (uPtr(wrappedLine1)->LineWidth / 2.0f), (wrapWidth / 2.0f) + (uPtr(wrappedLine1)->LineWidth / 2.0f));
                    break;
                }
            }

        minX = ::g::Uno::Math::Min1(minX, extent.Item(0));
        maxX = ::g::Uno::Math::Max1(maxX, extent.Item(1));
        maxTextLength = maxTextLength + uPtr(wrappedLine1->Text)->Length();
        height = height + uPtr(_wrapInfo)->LineHeight;
    }

    _textBounds = ::g::Uno::Rect__New2(::g::Uno::Float2__New2(minX, 0.0f), ::g::Uno::Float2__New2(maxX, height));
    _maxTextLength = maxTextLength;
}

// public void Invalidate() [instance] :184
void TextRenderer::Invalidate()
{
    _wrapInfo = NULL;
}

// public void SoftDispose() [instance] :194
void TextRenderer::SoftDispose()
{
    _wrapInfo = NULL;
}

// private void UpdateArrange() [instance] :175
void TextRenderer::UpdateArrange()
{
    uString* ind14;

    if (_wrapInfo != NULL)
        return;

    ind14 = uPtr(Control)->RenderValue();
    uString* v = (ind14 != NULL) ? ind14 : ::STRINGS[0/*""*/];
    InitWrap(_size.X, v, false);
}

// internal static Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer GetTextRenderer(Fuse.Font f) [static] :20
::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* TextRenderer::GetTextRenderer(::g::Fuse::Font* f)
{
    TextRenderer_typeof()->Init();
    bool ret16;
    ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* tr;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(TextRenderer::_textRenderers_), f, (void**)(&tr), &ret16), ret16))
    {
        tr = ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer::New1(TextRenderer::LoadFont(f));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TextRenderer::_textRenderers_), f, tr);
    }

    return tr;
}

// private static Uno.Content.Fonts.FontFace LoadFont(Fuse.Font font) [static] :34
::g::Uno::Content::Fonts::FontFace* TextRenderer::LoadFont(::g::Fuse::Font* font)
{
    TextRenderer_typeof()->Init();
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->FileSource(), ::TYPES[5/*Uno.UX.BundleFileSource*/]);

    if (bfs != NULL)
        return ::g::Uno::Content::Fonts::FontFace::Load1(uPtr(bfs)->BundleFile);
    else
    {
        uArray* data = uPtr(uPtr(font)->FileSource())->ReadAllBytes();
        return ::g::Uno::Content::Fonts::FontFace::Load(uPtr(font->FileSource())->Name, data, 0, uPtr(data)->Length());
    }
}

// public TextRenderer New(Fuse.Controls.TextControl text) [static] :13
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* text)
{
    TextRenderer* obj15 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj15->ctor_(text);
    return obj15;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/WordWrapInfo.uno
// --------------------------------------------------------------------------------------------------------------------

// internal sealed class WordWrapInfo :5
// {
static void WordWrapInfo_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Uno::Float_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer_typeof(), offsetof(WordWrapInfo, TextRenderer), 0,
        ::TYPES[6/*bool*/], offsetof(WordWrapInfo, IsEnabled), 0,
        ::TYPES[7/*float*/], offsetof(WordWrapInfo, WrapWidth), 0,
        ::TYPES[7/*float*/], offsetof(WordWrapInfo, FontSize), 0,
        ::TYPES[7/*float*/], offsetof(WordWrapInfo, LineHeight), 0,
        ::TYPES[7/*float*/], offsetof(WordWrapInfo, LineSpacing), 0,
        ::TYPES[7/*float*/], offsetof(WordWrapInfo, AbsoluteZoom), 0);
}

uType* WordWrapInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WordWrapInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WordWrapInfo", options);
    type->fp_build_ = WordWrapInfo_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))WordWrapInfo__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))WordWrapInfo__GetHashCode_fn;
    return type;
}

// public WordWrapInfo(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) :15
void WordWrapInfo__ctor__fn(WordWrapInfo* __this, ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom)
{
    __this->ctor_(textRenderer, *isEnabled, *wrapWidth, *fontSize, *lineHeight, *lineSpacing, *absoluteZoom);
}

// public override sealed bool Equals(object obj) :27
void WordWrapInfo__Equals_fn(WordWrapInfo* __this, uObject* obj, bool* __retval)
{
    if (!uIs(obj, __this->__type))
        return *__retval = false, void();

    WordWrapInfo* other = uCast<WordWrapInfo*>(obj, __this->__type);
    return *__retval = ((((((__this->TextRenderer == uPtr(other)->TextRenderer) && (__this->IsEnabled == uPtr(other)->IsEnabled)) && (__this->WrapWidth == uPtr(other)->WrapWidth)) && (__this->FontSize == uPtr(other)->FontSize)) && (__this->LineHeight == uPtr(other)->LineHeight)) && (__this->LineSpacing == uPtr(other)->LineSpacing)) && (__this->AbsoluteZoom == uPtr(other)->AbsoluteZoom), void();
}

// public override sealed int GetHashCode() :43
void WordWrapInfo__GetHashCode_fn(WordWrapInfo* __this, int32_t* __retval)
{
    bool ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    float ind6;
    return *__retval = (((((::g::Uno::Object::GetHashCode(uPtr(__this->TextRenderer)) ^ ::g::Uno::Bool::GetHashCode((ind1 = __this->IsEnabled, ind1), ::TYPES[6/*bool*/])) ^ ::g::Uno::Float::GetHashCode((ind2 = __this->WrapWidth, ind2), ::TYPES[7/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind3 = __this->FontSize, ind3), ::TYPES[7/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind4 = __this->LineHeight, ind4), ::TYPES[7/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind5 = __this->LineSpacing, ind5), ::TYPES[7/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind6 = __this->AbsoluteZoom, ind6), ::TYPES[7/*float*/]), void();
}

// public WordWrapInfo New(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) :15
void WordWrapInfo__New1_fn(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom, WordWrapInfo** __retval)
{
    *__retval = WordWrapInfo::New1(textRenderer, *isEnabled, *wrapWidth, *fontSize, *lineHeight, *lineSpacing, *absoluteZoom);
}

// public WordWrapInfo(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) [instance] :15
void WordWrapInfo::ctor_(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    AbsoluteZoom = absoluteZoom;
    TextRenderer = textRenderer;
    IsEnabled = isEnabled;
    WrapWidth = wrapWidth;
    FontSize = fontSize;
    LineHeight = (::g::Uno::Math::Ceil1(lineHeight * absoluteZoom) / absoluteZoom);
    LineHeight = (LineHeight + (lineSpacing * absoluteZoom));
    LineSpacing = (lineSpacing * absoluteZoom);
}

// public WordWrapInfo New(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) [static] :15
WordWrapInfo* WordWrapInfo::New1(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    WordWrapInfo* obj7 = (WordWrapInfo*)uNew(WordWrapInfo_typeof());
    obj7->ctor_(textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom);
    return obj7;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/WordWrapper.uno
// -------------------------------------------------------------------------------------------------------------------

// internal static class WordWrapper :28
// {
static void WordWrapper_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof(), NULL);
}

uClassType* WordWrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WordWrapper", options);
    type->fp_build_ = WordWrapper_build;
    return type;
}

// private static Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WordWrapperWord> GetWords(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) :69
void WordWrapper__GetWords_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = WordWrapper::GetWords(wrapInfo, text);
}

// private static Fuse.Controls.FallbackTextRenderer.WordWrapperWord SplitWord(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine> wrappedLines, Fuse.Controls.FallbackTextRenderer.WordWrapperWord word, int& lineStartIndex) :96
void WordWrapper__SplitWord_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word, int32_t* lineStartIndex, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord** __retval)
{
    *__retval = WordWrapper::SplitWord(wrapInfo, wrappedLines, word, lineStartIndex);
}

// public static Fuse.Controls.FallbackTextRenderer.WrappedLine[] WrapLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) :30
void WordWrapper__WrapLine_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text, uArray** __retval)
{
    *__retval = WordWrapper::WrapLine(wrapInfo, text);
}

// private static Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WordWrapperWord> GetWords(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) [static] :69
::g::Uno::Collections::List* WordWrapper::GetWords(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text)
{
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WordWrapperWord>*/]);

    for (int32_t i = 0; i < uPtr(text)->Length(); )
    {
        int32_t contentsIndex = i;
        int32_t contentsLength = 0;

        for (; (i < uPtr(text)->Length()) && !::g::Uno::Char::IsWhiteSpace(uPtr(text)->Item(i)); i++)
            contentsLength++;

        uString* contents = ::g::Uno::String::Substring1(uPtr(text), contentsIndex, contentsLength);
        int32_t whitespaceIndex = i;
        int32_t whitespaceLength = 0;

        for (; (i < text->Length()) && ::g::Uno::Char::IsWhiteSpace(text->Item(i)); i++)
            whitespaceLength++;

        uString* whitespace = ::g::Uno::String::Substring1(text, whitespaceIndex, whitespaceLength);
        ::g::Uno::Collections::List__Add_fn(uPtr(ret), ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord::New1(contents, whitespace, contentsIndex, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, contents).X, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::op_Addition2(contents, whitespace)).X));
    }

    return ret;
}

// private static Fuse.Controls.FallbackTextRenderer.WordWrapperWord SplitWord(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine> wrappedLines, Fuse.Controls.FallbackTextRenderer.WordWrapperWord word, int& lineStartIndex) [static] :96
::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* WordWrapper::SplitWord(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word, int32_t* lineStartIndex)
{
    while ((uPtr(uPtr(word)->Contents)->Length() > 1) && (uPtr(word)->ContentsWidth > uPtr(wrapInfo)->WrapWidth))
    {
        int32_t c = 1;

        for (; c < uPtr(uPtr(word)->Contents)->Length(); c++)
        {
            uString* leftString = ::g::Uno::String::Substring1(uPtr(uPtr(word)->Contents), 0, c);
            float startX = uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, leftString).X;

            if (startX >= wrapInfo->WrapWidth)
                return word;

            float endX = startX + uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(word->Contents), c, 1)).X;

            if ((startX < wrapInfo->WrapWidth) && (endX >= wrapInfo->WrapWidth))
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(leftString, uPtr(word)->StartIndex, (float)uPtr(wrappedLines)->Count() * uPtr(wrapInfo)->LineHeight, startX));
                uString* newWordContents = ::g::Uno::String::Substring(uPtr(word->Contents), c);
                *lineStartIndex = word->StartIndex + c;
                word = ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord::New1(newWordContents, word->Whitespace, *lineStartIndex, uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, newWordContents).X, uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::g::Uno::String::op_Addition2(newWordContents, word->Whitespace)).X);
                break;
            }
        }
    }

    return word;
}

// public static Fuse.Controls.FallbackTextRenderer.WrappedLine[] WrapLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) [static] :30
uArray* WordWrapper::WrapLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text)
{
    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* ret1;
    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* ret2;
    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* ret3;
    ::g::Uno::Collections::List* words = WordWrapper::GetWords(wrapInfo, text);
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine>*/]);

    if (uPtr(words)->Count() == 0)
        return (uArray*)uPtr(ret)->ToArray();

    int32_t lineStartIndex = 0;
    uString* lineText = ::g::Uno::String::Empty();
    float lineWidth = 0.0f;

    for (int32_t i = 0; i < (uPtr(words)->Count() - 1); i++)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word = WordWrapper::SplitWord(wrapInfo, ret, (::g::Uno::Collections::List__get_Item_fn(uPtr(words), uCRef<int32_t>(i), &ret1), ret1), &lineStartIndex);
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* nextWord = (::g::Uno::Collections::List__get_Item_fn(words, uCRef<int32_t>(i + 1), &ret2), ret2);

        if (((lineWidth + uPtr(word)->TotalContentsWidth) + uPtr(nextWord)->ContentsWidth) <= uPtr(wrapInfo)->WrapWidth)
        {
            lineText = ::g::Uno::String::op_Addition2(lineText, uPtr(word)->TotalContents);
            lineWidth = lineWidth + word->TotalContentsWidth;
        }
        else
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(::g::Uno::String::op_Addition2(lineText, uPtr(word)->TotalContents), lineStartIndex, (float)uPtr(ret)->Count() * uPtr(wrapInfo)->LineHeight, lineWidth + uPtr(word)->ContentsWidth));
            lineStartIndex = uPtr(nextWord)->StartIndex;
            lineText = ::g::Uno::String::Empty();
            lineWidth = 0.0f;
        }
    }

    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* lastWord = WordWrapper::SplitWord(wrapInfo, ret, (::g::Uno::Collections::List__get_Item_fn(uPtr(words), uCRef<int32_t>(uPtr(words)->Count() - 1), &ret3), ret3), &lineStartIndex);
    ::g::Uno::Collections::List__Add_fn(ret, ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(::g::Uno::String::op_Addition2(lineText, uPtr(lastWord)->TotalContents), lineStartIndex, (float)ret->Count() * uPtr(wrapInfo)->LineHeight, lineWidth + uPtr(lastWord)->TotalContentsWidth));
    return (uArray*)ret->ToArray();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/WordWrapper.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class WordWrapperWord :6
// {
static void WordWrapperWord_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(WordWrapperWord, Contents), 0,
        ::g::Uno::String_typeof(), offsetof(WordWrapperWord, Whitespace), 0,
        ::g::Uno::String_typeof(), offsetof(WordWrapperWord, TotalContents), 0,
        ::g::Uno::Int_typeof(), offsetof(WordWrapperWord, StartIndex), 0,
        ::g::Uno::Float_typeof(), offsetof(WordWrapperWord, ContentsWidth), 0,
        ::g::Uno::Float_typeof(), offsetof(WordWrapperWord, TotalContentsWidth), 0);
}

uType* WordWrapperWord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(WordWrapperWord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WordWrapperWord", options);
    type->fp_build_ = WordWrapperWord_build;
    return type;
}

// public WordWrapperWord(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) :17
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int32_t* startIndex, float* contentsWidth, float* totalContentsWidth)
{
    __this->ctor_(contents, whitespace, *startIndex, *contentsWidth, *totalContentsWidth);
}

// public WordWrapperWord New(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) :17
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int32_t* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval)
{
    *__retval = WordWrapperWord::New1(contents, whitespace, *startIndex, *contentsWidth, *totalContentsWidth);
}

// public WordWrapperWord(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) [instance] :17
void WordWrapperWord::ctor_(uString* contents, uString* whitespace, int32_t startIndex, float contentsWidth, float totalContentsWidth)
{
    Contents = contents;
    Whitespace = whitespace;
    TotalContents = ::g::Uno::String::op_Addition2(Contents, Whitespace);
    StartIndex = startIndex;
    ContentsWidth = contentsWidth;
    TotalContentsWidth = totalContentsWidth;
}

// public WordWrapperWord New(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) [static] :17
WordWrapperWord* WordWrapperWord::New1(uString* contents, uString* whitespace, int32_t startIndex, float contentsWidth, float totalContentsWidth)
{
    WordWrapperWord* obj1 = (WordWrapperWord*)uNew(WordWrapperWord_typeof());
    obj1->ctor_(contents, whitespace, startIndex, contentsWidth, totalContentsWidth);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FallbackTextRenderer/WrappedLine.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed class WrappedLine :6
// {
static void WrappedLine_build(uType* type)
{
    ::STRINGS[1] = uString::Const("unsupported enum-value");
    ::STRINGS[2] = uString::Const("textAlignment");
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(WrappedLine, Text), 0,
        ::g::Uno::Int_typeof(), offsetof(WrappedLine, LineTextStartOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(WrappedLine, YOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(WrappedLine, LineWidth), 0);
}

uType* WrappedLine_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WrappedLine);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WrappedLine", options);
    type->fp_build_ = WrappedLine_build;
    return type;
}

// public WrappedLine(string text, int lineTextStartOffset, float yOffset, float lineWidth) :15
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int32_t* lineTextStartOffset, float* yOffset, float* lineWidth)
{
    __this->ctor_(text, *lineTextStartOffset, *yOffset, *lineWidth);
}

// public float GetXOffset(Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float absoluteZoom) :23
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int32_t* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval)
{
    *__retval = __this->GetXOffset(*textAlignment, *boundsWidth, *absoluteZoom);
}

// public WrappedLine New(string text, int lineTextStartOffset, float yOffset, float lineWidth) :15
void WrappedLine__New1_fn(uString* text, int32_t* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval)
{
    *__retval = WrappedLine::New1(text, *lineTextStartOffset, *yOffset, *lineWidth);
}

// public WrappedLine(string text, int lineTextStartOffset, float yOffset, float lineWidth) [instance] :15
void WrappedLine::ctor_(uString* text, int32_t lineTextStartOffset, float yOffset, float lineWidth)
{
    Text = text;
    LineTextStartOffset = lineTextStartOffset;
    YOffset = yOffset;
    LineWidth = lineWidth;
}

// public float GetXOffset(Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float absoluteZoom) [instance] :23
float WrappedLine::GetXOffset(int32_t textAlignment, float boundsWidth, float absoluteZoom)
{
    switch (textAlignment)
    {
        case 0:
            return 0.0f;
        case 1:
            return ::g::Uno::Math::Floor1((((boundsWidth - LineWidth) / 2.0f) * absoluteZoom) + 0.5f) / absoluteZoom;
        case 2:
            return boundsWidth - LineWidth;
    }

    U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[1/*"unsupported...*/], ::STRINGS[2/*"textAlignment"*/]));
}

// public WrappedLine New(string text, int lineTextStartOffset, float yOffset, float lineWidth) [static] :15
WrappedLine* WrappedLine::New1(uString* text, int32_t lineTextStartOffset, float yOffset, float lineWidth)
{
    WrappedLine* obj1 = (WrappedLine*)uNew(WrappedLine_typeof());
    obj1->ctor_(text, lineTextStartOffset, yOffset, lineWidth);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
