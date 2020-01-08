// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Easing.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Marshal.h>
#include <Fuse.Motion.DelayFunction.h>
#include <Fuse.Motion.DelayFunction.SetClosure.h>
#include <Fuse.Motion.DelayFunction.Subscription.h>
#include <Fuse.Motion.DestinationMotion-1.h>
#include <Fuse.Motion.DestinationMotionConfig.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.MotionDestinationType.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.OverflowType.h>
#include <Fuse.Motion.ScrollViewMotion.h>
#include <Fuse.Motion.Simulation.AdapterMultiplier-1.h>
#include <Fuse.Motion.Simulation.AngularAdapter-1.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.EasingMotion-1.h>
#include <Fuse.Motion.Simulation.ElasticForce-1.h>
#include <Fuse.Motion.Simulation.Friction-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.SmoothSnap-1.h>
#include <Fuse.Motion.SpringFunction.h>
#include <Fuse.Motion.SpringFunction.Subscription.h>
#include <Fuse.Reactive.Expression.Argument.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.ExpressionSubscriber.Flags.h>
#include <Fuse.Reactive.ExpressionSubscriber.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Time.h>
#include <Fuse.Timer.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Motion{

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DelayFunction.uno
// ----------------------------------------------------------------------

// public sealed class DelayFunction :9
// {
static void DelayFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(DelayFunction, _value), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(DelayFunction, _delay), 0);
}

::g::Fuse::Reactive::Expression_type* DelayFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DelayFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Motion.DelayFunction", options);
    type->fp_build_ = DelayFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))DelayFunction__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))DelayFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :20
void DelayFunction__Subscribe_fn(DelayFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    DelayFunction__Subscription* sub = DelayFunction__Subscription::New1(__this, listener);
    sub->Init(context);
    return *__retval = (uObject*)sub, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DestinationMotion.uno
// --------------------------------------------------------------------------

// public sealed class DestinationMotion<T> :186
// {
static void DestinationMotion_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Motion::DestinationMotionConfig_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::DestinationMotionConfig_typeof()->MakeMethod(0/*Create<T>*/, type->T(0), NULL));
    type->SetFields(9);
}

