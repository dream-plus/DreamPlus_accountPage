// This file was generated based on /Users/kbs/development/accountBook/accountBook.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[11];

namespace g{

// public static generated class accountBook_bundle :0
// {
// static accountBook_bundle() :0
static void accountBook_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    accountBook_bundle::accountBook8f6bcc4a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[1/*"accountbook...*/]);
    accountBook_bundle::accountHome2ff4204c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[2/*"accounthome...*/]);
    accountBook_bundle::addPagefc6712a0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[3/*"addpage-264...*/]);
    accountBook_bundle::board220f8bc5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[4/*"board-117c0...*/]);
    accountBook_bundle::cal895572c9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[5/*"cal-45f4726...*/]);
    accountBook_bundle::expense268a8794_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[6/*"expense-34c...*/]);
    accountBook_bundle::incomedefa8a75_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[7/*"income-4fd0...*/]);
    accountBook_bundle::logoGray6d2e0fed_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[8/*"logogray-2a...*/]);
    accountBook_bundle::MainView574c1179_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[9/*"mainview-cb...*/]);
    accountBook_bundle::photocamera99eb8f4b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"accountBook"*/]))->GetFile(::STRINGS[10/*"photo-camer...*/]);
}

static void accountBook_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("accountBook");
    ::STRINGS[1] = uString::Const("accountbook-2077db58.js");
    ::STRINGS[2] = uString::Const("accounthome-9d832e7e.js");
    ::STRINGS[3] = uString::Const("addpage-2647408a.js");
    ::STRINGS[4] = uString::Const("board-117c0861.png");
    ::STRINGS[5] = uString::Const("cal-45f47265.png");
    ::STRINGS[6] = uString::Const("expense-34c18946.js");
    ::STRINGS[7] = uString::Const("income-4fd000d9.js");
    ::STRINGS[8] = uString::Const("logogray-2a6b7bf1.png");
    ::STRINGS[9] = uString::Const("mainview-cb8c4a65.js");
    ::STRINGS[10] = uString::Const("photo-camera-1b8c6aab.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::accountBook8f6bcc4a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::accountHome2ff4204c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::addPagefc6712a0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::board220f8bc5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::cal895572c9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::expense268a8794_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::incomedefa8a75_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::logoGray6d2e0fed_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::MainView574c1179_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&accountBook_bundle::photocamera99eb8f4b_, uFieldFlagsStatic);
    type->Reflection.SetFields(10,
        new uField("accountBook8f6bcc4a", 0),
        new uField("accountHome2ff4204c", 1),
        new uField("addPagefc6712a0", 2),
        new uField("board220f8bc5", 3),
        new uField("cal895572c9", 4),
        new uField("expense268a8794", 5),
        new uField("incomedefa8a75", 6),
        new uField("logoGray6d2e0fed", 7),
        new uField("MainView574c1179", 8),
        new uField("photocamera99eb8f4b", 9));
}

uClassType* accountBook_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("accountBook_bundle", options);
    type->fp_build_ = accountBook_bundle_build;
    type->fp_cctor_ = accountBook_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::accountBook8f6bcc4a_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::accountHome2ff4204c_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::addPagefc6712a0_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::board220f8bc5_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::cal895572c9_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::expense268a8794_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::incomedefa8a75_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::logoGray6d2e0fed_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::MainView574c1179_;
uSStrong< ::g::Uno::IO::BundleFile*> accountBook_bundle::photocamera99eb8f4b_;
// }

} // ::g
