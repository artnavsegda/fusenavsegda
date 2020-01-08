// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.10.0-rc1/Enums.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct AlignmentHelpers;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class AlignmentHelpers :76
// {
uClassType* AlignmentHelpers_typeof();
void AlignmentHelpers__GetAnchor_fn(int32_t* a, ::g::Uno::Float2* __retval);
void AlignmentHelpers__GetHorizontalAlign_fn(int32_t* a, int32_t* __retval);
void AlignmentHelpers__GetHorizontalSimpleAlign_fn(int32_t* a, int32_t* __retval);
void AlignmentHelpers__GetHorizontalSimpleAlignOptional_fn(int32_t* a, int32_t* __retval);
void AlignmentHelpers__GetVerticalAlign_fn(int32_t* a, int32_t* __retval);
void AlignmentHelpers__GetVerticalSimpleAlign_fn(int32_t* a, int32_t* __retval);
void AlignmentHelpers__GetVerticalSimpleAlignOptional_fn(int32_t* a, int32_t* __retval);

struct AlignmentHelpers : uObject
{
    static ::g::Uno::Float2 GetAnchor(int32_t a);
    static int32_t GetHorizontalAlign(int32_t a);
    static int32_t GetHorizontalSimpleAlign(int32_t a);
    static int32_t GetHorizontalSimpleAlignOptional(int32_t a);
    static int32_t GetVerticalAlign(int32_t a);
    static int32_t GetVerticalSimpleAlign(int32_t a);
    static int32_t GetVerticalSimpleAlignOptional(int32_t a);
};
// }

}}} // ::g::Fuse::Elements