uType* DestinationMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::DestinationMotionConfig_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DestinationMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.DestinationMotion`1", options);
    type->fp_build_ = DestinationMotion_build;
    type->fp_ctor_ = (void*)DestinationMotion__New2_fn;
    return type;
}

// public generated DestinationMotion() :186
void DestinationMotion__ctor_1_fn(DestinationMotion* __this)
{
    __this->ctor_1();
}

// internal new Fuse.Motion.Simulation.DestinationSimulation<T> Create() :188
void DestinationMotion__Create1_fn(DestinationMotion* __this, uObject** __retval)
{
    *__retval = __this->Create1();
}

// public generated DestinationMotion New() :186
void DestinationMotion__New2_fn(uType* __type, DestinationMotion** __retval)
{
    *__retval = DestinationMotion::New2(__type);
}

// public generated DestinationMotion() [instance] :186
void DestinationMotion::ctor_1()
{
    ctor_();
}

// internal new Fuse.Motion.Simulation.DestinationSimulation<T> Create() [instance] :188
uObject* DestinationMotion::Create1()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.DestinationMotionConfig.Create<T>*/),
    };
    return (uObject*)Create(__types[0]);
}

// public generated DestinationMotion New() [static] :186
DestinationMotion* DestinationMotion::New2(uType* __type)
{
    DestinationMotion* obj1 = (DestinationMotion*)uNew(__type);
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DestinationMotion.uno
// --------------------------------------------------------------------------

// public class DestinationMotionConfig :15
// {
static void DestinationMotionConfig_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalidate simulation type: ");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DestinationMotion.uno");
    ::STRINGS[2] = uString::Const("Create");
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::EasingMotion_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::ElasticForce_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof();
    ::TYPES[4] = ::g::Fuse::Motion::Simulation::AngularAdapter_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof();
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof());
    type->MethodTypes[0]->SetDependencies(
        ::g::Uno::Math_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[1/*Fuse.Motion.Simulation.EasingMotion`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[2/*Fuse.Motion.Simulation.ElasticForce`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[3/*Fuse.Motion.Simulation.SmoothSnap`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[4/*Fuse.Motion.Simulation.AngularAdapter`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[5/*Fuse.Motion.Simulation.AdapterMultiplier`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::g::Fuse::Motion::MotionDestinationType_typeof(), offsetof(DestinationMotionConfig, _type), 0,
        ::g::Uno::Bool_typeof(), offsetof(DestinationMotionConfig, _explicitType), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(DestinationMotionConfig, _easing), 0,
        ::g::Uno::Float_typeof(), offsetof(DestinationMotionConfig, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(DestinationMotionConfig, _hasDuration), 0,
        ::g::Uno::Float_typeof(), offsetof(DestinationMotionConfig, _durationExp), 0,
        ::g::Fuse::Motion::MotionUnit_typeof(), offsetof(DestinationMotionConfig, _unit), 0,
        ::g::Uno::Float_typeof(), offsetof(DestinationMotionConfig, _distance), 0,
        ::g::Uno::Bool_typeof(), offsetof(DestinationMotionConfig, _hasDistance), 0);
}

uType* DestinationMotionConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.MethodTypeCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DestinationMotionConfig);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.DestinationMotionConfig", options);
    type->MethodTypes[0] = type->NewMethodType(1, 5,1);
    type->fp_build_ = DestinationMotionConfig_build;
    return type;
}

// public generated DestinationMotionConfig() :15
void DestinationMotionConfig__ctor__fn(DestinationMotionConfig* __this)
{
    __this->ctor_();
}

// internal Fuse.Motion.Simulation.DestinationSimulation<T> Create<T>() :123
void DestinationMotionConfig__Create_fn(DestinationMotionConfig* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->Create(__type);
}

// public float get_Distance() :115
void DestinationMotionConfig__get_Distance_fn(DestinationMotionConfig* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :116
void DestinationMotionConfig__set_Distance_fn(DestinationMotionConfig* __this, float* value)
{
    __this->Distance(*value);
}

// public float get_Duration() :65
void DestinationMotionConfig__get_Duration_fn(DestinationMotionConfig* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value) :66
void DestinationMotionConfig__set_Duration_fn(DestinationMotionConfig* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp() :82
void DestinationMotionConfig__get_DurationExp_fn(DestinationMotionConfig* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value) :83
void DestinationMotionConfig__set_DurationExp_fn(DestinationMotionConfig* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing() :44
void DestinationMotionConfig__get_Easing_fn(DestinationMotionConfig* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :45
void DestinationMotionConfig__set_Easing_fn(DestinationMotionConfig* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public Fuse.Motion.MotionDestinationType get_Type() :26
void DestinationMotionConfig__get_Type_fn(DestinationMotionConfig* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) :27
void DestinationMotionConfig__set_Type_fn(DestinationMotionConfig* __this, int32_t* value)
{
    __this->Type(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :98
void DestinationMotionConfig__get_Unit_fn(DestinationMotionConfig* __this, int32_t* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :99
void DestinationMotionConfig__set_Unit_fn(DestinationMotionConfig* __this, int32_t* value)
{
    __this->Unit(*value);
}

// public generated DestinationMotionConfig() [instance] :15
void DestinationMotionConfig::ctor_()
{
    _type = 1;
    _easing = ::g::Fuse::Animations::Easing::SinusoidalInOut();
    _duration = 0.5f;
    _durationExp = 0.5f;
    _distance = 1000.0f;
}

// internal Fuse.Motion.Simulation.DestinationSimulation<T> Create<T>() [instance] :123
uObject* DestinationMotionConfig::Create(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.Simulation.EasingMotion<T>*/),
        __type->Precalced(1/*Fuse.Motion.Simulation.ElasticForce<T>*/),
        __type->Precalced(2/*Fuse.Motion.Simulation.SmoothSnap<T>*/),
        __type->Precalced(3/*Fuse.Motion.Simulation.AngularAdapter<T>*/),
        __type->Precalced(4/*Fuse.Motion.Simulation.AdapterMultiplier<T>*/),
    };
    int32_t effectiveUnit = Unit();
    float multiplier = 1.0f;

    if (effectiveUnit == 3)
    {
        effectiveUnit = 2;
        multiplier = ::g::Uno::Math::DegreesToRadians1(1.0f);
    }

    uObject* dest;

    switch (Type())
    {
        case 0:
        {
            ::g::Fuse::Motion::Simulation::EasingMotion* q = (::g::Fuse::Motion::Simulation::EasingMotion*)::g::Fuse::Motion::Simulation::EasingMotion::CreateUnit(__types[0], effectiveUnit);
            uPtr(q)->Easing(Easing());
            q->DurationExp(DurationExp());

            if (_hasDuration)
                uPtr(q)->Duration(Duration());

            if (_hasDistance)
                uPtr(q)->NominalDistance(Distance() * multiplier);

            dest = (uObject*)q;
            break;
        }
        case 1:
        {
            ::g::Fuse::Motion::Simulation::ElasticForce* q1 = (::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateUnit(__types[1], effectiveUnit);
            dest = (uObject*)q1;
            break;
        }
        case 2:
        {
            ::g::Fuse::Motion::Simulation::SmoothSnap* q2 = (::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateUnit(__types[2], effectiveUnit);

            if (_hasDistance)
                uPtr(q2)->SpeedDropoutDistance(Distance() * multiplier);

            if (_hasDuration)
                uPtr(q2)->SetDuration(Duration());

            dest = (uObject*)q2;
            break;
        }
        default:
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(::STRINGS[0/*"Invalidate ...*/], uBox<int32_t>(::g::Fuse::Motion::MotionDestinationType_typeof(), Type())), this, ::STRINGS[1/*"/usr/local/...*/], 170, ::STRINGS[2/*"Create"*/], NULL);
            dest = (uObject*)((::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateNormalized(__types[1]));
            break;
        }
    }

    if ((Unit() == 2) || (Unit() == 3))
        dest = (uObject*)((::g::Fuse::Motion::Simulation::AngularAdapter*)::g::Fuse::Motion::Simulation::AngularAdapter::New1(__types[3], dest));

    if (multiplier != 1.0f)
        dest = (uObject*)((::g::Fuse::Motion::Simulation::AdapterMultiplier*)::g::Fuse::Motion::Simulation::AdapterMultiplier::New1(__types[4], dest, (double)multiplier));

    return dest;
}

