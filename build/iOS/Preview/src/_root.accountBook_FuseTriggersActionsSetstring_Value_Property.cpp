// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/accountBook.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseTriggersActionsSetstring_Value_Property.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class accountBook_FuseTriggersActionsSetstring_Value_Property :50
// {
static void accountBook_FuseTriggersActionsSetstring_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], offsetof(accountBook_FuseTriggersActionsSetstring_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* accountBook_FuseTriggersActionsSetstring_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(accountBook_FuseTriggersActionsSetstring_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("accountBook_FuseTriggersActionsSetstring_Value_Property", options);
    type->fp_build_ = accountBook_FuseTriggersActionsSetstring_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))accountBook_FuseTriggersActionsSetstring_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))accountBook_FuseTriggersActionsSetstring_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))accountBook_FuseTriggersActionsSetstring_Value_Property__Set1_fn;
    return type;
}

// public accountBook_FuseTriggersActionsSetstring_Value_Property(Fuse.Triggers.Actions.Set<string> obj, Uno.UX.Selector name) :53
void accountBook_FuseTriggersActionsSetstring_Value_Property__ctor_3_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :55
void accountBook_FuseTriggersActionsSetstring_Value_Property__Get1_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("accountBook_FuseTriggersActionsSetstring_Value_Property", "Get(Uno.UX.PropertyObject)");
    uString* ret2;
    return *__retval = (::g::Fuse::Triggers::Actions::Set__get_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::Actions::Set*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/])), &ret2), ret2), void();
}

// public accountBook_FuseTriggersActionsSetstring_Value_Property New(Fuse.Triggers.Actions.Set<string> obj, Uno.UX.Selector name) :53
void accountBook_FuseTriggersActionsSetstring_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, accountBook_FuseTriggersActionsSetstring_Value_Property** __retval)
{
    *__retval = accountBook_FuseTriggersActionsSetstring_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :54
void accountBook_FuseTriggersActionsSetstring_Value_Property__get_Object_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :56
void accountBook_FuseTriggersActionsSetstring_Value_Property__Set1_fn(accountBook_FuseTriggersActionsSetstring_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("accountBook_FuseTriggersActionsSetstring_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::Actions::Set*>(obj, ::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/])), v);
}

// public accountBook_FuseTriggersActionsSetstring_Value_Property(Fuse.Triggers.Actions.Set<string> obj, Uno.UX.Selector name) [instance] :53
void accountBook_FuseTriggersActionsSetstring_Value_Property::ctor_3(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public accountBook_FuseTriggersActionsSetstring_Value_Property New(Fuse.Triggers.Actions.Set<string> obj, Uno.UX.Selector name) [static] :53
accountBook_FuseTriggersActionsSetstring_Value_Property* accountBook_FuseTriggersActionsSetstring_Value_Property::New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name)
{
    accountBook_FuseTriggersActionsSetstring_Value_Property* obj1 = (accountBook_FuseTriggersActionsSetstring_Value_Property*)uNew(accountBook_FuseTriggersActionsSetstring_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
