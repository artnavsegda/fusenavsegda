// This file was generated based on /Users/artnavsegda/Downloads/inbox/Inbox.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Inbox_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class Inbox_bundle :0
// {
// static Inbox_bundle() :0
static void Inbox_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    Inbox_bundle::Checkmark3b525575_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[1/*"checkmark-c...*/]);
    Inbox_bundle::MainView5060a77b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[2/*"mainview-cb...*/]);
    Inbox_bundle::menu0fe5776d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[3/*"menu-918181...*/]);
    Inbox_bundle::Postpone3cb95d96_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[4/*"postpone-25...*/]);
    Inbox_bundle::RobotoCondensedBoldd42fdc41_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[5/*"robotoconde...*/]);
    Inbox_bundle::RobotoCondensedLight7a5fcc20_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[6/*"robotoconde...*/]);
    Inbox_bundle::RobotoCondensedRegular48e1ce04_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Inbox"*/]))->GetFile(::STRINGS[7/*"robotoconde...*/]);
}

static void Inbox_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Inbox");
    ::STRINGS[1] = uString::Const("checkmark-c12b7333.png");
    ::STRINGS[2] = uString::Const("mainview-cb8c4a65.js");
    ::STRINGS[3] = uString::Const("menu-91818197.png");
    ::STRINGS[4] = uString::Const("postpone-25601e70.png");
    ::STRINGS[5] = uString::Const("robotocondensed-bol-4bb073e7.ttf");
    ::STRINGS[6] = uString::Const("robotocondensed-lig-878a18e2.ttf");
    ::STRINGS[7] = uString::Const("robotocondensed-reg-c426760e.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::Checkmark3b525575_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::MainView5060a77b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::menu0fe5776d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::Postpone3cb95d96_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::RobotoCondensedBoldd42fdc41_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::RobotoCondensedLight7a5fcc20_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&Inbox_bundle::RobotoCondensedRegular48e1ce04_, uFieldFlagsStatic);
}

uClassType* Inbox_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Inbox_bundle", options);
    type->fp_build_ = Inbox_bundle_build;
    type->fp_cctor_ = Inbox_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::Checkmark3b525575_;
uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::MainView5060a77b_;
uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::menu0fe5776d_;
uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::Postpone3cb95d96_;
uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::RobotoCondensedBoldd42fdc41_;
uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::RobotoCondensedLight7a5fcc20_;
uSStrong< ::g::Uno::IO::BundleFile*> Inbox_bundle::RobotoCondensedRegular48e1ce04_;
// }

} // ::g