// public float get_Distance() [instance] :115
float DestinationMotionConfig::Distance()
{
    return _distance;
}

// public void set_Distance(float value) [instance] :116
void DestinationMotionConfig::Distance(float value)
{
    _distance = value;
    _hasDistance = true;
}

// public float get_Duration() [instance] :65
float DestinationMotionConfig::Duration()
{
    return _duration;
}

// public void set_Duration(float value) [instance] :66
void DestinationMotionConfig::Duration(float value)
{
    _duration = value;
    _hasDuration = true;
}

// public float get_DurationExp() [instance] :82
float DestinationMotionConfig::DurationExp()
{
    return _durationExp;
}

// public void set_DurationExp(float value) [instance] :83
void DestinationMotionConfig::DurationExp(float value)
{
    _durationExp = value;
}

// public Fuse.Animations.Easing get_Easing() [instance] :44
::g::Fuse::Animations::Easing* DestinationMotionConfig::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :45
void DestinationMotionConfig::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;

    if (!_explicitType)
        _type = 0;
}

// public Fuse.Motion.MotionDestinationType get_Type() [instance] :26
int32_t DestinationMotionConfig::Type()
{
    return _type;
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) [instance] :27
void DestinationMotionConfig::Type(int32_t value)
{
    if ((_type == value) && !_explicitType)
        return;

    _type = value;
    _explicitType = true;
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :98
int32_t DestinationMotionConfig::Unit()
{
    return _unit;
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :99
void DestinationMotionConfig::Unit(int32_t value)
{
    _unit = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/MotionConfig.uno
// ---------------------------------------------------------------------

// public class MotionConfig :16
// {
static void MotionConfig_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Motion::Simulation::Friction_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D_typeof(), offsetof(MotionConfig, _impl), 0,
        ::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/], offsetof(MotionConfig, _goto), 0,
        ::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/], offsetof(MotionConfig, _snap), 0,
        ::g::Fuse::Motion::OverflowType_typeof(), offsetof(MotionConfig, _overflow), 0,
        ::g::Uno::Float2_typeof(), offsetof(MotionConfig, _overflowExtent), 0);
}

