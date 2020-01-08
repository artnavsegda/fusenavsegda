// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Graphics/SamplerState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public struct SamplerState :21
// {
uStructType* SamplerState_typeof();
void SamplerState__ctor_1_fn(SamplerState* __this, int32_t* minFilter, int32_t* magFilter, int32_t* addressMode);
void SamplerState__get_LinearClamp_fn(SamplerState* __retval);
void SamplerState__get_LinearWrap_fn(SamplerState* __retval);
void SamplerState__get_MinFilterNoMipmap_fn(SamplerState* __this, int32_t* __retval);
void SamplerState__get_NearestClamp_fn(SamplerState* __retval);
void SamplerState__New1_fn(int32_t* minFilter, int32_t* magFilter, int32_t* addressMode, SamplerState* __retval);
void SamplerState__get_TrilinearClamp_fn(SamplerState* __retval);

struct SamplerState
{
    int32_t MinFilter;
    int32_t MagFilter;
    int32_t AddressU;
    int32_t AddressV;
    int32_t AddressW;

    void ctor_1(int32_t minFilter, int32_t magFilter, int32_t addressMode);
    int32_t MinFilterNoMipmap();
};

SamplerState SamplerState__New1(int32_t minFilter, int32_t magFilter, int32_t addressMode);
SamplerState SamplerState__LinearClamp();
SamplerState SamplerState__LinearWrap();
SamplerState SamplerState__NearestClamp();
SamplerState SamplerState__TrilinearClamp();
// }

}}} // ::g::Uno::Graphics
