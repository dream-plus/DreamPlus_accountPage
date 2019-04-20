// This file was generated based on /Users/kbs/development/accountBook/build/iOS/Preview/cache/ux15/addPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.accountBook_FuseControlsTextControl_Value_Property.h>
#include <_root.accountBook_FuseTriggersActionsSetstring_Value_Property.h>
#include <_root.addPage.h>
#include <_root.addPage.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataFunction.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[5];

namespace g{

// public partial sealed class addPage.Template1 :66
// {
// static Template1() :79
static void addPage__Template1__cctor__fn(uType* __type)
{
    addPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
}

static void addPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("monthInit");
    ::STRINGS[2] = uString::Const("choicemonth");
    ::STRINGS[3] = uString::Const("Pages/account/addPage.ux");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::addPage_typeof(), offsetof(addPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::addPage_typeof(), offsetof(addPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage__Template1, selectMonth_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(addPage__Template1, __self_Value_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(addPage__Template1, temp_eb12), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&addPage__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)addPage__Template1__New2_fn, 0, true, type, 2, ::g::addPage_typeof(), ::g::addPage_typeof()));
}

::g::Uno::UX::Template_type* addPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(addPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("addPage.Template1", options);
    type->fp_build_ = addPage__Template1_build;
    type->fp_cctor_ = addPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))addPage__Template1__New1_fn;
    return type;
}

// public Template1(addPage parent, addPage parentInstance) :70
void addPage__Template1__ctor_1_fn(addPage__Template1* __this, ::g::addPage* parent, ::g::addPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :82
void addPage__Template1__New1_fn(addPage__Template1* __this, uObject** __retval)
{
    uStackFrame __("addPage.Template1", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->selectMonth_Value_inst = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(uPtr(__this->__parent1)->selectMonth, addPage__Template1::__selector0_);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], __this->selectMonth_Value_inst);
    __this->temp_Value_inst = ::g::accountBook_FuseTriggersActionsSetstring_Value_Property::New1(temp, addPage__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"monthInit"*/]);
    __this->__self_Value_inst1 = ::g::accountBook_FuseControlsTextControl_Value_Property::New1(__self1, addPage__Template1::__selector0_);
    ::g::Fuse::Reactive::DataFunction* temp2 = ::g::Fuse::Reactive::DataFunction::New1();
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"choicemonth"*/]);
    ::g::Fuse::Gestures::Clicked* temp4 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp2, 3);
    __this->temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    __self1->FontSize(20.0f);
    __self1->TextAlignment(1);
    __self1->Color(::g::Uno::Float4__New2(0.654902f, 0.6627451f, 0.6627451f, 1.0f));
    __self1->Alignment(0);
    __self1->SourceLineNumber(74);
    __self1->SourceFileName(::STRINGS[3/*"Pages/accou...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb12)));
    temp4->SourceLineNumber(75);
    temp4->SourceFileName(::STRINGS[3/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp->SourceLineNumber(76);
    temp->SourceFileName(::STRINGS[3/*"Pages/accou...*/]);
    temp1->SourceLineNumber(76);
    temp1->SourceFileName(::STRINGS[3/*"Pages/accou...*/]);
    temp2->SourceLineNumber(74);
    temp2->SourceFileName(::STRINGS[3/*"Pages/accou...*/]);
    temp3->SourceLineNumber(74);
    temp3->SourceFileName(::STRINGS[3/*"Pages/accou...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb12);
    return *__retval = __self1, void();
}

// public Template1 New(addPage parent, addPage parentInstance) :70
void addPage__Template1__New2_fn(::g::addPage* parent, ::g::addPage* parentInstance, addPage__Template1** __retval)
{
    *__retval = addPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector addPage__Template1::__selector0_;

// public Template1(addPage parent, addPage parentInstance) [instance] :70
void addPage__Template1::ctor_1(::g::addPage* parent, ::g::addPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(addPage parent, addPage parentInstance) [static] :70
addPage__Template1* addPage__Template1::New2(::g::addPage* parent, ::g::addPage* parentInstance)
{
    addPage__Template1* obj1 = (addPage__Template1*)uNew(addPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
