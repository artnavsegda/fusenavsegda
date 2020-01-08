// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.10.0-rc1/Resources/DisposalManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct DisposalManager;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class DisposalManager :7
// {
uClassType* DisposalManager_typeof();
void DisposalManager__Add_fn(uObject* item);
void DisposalManager__Add1_fn(uObject* item);
void DisposalManager__Clean_fn(int32_t* dr);
void DisposalManager__Remove_fn(uObject* item);
void DisposalManager__Update_fn();
void DisposalManager__VerifyAttach_fn();

struct DisposalManager : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _items_;
    static uSStrong< ::g::Uno::Collections::List*>& _items() { return DisposalManager_typeof()->Init(), _items_; }
    static bool _actionAdded_;
    static bool& _actionAdded() { return DisposalManager_typeof()->Init(), _actionAdded_; }
    static int32_t _disposeAt_;
    static int32_t& _disposeAt() { return DisposalManager_typeof()->Init(), _disposeAt_; }
    static uSStrong< ::g::Uno::Collections::List*> _softDisposables_;
    static uSStrong< ::g::Uno::Collections::List*>& _softDisposables() { return DisposalManager_typeof()->Init(), _softDisposables_; }

    static void Add(uObject* item);
    static void Add1(uObject* item);
    static void Clean(int32_t dr);
    static void Remove(uObject* item);
    static void Update();
    static void VerifyAttach();
};
// }

}}} // ::g::Fuse::Resources
