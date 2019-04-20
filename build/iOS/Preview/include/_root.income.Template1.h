// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/income.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct income;}
namespace g{struct income__Template1;}

namespace g{

// public partial sealed class income.Template1 :32
// {
::g::Uno::UX::Template_type* income__Template1_typeof();
void income__Template1__ctor_1_fn(income__Template1* __this, ::g::income* parent, ::g::income* parentInstance);
void income__Template1__New1_fn(income__Template1* __this, uObject** __retval);
void income__Template1__New2_fn(::g::income* parent, ::g::income* parentInstance, income__Template1** __retval);

struct income__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::income*> __parent1;
    uWeak< ::g::income*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return income__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::income* parent, ::g::income* parentInstance);
    static income__Template1* New2(::g::income* parent, ::g::income* parentInstance);
};
// }

} // ::g