uType* MotionConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MotionConfig);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.MotionConfig", options);
    type->fp_build_ = MotionConfig_build;
    return type;
}

// protected MotionConfig() :20
void MotionConfig__ctor__fn(MotionConfig* __this)
{
    __this->ctor_();
}

// internal Fuse.Motion.Simulation.BoundedRegion2D AcquireSimulation() :27
void MotionConfig__AcquireSimulation_fn(MotionConfig* __this, uObject** __retval)
{
    *__retval = __this->AcquireSimulation();
}

// private void CreateImpl() :177
void MotionConfig__CreateImpl_fn(MotionConfig* __this)
{
    __this->CreateImpl();
}

// public Fuse.Motion.DestinationMotion<float2> get_Goto() :47
void MotionConfig__get_Goto_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Goto();
}

// public Fuse.Motion.OverflowType get_Overflow() :140
void MotionConfig__get_Overflow_fn(MotionConfig* __this, int32_t* __retval)
{
    *__retval = __this->Overflow();
}

// public void set_Overflow(Fuse.Motion.OverflowType value) :141
void MotionConfig__set_Overflow_fn(MotionConfig* __this, int32_t* value)
{
    __this->Overflow(*value);
}

// public float2 get_OverflowExtent() :155
void MotionConfig__get_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// public void set_OverflowExtent(float2 value) :156
void MotionConfig__set_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* value)
{
    __this->OverflowExtent(*value);
}

// internal void ReleaseSimulation() :36
void MotionConfig__ReleaseSimulation_fn(MotionConfig* __this)
{
    __this->ReleaseSimulation();
}

// public Fuse.Motion.DestinationMotion<float2> get_Snap() :91
void MotionConfig__get_Snap_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Snap();
}

// public Fuse.Motion.MotionUnit get_Unit() :169
void MotionConfig__get_Unit_fn(MotionConfig* __this, int32_t* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :170
void MotionConfig__set_Unit_fn(MotionConfig* __this, int32_t* value)
{
    __this->Unit(*value);
}

// protected MotionConfig() [instance] :20
void MotionConfig::ctor_()
{
    _goto = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New2(::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/]));
    _snap = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New2(::TYPES[6/*Fuse.Motion.DestinationMotion<float2>*/]));
    _overflowExtent = ::g::Uno::Float2__New1(150.0f);
}

// internal Fuse.Motion.Simulation.BoundedRegion2D AcquireSimulation() [instance] :27
uObject* MotionConfig::AcquireSimulation()
{
    CreateImpl();
    return (uObject*)_impl;
}

// private void CreateImpl() [instance] :177
void MotionConfig::CreateImpl()
{
    _impl = ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::New1();
    uPtr(_impl)->DestinationSimulation((uObject*)uPtr(_goto)->Create1());
    uPtr(_impl)->SnapSimulation((uObject*)uPtr(_snap)->Create1());
    uPtr(_impl)->OverflowExtent(OverflowExtent());
    uPtr(_impl)->Overflow(Overflow());
    uPtr(_impl)->FrictionSimulation((uObject*)((::g::Fuse::Motion::Simulation::Friction*)::g::Fuse::Motion::Simulation::Friction::CreateUnit(::TYPES[7/*Fuse.Motion.Simulation.Friction<float2>*/], Unit())));
}

// public Fuse.Motion.DestinationMotion<float2> get_Goto() [instance] :47
::g::Fuse::Motion::DestinationMotion* MotionConfig::Goto()
{
    return _goto;
}

// public Fuse.Motion.OverflowType get_Overflow() [instance] :140
int32_t MotionConfig::Overflow()
{
    return _overflow;
}

// public void set_Overflow(Fuse.Motion.OverflowType value) [instance] :141
void MotionConfig::Overflow(int32_t value)
{
    _overflow = value;

    if (_impl != NULL)
        uPtr(_impl)->Overflow(_overflow);
}

