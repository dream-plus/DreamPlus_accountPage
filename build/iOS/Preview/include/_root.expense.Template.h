// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/expense.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{struct expense;}
namespace g{struct expense__Template;}

namespace g{

// public partial sealed class expense.Template :6
// {
::g::Uno::UX::Template_type* expense__Template_typeof();
void expense__Template__ctor_1_fn(expense__Template* __this, ::g::expense* parent, ::g::expense* parentInstance);
void expense__Template__New1_fn(expense__Template* __this, uObject** __retval);
void expense__Template__New2_fn(::g::expense* parent, ::g::expense* parentInstance, expense__Template** __retval);

struct expense__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::expense*> __parent1;
    uWeak< ::g::expense*> __parentInstance1;

    void ctor_1(::g::expense* parent, ::g::expense* parentInstance);
    static expense__Template* New2(::g::expense* parent, ::g::expense* parentInstance);
};
// }

} // ::g
