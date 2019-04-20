// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.TextAlignment.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct accountBook_FuseControlsTextControl_TextAlignment_Property;}

namespace g{

// internal sealed class accountBook_FuseControlsTextControl_TextAlignment_Property :34
// {
::g::Uno::UX::Property1_type* accountBook_FuseControlsTextControl_TextAlignment_Property_typeof();
void accountBook_FuseControlsTextControl_TextAlignment_Property__ctor_3_fn(accountBook_FuseControlsTextControl_TextAlignment_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void accountBook_FuseControlsTextControl_TextAlignment_Property__Get1_fn(accountBook_FuseControlsTextControl_TextAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval);
void accountBook_FuseControlsTextControl_TextAlignment_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, accountBook_FuseControlsTextControl_TextAlignment_Property** __retval);
void accountBook_FuseControlsTextControl_TextAlignment_Property__get_Object_fn(accountBook_FuseControlsTextControl_TextAlignment_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void accountBook_FuseControlsTextControl_TextAlignment_Property__Set1_fn(accountBook_FuseControlsTextControl_TextAlignment_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin);

struct accountBook_FuseControlsTextControl_TextAlignment_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static accountBook_FuseControlsTextControl_TextAlignment_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