// public float2 get_OverflowExtent() [instance] :155
::g::Uno::Float2 MotionConfig::OverflowExtent()
{
    return _overflowExtent;
}

// public void set_OverflowExtent(float2 value) [instance] :156
void MotionConfig::OverflowExtent(::g::Uno::Float2 value)
{
    _overflowExtent = value;

    if (_impl != NULL)
        uPtr(_impl)->OverflowExtent(_overflowExtent);
}

// internal void ReleaseSimulation() [instance] :36
void MotionConfig::ReleaseSimulation()
{
    _impl = NULL;
}

// public Fuse.Motion.DestinationMotion<float2> get_Snap() [instance] :91
::g::Fuse::Motion::DestinationMotion* MotionConfig::Snap()
{
    return _snap;
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :169
int32_t MotionConfig::Unit()
{
    return uPtr(_goto)->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :170
void MotionConfig::Unit(int32_t value)
{
    uPtr(_goto)->Unit(value);
    uPtr(_snap)->Unit(value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/Enums.uno
// --------------------------------------------------------------

// public enum MotionDestinationType :23
uEnumType* MotionDestinationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.MotionDestinationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Easing", 0LL,
        "Elastic", 1LL,
        "SmoothSnap", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/Enums.uno
// --------------------------------------------------------------

// public enum MotionUnit :36
uEnumType* MotionUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.MotionUnit", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Points", 0LL,
        "Normalized", 1LL,
        "Radians", 2LL,
        "Degrees", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/MotionConfig.uno
// ---------------------------------------------------------------------

// public sealed class NavigationMotion :192
// {
static void NavigationMotion_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof());
    type->SetFields(5);
}

uType* NavigationMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::MotionConfig_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NavigationMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.NavigationMotion", options);
    type->fp_build_ = NavigationMotion_build;
    type->fp_ctor_ = (void*)NavigationMotion__New2_fn;
    return type;
}

// public NavigationMotion() :194
void NavigationMotion__ctor_1_fn(NavigationMotion* __this)
{
    __this->ctor_1();
}

// public NavigationMotion New() :194
void NavigationMotion__New2_fn(NavigationMotion** __retval)
{
    *__retval = NavigationMotion::New2();
}

// public NavigationMotion() [instance] :194
void NavigationMotion::ctor_1()
{
    ctor_();
    Unit(1);
    uPtr(Goto())->_type = 0;
    uPtr(Goto())->_easing = ::g::Fuse::Animations::Easing::SinusoidalInOut();
    Overflow(1);
    OverflowExtent(::g::Uno::Float2__New1(0.25f));
}

// public NavigationMotion New() [static] :194
NavigationMotion* NavigationMotion::New2()
{
    NavigationMotion* obj1 = (NavigationMotion*)uNew(NavigationMotion_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/Enums.uno
// --------------------------------------------------------------

// public enum OverflowType :10
uEnumType* OverflowType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.OverflowType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Clamp", 1LL,
        "Elastic", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/MotionConfig.uno
// ---------------------------------------------------------------------

// public sealed class ScrollViewMotion :211
// {
static void ScrollViewMotion_build(uType* type)
{
    type->SetFields(5);
}

uType* ScrollViewMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::MotionConfig_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ScrollViewMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.ScrollViewMotion", options);
    type->fp_build_ = ScrollViewMotion_build;
    type->fp_ctor_ = (void*)ScrollViewMotion__New2_fn;
    return type;
}

// public ScrollViewMotion() :213
void ScrollViewMotion__ctor_1_fn(ScrollViewMotion* __this)
{
    __this->ctor_1();
}

// public ScrollViewMotion New() :213
void ScrollViewMotion__New2_fn(ScrollViewMotion** __retval)
{
    *__retval = ScrollViewMotion::New2();
}

// public ScrollViewMotion() [instance] :213
void ScrollViewMotion::ctor_1()
{
    ctor_();
    Unit(0);
    uPtr(Goto())->_type = 1;
    uPtr(Snap())->_type = 2;
    Overflow(2);
    OverflowExtent(::g::Uno::Float2__New1(150.0f));
}

// public ScrollViewMotion New() [static] :213
ScrollViewMotion* ScrollViewMotion::New2()
{
    ScrollViewMotion* obj1 = (ScrollViewMotion*)uNew(ScrollViewMotion_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DelayFunction.uno
// ----------------------------------------------------------------------

// private sealed class DelayFunction.SetClosure :46
// {
static void DelayFunction__SetClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Motion::DelayFunction__Subscription_typeof(), offsetof(DelayFunction__SetClosure, _sub), 0,
        uObject_typeof(), offsetof(DelayFunction__SetClosure, _v), 0);
}

uType* DelayFunction__SetClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelayFunction__SetClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.DelayFunction.SetClosure", options);
    type->fp_build_ = DelayFunction__SetClosure_build;
    return type;
}

// public SetClosure(Fuse.Motion.DelayFunction.Subscription sub, object v) :50
void DelayFunction__SetClosure__ctor__fn(DelayFunction__SetClosure* __this, ::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v)
{
    __this->ctor_(sub, v);
}

// public SetClosure New(Fuse.Motion.DelayFunction.Subscription sub, object v) :50
void DelayFunction__SetClosure__New1_fn(::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v, DelayFunction__SetClosure** __retval)
{
    *__retval = DelayFunction__SetClosure::New1(sub, v);
}

// public void Run() :55
void DelayFunction__SetClosure__Run_fn(DelayFunction__SetClosure* __this)
{
    __this->Run();
}

// public SetClosure(Fuse.Motion.DelayFunction.Subscription sub, object v) [instance] :50
void DelayFunction__SetClosure::ctor_(::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v)
{
    _sub = sub;
    _v = v;
}

// public void Run() [instance] :55
void DelayFunction__SetClosure::Run()
{
    uPtr(_sub)->SetData1(_v);
}

// public SetClosure New(Fuse.Motion.DelayFunction.Subscription sub, object v) [static] :50
DelayFunction__SetClosure* DelayFunction__SetClosure::New1(::g::Fuse::Motion::DelayFunction__Subscription* sub, uObject* v)
{
    DelayFunction__SetClosure* obj1 = (DelayFunction__SetClosure*)uNew(DelayFunction__SetClosure_typeof());
    obj1->ctor_(sub, v);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/SpringFunction.uno
// -----------------------------------------------------------------------

// public sealed class SpringFunction :8
// {
static void SpringFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(SpringFunction, _Value), 0);
}

