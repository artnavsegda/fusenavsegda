// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.ExifIOSImpl.h>
#include <Fuse.Resources.Exif.ImageOrientation.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/Resources/Exif/Exif.uno
// ------------------------------------------------------------------------------

// public struct ExifData :21
// {
static void ExifData_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Reserved Exif orientation {0}, assuming identity");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/Resources/Exif/Exif.uno");
    ::STRINGS[2] = uString::Const(".ctor");
    ::TYPES[0] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(ExifData, Orientation), 0);
}

uStructType* ExifData_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(ExifData);
    options.ValueSize = sizeof(ExifData);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Resources.Exif.ExifData", options);
    type->fp_build_ = ExifData_build;
    return type;
}

// internal ExifData(int orientation) :42
void ExifData__ctor_1_fn(ExifData* __this, int32_t* orientation)
{
    __this->ctor_1(*orientation);
}

// public static Fuse.Resources.Exif.ExifData FromByteArray(byte[] buffer) :25
void ExifData__FromByteArray_fn(uArray* buffer, ExifData* __retval)
{
    *__retval = ExifData__FromByteArray(buffer);
}

// internal ExifData New(int orientation) :42
void ExifData__New1_fn(int32_t* orientation, ExifData* __retval)
{
    *__retval = ExifData__New1(*orientation);
}

// internal ExifData(int orientation) [instance] :42
void ExifData::ctor_1(int32_t orientation)
{
    if (orientation < 0)
    {
        Orientation = 0;
        return;
    }

    switch (orientation)
    {
        case 1:
        {
            Orientation = 0;
            break;
        }
        case 2:
        {
            Orientation = 6;
            break;
        }
        case 3:
        {
            Orientation = 2;
            break;
        }
        case 4:
        {
            Orientation = 4;
            break;
        }
        case 5:
        {
            Orientation = 7;
            break;
        }
        case 6:
        {
            Orientation = 1;
            break;
        }
        case 7:
        {
            Orientation = 5;
            break;
        }
        case 8:
        {
            Orientation = 3;
            break;
        }
        default:
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::Format(::STRINGS[0/*"Reserved Ex...*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int32_t>(::g::Uno::Int_typeof(), orientation))), NULL, ::STRINGS[1/*"/usr/local/...*/], 63, ::STRINGS[2/*".ctor"*/]);
            Orientation = 0;
            break;
        }
    }
}

// public static Fuse.Resources.Exif.ExifData FromByteArray(byte[] buffer) [static] :25
ExifData ExifData__FromByteArray(uArray* buffer)
{
    return ::g::Fuse::Resources::Exif::ExifIOSImpl::FromByteArray(buffer);
    return uDefault<ExifData>();
}

// internal ExifData New(int orientation) [static] :42
ExifData ExifData__New1(int32_t orientation)
{
    ExifData obj1;
    obj1.ctor_1(orientation);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/Resources/Exif/Exif.uno
// ------------------------------------------------------------------------------

// public enum ImageOrientation :12
uEnumType* ImageOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Resources.Exif.ImageOrientation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Identity", 0LL,
        "Rotate90", 1LL,
        "Rotate180", 2LL,
        "Rotate270", 3LL,
        "FlipVertical", 4LL);
    return type;
}

}}}} // ::g::Fuse::Resources::Exif
