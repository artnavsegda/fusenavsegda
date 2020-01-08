// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl.h>
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Fuse.Controls.VideoImpl.VideoDiskCache.h>
#include <iOS/VideoImpl.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.10.0-rc1/iOS/VideoPlayer.uno
// --------------------------------------------------------------------------------

// internal sealed extern class VideoLoader :13
// {
static void VideoLoader_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::VideoImpl::VideoDiskCache_typeof());
}

uType* VideoLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    return type;
}

// private static string GetBundleAbsolutePath(string bundlePath) :90
void VideoLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = VideoLoader::GetBundleAbsolutePath(bundlePath);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) :71
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) :84
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) :76
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load2(fileSource);
}

// private static string GetBundleAbsolutePath(string bundlePath) [static] :90
uString* VideoLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle bundleForClass:[StrongUnoObject class]] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static] :71
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return VideoLoader__VideoPromise::New5(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) [static] :84
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::IO::BundleFile* file)
{
    return VideoLoader::Load(VideoLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(uString::Const("data/"), uPtr(file)->BundlePath())));
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) [static] :76
::g::Uno::Threading::Future1* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    if (uIs(fileSource, ::g::Uno::UX::BundleFileSource_typeof()))
        return VideoLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::g::Uno::UX::BundleFileSource_typeof()))->BundleFile);
    else
        return VideoLoader::Load(::g::Uno::String::op_Addition2(uString::Const("file://"), ::g::Fuse::Controls::VideoImpl::VideoDiskCache::GetFilePath(fileSource)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/1.10.0-rc1/iOS/VideoImpl.uno
// ------------------------------------------------------------------------------

// internal static extern class VideoPlayerImpl :115
// {
static void VideoPlayerImpl_build(uType* type)
{
}

uClassType* VideoPlayerImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", options);
    type->fp_build_ = VideoPlayerImpl_build;
    return type;
}

// public static Uno.IntPtr AllocateVideoState() :117
void VideoPlayerImpl__AllocateVideoState_fn(void** __retval)
{
    *__retval = VideoPlayerImpl::AllocateVideoState();
}

// public static void FreeVideoState(Uno.IntPtr videoState) :122
void VideoPlayerImpl__FreeVideoState_fn(void** videoState)
{
    VideoPlayerImpl::FreeVideoState(*videoState);
}

// public static double GetDuration(Uno.IntPtr videoState) :137
void VideoPlayerImpl__GetDuration_fn(void** videoState, double* __retval)
{
    *__retval = VideoPlayerImpl::GetDuration(*videoState);
}

// public static int GetHeight(Uno.IntPtr videoState) :167
void VideoPlayerImpl__GetHeight_fn(void** videoState, int32_t* __retval)
{
    *__retval = VideoPlayerImpl::GetHeight(*videoState);
}

// public static double GetPosition(Uno.IntPtr videoState) :142
void VideoPlayerImpl__GetPosition_fn(void** videoState, double* __retval)
{
    *__retval = VideoPlayerImpl::GetPosition(*videoState);
}

// public static int GetRotation(Uno.IntPtr videoState) :132
void VideoPlayerImpl__GetRotation_fn(void** videoState, int32_t* __retval)
{
    *__retval = VideoPlayerImpl::GetRotation(*videoState);
}

// public static float GetVolume(Uno.IntPtr videoState) :152
void VideoPlayerImpl__GetVolume_fn(void** videoState, float* __retval)
{
    *__retval = VideoPlayerImpl::GetVolume(*videoState);
}

// public static int GetWidth(Uno.IntPtr videoState) :162
void VideoPlayerImpl__GetWidth_fn(void** videoState, int32_t* __retval)
{
    *__retval = VideoPlayerImpl::GetWidth(*videoState);
}

// public static void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) :127
void VideoPlayerImpl__Initialize_fn(void** videoState, uString* uri, uDelegate* loadedCallback, uDelegate* errorCallback)
{
    VideoPlayerImpl::Initialize(*videoState, uri, loadedCallback, errorCallback);
}

// public static void Pause(Uno.IntPtr videoState) :177
void VideoPlayerImpl__Pause_fn(void** videoState)
{
    VideoPlayerImpl::Pause(*videoState);
}

// public static void Play(Uno.IntPtr videoState) :172
void VideoPlayerImpl__Play_fn(void** videoState)
{
    VideoPlayerImpl::Play(*videoState);
}

// public static void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) :187
void VideoPlayerImpl__SetErrorHandler_fn(void** videoState, uDelegate* errorHandler)
{
    VideoPlayerImpl::SetErrorHandler(*videoState, errorHandler);
}

// public static void SetPosition(Uno.IntPtr videoState, double position) :147
void VideoPlayerImpl__SetPosition_fn(void** videoState, double* position)
{
    VideoPlayerImpl::SetPosition(*videoState, *position);
}

// public static void SetVolume(Uno.IntPtr videoState, float volume) :157
void VideoPlayerImpl__SetVolume_fn(void** videoState, float* volume)
{
    VideoPlayerImpl::SetVolume(*videoState, *volume);
}

// public static OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) :182
void VideoPlayerImpl__UpdateTexture_fn(void** videoState, uint32_t* __retval)
{
    *__retval = VideoPlayerImpl::UpdateTexture(*videoState);
}

// public static Uno.IntPtr AllocateVideoState() [static] :117
void* VideoPlayerImpl::AllocateVideoState()
{
    return ::FuseVideoImpl::allocateVideoState();
}

// public static void FreeVideoState(Uno.IntPtr videoState) [static] :122
void VideoPlayerImpl::FreeVideoState(void* videoState)
{
    ::FuseVideoImpl::freeVideoState(videoState);
}

// public static double GetDuration(Uno.IntPtr videoState) [static] :137
double VideoPlayerImpl::GetDuration(void* videoState)
{
    return ::FuseVideoImpl::getDuration(videoState);
}

// public static int GetHeight(Uno.IntPtr videoState) [static] :167
int32_t VideoPlayerImpl::GetHeight(void* videoState)
{
    return ::FuseVideoImpl::getHeight(videoState);
}

// public static double GetPosition(Uno.IntPtr videoState) [static] :142
double VideoPlayerImpl::GetPosition(void* videoState)
{
    return ::FuseVideoImpl::getPosition(videoState);
}

// public static int GetRotation(Uno.IntPtr videoState) [static] :132
int32_t VideoPlayerImpl::GetRotation(void* videoState)
{
    return ::FuseVideoImpl::getRotation(videoState);
}

// public static float GetVolume(Uno.IntPtr videoState) [static] :152
float VideoPlayerImpl::GetVolume(void* videoState)
{
    return ::FuseVideoImpl::getVolume(videoState);
}

// public static int GetWidth(Uno.IntPtr videoState) [static] :162
int32_t VideoPlayerImpl::GetWidth(void* videoState)
{
    return ::FuseVideoImpl::getWidth(videoState);
}

// public static void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) [static] :127
void VideoPlayerImpl::Initialize(void* videoState, uString* uri, uDelegate* loadedCallback, uDelegate* errorCallback)
{
    ::FuseVideoImpl::initialize(videoState, uObjC::NativeString(uri), loadedCallback, errorCallback);
}

// public static void Pause(Uno.IntPtr videoState) [static] :177
void VideoPlayerImpl::Pause(void* videoState)
{
    ::FuseVideoImpl::pause(videoState);
}

// public static void Play(Uno.IntPtr videoState) [static] :172
void VideoPlayerImpl::Play(void* videoState)
{
    ::FuseVideoImpl::play(videoState);
}

// public static void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) [static] :187
void VideoPlayerImpl::SetErrorHandler(void* videoState, uDelegate* errorHandler)
{
    ::FuseVideoImpl::setErrorHandler(videoState, errorHandler);
}

// public static void SetPosition(Uno.IntPtr videoState, double position) [static] :147
void VideoPlayerImpl::SetPosition(void* videoState, double position)
{
    return ::FuseVideoImpl::setPosition(videoState, position);
}

// public static void SetVolume(Uno.IntPtr videoState, float volume) [static] :157
void VideoPlayerImpl::SetVolume(void* videoState, float volume)
{
    ::FuseVideoImpl::setVolume(videoState, volume);
}

// public static OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) [static] :182
uint32_t VideoPlayerImpl::UpdateTexture(void* videoState)
{
    return ::FuseVideoImpl::updateTexture(videoState);
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