::g::Fuse::Reactive::Expression_type* SpringFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SpringFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Motion.SpringFunction", options);
    type->fp_build_ = SpringFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SpringFunction__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SpringFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :19
void SpringFunction__Subscribe_fn(SpringFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)SpringFunction__Subscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Value() :10
void SpringFunction__get_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(Fuse.Reactive.Expression value) :10
void SpringFunction__set_Value_fn(SpringFunction* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Value(value);
}

// public generated Fuse.Reactive.Expression get_Value() [instance] :10
::g::Fuse::Reactive::Expression* SpringFunction::Value()
{
    return _Value;
}

// private generated void set_Value(Fuse.Reactive.Expression value) [instance] :10
void SpringFunction::Value(::g::Fuse::Reactive::Expression* value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/DelayFunction.uno
// ----------------------------------------------------------------------

// private sealed class DelayFunction.Subscription :27
// {
static void DelayFunction__Subscription_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Reactive::Expression_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ExpressionListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionListener_type, interface1));
    type->SetFields(9);
}

::g::Fuse::Reactive::ExpressionListener_type* DelayFunction__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionListener_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DelayFunction__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionListener_type);
    type = (::g::Fuse::Reactive::ExpressionListener_type*)uClassType::New("Fuse.Motion.DelayFunction.Subscription", options);
    type->fp_build_ = DelayFunction__Subscription_build;
    type->fp_OnArguments = (void(*)(::g::Fuse::Reactive::ExpressionSubscriber*, uArray*))DelayFunction__Subscription__OnArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ExpressionListener__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Motion.DelayFunction source, Fuse.Reactive.IListener listener) :29
void DelayFunction__Subscription__ctor_3_fn(DelayFunction__Subscription* __this, ::g::Fuse::Motion::DelayFunction* source, uObject* listener)
{
    __this->ctor_3(source, listener);
}

