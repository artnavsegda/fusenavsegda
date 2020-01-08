// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/Resources/Exif/Exif.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{namespace Exif{struct ExifData;}}}}
namespace g{namespace Fuse{namespace Resources{namespace Exif{struct ExifIOSImpl;}}}}

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// internal static extern class ExifIOSImpl :126
// {
uClassType* ExifIOSImpl_typeof();
void ExifIOSImpl__FromByteArray_fn(uArray* bytes, ::g::Fuse::Resources::Exif::ExifData* __retval);
void ExifIOSImpl__GetOrientation_fn(uArray* bytes, int32_t* __retval);

struct ExifIOSImpl : uObject
{
    static ::g::Fuse::Resources::Exif::ExifData FromByteArray(uArray* bytes);
    static int32_t GetOrientation(uArray* bytes);
};
// }

}}}} // ::g::Fuse::Resources::Exif
