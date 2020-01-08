// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/Shapes/Curve.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct CurvePoint;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class CurvePoint :40
// {
::g::Fuse::Node_type* CurvePoint_typeof();
void CurvePoint__get_At_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_At_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_ControlIn_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_ControlIn_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_ControlOut_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_ControlOut_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_HasControlIn_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_HasControlOut_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_HasTangentIn_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_HasTangentOut_fn(CurvePoint* __this, bool* __retval);
void CurvePoint__get_TangentIn_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_TangentIn_fn(CurvePoint* __this, ::g::Uno::Float2* value);
void CurvePoint__get_TangentOut_fn(CurvePoint* __this, ::g::Uno::Float2* __retval);
void CurvePoint__set_TangentOut_fn(CurvePoint* __this, ::g::Uno::Float2* value);

struct CurvePoint : ::g::Fuse::Node
{
    static ::g::Uno::UX::Selector NameAt_;
    static ::g::Uno::UX::Selector& NameAt() { return CurvePoint_typeof()->Init(), NameAt_; }
    static ::g::Uno::UX::Selector NameTangentIn_;
    static ::g::Uno::UX::Selector& NameTangentIn() { return CurvePoint_typeof()->Init(), NameTangentIn_; }
    static ::g::Uno::UX::Selector NameTangentOut_;
    static ::g::Uno::UX::Selector& NameTangentOut() { return CurvePoint_typeof()->Init(), NameTangentOut_; }
    static ::g::Uno::UX::Selector NameControlIn_;
    static ::g::Uno::UX::Selector& NameControlIn() { return CurvePoint_typeof()->Init(), NameControlIn_; }
    static ::g::Uno::UX::Selector NameControlOut_;
    static ::g::Uno::UX::Selector& NameControlOut() { return CurvePoint_typeof()->Init(), NameControlOut_; }
    ::g::Uno::Float2 _at;
    int32_t _has;
    ::g::Uno::Float2 _a;
    ::g::Uno::Float2 _b;

    ::g::Uno::Float2 At();
    void At(::g::Uno::Float2 value);
    ::g::Uno::Float2 ControlIn();
    void ControlIn(::g::Uno::Float2 value);
    ::g::Uno::Float2 ControlOut();
    void ControlOut(::g::Uno::Float2 value);
    bool HasControlIn();
    bool HasControlOut();
    bool HasTangentIn();
    bool HasTangentOut();
    ::g::Uno::Float2 TangentIn();
    void TangentIn(::g::Uno::Float2 value);
    ::g::Uno::Float2 TangentOut();
    void TangentOut(::g::Uno::Float2 value);
};
// }

}}} // ::g::Fuse::Controls
