// This file was generated based on /Users/artnavsegda/Downloads/inbox/.uno/ux15/Inbox.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Inbox_FuseDrawingImageFill_File_Property;}

namespace g{

// internal sealed class Inbox_FuseDrawingImageFill_File_Property :27
// {
::g::Uno::UX::Property1_type* Inbox_FuseDrawingImageFill_File_Property_typeof();
void Inbox_FuseDrawingImageFill_File_Property__ctor_3_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name);
void Inbox_FuseDrawingImageFill_File_Property__Get1_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void Inbox_FuseDrawingImageFill_File_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, Inbox_FuseDrawingImageFill_File_Property** __retval);
void Inbox_FuseDrawingImageFill_File_Property__get_Object_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Inbox_FuseDrawingImageFill_File_Property__Set1_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);

struct Inbox_FuseDrawingImageFill_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::ImageFill*> _obj;

    void ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
    static Inbox_FuseDrawingImageFill_File_Property* New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
