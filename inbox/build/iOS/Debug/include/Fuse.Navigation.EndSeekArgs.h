// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.10.0-rc1/SwipeNavigate.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class EndSeekArgs :50
// {
uType* EndSeekArgs_typeof();
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int32_t* snapTo, float* velocity);
void EndSeekArgs__New1_fn(int32_t* snapTo, float* velocity, EndSeekArgs** __retval);
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int32_t* __retval);
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int32_t* value);
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval);
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value);

struct EndSeekArgs : uObject
{
    int32_t _SnapTo;
    float _Velocity;

    void ctor_(int32_t snapTo, float velocity);
    int32_t SnapTo();
    void SnapTo(int32_t value);
    float Velocity();
    void Velocity(float value);
    static EndSeekArgs* New1(int32_t snapTo, float velocity);
};
// }

}}} // ::g::Fuse::Navigation
