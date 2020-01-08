// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.10.0-rc1/IObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract interface IPropertyObserver :28
// {
uInterfaceType* IPropertyObserver_typeof();

struct IPropertyObserver
{
    void(*fp_OnPropertyChanged)(uObject*, uObject*, uString*, uObject*);
    static void OnPropertyChanged(const uInterface& __this, uObject* subscription, uString* propertyName, uObject* newValue) { __this.VTable<IPropertyObserver>()->fp_OnPropertyChanged(__this, subscription, propertyName, newValue); }
};
// }

}}} // ::g::Fuse::Reactive
