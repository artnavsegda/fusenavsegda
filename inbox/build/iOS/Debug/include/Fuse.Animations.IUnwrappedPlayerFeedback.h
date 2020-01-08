// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.10.0-rc1/TriggerAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IUnwrappedPlayerFeedback :230
// {
uInterfaceType* IUnwrappedPlayerFeedback_typeof();

struct IUnwrappedPlayerFeedback
{
    void(*fp_OnProgressUpdated)(uObject*, uObject*, double*, double*, int32_t*);
    static void OnProgressUpdated(const uInterface& __this, uObject* s, double prev, double next, int32_t flags) { __this.VTable<IUnwrappedPlayerFeedback>()->fp_OnProgressUpdated(__this, s, &prev, &next, &flags); }
};
// }

}}} // ::g::Fuse::Animations
