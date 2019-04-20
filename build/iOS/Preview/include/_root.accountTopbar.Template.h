// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountTopbar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct accountTopbar;}
namespace g{struct accountTopbar__Template;}

namespace g{

// public partial sealed class accountTopbar.Template :5
// {
::g::Uno::UX::Template_type* accountTopbar__Template_typeof();
void accountTopbar__Template__ctor_1_fn(accountTopbar__Template* __this, ::g::accountTopbar* parent, ::g::accountTopbar* parentInstance);
void accountTopbar__Template__New1_fn(accountTopbar__Template* __this, uObject** __retval);
void accountTopbar__Template__New2_fn(::g::accountTopbar* parent, ::g::accountTopbar* parentInstance, accountTopbar__Template** __retval);

struct accountTopbar__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::accountTopbar*> __parent1;
    uWeak< ::g::accountTopbar*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> Monthvalue_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return accountTopbar__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return accountTopbar__Template_typeof()->Init(), __selector1_; }

    void ctor_1(::g::accountTopbar* parent, ::g::accountTopbar* parentInstance);
    static accountTopbar__Template* New2(::g::accountTopbar* parent, ::g::accountTopbar* parentInstance);
};
// }

} // ::g
