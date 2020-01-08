// This file was generated based on /Users/artnavsegda/Downloads/inbox/.uno/ux15/Inbox.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Inbox_FuseDrawingImageFill_File_Property.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Inbox_FuseDrawingImageFill_File_Property :27
// {
static void Inbox_FuseDrawingImageFill_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.ImageFill*/], offsetof(Inbox_FuseDrawingImageFill_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* Inbox_FuseDrawingImageFill_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Inbox_FuseDrawingImageFill_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Inbox_FuseDrawingImageFill_File_Property", options);
    type->fp_build_ = Inbox_FuseDrawingImageFill_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Inbox_FuseDrawingImageFill_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Inbox_FuseDrawingImageFill_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Inbox_FuseDrawingImageFill_File_Property__Set1_fn;
    return type;
}

// public Inbox_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :30
void Inbox_FuseDrawingImageFill_File_Property__ctor_3_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :32
void Inbox_FuseDrawingImageFill_File_Property__Get1_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->File(), void();
}

// public Inbox_FuseDrawingImageFill_File_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :30
void Inbox_FuseDrawingImageFill_File_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, Inbox_FuseDrawingImageFill_File_Property** __retval)
{
    *__retval = Inbox_FuseDrawingImageFill_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :31
void Inbox_FuseDrawingImageFill_File_Property__get_Object_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :33
void Inbox_FuseDrawingImageFill_File_Property__Set1_fn(Inbox_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->File(v);
}

// public Inbox_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [instance] :30
void Inbox_FuseDrawingImageFill_File_Property::ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public Inbox_FuseDrawingImageFill_File_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [static] :30
Inbox_FuseDrawingImageFill_File_Property* Inbox_FuseDrawingImageFill_File_Property::New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    Inbox_FuseDrawingImageFill_File_Property* obj1 = (Inbox_FuseDrawingImageFill_File_Property*)uNew(Inbox_FuseDrawingImageFill_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