// public Subscription New(Fuse.Motion.DelayFunction source, Fuse.Reactive.IListener listener) :29
void DelayFunction__Subscription__New1_fn(::g::Fuse::Motion::DelayFunction* source, uObject* listener, DelayFunction__Subscription** __retval)
{
    *__retval = DelayFunction__Subscription::New1(source, listener);
}

// protected override sealed void OnArguments(Fuse.Reactive.Expression.Argument[] args) :33
void DelayFunction__Subscription__OnArguments_fn(DelayFunction__Subscription* __this, uArray* args)
{
    ::g::Fuse::Timer::Wait(::g::Fuse::Marshal::ToDouble(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(1))->Value()), uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)::g::Fuse::Motion::DelayFunction__SetClosure__Run_fn, ::g::Fuse::Motion::DelayFunction__SetClosure::New1(__this, uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value())));
}

// public new void SetData(object value) :40
void DelayFunction__Subscription__SetData1_fn(DelayFunction__Subscription* __this, uObject* value)
{
    __this->SetData1(value);
}

// public Subscription(Fuse.Motion.DelayFunction source, Fuse.Reactive.IListener listener) [instance] :29
void DelayFunction__Subscription::ctor_3(::g::Fuse::Motion::DelayFunction* source, uObject* listener)
{
    ctor_2(source, listener, uArray::Init< ::g::Fuse::Reactive::Expression*>(::TYPES[8/*Fuse.Reactive.Expression[]*/], 2, (::g::Fuse::Reactive::Expression*)uPtr(source)->_value, (::g::Fuse::Reactive::Expression*)uPtr(source)->_delay), 0);
}

// public new void SetData(object value) [instance] :40
void DelayFunction__Subscription::SetData1(uObject* value)
{
    SetData(value);
}

// public Subscription New(Fuse.Motion.DelayFunction source, Fuse.Reactive.IListener listener) [static] :29
DelayFunction__Subscription* DelayFunction__Subscription::New1(::g::Fuse::Motion::DelayFunction* source, uObject* listener)
{
    DelayFunction__Subscription* obj1 = (DelayFunction__Subscription*)uNew(DelayFunction__Subscription_typeof());
    obj1->ctor_3(source, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.10.0-rc1/SpringFunction.uno
// -----------------------------------------------------------------------

// private sealed class SpringFunction.Subscription :24
// {
static void SpringFunction__Subscription_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Motion::Simulation::ElasticForce_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::IDisposable_typeof();
    ::TYPES[12] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::TYPES[11/*Uno.IDisposable*/], offsetof(SpringFunction__Subscription_type, interface0),
        ::TYPES[12/*Fuse.Reactive.IListener*/], offsetof(SpringFunction__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Motion::SpringFunction_typeof(), offsetof(SpringFunction__Subscription, _sf), 0,
        ::g::Uno::Bool_typeof(), offsetof(SpringFunction__Subscription, _isSimulating), 0,
        ::g::Uno::Bool_typeof(), offsetof(SpringFunction__Subscription, _hasStartValue), 0,
        ::TYPES[10/*Fuse.Motion.Simulation.ElasticForce<float4>*/], offsetof(SpringFunction__Subscription, _sim), 0,
        ::TYPES[11/*Uno.IDisposable*/], offsetof(SpringFunction__Subscription, _valueSub), 0,
        ::TYPES[12/*Fuse.Reactive.IListener*/], offsetof(SpringFunction__Subscription, _listener), 0);
}

SpringFunction__Subscription_type* SpringFunction__Subscription_typeof()
{
    static uSStrong<SpringFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SpringFunction__Subscription);
    options.TypeSize = sizeof(SpringFunction__Subscription_type);
    type = (SpringFunction__Subscription_type*)uClassType::New("Fuse.Motion.SpringFunction.Subscription", options);
    type->fp_build_ = SpringFunction__Subscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))SpringFunction__Subscription__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))SpringFunction__Subscription__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SpringFunction__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :33
void SpringFunction__Subscription__ctor__fn(SpringFunction__Subscription* __this, ::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener)
{
    __this->ctor_(sf, context, listener);
}

