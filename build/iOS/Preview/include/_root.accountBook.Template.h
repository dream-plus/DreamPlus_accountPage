// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct accountBook;}
namespace g{struct accountBook__Template;}

namespace g{

// public partial sealed class accountBook.Template :6
// {
::g::Uno::UX::Template_type* accountBook__Template_typeof();
void accountBook__Template__ctor_1_fn(accountBook__Template* __this, ::g::accountBook* parent, ::g::accountBook* parentInstance);
void accountBook__Template__New1_fn(accountBook__Template* __this, uObject** __retval);
void accountBook__Template__New2_fn(::g::accountBook* parent, ::g::accountBook* parentInstance, accountBook__Template** __retval);

struct accountBook__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::accountBook*> __parent1;
    uWeak< ::g::accountBook*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> Monthvalue_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return accountBook__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return accountBook__Template_typeof()->Init(), __selector1_; }

    void ctor_1(::g::accountBook* parent, ::g::accountBook* parentInstance);
    static accountBook__Template* New2(::g::accountBook* parent, ::g::accountBook* parentInstance);
};
// }

} // ::g
