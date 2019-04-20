// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/expense.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct expense;}
namespace g{struct expense__Template1;}

namespace g{

// public partial sealed class expense.Template1 :34
// {
::g::Uno::UX::Template_type* expense__Template1_typeof();
void expense__Template1__ctor_1_fn(expense__Template1* __this, ::g::expense* parent, ::g::expense* parentInstance);
void expense__Template1__New1_fn(expense__Template1* __this, uObject** __retval);
void expense__Template1__New2_fn(::g::expense* parent, ::g::expense* parentInstance, expense__Template1** __retval);

struct expense__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::expense*> __parent1;
    uWeak< ::g::expense*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return expense__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::expense* parent, ::g::expense* parentInstance);
    static expense__Template1* New2(::g::expense* parent, ::g::expense* parentInstance);
};
// }

} // ::g
