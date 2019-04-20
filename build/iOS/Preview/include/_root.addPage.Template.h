// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/addPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct addPage;}
namespace g{struct addPage__Template;}

namespace g{

// public partial sealed class addPage.Template :6
// {
::g::Uno::UX::Template_type* addPage__Template_typeof();
void addPage__Template__ctor_1_fn(addPage__Template* __this, ::g::addPage* parent, ::g::addPage* parentInstance);
void addPage__Template__New1_fn(addPage__Template* __this, uObject** __retval);
void addPage__Template__New2_fn(::g::addPage* parent, ::g::addPage* parentInstance, addPage__Template** __retval);

struct addPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::addPage*> __parent1;
    uWeak< ::g::addPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> selectvalue_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Value_inst1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return addPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return addPage__Template_typeof()->Init(), __selector1_; }

    void ctor_1(::g::addPage* parent, ::g::addPage* parentInstance);
    static addPage__Template* New2(::g::addPage* parent, ::g::addPage* parentInstance);
};
// }

} // ::g
