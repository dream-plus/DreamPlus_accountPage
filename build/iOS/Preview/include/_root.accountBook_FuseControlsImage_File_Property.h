// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct accountBook_FuseControlsImage_File_Property;}

namespace g{

// internal sealed class accountBook_FuseControlsImage_File_Property :67
// {
::g::Uno::UX::Property1_type* accountBook_FuseControlsImage_File_Property_typeof();
void accountBook_FuseControlsImage_File_Property__ctor_3_fn(accountBook_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void accountBook_FuseControlsImage_File_Property__Get1_fn(accountBook_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void accountBook_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, accountBook_FuseControlsImage_File_Property** __retval);
void accountBook_FuseControlsImage_File_Property__get_Object_fn(accountBook_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void accountBook_FuseControlsImage_File_Property__Set1_fn(accountBook_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);

struct accountBook_FuseControlsImage_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static accountBook_FuseControlsImage_File_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
