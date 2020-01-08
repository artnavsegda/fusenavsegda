// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreFoundation/CoreFoundation.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.ExifIOSImpl.h>
#include <ImageIO/ImageIO.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/Resources/Exif/Exif.uno
// ------------------------------------------------------------------------------

// internal static extern class ExifIOSImpl :126
// {
static void ExifIOSImpl_build(uType* type)
{
}

uClassType* ExifIOSImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.Exif.ExifIOSImpl", options);
    type->fp_build_ = ExifIOSImpl_build;
    return type;
}

// internal static Fuse.Resources.Exif.ExifData FromByteArray(byte[] bytes) :128
void ExifIOSImpl__FromByteArray_fn(uArray* bytes, ::g::Fuse::Resources::Exif::ExifData* __retval)
{
    *__retval = ExifIOSImpl::FromByteArray(bytes);
}

// private static int GetOrientation(byte[] bytes) :135
void ExifIOSImpl__GetOrientation_fn(uArray* bytes, int32_t* __retval)
{
    *__retval = ExifIOSImpl::GetOrientation(bytes);
}

// internal static Fuse.Resources.Exif.ExifData FromByteArray(byte[] bytes) [static] :128
::g::Fuse::Resources::Exif::ExifData ExifIOSImpl::FromByteArray(uArray* bytes)
{
    int32_t orientation = ExifIOSImpl::GetOrientation(bytes);
    return ::g::Fuse::Resources::Exif::ExifData__New1(orientation);
}

// private static int GetOrientation(byte[] bytes) [static] :135
int32_t ExifIOSImpl::GetOrientation(uArray* bytes)
{
    @autoreleasepool
    {
        return [] (id<UnoArray> bytes) -> int32_t
        {
            CFDataRef data = CFDataCreateWithBytesNoCopy(NULL, (const UInt8 *)bytes.unoArray->Ptr(), bytes.unoArray->Length(), kCFAllocatorNull);
            CGImageSourceRef imageSource = CGImageSourceCreateWithData(data, NULL);
            
            NSArray *metadataArray = nil;
            
            if (imageSource) {
            	CGImageMetadataRef metadata = CGImageSourceCopyMetadataAtIndex(imageSource, 0, NULL);
            	if (metadata) {
            		metadataArray = CFBridgingRelease(CGImageMetadataCopyTags(metadata));
            		CFRelease(metadata);
            	}
            	CFRelease(imageSource);
            }
            
            int rotation = -1;
            NSString* tagTarget = @"Orientation";
            if (metadataArray != nil)
            {
            	for (id tag in metadataArray) {
            		CFStringRef tagName = CGImageMetadataTagCopyName((CGImageMetadataTagRef)tag);
            		if ([tagTarget isEqualToString: (__bridge NSString*)tagName]) {
            			CFTypeRef rot = CGImageMetadataTagCopyValue((CGImageMetadataTagRef)tag);
            			rotation = [((__bridge NSNumber*)rot) intValue];
            			break;
            		}
            	}
            }
            
            return rotation;
        } ([::StrongUnoArray strongUnoArrayWithUnoArray: bytes getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]);
        
    }
    
}
// }

}}}} // ::g::Fuse::Resources::Exif
