// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class accountBook_FuseControlsTextControl_Value_Property :25
// {
static void accountBook_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(accountBook_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* accountBook_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(accountBook_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("accountBook_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = accountBook_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))accountBook_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))accountBook_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))accountBook_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))accountBook_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public accountBook_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :28
void accountBook_FuseControlsTextControl_Value_Property__ctor_3_fn(accountBook_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :30
void accountBook_FuseControlsTextControl_Value_Property__Get1_fn(accountBook_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("accountBook_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public accountBook_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :28
void accountBook_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, accountBook_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = accountBook_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :29
void accountBook_FuseControlsTextControl_Value_Property__get_Object_fn(accountBook_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :31
void accountBook_FuseControlsTextControl_Value_Property__Set1_fn(accountBook_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("accountBook_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :32
void accountBook_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(accountBook_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public accountBook_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :28
void accountBook_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public accountBook_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :28
accountBook_FuseControlsTextControl_Value_Property* accountBook_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    accountBook_FuseControlsTextControl_Value_Property* obj1 = (accountBook_FuseControlsTextControl_Value_Property*)uNew(accountBook_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
