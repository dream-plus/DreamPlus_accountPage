// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Set;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct accountBook_FuseTriggersActionsSetstring_Value_Property;}

namespace g{

// internal sealed class accountBook_FuseTriggersActionsSetstring_Value_Property :50
// {
::g::Uno::UX::Property1_type* accountBook_FuseTriggersActionsSetstring_Value_Property_typeof();
void accountBook_FuseTriggersActionsSetstring_Value_Property__ctor_3_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name);
void accountBook_FuseTriggersActionsSetstring_Value_Property__Get1_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void accountBook_FuseTriggersActionsSetstring_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, accountBook_FuseTriggersActionsSetstring_Value_Property** __retval);
void accountBook_FuseTriggersActionsSetstring_Value_Property__get_Object_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void accountBook_FuseTriggersActionsSetstring_Value_Property__Set1_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct accountBook_FuseTriggersActionsSetstring_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Actions::Set*> _obj;

    void ctor_3(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
    static accountBook_FuseTriggersActionsSetstring_Value_Property* New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
