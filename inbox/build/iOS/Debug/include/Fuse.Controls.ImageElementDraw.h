// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/Image.Visual.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ImageElementDraw;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class ImageElementDraw :175
// {
uType* ImageElementDraw_typeof();
void ImageElementDraw__ctor__fn(ImageElementDraw* __this);
void ImageElementDraw__Draw_fn(ImageElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Float3x3* imageTransform, ::g::Uno::Graphics::Texture2D* tex, int32_t* resampleMode, ::g::Uno::Float4* Color);
void ImageElementDraw__GetSamplerState_fn(ImageElementDraw* __this, int32_t* resampleMode, ::g::Uno::Graphics::SamplerState* __retval);
void ImageElementDraw__New1_fn(ImageElementDraw** __retval);

struct ImageElementDraw : uObject
{
    static uSStrong<ImageElementDraw*> Impl_;
    static uSStrong<ImageElementDraw*>& Impl() { return ImageElementDraw_typeof()->Init(), Impl_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Float3x3 imageTransform, ::g::Uno::Graphics::Texture2D* tex, int32_t resampleMode, ::g::Uno::Float4 Color);
    ::g::Uno::Graphics::SamplerState GetSamplerState(int32_t resampleMode);
    static ImageElementDraw* New1();
};
// }

}}} // ::g::Fuse::Controls
