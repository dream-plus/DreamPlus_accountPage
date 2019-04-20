// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseElementsElement_DockPanelDock_Property.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Elements.Element.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class accountBook_FuseElementsElement_DockPanelDock_Property :17
// {
static void accountBook_FuseElementsElement_DockPanelDock_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Layouts::Dock_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Elements.Element*/], offsetof(accountBook_FuseElementsElement_DockPanelDock_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* accountBook_FuseElementsElement_DockPanelDock_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(accountBook_FuseElementsElement_DockPanelDock_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("accountBook_FuseElementsElement_DockPanelDock_Property", options);
    type->fp_build_ = accountBook_FuseElementsElement_DockPanelDock_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))accountBook_FuseElementsElement_DockPanelDock_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))accountBook_FuseElementsElement_DockPanelDock_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))accountBook_FuseElementsElement_DockPanelDock_Property__Set1_fn;
    return type;
}

// public accountBook_FuseElementsElement_DockPanelDock_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :20
void accountBook_FuseElementsElement_DockPanelDock_Property__ctor_3_fn(accountBook_FuseElementsElement_DockPanelDock_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Layouts.Dock Get(Uno.UX.PropertyObject obj) :22
void accountBook_FuseElementsElement_DockPanelDock_Property__Get1_fn(accountBook_FuseElementsElement_DockPanelDock_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval)
{
    uStackFrame __("accountBook_FuseElementsElement_DockPanelDock_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = ::g::Fuse::Controls::DockPanel::GetDock(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/])), void();
}

// public accountBook_FuseElementsElement_DockPanelDock_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :20
void accountBook_FuseElementsElement_DockPanelDock_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, accountBook_FuseElementsElement_DockPanelDock_Property** __retval)
{
    *__retval = accountBook_FuseElementsElement_DockPanelDock_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :21
void accountBook_FuseElementsElement_DockPanelDock_Property__get_Object_fn(accountBook_FuseElementsElement_DockPanelDock_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Layouts.Dock v, Uno.UX.IPropertyListener origin) :23
void accountBook_FuseElementsElement_DockPanelDock_Property__Set1_fn(accountBook_FuseElementsElement_DockPanelDock_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin)
{
    uStackFrame __("accountBook_FuseElementsElement_DockPanelDock_Property", "Set(Uno.UX.PropertyObject,Fuse.Layouts.Dock,Uno.UX.IPropertyListener)");
    int32_t v_ = *v;
    ::g::Fuse::Controls::DockPanel::SetDock(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[0/*Fuse.Elements.Element*/]), v_);
}

// public accountBook_FuseElementsElement_DockPanelDock_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :20
void accountBook_FuseElementsElement_DockPanelDock_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public accountBook_FuseElementsElement_DockPanelDock_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :20
accountBook_FuseElementsElement_DockPanelDock_Property* accountBook_FuseElementsElement_DockPanelDock_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    accountBook_FuseElementsElement_DockPanelDock_Property* obj1 = (accountBook_FuseElementsElement_DockPanelDock_Property*)uNew(accountBook_FuseElementsElement_DockPanelDock_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
