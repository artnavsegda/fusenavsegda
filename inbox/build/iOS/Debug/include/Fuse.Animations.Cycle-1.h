// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.10.0-rc1/Cycle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Cycle;}}}
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Cycle<T> :60
// {
::g::Fuse::Animations::Animator_type* Cycle_typeof();
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval);
void Cycle__set_Base_fn(Cycle* __this, void* value);
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Cycle__get_Easing_fn(Cycle* __this, ::g::Fuse::Animations::Easing** __retval);
void Cycle__set_Easing_fn(Cycle* __this, ::g::Fuse::Animations::Easing* value);
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval);
void Cycle__set_Frequency_fn(Cycle* __this, double* value);
void Cycle__get_FrequencyBack_fn(Cycle* __this, double* __retval);
void Cycle__set_FrequencyBack_fn(Cycle* __this, double* value);
void Cycle__get_High_fn(Cycle* __this, float* __retval);
void Cycle__set_High_fn(Cycle* __this, float* value);
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval);
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval);
void Cycle__get_Low_fn(Cycle* __this, float* __retval);
void Cycle__set_Low_fn(Cycle* __this, float* value);
void Cycle__get_Offset_fn(Cycle* __this, uTRef __retval);
void Cycle__set_Offset_fn(Cycle* __this, void* value);
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval);
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value);
void Cycle__get_Restore_fn(Cycle* __this, int32_t* __retval);
void Cycle__set_Restore_fn(Cycle* __this, int32_t* value);
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval);
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property1** __retval);
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property1* value);
void Cycle__get_Waveform_fn(Cycle* __this, int32_t* __retval);
void Cycle__set_Waveform_fn(Cycle* __this, int32_t* value);
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval);

struct Cycle : ::g::Fuse::Animations::OpenAnimator
{
    double _frequency;
    bool _hasBackFrequency;
    double _backFrequency;
    int32_t _waveform;
    int32_t _restore;
    float _progressOffset;
    bool _hasProgressOffset;
    uStrong< ::g::Fuse::Animations::Easing*> _easing;
    uTField _Base() { return __type->Field(this, 14); }
    float _High;
    float _Low;
    uTField _Offset() { return __type->Field(this, 17); }
    uStrong< ::g::Uno::UX::Property1*> _Target;

    template<class T>
    T Base() { T __retval; return Cycle__get_Base_fn(this, &__retval), __retval; }
    template<class T>
    void Base(T value) { Cycle__set_Base_fn(this, uConstrain(__type->T(0), value)); }
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    double Frequency();
    void Frequency(double value);
    double FrequencyBack();
    void FrequencyBack(double value);
    float High();
    void High(float value);
    bool IsOneCrossing();
    bool IsZeroCrossing();
    float Low();
    void Low(float value);
    template<class T>
    T Offset() { T __retval; return Cycle__get_Offset_fn(this, &__retval), __retval; }
    template<class T>
    void Offset(T value) { Cycle__set_Offset_fn(this, uConstrain(__type->T(0), value)); }
    float ProgressOffset();
    void ProgressOffset(float value);
    int32_t Restore();
    void Restore(int32_t value);
    double RestProgress();
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    int32_t Waveform();
    void Waveform(int32_t value);
    double WaveformFunc(double i, double offset);
};
// }

}}} // ::g::Fuse::Animations