// public void Dispose() :40
void SpringFunction__Subscription__Dispose_fn(SpringFunction__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :67
void SpringFunction__Subscription__FuseReactiveIListenerOnLostData_fn(SpringFunction__Subscription* __this, uObject* source)
{
    __this->StopSimulation();

    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[12/*Fuse.Reactive.IListener*/]), source);
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :50
void SpringFunction__Subscription__FuseReactiveIListenerOnNewData_fn(SpringFunction__Subscription* __this, uObject* source, uObject* value)
{
    ::g::Uno::Float4 ret2;
    ::g::Uno::Float4 v = ::g::Fuse::Marshal::ToFloat43(value);

    if (!__this->_hasStartValue)
    {
        ::g::Fuse::Motion::Simulation::ElasticForce__Reset_fn(uPtr(__this->_sim), uCRef(v));
        __this->_hasStartValue = true;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[12/*Fuse.Reactive.IListener*/]), (uObject*)__this->_sf, uBox(::g::Uno::Float4_typeof(), v));
    }
    else if (::g::Uno::Float4__op_Inequality((::g::Fuse::Motion::Simulation::ElasticForce__get_Destination_fn(uPtr(__this->_sim), &ret2), ret2), v))
    {
        ::g::Fuse::Motion::Simulation::ElasticForce__set_Destination_fn(uPtr(__this->_sim), uCRef(v));
        __this->StartSimulation();
    }
}

// public Subscription New(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :33
void SpringFunction__Subscription__New1_fn(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener, SpringFunction__Subscription** __retval)
{
    *__retval = SpringFunction__Subscription::New1(sf, context, listener);
}

// private void Simulate() :88
void SpringFunction__Subscription__Simulate_fn(SpringFunction__Subscription* __this)
{
    __this->Simulate();
}

// private void StartSimulation() :74
void SpringFunction__Subscription__StartSimulation_fn(SpringFunction__Subscription* __this)
{
    __this->StartSimulation();
}

// private void StopSimulation() :81
void SpringFunction__Subscription__StopSimulation_fn(SpringFunction__Subscription* __this)
{
    __this->StopSimulation();
}

// public Subscription(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :33
void SpringFunction__Subscription::ctor_(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener)
{
    _sim = ((::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreatePoints(::TYPES[10/*Fuse.Motion.Simulation.ElasticForce<float4>*/]));
    _sf = sf;
    _listener = listener;
    _valueSub = uPtr(uPtr(sf)->Value())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :40
void SpringFunction__Subscription::Dispose()
{
    if (_valueSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_valueSub), ::TYPES[11/*Uno.IDisposable*/]));

    _valueSub = NULL;
    _listener = NULL;
    StopSimulation();
}

// private void Simulate() [instance] :88
void SpringFunction__Subscription::Simulate()
{
    ::g::Uno::Float4 ret3;
    uPtr(_sim)->Update(::g::Fuse::Time::FrameInterval());
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[12/*Fuse.Reactive.IListener*/]), (uObject*)_sf, uBox(::g::Uno::Float4_typeof(), (::g::Fuse::Motion::Simulation::ElasticForce__get_Position_fn(uPtr(_sim), &ret3), ret3)));

    if (uPtr(_sim)->IsStatic())
        StopSimulation();
}

// private void StartSimulation() [instance] :74
void SpringFunction__Subscription::StartSimulation()
{
    if (_isSimulating)
        return;

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)SpringFunction__Subscription__Simulate_fn, this), 0);
    _isSimulating = true;
}

// private void StopSimulation() [instance] :81
void SpringFunction__Subscription::StopSimulation()
{
    if (!_isSimulating)
        return;

    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)SpringFunction__Subscription__Simulate_fn, this), 0);
    _isSimulating = false;
}

// public Subscription New(Fuse.Motion.SpringFunction sf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :33
SpringFunction__Subscription* SpringFunction__Subscription::New1(::g::Fuse::Motion::SpringFunction* sf, uObject* context, uObject* listener)
{
    SpringFunction__Subscription* obj1 = (SpringFunction__Subscription*)uNew(SpringFunction__Subscription_typeof());
    obj1->ctor_(sf, context, listener);
    return obj1;
}
// }

}}} // ::g::Fuse::Motion
